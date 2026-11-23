#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::Win { class SafeMobileVerifyMail; }

#define MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_BEC50B7189E9AC95_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x39FA690)
#define MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_BEC50B7189E9AC95__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int SafeMobileVerifyMail_BEC50B7189E9AC95_TypeDefinitionIndex = 11890;

	class SafeMobileVerifyMail_BEC50B7189E9AC95 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* E0BB02EDCCFC0E4E; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_BEC50B7189E9AC95__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::Win::SafeMobileVerifyMail* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::SafeMobileVerifyMail*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_BEC50B7189E9AC95_BF3138F24160F012_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
