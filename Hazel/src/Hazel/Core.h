#pragma once

#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define Hazel_API __declspec(dllexport)
	#else
		#define Hazel_API __declspec(dllimport)
	#endif
#else
	#error Hazel only supports Windows!
#endif