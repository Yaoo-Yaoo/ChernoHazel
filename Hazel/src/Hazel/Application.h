#pragma once

#include "Core.h"

namespace Hazel
{
	class Hazel_API Application
	{
	public:
		Application();
		virtual ~Application();
		
		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}