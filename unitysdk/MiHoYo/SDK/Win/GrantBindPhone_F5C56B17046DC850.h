#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::Win { class GrantBindPhone; }

#define MIHOYO_SDK_WIN_GRANTBINDPHONE_F5C56B17046DC850_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x39B6920)
#define MIHOYO_SDK_WIN_GRANTBINDPHONE_F5C56B17046DC850__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GrantBindPhone_F5C56B17046DC850_TypeDefinitionIndex = 12556;

	class GrantBindPhone_F5C56B17046DC850 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* E0BB02EDCCFC0E4E; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTBINDPHONE_F5C56B17046DC850__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::Win::GrantBindPhone* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::GrantBindPhone*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTBINDPHONE_F5C56B17046DC850_BF3138F24160F012_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
