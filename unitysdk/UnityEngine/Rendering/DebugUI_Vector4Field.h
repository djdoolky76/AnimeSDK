#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_RENDERING_DEBUGUI_VECTOR4FIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D07ADE0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_Vector4Field_TypeDefinitionIndex = 17851;

	class DebugUI_Vector4Field
	{
	public:
		::System::Single incStepMult; // 0x50
		::System::Single incStep; // 0x54
		::System::Int32 decimals; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_VECTOR4FIELD__CTOR_OFFSET))(this);
		}
	};
}
