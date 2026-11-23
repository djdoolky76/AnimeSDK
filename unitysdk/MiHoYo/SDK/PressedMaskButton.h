#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace F5D9B2730D543D46 { class A9BDD7E8F3994CE6; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_PRESSEDMASKBUTTON_E622FCA4E0C3D10D_OFFSET UNITYSDK_OFFSET(0x38E9090)
#define MIHOYO_SDK_PRESSEDMASKBUTTON_EDE40FB9FA10D37A_OFFSET UNITYSDK_OFFSET(0x38E91A0)
#define MIHOYO_SDK_PRESSEDMASKBUTTON_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x38E92B0)
#define MIHOYO_SDK_PRESSEDMASKBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PressedMaskButton_TypeDefinitionIndex = 11799;

	class PressedMaskButton : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Text* buttonText; // 0x20
		::UnityEngine::GameObject* buttonImageMaskObj; // 0x28

		::System::Void F328E4D8818B1E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PRESSEDMASKBUTTON_F328E4D8818B1E12_OFFSET))(this);
		}

		::System::Void EDE40FB9FA10D37A(::F5D9B2730D543D46::A9BDD7E8F3994CE6* E7336521BA8945EE)
		{
			return ((::System::Void(*)(::PVOID, ::F5D9B2730D543D46::A9BDD7E8F3994CE6*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PRESSEDMASKBUTTON_EDE40FB9FA10D37A_OFFSET))(this, E7336521BA8945EE);
		}

		::System::Void E622FCA4E0C3D10D(::F5D9B2730D543D46::A9BDD7E8F3994CE6* E7336521BA8945EE)
		{
			return ((::System::Void(*)(::PVOID, ::F5D9B2730D543D46::A9BDD7E8F3994CE6*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PRESSEDMASKBUTTON_E622FCA4E0C3D10D_OFFSET))(this, E7336521BA8945EE);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PRESSEDMASKBUTTON__CTOR_OFFSET))(this);
		}
	};
}
