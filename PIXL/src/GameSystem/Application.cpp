#include "pch.h"
#include "Application.h"
#include "GameSystem/PrecisionClock.h"

namespace GameSystem {
	std::unique_ptr<Window> Application::m_window;

	void GameSystem::Application::Init()
	{
#ifdef _DEBUG
		ALLOCATE_CONSOLE();
#endif
		Logger::Init();
		CORE_INFO("Welcome to PIXL!");
		m_window = std::unique_ptr<Window>(Window::Create());
		PrecisionClock::Init();
	}

	int GameSystem::Application::Run(GameSystem::GameApp game)
	{
		Init();

		while (true) {
			if (!m_window->Update())
				break;
			double dt = GameSystem::PrecisionClock::GetDeltaTime();
		}
		// Shutdown
		return 0;
	}

}