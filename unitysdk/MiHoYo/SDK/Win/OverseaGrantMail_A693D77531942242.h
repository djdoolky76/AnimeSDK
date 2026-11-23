#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::Win { class OverseaGrantMail; }

#define MIHOYO_SDK_WIN_OVERSEAGRANTMAIL_A693D77531942242_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x3A434B0)
#define MIHOYO_SDK_WIN_OVERSEAGRANTMAIL_A693D77531942242__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaGrantMail_A693D77531942242_TypeDefinitionIndex = 12939;

	class OverseaGrantMail_A693D77531942242 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* E0BB02EDCCFC0E4E; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTMAIL_A693D77531942242__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::Win::OverseaGrantMail* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::OverseaGrantMail*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTMAIL_A693D77531942242_BF3138F24160F012_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
