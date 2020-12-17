#pragma once

#include  "Core.h"
#include "Events/Event.h"
#include "Window.h"

namespace Hazel {

	class __declspec(dllexport) Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

	private:
		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
	};

	// To be defined in a Client
	Application* CreateApplication();

}
