#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::Win { class LoginByPhone; }

#define MIHOYO_SDK_WIN_LOGINBYPHONE_EAC1DB9334605E18_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x3A5D240)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_EAC1DB9334605E18__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginByPhone_EAC1DB9334605E18_TypeDefinitionIndex = 13023;

	class LoginByPhone_EAC1DB9334605E18 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* E0BB02EDCCFC0E4E; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_EAC1DB9334605E18__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::Win::LoginByPhone* AED0C4705E731A6C)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::LoginByPhone*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_EAC1DB9334605E18_BF3138F24160F012_OFFSET))(this, AED0C4705E731A6C);
		}
	};
}
