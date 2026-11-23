#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::Win { class OverseaGrantPhone; }

#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_A7716945ECA939B0_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x3A68B30)
#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_A7716945ECA939B0__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaGrantPhone_A7716945ECA939B0_TypeDefinitionIndex = 13037;

	class OverseaGrantPhone_A7716945ECA939B0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* E0BB02EDCCFC0E4E; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_A7716945ECA939B0__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::Win::OverseaGrantPhone* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::OverseaGrantPhone*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_A7716945ECA939B0_BF3138F24160F012_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
