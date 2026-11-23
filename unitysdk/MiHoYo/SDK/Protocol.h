#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Confirm_E18B39FBD22EF1C5.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

class B7AA931712048837;
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_PROTOCOL_A7B9D97A8EACDFF4_OFFSET UNITYSDK_OFFSET(0x3A64C20)
#define MIHOYO_SDK_PROTOCOL_AA6D9CBA229C68E3_OFFSET UNITYSDK_OFFSET(0x3A1F660)
#define MIHOYO_SDK_PROTOCOL_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x3A649F0)
#define MIHOYO_SDK_PROTOCOL_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x3A64B30)
#define MIHOYO_SDK_PROTOCOL_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x3A649A0)
#define MIHOYO_SDK_PROTOCOL_E9765CC46DB11D1C_OFFSET UNITYSDK_OFFSET(0x3A64A40)
#define MIHOYO_SDK_PROTOCOL_F715D27BB726BC31_OFFSET UNITYSDK_OFFSET(0x3A64870)
#define MIHOYO_SDK_PROTOCOL_FB14E5C612C51CF7_OFFSET UNITYSDK_OFFSET(0x39E14F0)
#define MIHOYO_SDK_PROTOCOL_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x3A64470)
#define MIHOYO_SDK_PROTOCOL__CTOR_OFFSET UNITYSDK_OFFSET(0x39230A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Protocol_TypeDefinitionIndex = 13053;

	class Protocol : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Protocol** StaticGet_F459A1CAE950E680()
		{
			return (::MiHoYo::SDK::Protocol**)Il2CppClass::FromTypeDefinitionIndex(Protocol_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::UI::Button* FC8839ED28146ED8; // 0x60
		::UnityEngine::UI::Button* B8BCEC33C7879EC5; // 0x68
		::UnityEngine::GameObject* B9ABD008AF3D18FF; // 0x70
		::UnityEngine::UI::Text* A0830E09F3D64900; // 0x78
		::B7AA931712048837* E9250243433F39FA; // 0x80
		::System::Action* OnAccept; // 0x88
		::System::Action* OnRefuse; // 0x90
		::System::Action* OnUserAgreement; // 0x98
		::System::Action* OnUserPrivacy; // 0xA0
		::System::Action* OnTeenagerUserAgreement; // 0xA8
		::System::Action* OnThirdPrivacy; // 0xB0
		::System::Boolean FD409882250C7E57; // 0xB8

		::System::Void E9765CC46DB11D1C(::System::String* EB8CA1B317A562AF)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOL_E9765CC46DB11D1C_OFFSET))(this, EB8CA1B317A562AF);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOL_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void AA6D9CBA229C68E3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOL_AA6D9CBA229C68E3_OFFSET))(this);
		}

		static ::System::Void BFA7961FF2AC380B(::System::Boolean A426B35D5CC78F1D)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOL_BFA7961FF2AC380B_OFFSET))(A426B35D5CC78F1D);
		}

		::System::Void A7B9D97A8EACDFF4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOL_A7B9D97A8EACDFF4_OFFSET))(this);
		}

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOL_E85D1C741D5386D7_OFFSET))();
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOL_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOL__CTOR_OFFSET))(this);
		}

		::System::Void F715D27BB726BC31()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOL_F715D27BB726BC31_OFFSET))(this);
		}

		::System::Void FB14E5C612C51CF7(::MiHoYo::SDK::Confirm_E18B39FBD22EF1C5 E82293C0814051A5)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Confirm_E18B39FBD22EF1C5))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOL_FB14E5C612C51CF7_OFFSET))(this, E82293C0814051A5);
		}
	};
}
