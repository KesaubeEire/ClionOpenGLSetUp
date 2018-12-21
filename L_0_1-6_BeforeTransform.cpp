
//region 全中文注释第一次
//// System Headers
//#include <glad/glad.h>
//#include <GLFW/glfw3.h>
//
//// Standard Headers
//#include <cstdio>
//#include <cstdlib>
//#include <iostream>
//#include <stack>
//#include <queue>
//#include <string>
//
////region 第一次玩的:已作废
//
////void framebuffer_size_callback(GLFWwindow *window, int width, int height);//回调函数原型声明
////void processInput(GLFWwindow *window);
////
////// settings
////const unsigned int SCR_WIDTH = 800;
////const unsigned int SCR_HEIGHT = 600;
////
////int main(int argc, char *argv[])
////{
////
////    //初始化GLFW
////    glfwInit();
////    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
////    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
////    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
////#ifdef __APPLE__
////    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // uncomment this statement to fix compilation on OS X
////#endif
////    //创建一个窗口对象
////    GLFWwindow *window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "FirstGL", NULL, NULL);
////    if (window == NULL)
////    {
////        std::cout << "Failed to create GLFW window" << std::endl;
////        glfwTerminate();
////        return -1;
////    }
////    //通知GLFW将我们窗口的上下文设置为当前线程的主上下文
////    glfwMakeContextCurrent(window);
////    //对窗口注册一个回调函数,每当窗口改变大小，GLFW会调用这个函数并填充相应的参数供你处理
////    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
////    //初始化GLAD用来管理OpenGL的函数指针
////    if (!gladLoadGLLoader((GLADloadproc) glfwGetProcAddress))
////    {
////        std::cout << "Failed to initialize GLAD" << std::endl;
////        return -1;
////    }
////
////    //渲染循环
////    while (!glfwWindowShouldClose(window))
////    {
////        // 输入
////        processInput(window);
////
////        // 渲染指令
////        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
////        glClear(GL_COLOR_BUFFER_BIT);
////
////        // 检查并调用事件，交换缓冲
////        glfwSwapBuffers(window);//检查触发事件
////        glfwPollEvents();    //交换颜色缓冲
////    }
////
////    //释放/删除之前的分配的所有资源
////    glfwTerminate();
////    return EXIT_SUCCESS;
////}
////
//////输入控制，检查用户是否按下了返回键(Esc)
////void processInput(GLFWwindow *window)
////{
////    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
////        glfwSetWindowShouldClose(window, true);
////}
////
////// 当用户改变窗口的大小的时候，视口也应该被调整
////void framebuffer_size_callback(GLFWwindow *window, int width, int height)
////{
////    // 注意：对于视网膜(Retina)显示屏，width和height都会明显比原输入值更高一点。
////    glViewport(0, 0, width, height);
////}
////endregion
//
////region 常量区
//
//const unsigned int SCR_WIDTH = 800;
//const unsigned int SCR_HEIGHT = 600;
//
//// Shader:顶点着色器
//const char *vertexShaderSource =
//        "#version 330 core\n"
//        "layout (location = 0) in vec3 aPos;\n"
//        "void main()\n"
//        "{\n"
//        "   gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);\n"
//        "}\0";
//
//// Shader:片元着色器
//const char *fragmentShaderSource =
//        "#version 330 core\n"
//        "out vec4 FragColor;\n"
//        "void main()\n"
//        "{\n"
//        "   FragColor = vec4(0.2f, 0.5f, 0.5f, 1.0f);\n"
//        "}\n\0";
//
////endregion
//
////region 功能函数声明
//
//// 窗口改变回调函数
//void framebuffer_size_callback(GLFWwindow *window, int width, int height);
//
//// 输入检测
//void processInput(GLFWwindow *window);
//
//// 渲染函数
//void render_func();
////endregion
//
//int main()
//{
//    // 初始化glfw
//    glfwInit();
//
//    // ✅定义宏观参数:
//    //    OpenGL主版本号 3.x
//    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
//    //    OpenGL副版本号 x.3 -> 合起来是3.3 -> 安装的是4.1就这么着吧
//    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
//    //    核心模式(Core-profile)
//    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
//    //    Mac专用代码
//#ifdef __APPLE__
//    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
//#endif
//
//
//    // ✅创建窗口对象
//    //    窗口 width height title
//    GLFWwindow *window = glfwCreateWindow
//            (SCR_WIDTH, SCR_HEIGHT, "LearnOpenGL", nullptr, nullptr);
//    if (window == nullptr)
//    {
//        std::cout << "Failed to create GLFW window" << std::endl;
//        glfwTerminate();
//        return -1;
//    }
//    glfwMakeContextCurrent(window);
//
//    // ✅初始化GLAD
//    //    在之前的教程中已经提到过，
//    //    GLAD是用来管理OpenGL的函数指针的，
//    //    所以在调用任何OpenGL的函数之前我们需要初始化GLAD。
//    if (!gladLoadGLLoader((GLADloadproc) glfwGetProcAddress))
//    {
//        std::cout << "Failed to initialize GLAD" << std::endl;
//        return -1;
//    }
//
//    // ✅视口配置
//    //    glViewport函数前两个参数控制窗口左下角的位置。
//    //    第三个和第四个参数控制渲染窗口的宽度和高度（像素）。
//    glViewport(0, 0, 800, 600);
//    //    也可以将视口的维度设置为比GLFW的维度小，
//    //    这样子之后所有的OpenGL渲染将会在一个更小的窗口中显示，
//    //    这样子的话我们也可以将一些其它元素显示在OpenGL视口之外。
//
//    // ✅注册回调函数
//    //    注册窗口改变回调函数
//    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
//
//
//    // ✅顶点输入
//    // 一些必须记住的东西
//    //  VAO  顶点数组对象：Vertex  Array  Object
//    //  VBO  顶点缓冲对象：Vertex  Buffer Object
//    //  EBO  索引缓冲对象：Element Buffer Object
//
//    //    .1.VAO
//    float vertices[] = {
//            // 第一个三角形
//            0.5f, 0.5f, 0.0f,   // 右上角
//            0.5f, -0.5f, 0.0f,  // 右下角
//            -0.5f, 0.5f, 0.0f,  // 左上角
//            // 第二个三角形
//            0.5f, -0.5f, 0.0f,  // 右下角
//            -0.5f, -0.5f, 0.0f, // 左下角
//            -0.5f, 0.5f, 0.0f   // 左上角
//    };
//
//    //    .2.VBO
//    // 给个int作为VBO
//    unsigned int VBO;
//    // 生成一个缓冲给上面的VBO
//    glGenBuffers(1, &VBO);
//    // 定义这个缓冲是 -> 顶点缓冲对象
//    glBindBuffer(GL_ARRAY_BUFFER, VBO);
//    // 把上面的VAO赋给这个VBO 缓冲类型 - 大小 - 数据动静类型
//    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//
//    // ✅着色器编译:
//    // .1.创建顶点着色器
//    unsigned int vertexShader;
//    vertexShader = glCreateShader(GL_VERTEX_SHADER);
//    // 附加着色器原码 并 编译
//    glShaderSource(vertexShader, 1, &vertexShaderSource, nullptr);
//    glCompileShader(vertexShader);
//
//    // .2.创建片段着色器
//    unsigned int fragmentShader;
//    fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
//    // 附加着色器原码 并 编译
//    glShaderSource(fragmentShader, 1, &fragmentShaderSource, nullptr);
//    glCompileShader(fragmentShader);
//
//    //    .3.VAO
//    unsigned int VAO;
//    glGenVertexArrays(1, &VAO);
//    // 初始化代码（只运行一次 (除非你的物体频繁改变)） :: ..
//    // .1. 绑定VAO
//    glBindVertexArray(VAO);
//    // .2. 把顶点数组复制到缓冲中供OpenGL使用
//    glBindBuffer(GL_ARRAY_BUFFER, VBO);
//    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//    // .3. 设置顶点属性指针
//    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void *) 0);
//    glEnableVertexAttribArray(0);
//
//
//    // ✅着色器编译错误检测
//    // 定义检测 -> vertexShader 和 fragmentShader 在上面
//    int success; // -> 这个东西之后很多检测会用到,通用的检测
//    char infoLog[512];
//    glGetShaderiv(vertexShader, GL_COMPILE_STATUS, &success);
//    // 执行检测
//    if (!success)
//    {
//        glGetShaderInfoLog(vertexShader, 512, nullptr, infoLog);
//        std::cout
//                << "ERROR::SHADER::VERTEX::COMPILATION_FAILED\n"
//                << infoLog
//                << std::endl;
//    }
//
//
//    // ✅创建着色器程序
//    // 创建着色器程序对象
//    unsigned int shaderProgram;
//    shaderProgram = glCreateProgram();
//    // 链接着色器对象
//    glAttachShader(shaderProgram, vertexShader);
//    glAttachShader(shaderProgram, fragmentShader);
//    glLinkProgram(shaderProgram);
//
//    // ✅着色器程序建立错误检测
//    glGetProgramiv(shaderProgram, GL_LINK_STATUS, &success);
//    if (!success)
//    {
//        glGetProgramInfoLog(shaderProgram, 512, nullptr, infoLog);
//        std::cout
//                << "ERROR::SHADER::VERTEX::COMPILATION_FAILED\n"
//                << infoLog
//                << std::endl;
//    }
//
//    // 取消注释可以画线框图 : 应该是强制改变渲染模式为线框
//    //glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
//
//    // ✅渲染循环
//    //    glfwWindowShouldClose
//    //    函数在我们每次循环的开始前检查一次GLFW是否被要求退出，
//    //    如果是的话该函数返回true然后渲染循环便结束了，
//    //    之后为我们就可以关闭应用程序了
//    while (!glfwWindowShouldClose(window))
//    {
//        // 输入检查
//        processInput(window);
//
//        //==========渲染指令==========//
//        // 定义清空颜色值
//        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
//        // 清空颜色
//        glClear(GL_COLOR_BUFFER_BIT);
//
//
//// ✅渲染着色器
//        glUseProgram(shaderProgram);
//
//        // seeing as we only have a single VAO
//        // there's no need to bind it every time,
//        // but we'll do so to keep things a bit more organized
//        glBindVertexArray(VAO);
//
//        glDrawArrays(GL_TRIANGLES, 0, 3);
//        //==========渲染指令==========//
//
//        // 交换颜色缓冲
//        glfwSwapBuffers(window);
//        // 检查触发事件
//        glfwPollEvents();
//    }
//
//    // ✅删除着色器
//    glDeleteShader(vertexShader);
//    glDeleteShader(fragmentShader);
//
//    // ✅正确释放/删除之前的分配的所有资源
//    glfwTerminate();
//    return 0;
//}
//
//
////region 变量区
//
//
//
//
//
////endregion
//
//
////region 功能函数存储
//
//void framebuffer_size_callback(GLFWwindow *window, int width, int height)
//{
//    glViewport(0, 0, width, height);
//}
//
//void processInput(GLFWwindow *window)
//{
//    // 按下ESC -> 退出窗口
//    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
//        // set -> WindowShouldClose
//        // 可见 WindowShouldClose 相当于一个有set\get的 bool 值看现在的状态
//        glfwSetWindowShouldClose(window, true);
//}
//
//
////endregion

//endregion

//region 半中文注释第二次 -> 顶点上色插值

//#include <glad/glad.h>
//#include <GLFW/glfw3.h>
//
//#include <iostream>
//
//void framebuffer_size_callback(GLFWwindow *window, int width, int height);
//
//void processInput(GLFWwindow *window);
//
//// settings
//const unsigned int SCR_WIDTH = 800;
//const unsigned int SCR_HEIGHT = 600;
//
//const char *vertexShaderSource =
//        "#version 330 core\n"
//        "layout (location = 0) in vec3 vertex_position;\n"
//        "layout (location = 1) in vec3 vertex_colour;\n"
//
//        "out vec3 colour;\n"
//
//        "void main()\n"
//        "{\n"
//        "colour = vertex_colour;\n "
//        "gl_Position = vec4(vertex_position.x, vertex_position.y, vertex_position.z, 1.0);\n"
//        "}\0";
//const char *fragmentShaderSource =
//        "#version 330 core\n"
//        "in vec3 colour;\n"
//        "out vec4 FragColor;\n"
//        "void main()\n"
//        "{\n"
//        "   FragColor = vec4(colour, 1.0f);\n"
//        "}\n\0";
//
//int main()
//{
//    // glfw: initialize and configure
//    // ------------------------------
//    glfwInit();
//    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
//    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
//    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
//
//#ifdef __APPLE__
//    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // uncomment this statement to fix compilation on OS X
//#endif
//
//    // glfw window creation
//    // --------------------
//    GLFWwindow *window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "LearnOpenGL", nullptr, nullptr);
//    if (window == nullptr)
//    {
//        std::cout << "Failed to create GLFW window" << std::endl;
//        glfwTerminate();
//        return -1;
//    }
//    glfwMakeContextCurrent(window);
//    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
//
//    // glad: load all OpenGL function pointers
//    // ---------------------------------------
//    if (!gladLoadGLLoader((GLADloadproc) glfwGetProcAddress))
//    {
//        std::cout << "Failed to initialize GLAD" << std::endl;
//        return -1;
//    }
//
//
//    // build and compile our shader program
//    // ------------------------------------
//    // vertex shader
//    GLuint vertexShader = glCreateShader(GL_VERTEX_SHADER);
//    glShaderSource(vertexShader, 1, &vertexShaderSource, nullptr);
//    glCompileShader(vertexShader);
//
//
//region check for shader compile errors
//    int success;
//    char infoLog[512];
//    glGetShaderiv(vertexShader, GL_COMPILE_STATUS, &success);
//    if (!success)
//    {
//        glGetShaderInfoLog(vertexShader, 512, nullptr, infoLog);
//        std::cout << "ERROR::SHADER::VERTEX::COMPILATION_FAILED\n" << infoLog << std::endl;
//    }
//endregion
//
//    // fragment shader
//    GLuint fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
//    glShaderSource(fragmentShader, 1, &fragmentShaderSource, nullptr);
//    glCompileShader(fragmentShader);
//
//region check for shader compile errors
//    glGetShaderiv(fragmentShader, GL_COMPILE_STATUS, &success);
//    if (!success)
//    {
//        glGetShaderInfoLog(fragmentShader, 512, nullptr, infoLog);
//        std::cout << "ERROR::SHADER::FRAGMENT::COMPILATION_FAILED\n" << infoLog << std::endl;
//    }
//endregion
//
//    // link shaders
//    GLuint shaderProgram = glCreateProgram();
//    glAttachShader(shaderProgram, vertexShader);
//    glAttachShader(shaderProgram, fragmentShader);
//
//    // insert location binding code here
//    // 好像有没有都行
//    glBindAttribLocation(shaderProgram, 0, "vertex_position");
//    glBindAttribLocation(shaderProgram, 1, "vertex_colour");
//
//    // Link Shader程序
//    glLinkProgram(shaderProgram);
//
//region check for linking errors
//    glGetProgramiv(shaderProgram, GL_LINK_STATUS, &success);
//    if (!success)
//    {
//        glGetProgramInfoLog(shaderProgram, 512, nullptr, infoLog);
//        std::cout << "ERROR::SHADER::PROGRAM::LINKING_FAILED\n" << infoLog << std::endl;
//    }
//endregion
//
//    glDeleteShader(vertexShader);
//    glDeleteShader(fragmentShader);
//
//    // set up vertex data (and buffer(s)) and configure vertex attributes
//    // ------------------------------------------------------------------
//    float vertices[] = {
//            -0.5f, -0.5f, 0.0f, // left
//            0.5f, -0.5f, 0.0f, // right
//            0.0f, 0.5f, 0.0f  // top
//    };
//
//
//    float colours[] = {
//            1.0f, 0.0f, 0.0f,
//            0.0f, 1.0f, 0.0f,
//            0.0f, 0.0f, 1.0f
//    };
//
//    unsigned int VAO;
//    glGenVertexArrays(1, &VAO);
//    glBindVertexArray(VAO);
//
//    unsigned int VBO_points;
//    glGenBuffers(1, &VBO_points);
//    glBindBuffer(GL_ARRAY_BUFFER, VBO_points);
//    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, nullptr);
//
//    unsigned int VBO_colors;
//    glGenBuffers(1, &VBO_colors);
//    glBindBuffer(GL_ARRAY_BUFFER, VBO_colors);
//    glBufferData(GL_ARRAY_BUFFER, sizeof(colours), colours, GL_STATIC_DRAW);
//    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 0, nullptr);
//
//    glEnableVertexAttribArray(0);
//    glEnableVertexAttribArray(1);
//
//    // note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
//    glBindBuffer(GL_ARRAY_BUFFER, 0);
//    glBindBuffer(GL_ARRAY_BUFFER, 1);//不确定需不需要
//
//    // You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens. Modifying other
//    // VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs) when it's not directly necessary.
//    glBindVertexArray(0);
//    glBindVertexArray(1);//不确定需不需要
//
//
//    // uncomment this call to draw in wireframe polygons.
//    // 解除注释之后会强制变成线框图
//    // 第一个参数表示我们打算将其应用到所有的三角形的正面和背面，第二个参数告诉我们用线来绘制。
//    // 直到我们用glPolygonMode(GL_FRONT_AND_BACK, GL_FILL)将其设置回默认模式
//
////     glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
//
//    // 最后我没有看懂的部分 - 大概是讲剔除 Cull - 别轻易用
////    glEnable(GL_CULL_FACE); // cull face
////    glCullFace(GL_BACK); // cull back face
////    glFrontFace(GL_CW); // GL_CCW for counter clock-wise
//
//    // render loop
//    // -----------
//    while (!glfwWindowShouldClose(window))
//    {
//        // input
//        // -----
//        processInput(window);
//
//        // render
//        // ------
//        // 清空背景
//        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
//        glClear(GL_COLOR_BUFFER_BIT);
//
//        // draw our first triangle
//        glUseProgram(shaderProgram);
//
//        // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized
//        glBindVertexArray(VAO);
//
//        // 没有EBO -> 绘制三角形
//        glDrawArrays(GL_TRIANGLES, 0, 3);
//
//        // glfw: swap buffers and poll IO events (keys pressed/released, mouse moved etc.)
//        // -------------------------------------------------------------------------------
//        glfwSwapBuffers(window);
//        glfwPollEvents();
//    }
//
//    // optional: de-allocate all resources once they've outlived their purpose:
//    // ------------------------------------------------------------------------
//    glDeleteVertexArrays(1, &VAO);
////    glDeleteBuffers(1, &VBO_points);
////    glDeleteBuffers(1, &VBO_colors);
//
//    // glfw: terminate, clearing all previously allocated GLFW resources.
//    // ------------------------------------------------------------------
//    glfwTerminate();
//    return 0;
//}
//
//// process all input: query GLFW whether relevant keys are pressed/released this frame and react accordingly
//// ---------------------------------------------------------------------------------------------------------
//void processInput(GLFWwindow *window)
//{
//    // 这里是原生的按键 -> 贼简单
//    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
//        glfwSetWindowShouldClose(window, true);
//}
//
//// glfw: whenever the window size changed (by OS or user resize) this callback function executes
//// ---------------------------------------------------------------------------------------------
//void framebuffer_size_callback(GLFWwindow *window, int width, int height)
//{
//    // make sure the viewport matches the new window dimensions; note that width and
//    // height will be significantly larger than specified on retina displays.
//    glViewport(0, 0, width, height);
//}

//endregion

//region 半中文注释第三次 -> 拼矩形
//#include <glad/glad.h>
//#include <GLFW/glfw3.h>
//
//#include <iostream>
//
//void framebuffer_size_callback(GLFWwindow *window, int width, int height);
//
//void processInput(GLFWwindow *window);
//
//// settings
//const unsigned int SCR_WIDTH = 800;
//const unsigned int SCR_HEIGHT = 600;
//
//const char *vertexShaderSource =
//        "#version 330 core\n"
//        "layout (location = 0) in vec3 aPos;\n"
//        "void main()\n"
//        "{\n"
//        "   gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);\n"
//        "}\0";
//const char *fragmentShaderSource =
//        "#version 330 core\n"
//        "out vec4 FragColor;\n"
//        "void main()\n"
//        "{\n"
//        "   FragColor = vec4(1.0f, 0.5f, 0.2f, 1.0f);\n"
//        "}\n\0";
//const char *fragmentShaderSource2 =
//        "#version 330 core\n"
//        "out vec4 FragColor;\n"
//        "void main()\n"
//        "{\n"
//        "   FragColor = vec4(0, 0.5f, 0.2f, 1.0f);\n"
//        "}\n\0";
//
//int main()
//{
//    // glfw: initialize and configure
//    // ------------------------------
//    glfwInit();
//    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
//    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
//    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
//
//#ifdef __APPLE__
//    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // uncomment this statement to fix compilation on OS X
//#endif
//
//    // glfw window creation
//    // --------------------
//    GLFWwindow *window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "LearnOpenGL", nullptr, nullptr);
//    if (window == nullptr)
//    {
//        std::cout << "Failed to create GLFW window" << std::endl;
//        glfwTerminate();
//        return -1;
//    }
//    glfwMakeContextCurrent(window);
//    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
//
//    // glad: load all OpenGL function pointers
//    // ---------------------------------------
//    if (!gladLoadGLLoader((GLADloadproc) glfwGetProcAddress))
//    {
//        std::cout << "Failed to initialize GLAD" << std::endl;
//        return -1;
//    }
//
//
//    // build and compile our shader program
//    // ------------------------------------
//    // vertex shader
//    GLuint vertexShader = glCreateShader(GL_VERTEX_SHADER);
//    glShaderSource(vertexShader, 1, &vertexShaderSource, nullptr);
//    glCompileShader(vertexShader);
//
//    // ✅check for shader compile errors
//    int success;
//    char infoLog[512];
//    glGetShaderiv(vertexShader, GL_COMPILE_STATUS, &success);
//    if (!success)
//    {
//        glGetShaderInfoLog(vertexShader, 512, nullptr, infoLog);
//        std::cout << "ERROR::SHADER::VERTEX::COMPILATION_FAILED\n" << infoLog << std::endl;
//    }
//    // ✅check for shader compile errors
//
//    // fragment shader
//    GLuint fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
//    glShaderSource(fragmentShader, 1, &fragmentShaderSource, nullptr);
//    glCompileShader(fragmentShader);
//
//    // ✅check for shader compile errors
//    glGetShaderiv(fragmentShader, GL_COMPILE_STATUS, &success);
//    if (!success)
//    {
//        glGetShaderInfoLog(fragmentShader, 512, nullptr, infoLog);
//        std::cout << "ERROR::SHADER::FRAGMENT::COMPILATION_FAILED\n" << infoLog << std::endl;
//    }
//    // ✅check for shader compile errors
//
//    // link shaders
//    GLuint shaderProgram = glCreateProgram();
//    glAttachShader(shaderProgram, vertexShader);
//    glAttachShader(shaderProgram, fragmentShader);
//    glLinkProgram(shaderProgram);
//
//    // ✅check for linking errors
//    glGetProgramiv(shaderProgram, GL_LINK_STATUS, &success);
//    if (!success)
//    {
//        glGetProgramInfoLog(shaderProgram, 512, nullptr, infoLog);
//        std::cout << "ERROR::SHADER::PROGRAM::LINKING_FAILED\n" << infoLog << std::endl;
//    }
//    // ✅check for linking errors
//
//
//
//    // build and compile our shader program
//    // ------------------------------------
//    // vertex shader
//    vertexShader = glCreateShader(GL_VERTEX_SHADER);
//    glShaderSource(vertexShader, 1, &vertexShaderSource, nullptr);
//    glCompileShader(vertexShader);
//
//    // ✅check for shader compile errors
//    glGetShaderiv(vertexShader, GL_COMPILE_STATUS, &success);
//    if (!success)
//    {
//        glGetShaderInfoLog(vertexShader, 512, nullptr, infoLog);
//        std::cout << "ERROR::SHADER::VERTEX::COMPILATION_FAILED\n" << infoLog << std::endl;
//    }
//    // ✅check for shader compile errors
//
//    // fragment shader
//    GLuint fragmentShader2 = glCreateShader(GL_FRAGMENT_SHADER);
//    glShaderSource(fragmentShader2, 1, &fragmentShaderSource2, nullptr);
//    glCompileShader(fragmentShader2);
//
//    // ✅check for shader compile errors
//    glGetShaderiv(fragmentShader2, GL_COMPILE_STATUS, &success);
//    if (!success)
//    {
//        glGetShaderInfoLog(fragmentShader2, 512, nullptr, infoLog);
//        std::cout << "ERROR::SHADER::FRAGMENT::COMPILATION_FAILED\n" << infoLog << std::endl;
//    }
//    // ✅check for shader compile errors
//
//    // link shaders
//    GLuint shaderProgram2 = glCreateProgram();
//    glAttachShader(shaderProgram2, vertexShader);
//    glAttachShader(shaderProgram2, fragmentShader2);
//    glLinkProgram(shaderProgram2);
//
//    // ✅check for linking errors
//    glGetProgramiv(shaderProgram2, GL_LINK_STATUS, &success);
//    if (!success)
//    {
//        glGetProgramInfoLog(shaderProgram2, 512, nullptr, infoLog);
//        std::cout << "ERROR::SHADER::PROGRAM::LINKING_FAILED\n" << infoLog << std::endl;
//    }
//    // ✅check for linking errors
//
//    glDeleteShader(vertexShader);
//    glDeleteShader(fragmentShader);
//    glDeleteShader(fragmentShader2);
//
//
//
//    // set up vertex data (and buffer(s)) and configure vertex attributes
//    // ------------------------------------------------------------------
//    float firstTriangle[] = {
//            -0.9f, -0.5f, 0.0f,  // left
//            -0.0f, -0.5f, 0.0f,  // right
//            -0.45f, 0.5f, 0.0f,  // top
//    };
//    float secondTriangle[] = {
//            0.0f, -0.5f, 0.0f,  // left
//            0.9f, -0.5f, 0.0f,  // right
//            0.45f, 0.5f, 0.0f   // top
//    };
//    unsigned int VBOs[2], VAOs[2];
//    glGenVertexArrays(2, VAOs); // we can also generate multiple VAOs or buffers at the same time
//    glGenBuffers(2, VBOs);
//    // first triangle setup
//    // --------------------
//    glBindVertexArray(VAOs[0]);
//    glBindBuffer(GL_ARRAY_BUFFER, VBOs[0]);
//    glBufferData(GL_ARRAY_BUFFER, sizeof(firstTriangle), firstTriangle, GL_STATIC_DRAW);
//    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float),
//                          (void *) 0);    // Vertex attributes stay the same
//    glEnableVertexAttribArray(0);
//    // glBindVertexArray(0); // no need to unbind at all as we directly bind a different VAO the next few lines
//    // second triangle setup
//    // ---------------------
//    glBindVertexArray(VAOs[1]);    // note that we bind to a different VAO now
//    glBindBuffer(GL_ARRAY_BUFFER, VBOs[1]);    // and a different VBO
//    glBufferData(GL_ARRAY_BUFFER, sizeof(secondTriangle), secondTriangle, GL_STATIC_DRAW);
//    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0,
//                          (void *) 0); // because the vertex data is tightly packed we can also specify 0 as the vertex attribute's stride to let OpenGL figure it out
//    glEnableVertexAttribArray(0);
//    // glBindVertexArray(0); // not really necessary as well, but beware of calls that could affect VAO
//
//
//    // uncomment this call to draw in wireframe polygons.
//    //glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
//
//    // render loop
//    // -----------
//    while (!glfwWindowShouldClose(window))
//    {
//        // input
//        // -----
//        processInput(window);
//
//        // render
//        // ------
//        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
//        glClear(GL_COLOR_BUFFER_BIT);
//
//        // draw our first triangle
//        glUseProgram(shaderProgram);
//        // draw first triangle using the data from the first VAO
//        glBindVertexArray(VAOs[0]);
//        glDrawArrays(GL_TRIANGLES, 0, 3);
//
//        glUseProgram(shaderProgram2);
//        // then we draw the second triangle using the data from the second VAO
//        glBindVertexArray(VAOs[1]);
//        glDrawArrays(GL_TRIANGLES, 0, 3);
//
//        // glfw: swap buffers and poll IO events (keys pressed/released, mouse moved etc.)
//        // -------------------------------------------------------------------------------
//        glfwSwapBuffers(window);
//        glfwPollEvents();
//    }
//
//    // optional: de-allocate all resources once they've outlived their purpose:
//    // ------------------------------------------------------------------------
//    glDeleteVertexArrays(2, VAOs);
//    glDeleteBuffers(2, VBOs);
//
//
//    // glfw: terminate, clearing all previously allocated GLFW resources.
//    // ------------------------------------------------------------------
//    glfwTerminate();
//
//
//    return 0;
//}
//
//// process all input: query GLFW whether relevant keys are pressed/released this frame and react accordingly
//// ---------------------------------------------------------------------------------------------------------
//void processInput(GLFWwindow *window)
//{
//    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
//        glfwSetWindowShouldClose(window, true);
//}
//
//// glfw: whenever the window size changed (by OS or user resize) this callback function executes
//// ---------------------------------------------------------------------------------------------
//void framebuffer_size_callback(GLFWwindow *window, int width, int height)
//{
//    // make sure the viewport matches the new window dimensions; note that width and
//    // height will be significantly larger than specified on retina displays.
//    glViewport(0, 0, width, height);
//}
//endregion

///////////以上是你好三角形///////////

///////////-以下是-着色器-///////////

//region Part1 简化版着色器 -> 可以移动啦
//// System Headers
//#include <glad/glad.h>
//#include <GLFW/glfw3.h>
//#include "Shader.h"
//#include "stb_image.h"
//
//// Standard Headers
//#include <cstdio>
//#include <cstdlib>
//#include <iostream>
//#include <stack>
//#include <queue>
//#include <string>
//
//
////region 常量区
//
//const unsigned int SCR_WIDTH = 800;
//const unsigned int SCR_HEIGHT = 600;
//
////endregion
//
////region 功能函数声明
//
//// 窗口改变回调函数
//void framebuffer_size_callback(GLFWwindow *window, int width, int height);
//
//// 输入检测
//void processInput(GLFWwindow *window, float &value, float &valueY);
//
////endregion
//
//int main()
//{
//    // 初始化glfw
//    glfwInit();
//
//    // ✅定义宏观参数:
//    //    OpenGL主版本号 3.x
//    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
//    //    OpenGL副版本号 x.3 -> 合起来是3.3 -> 安装的是4.1就这么着吧
//    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
//    //    核心模式(Core-profile)
//    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
//    //    Mac专用代码
//#ifdef __APPLE__
//    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
//#endif
//
//
//    // ✅创建窗口对象
//    //    窗口 width height title
//    GLFWwindow *window = glfwCreateWindow
//            (SCR_WIDTH, SCR_HEIGHT, "LearnOpenGL", nullptr, nullptr);
//    if (window == nullptr)
//    {
//        std::cout << "Failed to create GLFW window" << std::endl;
//        glfwTerminate();
//        return -1;
//    }
//    glfwMakeContextCurrent(window);
//
//    // ✅初始化GLAD
//    //    在之前的教程中已经提到过，
//    //    GLAD是用来管理OpenGL的函数指针的，
//    //    所以在调用任何OpenGL的函数之前我们需要初始化GLAD。
//    if (!gladLoadGLLoader((GLADloadproc) glfwGetProcAddress))
//    {
//        std::cout << "Failed to initialize GLAD" << std::endl;
//        return -1;
//    }
//
//    // ✅视口配置
//    //    glViewport函数前两个参数控制窗口左下角的位置。
//    //    第三个和第四个参数控制渲染窗口的宽度和高度（像素）。
//    glViewport(0, 0, 800, 600);
//    //    也可以将视口的维度设置为比GLFW的维度小，
//    //    这样子之后所有的OpenGL渲染将会在一个更小的窗口中显示，
//    //    这样子的话我们也可以将一些其它元素显示在OpenGL视口之外。
//
//    // ✅注册回调函数
//    //    注册窗口改变回调函数
//    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
//
//
//    // ✅顶点输入
//    // 一些必须记住的东西
//    //  VAO  顶点数组对象：Vertex  Array  Object
//    //  VBO  顶点缓冲对象：Vertex  Buffer Object
//    //  EBO  索引缓冲对象：Element Buffer Object
//
//    //    .1.VAO
////    float vertices[] = {
////            // 第一个三角形
////            0.5f, 0.5f, 0.0f,   // 右上角
////            0.5f, -0.5f, 0.0f,  // 右下角
////            -0.5f, 0.5f, 0.0f,  // 左上角
////            // 第二个三角形
////            0.5f, -0.5f, 0.0f,  // 右下角
////            -0.5f, -0.5f, 0.0f, // 左下角
////            -0.5f, 0.5f, 0.0f   // 左上角
////    };
//
//    float vertices[] = {
//            // 位置              // 颜色
//            0.5f, -0.5f, 0.0f, 1.0f, 0.0f, 0.0f,   // 右下
//            -0.5f, -0.5f, 0.0f, 0.0f, 1.0f, 0.0f,   // 左下
//            0.0f, 0.5f, 0.0f, 0.0f, 0.0f, 1.0f    // 顶部
//    };
//
//    //    .2.VBO
//    // 给个int作为VBO
//    unsigned int VBO;
//    // 生成一个缓冲给上面的VBO
//    glGenBuffers(1, &VBO);
//    // 定义这个缓冲是 -> 顶点缓冲对象
//    glBindBuffer(GL_ARRAY_BUFFER, VBO);
//    // 把上面的VAO赋给这个VBO 缓冲类型 - 大小 - 数据动静类型
//    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//
//
//    //    .3.VAO
//    unsigned int VAO;
//    glGenVertexArrays(1, &VAO);
//    // 初始化代码（只运行一次 (除非你的物体频繁改变)） :: ..
//    // .1. 绑定VAO
//    glBindVertexArray(VAO);
//    // .2. 把顶点数组复制到缓冲中供OpenGL使用
//    glBindBuffer(GL_ARRAY_BUFFER, VBO);
//    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//    // .3. 设置顶点属性指针
////    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void *) 0);
////    glEnableVertexAttribArray(0);
//
//// ⭕位置属性 : 以6个数为一个单位,从每个单位序号为0的数开始,每个单位抽3个
//    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void *) 0);
//    glEnableVertexAttribArray(0);
//// ⭕颜色属性 : 以6个数为一个单位,从每个单位序号为3的数开始,每个单位抽3个
//    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void *) (3 * sizeof(float)));
//    glEnableVertexAttribArray(1);
//
//
//    // 创造Shader
//    Shader shaderProgram("../ShaderLab/VertexShader001.vs",
//                         "../ShaderLab/FragmentShader001.fs");
//
//
//    // 取消注释可以画线框图 : 应该是强制改变渲染模式为线框
//    //glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
//
//    // ✅渲染循环
//    //    glfwWindowShouldClose
//    //    函数在我们每次循环的开始前检查一次GLFW是否被要求退出，
//    //    如果是的话该函数返回true然后渲染循环便结束了，
//    //    之后为我们就可以关闭应用程序了
//    float offset_X = 0;
//    float offset_Y = 0;
//    while (!glfwWindowShouldClose(window))
//    {
//
//
//
//        //==========渲染指令==========//
//        // 定义清空颜色值
//        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
//        // 清空颜色
//        glClear(GL_COLOR_BUFFER_BIT);
//
//
//        // ✅渲染着色器
//        shaderProgram.use();
//
//
////        GLdouble greenValue = (sin(timeValue * 4) / 2.0f) + 0.5f;
////        int vertexColorLocation = glGetUniformLocation(shaderProgram.ID, "vec_Pos");
////        glUseProgram(shaderProgram.ID);
////        glUniform4f(vertexColorLocation, 0.0f, greenValue, 0.0f, 1.0f);
//
//        GLdouble timeValue = glfwGetTime();
//
//
//        // 输入检查
//        processInput(window, offset_X, offset_Y);
//
////        offset += timeValue * 0.05f;
//        shaderProgram.setFloat("xOffset", offset_X);
//        shaderProgram.setFloat("yOffset", offset_Y);
//
//        // ✅绘制物体
//        glBindVertexArray(VAO);
//        glDrawArrays(GL_TRIANGLES, 0, 3);
//        //==========渲染指令==========//
//
//        // 交换颜色缓冲
//        glfwSwapBuffers(window);
//        // 检查触发事件
//        glfwPollEvents();
//    }
//
//
//    // ✅正确释放/删除之前的分配的所有资源
//    glfwTerminate();
//    return 0;
//}
//
//
////region 变量区
//
//
////endregion
//
//
////region 功能函数存储
//
//void framebuffer_size_callback(GLFWwindow *window, int width, int height)
//{
//    glViewport(0, 0, width, height);
//}
//
//void processInput(GLFWwindow *window, float &valueX, float &valueY)
//{
//    // 按下ESC -> 退出窗口
//    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
//        // set -> WindowShouldClose
//        // 可见 WindowShouldClose 相当于一个有set\get的 bool 值看现在的状态
//        glfwSetWindowShouldClose(window, true);
//    if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS)
//        valueX -= 0.02f;
//    if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS)
//        valueX += 0.02f;
//    if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS)
//        valueY += 0.02f;
//    if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS)
//        valueY -= 0.02f;
//    if (glfwGetKey(window, GLFW_KEY_SPACE) == GLFW_PRESS)
//    {
//        valueX = 0;
//        valueY = 0;
//    }
//}
//
//
////endregion

//endregion

// region Part2 材质
// System Headers
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "dependencies/shader.h"

#define STB_IMAGE_IMPLEMENTATION

#include "dependencies/stb_image.h"


// Standard Headers
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <queue>
#include <string>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#define ProPath "../L_0_1-6_BeforeTransform/"

//region 常量区

const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;

//endregion

//region 功能函数声明

// 窗口改变回调函数
void framebuffer_size_callback(GLFWwindow *window, int width, int height)
{
    glViewport(0, 0, width, height);
}

// 输入检测
void processInput(GLFWwindow *window, float &valueX, float &valueY, float &valueZoom, float &valueAlpha)
{
    // 按下ESC -> 退出窗口
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);

    // 按下空格 -> 重置窗口
    if (glfwGetKey(window, GLFW_KEY_SPACE) == GLFW_PRESS)
    {
        valueX = 0;
        valueY = 0;
        valueZoom = 0;
        valueAlpha = 0;
    }

    // 按下WASD -> 调节位置
    if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS)
        valueX -= 0.02f;
    if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS)
        valueX += 0.02f;
    if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS)
        valueY += 0.02f;
    if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS)
        valueY -= 0.02f;

    // 按下QE -> 调节缩放
    if (glfwGetKey(window, GLFW_KEY_Q) == GLFW_PRESS)
        valueZoom -= 0.01f;
    if (glfwGetKey(window, GLFW_KEY_E) == GLFW_PRESS)
        valueZoom += 0.01f;

    // 按下 up down -> 调节Alpha
    if (glfwGetKey(window, GLFW_KEY_UP) == GLFW_PRESS)
    {
        valueAlpha -= 0.01f;
        if (valueAlpha <= 0)
            valueAlpha = 0;
    }
    if (glfwGetKey(window, GLFW_KEY_DOWN) == GLFW_PRESS)
    {
        valueAlpha += 0.01f;
        if (valueAlpha >= 1.0f)
            valueAlpha = 1.0f;
    }
}

//endregion

int main()
{
    // 初始化glfw
    glfwInit();

    // ✅定义宏观参数:
    //    OpenGL主版本号 3.x
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    //    OpenGL副版本号 x.3 -> 合起来是3.3 -> 安装的是4.1就这么着吧
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    //    核心模式(Core-profile)
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    //    Mac专用代码
#ifdef __APPLE__
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
#endif


    // ✅创建窗口对象
    //    窗口 width height title
    GLFWwindow *window = glfwCreateWindow
            (SCR_WIDTH, SCR_HEIGHT, "LearnOpenGL", nullptr, nullptr);
    if (window == nullptr)
    {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);

    // ✅初始化GLAD
    //    在之前的教程中已经提到过，
    //    GLAD是用来管理OpenGL的函数指针的，
    //    所以在调用任何OpenGL的函数之前我们需要初始化GLAD。
    if (!gladLoadGLLoader((GLADloadproc) glfwGetProcAddress))
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }

    // ✅视口配置
    //    glViewport函数前两个参数控制窗口左下角的位置。
    //    第三个和第四个参数控制渲染窗口的宽度和高度（像素）。
    glViewport(0, 0, 800, 600);
    //    也可以将视口的维度设置为比GLFW的维度小，
    //    这样子之后所有的OpenGL渲染将会在一个更小的窗口中显示，
    //    这样子的话我们也可以将一些其它元素显示在OpenGL视口之外。

    // ✅注册回调函数
    //    注册窗口改变回调函数
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

//NewFeature:纹理坐标更新
    // ✅顶点输入
    float vertices[] = {
//             ---- 位置 ----     ---- 颜色 ----   - 纹理坐标 -
            0.5f, 0.5f, 0.0f, 1.0f, 0.0f, 0.0f, 2.0f, 2.0f,   // 右上
            0.5f, -0.5f, 0.0f, 0.0f, 1.0f, 0.0f, 2.0f, 0.0f,   // 右下
            -0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f,   // 左下
            -0.5f, 0.5f, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 2.0f    // 左上
    };

    unsigned int indices[] = {
            0, 1, 3, // first triangle
            1, 2, 3  // second triangle
    };
//NewFeature:纹理坐标更新

    unsigned int VBO, VAO, EBO;
    glGenVertexArrays(1, &VAO);
    glGenBuffers(1, &VBO);
    glGenBuffers(1, &EBO);

    glBindVertexArray(VAO);

    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);
    // .3. 设置顶点属性指针
//    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void *) 0);
//    glEnableVertexAttribArray(0);

// ⭕位置属性 : 以6个数为一个单位,从每个单位序号为0的数开始,每个单位抽3个
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void *) nullptr);
    glEnableVertexAttribArray(0);
// ⭕颜色属性 : 以6个数为一个单位,从每个单位序号为3的数开始,每个单位抽3个
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void *) (3 * sizeof(float)));
    glEnableVertexAttribArray(1);
// NewFeature:纹理属性顶点
    glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void *) (6 * sizeof(float)));
    glEnableVertexAttribArray(2);
// NewFeature:纹理属性顶点


// NewFeature:纹理声明

    // load and create a texture
    // -------------------------
    unsigned int texture0, texture1;

    // texture 1
    // ---------
    glGenTextures(1, &texture0);
    // set the texture wrapping parameters
    glBindTexture(GL_TEXTURE_2D, texture0);
    // set texture wrapping to GL_REPEAT (default wrapping method)
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    // set texture filtering parameters
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    // load image, create texture and generate mipmaps
    int width, height, nrChannels;

    // tell stb_image.h to flip loaded texture's on the y-axis.
    stbi_set_flip_vertically_on_load(true);

    unsigned char *data = stbi_load("resources/container.jpg", &width, &height,
                                    &nrChannels, 0);
    if (data)
    {
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
        glGenerateMipmap(GL_TEXTURE_2D);
    }
    else
    {
        std::cout << "Failed to load texture" << std::endl;
    }
    stbi_image_free(data);

    // texture 2
    // ---------
    glGenTextures(1, &texture1);
    glBindTexture(GL_TEXTURE_2D, texture1);
    // set the texture wrapping parameters
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S,
                    GL_REPEAT);    // set texture wrapping to GL_REPEAT (default wrapping method)
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    // set texture filtering parameters
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    // load image, create texture and generate mipmaps

    data = stbi_load("resources/awesomeface.png", &width, &height, &nrChannels, 0);
    if (data)
    {
        // note that the awesomeface.png has transparency and thus an alpha channel, so make sure to tell OpenGL the data type is of GL_RGBA
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, data);
        glGenerateMipmap(GL_TEXTURE_2D);
    }
    else
    {
        std::cout << "Failed to load texture" << std::endl;
    }
    stbi_image_free(data);

// NewFeature:纹理声明

    // 创造Shader
    Shader shaderProgram("shaders/vs001.glsl",
                         "shaders/fs001.glsl");


    // 取消注释可以画线框图 : 应该是强制改变渲染模式为线框
    //glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

    // ✅渲染循环
    //    glfwWindowShouldClose
    //    函数在我们每次循环的开始前检查一次GLFW是否被要求退出，
    //    如果是的话该函数返回true然后渲染循环便结束了，
    //    之后为我们就可以关闭应用程序了
    float offset_X = 0;
    float offset_Y = 0;
    float offset_Zoom = 0;
    float offset_Alpha = 0;

    // tell opengl for each sampler to which texture unit it belongs to (only has to be done once)
    // -------------------------------------------------------------------------------------------
    // don't forget to activate/use the shader before setting uniforms!
    shaderProgram.use();
    glUniform1i(glGetUniformLocation(shaderProgram.ID, "texture1"), 0);
    glUniform1i(glGetUniformLocation(shaderProgram.ID, "texture2"), 1);

    while (!glfwWindowShouldClose(window))
    {

        // 输入检查
        processInput(window, offset_X, offset_Y, offset_Zoom, offset_Alpha);
        // 定义清空颜色值
        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
        // 清空颜色
        glClear(GL_COLOR_BUFFER_BIT);


        //==========渲染指令==========//
        glActiveTexture(GL_TEXTURE0);//这是死的
        glBindTexture(GL_TEXTURE_2D, texture0);
        glActiveTexture(GL_TEXTURE1);//这是死的
        glBindTexture(GL_TEXTURE_2D, texture1);

        // ✅渲染着色器
        shaderProgram.use();

        shaderProgram.setFloat("xOffset", offset_X);
        shaderProgram.setFloat("yOffset", offset_Y);
        shaderProgram.setFloat("zoomOffset", offset_Zoom);
        shaderProgram.setFloat("alphaOffset", offset_Alpha);

        // ✅绘制物体
        glBindVertexArray(VAO);
        glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, nullptr);
        //==========渲染指令==========//


        // 交换颜色缓冲
        glfwSwapBuffers(window);
        // 检查触发事件
        glfwPollEvents();
    }

    glDeleteVertexArrays(1, &VAO);
    glDeleteBuffers(1, &VBO);
    glDeleteBuffers(1, &EBO);

    // ✅正确释放/删除之前的分配的所有资源
    glfwTerminate();


    return 0;
}


//region 变量区


//endregion


//region 功能函数存储






//endregion
//endregion

// region Part2 材质 from 教程
//// System Headers
//#include <glad/glad.h>
//#include <GLFW/glfw3.h>
//#include "Shader.h"
//#include "stb_image.h"
//
//// Standard Headers
//#include <cstdio>
//#include <cstdlib>
//#include <iostream>
//#include <stack>
//#include <queue>
//#include <string>
//
//void framebuffer_size_callback(GLFWwindow *window, int width, int height);
//
//void processInput(GLFWwindow *window);
//
//// settings
//const unsigned int SCR_WIDTH = 800;
//const unsigned int SCR_HEIGHT = 600;
//
//int main()
//{
//    // glfw: initialize and configure
//    // ------------------------------
//    glfwInit();
//    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
//    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
//    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
//
//#ifdef __APPLE__
//    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // uncomment this statement to fix compilation on OS X
//#endif
//
//    // glfw window creation
//    // --------------------
//    GLFWwindow *window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "LearnOpenGL", NULL, NULL);
//    if (window == NULL)
//    {
//        std::cout << "Failed to create GLFW window" << std::endl;
//        glfwTerminate();
//        return -1;
//    }
//    glfwMakeContextCurrent(window);
//    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
//
//    // glad: load all OpenGL function pointers
//    // ---------------------------------------
//    if (!gladLoadGLLoader((GLADloadproc) glfwGetProcAddress))
//    {
//        std::cout << "Failed to initialize GLAD" << std::endl;
//        return -1;
//    }
//
//    // build and compile our shader zprogram
//    // ------------------------------------
//    Shader ourShader("../ShaderLab/VertexShader001.vs", "../ShaderLab/FragmentShader001.fs");
//
//    // set up vertex data (and buffer(s)) and configure vertex attributes
//    // ------------------------------------------------------------------
//    float vertices[] = {
//            // positions          // colors           // texture coords
//            0.5f, 0.5f, 0.0f, 1.0f, 0.0f, 0.0f, 1.0f, 1.0f, // top right
//            0.5f, -0.5f, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0f, // bottom right
//            -0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, // bottom left
//            -0.5f, 0.5f, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 1.0f  // top left
//    };
//    unsigned int indices[] = {
//            0, 1, 3, // first triangle
//            1, 2, 3  // second triangle
//    };
//    unsigned int VBO, VAO, EBO;
//    glGenVertexArrays(1, &VAO);
//    glGenBuffers(1, &VBO);
//    glGenBuffers(1, &EBO);
//
//    glBindVertexArray(VAO);
//
//    glBindBuffer(GL_ARRAY_BUFFER, VBO);
//    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//
//    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
//    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);
//
//    // position attribute
//    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void *) 0);
//    glEnableVertexAttribArray(0);
//    // color attribute
//    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void *) (3 * sizeof(float)));
//    glEnableVertexAttribArray(1);
//    // texture coord attribute
//    glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void *) (6 * sizeof(float)));
//    glEnableVertexAttribArray(2);
//
//
//    // load and create a texture
//    // -------------------------
//    unsigned int texture1, texture2;
//    // texture 1
//    // ---------
//    glGenTextures(1, &texture1);
//    glBindTexture(GL_TEXTURE_2D, texture1);
//    // set the texture wrapping parameters
//    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S,
//                    GL_REPEAT);    // set texture wrapping to GL_REPEAT (default wrapping method)
//    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//    // set texture filtering parameters
//    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
//    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//    // load image, create texture and generate mipmaps
//    int width, height, nrChannels;
//    stbi_set_flip_vertically_on_load(true); // tell stb_image.h to flip loaded texture's on the y-axis.
//    // The FileSystem::getPath(...) is part of the GitHub repository so we can find files on any IDE/platform; replace it with your own image path.
//    unsigned char *data = stbi_load("../Textures/awesomeface.png", &width, &height,
//                                    &nrChannels, 0);
//    if (data)
//    {
//        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, data);
//        glGenerateMipmap(GL_TEXTURE_2D);
//    }
//    else
//    {
//        std::cout << "Failed to load texture" << std::endl;
//    }
//    stbi_image_free(data);
//    // texture 2
//    // ---------
//    glGenTextures(1, &texture2);
//    glBindTexture(GL_TEXTURE_2D, texture2);
//    // set the texture wrapping parameters
//    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S,
//                    GL_REPEAT);    // set texture wrapping to GL_REPEAT (default wrapping method)
//    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//    // set texture filtering parameters
//    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
//    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//    // load image, create texture and generate mipmaps
//    data = stbi_load("../Textures/container.jpg", &width, &height, &nrChannels, 0);
//    if (data)
//    {
//        // note that the awesomeface.png has transparency and thus an alpha channel, so make sure to tell OpenGL the data type is of GL_RGBA
//        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
//        glGenerateMipmap(GL_TEXTURE_2D);
//    }
//    else
//    {
//        std::cout << "Failed to load texture" << std::endl;
//    }
//    stbi_image_free(data);
//
//    // tell opengl for each sampler to which texture unit it belongs to (only has to be done once)
//    // -------------------------------------------------------------------------------------------
//    ourShader.use(); // don't forget to activate/use the shader before setting uniforms!
//    // either set it manually like so:
//    glUniform1i(glGetUniformLocation(ourShader.ID, "texture1"), 0);
//    // or set it via the texture class
//    ourShader.setInt("texture2", 1);
//
//
//
//    // render loop
//    // -----------
//    while (!glfwWindowShouldClose(window))
//    {
//        // input
//        // -----
//        processInput(window);
//
//        // render
//        // ------
//        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
//        glClear(GL_COLOR_BUFFER_BIT);
//
//        // bind textures on corresponding texture units
//        glActiveTexture(GL_TEXTURE0);
//        glBindTexture(GL_TEXTURE_2D, texture1);
//        glActiveTexture(GL_TEXTURE1);
//        glBindTexture(GL_TEXTURE_2D, texture2);
//
//        // render container
//        ourShader.use();
//        glBindVertexArray(VAO);
//        glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);
//
//        // glfw: swap buffers and poll IO events (keys pressed/released, mouse moved etc.)
//        // -------------------------------------------------------------------------------
//        glfwSwapBuffers(window);
//        glfwPollEvents();
//    }
//
//    // optional: de-allocate all resources once they've outlived their purpose:
//    // ------------------------------------------------------------------------
//    glDeleteVertexArrays(1, &VAO);
//    glDeleteBuffers(1, &VBO);
//    glDeleteBuffers(1, &EBO);
//
//    // glfw: terminate, clearing all previously allocated GLFW resources.
//    // ------------------------------------------------------------------
//    glfwTerminate();
//    return 0;
//}
//
//// process all input: query GLFW whether relevant keys are pressed/released this frame and react accordingly
//// ---------------------------------------------------------------------------------------------------------
//void processInput(GLFWwindow *window)
//{
//    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
//        glfwSetWindowShouldClose(window, true);
//}
//
//// glfw: whenever the window size changed (by OS or user resize) this callback function executes
//// ---------------------------------------------------------------------------------------------
//void framebuffer_size_callback(GLFWwindow *window, int width, int height)
//{
//    // make sure the viewport matches the new window dimensions; note that width and
//    // height will be significantly larger than specified on retina displays.
//    glViewport(0, 0, width, height);
//}
// endregion