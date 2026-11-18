#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/Extension/TimeType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }

#define UNITYENGINE_UI_EXTENSION_UITIMESTRUCT_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x1D9ECAD0)
#define UNITYENGINE_UI_EXTENSION_UITIMESTRUCT_SETTIMECOLOR_1_OFFSET UNITYSDK_OFFSET(0x1D9EC7C0)
#define UNITYENGINE_UI_EXTENSION_UITIMESTRUCT_SETTIMECOLOR_OFFSET UNITYSDK_OFFSET(0x1D9EC700)
#define UNITYENGINE_UI_EXTENSION_UITIMESTRUCT_SETTIMEDESCOLOR_1_OFFSET UNITYSDK_OFFSET(0x1D9EC690)
#define UNITYENGINE_UI_EXTENSION_UITIMESTRUCT_SETTIMEDESCOLOR_OFFSET UNITYSDK_OFFSET(0x1D9EC5D0)
#define UNITYENGINE_UI_EXTENSION_UITIMESTRUCT_SETTIME_OFFSET UNITYSDK_OFFSET(0x1D9EC830)
#define UNITYENGINE_UI_EXTENSION_UITIMESTRUCT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9ECC50)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITimeStruct_TypeDefinitionIndex = 40871;

	class UITimeStruct : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* root; // 0x10
		::UnityEngine::UI::Text* time; // 0x18
		::UnityEngine::UI::Text* timeDes; // 0x20
		::System::Boolean IsActive; // 0x28
		::System::Byte _padding0[0x7];
		::System::String* Text_Hour; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMESTRUCT__CTOR_OFFSET))(this);
		}

		::System::Void SetTimeDesColor(::System::String* colorKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMESTRUCT_SETTIMEDESCOLOR_OFFSET))(this, colorKey);
		}

		::System::Void SetTimeDesColor_1(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMESTRUCT_SETTIMEDESCOLOR_1_OFFSET))(this, color);
		}

		::System::Void SetTimeColor(::System::String* colorKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMESTRUCT_SETTIMECOLOR_OFFSET))(this, colorKey);
		}

		::System::Void SetTimeColor_1(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMESTRUCT_SETTIMECOLOR_1_OFFSET))(this, color);
		}

		::System::Void SetTime(::UnityEngine::UI::Extension::TimeType type, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::TimeType, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMESTRUCT_SETTIME_OFFSET))(this, type, value);
		}

		::System::Void SetActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMESTRUCT_SETACTIVE_OFFSET))(this, active);
		}
	};
}
