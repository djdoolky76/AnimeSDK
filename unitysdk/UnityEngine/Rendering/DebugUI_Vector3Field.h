#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_RENDERING_DEBUGUI_VECTOR3FIELD_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2C0960)

namespace UnityEngine::Rendering
{
	class DebugUI_Vector3Field
	{
	public:
		::System::Single incStepMult; // 0x50
		::System::Single incStep; // 0x54
		::System::Int32 decimals; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_VECTOR3FIELD_CTOR_OFFSET))(this);
		}

	};
}
