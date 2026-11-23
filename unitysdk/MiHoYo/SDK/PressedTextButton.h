#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace F5D9B2730D543D46 { class A9BDD7E8F3994CE6; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_PRESSEDTEXTBUTTON_E622FCA4E0C3D10D_OFFSET UNITYSDK_OFFSET(0x3A72F10)
#define MIHOYO_SDK_PRESSEDTEXTBUTTON_EDE40FB9FA10D37A_OFFSET UNITYSDK_OFFSET(0x3A72FA0)
#define MIHOYO_SDK_PRESSEDTEXTBUTTON_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x3A73030)
#define MIHOYO_SDK_PRESSEDTEXTBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PressedTextButton_TypeDefinitionIndex = 12001;

	class PressedTextButton : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::E46B881AA2636190 normalColor; // 0x20
		::UnityEngine::E46B881AA2636190 pressedColor; // 0x30
		::UnityEngine::UI::Text* buttonText; // 0x40

		::System::Void F328E4D8818B1E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PRESSEDTEXTBUTTON_F328E4D8818B1E12_OFFSET))(this);
		}

		::System::Void EDE40FB9FA10D37A(::F5D9B2730D543D46::A9BDD7E8F3994CE6* E7336521BA8945EE)
		{
			return ((::System::Void(*)(::PVOID, ::F5D9B2730D543D46::A9BDD7E8F3994CE6*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PRESSEDTEXTBUTTON_EDE40FB9FA10D37A_OFFSET))(this, E7336521BA8945EE);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PRESSEDTEXTBUTTON__CTOR_OFFSET))(this);
		}

		::System::Void E622FCA4E0C3D10D(::F5D9B2730D543D46::A9BDD7E8F3994CE6* E7336521BA8945EE)
		{
			return ((::System::Void(*)(::PVOID, ::F5D9B2730D543D46::A9BDD7E8F3994CE6*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PRESSEDTEXTBUTTON_E622FCA4E0C3D10D_OFFSET))(this, E7336521BA8945EE);
		}
	};
}
