#pragma once

#include  "Core.h"

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
