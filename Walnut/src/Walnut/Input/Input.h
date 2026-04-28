#pragma once

#include "KeyCodes.h"

#include <glm/glm.hpp>

namespace Walnut {

	class Input
	{
	public:
		static bool IsKeyDown(KeyCode keycode);
		static bool IsMouseButtonDown(MouseButton button);

		static glm::vec2 GetMousePosition();

		static void SetCursorMode(CursorMode mode);

		// Ability to change Camera FOV by scrolling mouse wheel
		static float GetMouseScrollDelta();
		static void SetMouseScrollDelta(float delta);
		static void ResetMouseScrollDelta();
	};

}
