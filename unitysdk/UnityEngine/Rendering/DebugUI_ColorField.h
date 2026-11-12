#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"

#define UNITYENGINE_RENDERING_DEBUGUI_COLORFIELD_CTOR_OFFSET UNITYSDK_OFFSET(0x2056E520)
#define UNITYENGINE_RENDERING_DEBUGUI_COLORFIELD_VALIDATEVALUE_OFFSET UNITYSDK_OFFSET(0x2056E4E0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_ColorField_TypeDefinitionIndex = 36467;

	class DebugUI_ColorField
	{
	public:
		::System::Boolean showPicker; // 0x50
		::System::Boolean hdr; // 0x51
		::System::Boolean showAlpha; // 0x52
		::System::Byte _padding0[0x1];
		::System::Single incStep; // 0x54
		::System::Single incStepMult; // 0x58
		::System::Int32 decimals; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_COLORFIELD_CTOR_OFFSET))(this);
		}

		::UnityEngine::Color ValidateValue(::UnityEngine::Color a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_COLORFIELD_VALIDATEVALUE_OFFSET))(this, a1);
		}

	};
}
