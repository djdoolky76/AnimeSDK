#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::Win { class OverseaVerifyPhone; }

#define MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_BB7DEE2A73DFCC35_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x39FADE0)
#define MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_BB7DEE2A73DFCC35__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaVerifyPhone_BB7DEE2A73DFCC35_TypeDefinitionIndex = 11880;

	class OverseaVerifyPhone_BB7DEE2A73DFCC35 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* E0BB02EDCCFC0E4E; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_BB7DEE2A73DFCC35__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::Win::OverseaVerifyPhone* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::OverseaVerifyPhone*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_BB7DEE2A73DFCC35_BF3138F24160F012_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
