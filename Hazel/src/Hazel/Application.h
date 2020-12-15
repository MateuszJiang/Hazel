#pragma once

#include  "Core.h"
#include "Events/Event.h"

namespace Hazel {

	class __declspec(dllexport) Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in a Client
	Application* CreateApplication();

}
