#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

class B7AA931712048837;
namespace MiHoYo::SDK { class UIManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }

#define MIHOYO_SDK_PROTOCOLCONFIRM_A7B9D97A8EACDFF4_OFFSET UNITYSDK_OFFSET(0x3A592B0)
#define MIHOYO_SDK_PROTOCOLCONFIRM_AA6D9CBA229C68E3_OFFSET UNITYSDK_OFFSET(0x3A23A80)
#define MIHOYO_SDK_PROTOCOLCONFIRM_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x3A59100)
#define MIHOYO_SDK_PROTOCOLCONFIRM_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x3A59050)
#define MIHOYO_SDK_PROTOCOLCONFIRM_E9765CC46DB11D1C_OFFSET UNITYSDK_OFFSET(0x3A590E0)
#define MIHOYO_SDK_PROTOCOLCONFIRM_F715D27BB726BC31_OFFSET UNITYSDK_OFFSET(0x3A1F660)
#define MIHOYO_SDK_PROTOCOLCONFIRM_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x3A58CD0)
#define MIHOYO_SDK_PROTOCOLCONFIRM__CTOR_OFFSET UNITYSDK_OFFSET(0x39230A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ProtocolConfirm_TypeDefinitionIndex = 13018;

	class ProtocolConfirm : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::ProtocolConfirm** StaticGet_F459A1CAE950E680()
		{
			return (::MiHoYo::SDK::ProtocolConfirm**)Il2CppClass::FromTypeDefinitionIndex(ProtocolConfirm_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::MiHoYo::SDK::UIManager** StaticGet_E368C73B8B30E25D()
		{
			return (::MiHoYo::SDK::UIManager**)Il2CppClass::FromTypeDefinitionIndex(ProtocolConfirm_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		::UnityEngine::UI::Button* FC8839ED28146ED8; // 0x60
		::UnityEngine::UI::Button* B8BCEC33C7879EC5; // 0x68
		::UnityEngine::GameObject* B9ABD008AF3D18FF; // 0x70
		::B7AA931712048837* E9250243433F39FA; // 0x78
		::System::Action* OnAccept; // 0x80
		::System::Action* OnRefuse; // 0x88
		::System::Action_1<::System::String*>* OnHrefButtonClicked; // 0x90
		::System::String* AC176C9F00D39C81; // 0x98

		static ::System::Void BFA7961FF2AC380B(::System::String* AA56C98D566E6FA2)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLCONFIRM_BFA7961FF2AC380B_OFFSET))(AA56C98D566E6FA2);
		}

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLCONFIRM_E85D1C741D5386D7_OFFSET))();
		}

		::System::Void A7B9D97A8EACDFF4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLCONFIRM_A7B9D97A8EACDFF4_OFFSET))(this);
		}

		::System::Void F715D27BB726BC31()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLCONFIRM_F715D27BB726BC31_OFFSET))(this);
		}

		::System::Void AA6D9CBA229C68E3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLCONFIRM_AA6D9CBA229C68E3_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLCONFIRM_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLCONFIRM__CTOR_OFFSET))(this);
		}

		::System::Void E9765CC46DB11D1C(::System::String* EB8CA1B317A562AF)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLCONFIRM_E9765CC46DB11D1C_OFFSET))(this, EB8CA1B317A562AF);
		}
	};
}
