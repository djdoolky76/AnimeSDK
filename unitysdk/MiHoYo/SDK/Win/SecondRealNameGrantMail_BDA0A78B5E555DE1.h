#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::Win { class SecondRealNameGrantMail; }

#define MIHOYO_SDK_WIN_SECONDREALNAMEGRANTMAIL_BDA0A78B5E555DE1_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x393B7D0)
#define MIHOYO_SDK_WIN_SECONDREALNAMEGRANTMAIL_BDA0A78B5E555DE1__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int SecondRealNameGrantMail_BDA0A78B5E555DE1_TypeDefinitionIndex = 12358;

	class SecondRealNameGrantMail_BDA0A78B5E555DE1 : public ::System::Object
	{
	public:
		::System::Boolean B9FF204A96C1AAFE; // 0x10
		::System::Boolean E877B04A6574B72C; // 0x11
		::System::Byte _padding0[0x6];
		::MiHoYo::SDK::AccountModel* E0BB02EDCCFC0E4E; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAMEGRANTMAIL_BDA0A78B5E555DE1__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::Win::SecondRealNameGrantMail* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::SecondRealNameGrantMail*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAMEGRANTMAIL_BDA0A78B5E555DE1_BF3138F24160F012_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
