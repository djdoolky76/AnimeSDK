#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::Win { class LoginByAccountSpecial; }

#define MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_FFB79758476151CE_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x39E4D40)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_FFB79758476151CE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginByAccountSpecial_FFB79758476151CE_TypeDefinitionIndex = 12690;

	class LoginByAccountSpecial_FFB79758476151CE : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* E0BB02EDCCFC0E4E; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_FFB79758476151CE__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::Win::LoginByAccountSpecial* AED0C4705E731A6C)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::LoginByAccountSpecial*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_FFB79758476151CE_BF3138F24160F012_OFFSET))(this, AED0C4705E731A6C);
		}
	};
}
