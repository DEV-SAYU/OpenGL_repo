#include <spdlog/spdlog.h>
#include <GLFW/glfw3.h>

int main(int argc, const char** argv)
{

    SPDLOG_INFO("Start Program");

    SPDLOG_INFO("Init glfw");
    if(!glfwInit())
    {
        const char* description = nullptr;
        glfwGetError(&description);
        SPDLOG_ERROR("failed to init glfw : {}", description);
        return -1;
    }

    SPDLOG_INFO("Create glfw Window");
    auto window = glfwCreateWindow(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_NAME, nullptr, nullptr);
    if (!window)
    {
        SPDLOG_ERROR("Failed to create glfw window");
        glfwTerminate();
        return -1;
    }

    SPDLOG_INFO("Start main loop");
    while(!glfwWindowShouldClose(window))
    {
        glfwPollEvents();
    }

    glfwTerminate();

    return 0;
}