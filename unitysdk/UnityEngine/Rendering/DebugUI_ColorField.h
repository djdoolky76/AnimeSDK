#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"

#define UNITYENGINE_RENDERING_DEBUGUI_COLORFIELD_VALIDATEVALUE_OFFSET UNITYSDK_OFFSET(0x1D077470)
#define UNITYENGINE_RENDERING_DEBUGUI_COLORFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D077500)
#define UNITYENGINE_RENDERING_DEBUGUI_COLORFIELD___BASE_VALIDATEVALUE_OFFSET UNITYSDK_OFFSET(0x1D077520)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_ColorField_TypeDefinitionIndex = 17848;

	class DebugUI_ColorField
	{
	public:
		::System::Single incStep; // 0x50
		::System::Boolean showPicker; // 0x54
		::System::Boolean hdr; // 0x55
		::System::Boolean showAlpha; // 0x56
		::System::Byte _padding0[0x1];
		::System::Single incStepMult; // 0x58
		::System::Int32 decimals; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_COLORFIELD__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color ValidateValue(::UnityEngine::Color value)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_COLORFIELD_VALIDATEVALUE_OFFSET))(this, value);
		}

		::UnityEngine::Color __base_ValidateValue(::UnityEngine::Color P0)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_COLORFIELD___BASE_VALIDATEVALUE_OFFSET))(this, P0);
		}
	};
}
