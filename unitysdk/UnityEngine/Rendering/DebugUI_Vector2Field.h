#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_RENDERING_DEBUGUI_VECTOR2FIELD_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2C0940)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_Vector2Field_TypeDefinitionIndex = 35540;

	class DebugUI_Vector2Field
	{
	public:
		::System::Single incStep; // 0x50
		::System::Int32 decimals; // 0x54
		::System::Single incStepMult; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_VECTOR2FIELD_CTOR_OFFSET))(this);
		}

	};
}
