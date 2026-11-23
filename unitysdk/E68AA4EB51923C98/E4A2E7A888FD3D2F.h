#pragma once
#include "unitysdk/unitysdk.h"

namespace E68AA4EB51923C98
{
	inline static constexpr unsigned int E4A2E7A888FD3D2F_TypeDefinitionIndex = 5111;

	enum class E4A2E7A888FD3D2F : ::System::Int32
	{
		None = 0,
		RenderToNextPrePhysics = 1,
		DuringPhysicsToUpdate = 2,
		AfterUpdate = 4,
		AnimToLateUpdate = 8,
		AfterLateUpdate = 16,
		UnityAfterUpdate = 32,
		UnityAfterLateUpdate = 64,
		MainThreadPhases = 116,
	};
}
