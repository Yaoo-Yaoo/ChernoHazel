#pragma once

#include "Hazel/Core.h"

namespace Hazel
{
	class HAZEL_API Input
	{
	public:
		inline static bool IsKeyPressed(int keycode) { return s_Instance->IsKeyPressedImpl(keycode); }

		inline static bool IsMouseButtonPressed(int button) { return s_Instance->IsMouseButtonPressedImpl(button); }
		inline static std::pair<float, float> GetMousePosition() { return s_Instance->GetMousePositionImpl(); }
		inline static float GetMouseX() { return s_Instance->GetMouseXImpl(); }
		inline static float GetMouseY() { return s_Instance->GetMouseYImpl(); }
	protected:
		inline virtual bool IsKeyPressedImpl(int keycode) = 0;
		inline virtual bool IsMouseButtonPressedImpl(int button) = 0;
		inline virtual std::pair<float, float> GetMousePositionImpl() = 0;
		inline virtual float GetMouseXImpl() = 0;
		inline virtual float GetMouseYImpl() = 0;
	private:
		static Input* s_Instance;
	};
}