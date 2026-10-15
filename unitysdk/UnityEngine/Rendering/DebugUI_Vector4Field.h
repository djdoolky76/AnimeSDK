#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_RENDERING_DEBUGUI_VECTOR4FIELD_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2C0980)

namespace UnityEngine::Rendering
{
	class DebugUI_Vector4Field
	{
	public:
		::System::Single incStep; // 0x50
		::System::Single incStepMult; // 0x54
		::System::Int32 decimals; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_VECTOR4FIELD_CTOR_OFFSET))(this);
		}

	};
}
