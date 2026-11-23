#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Confirm_E18B39FBD22EF1C5.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::Win { class OverseaAccountList; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_B545FB203C0596C2_A1AF85D7C35C080F_OFFSET UNITYSDK_OFFSET(0x3A808F0)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_B545FB203C0596C2__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaAccountList_B545FB203C0596C2_TypeDefinitionIndex = 11929;

	class OverseaAccountList_B545FB203C0596C2 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* AE11B914AE12D7B2; // 0x10
		::MiHoYo::SDK::Win::OverseaAccountList* A544919C800E2923; // 0x18
		::System::Int32 B48C66E5FB2449C6; // 0x20
		::System::Byte _padding0[0x4];
		::UnityEngine::GameObject* BC63F4052E4478D7; // 0x28
		::System::Int32 BDA6F4A38A1FD5BC; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_B545FB203C0596C2__CTOR_OFFSET))(this);
		}

		::System::Void A1AF85D7C35C080F(::MiHoYo::SDK::Confirm_E18B39FBD22EF1C5 E82293C0814051A5)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Confirm_E18B39FBD22EF1C5))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_B545FB203C0596C2_A1AF85D7C35C080F_OFFSET))(this, E82293C0814051A5);
		}
	};
}
