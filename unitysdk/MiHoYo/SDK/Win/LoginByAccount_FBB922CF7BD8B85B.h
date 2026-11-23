#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::Win { class LoginByAccount; }

#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_FBB922CF7BD8B85B_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x3AC9D60)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_FBB922CF7BD8B85B__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginByAccount_FBB922CF7BD8B85B_TypeDefinitionIndex = 12110;

	class LoginByAccount_FBB922CF7BD8B85B : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* E0BB02EDCCFC0E4E; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_FBB922CF7BD8B85B__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::Win::LoginByAccount* AED0C4705E731A6C)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::LoginByAccount*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_FBB922CF7BD8B85B_BF3138F24160F012_OFFSET))(this, AED0C4705E731A6C);
		}
	};
}
