#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UI/Confirm_E18B39FBD22EF1C5.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::UI::Internal::OS { class AccountList; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_E5EE57257A92C59B_A1AF85D7C35C080F_OFFSET UNITYSDK_OFFSET(0x3AB1C60)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_E5EE57257A92C59B__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int AccountList_E5EE57257A92C59B_TypeDefinitionIndex = 12088;

	class AccountList_E5EE57257A92C59B : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* BC63F4052E4478D7; // 0x10
		::MiHoYo::SDK::UI::Internal::OS::AccountList* A544919C800E2923; // 0x18
		::System::Int32 B48C66E5FB2449C6; // 0x20
		::System::Int32 BDA6F4A38A1FD5BC; // 0x24
		::MiHoYo::SDK::AccountModel* AE11B914AE12D7B2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_E5EE57257A92C59B__CTOR_OFFSET))(this);
		}

		::System::Void A1AF85D7C35C080F(::MiHoYo::SDK::UI::Confirm_E18B39FBD22EF1C5 E82293C0814051A5)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::Confirm_E18B39FBD22EF1C5))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_E5EE57257A92C59B_A1AF85D7C35C080F_OFFSET))(this, E82293C0814051A5);
		}
	};
}
