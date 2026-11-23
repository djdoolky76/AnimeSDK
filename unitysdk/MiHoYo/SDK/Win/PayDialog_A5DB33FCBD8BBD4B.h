#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BED79290917896D4/F4012768D65BF855.h"
#include "unitysdk/System/Object.h"

class FF1237522147A967;
namespace MiHoYo::SDK::Win { class PayDialog; }

#define MIHOYO_SDK_WIN_PAYDIALOG_A5DB33FCBD8BBD4B_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x39E4C90)
#define MIHOYO_SDK_WIN_PAYDIALOG_A5DB33FCBD8BBD4B__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int PayDialog_A5DB33FCBD8BBD4B_TypeDefinitionIndex = 12677;

	class PayDialog_A5DB33FCBD8BBD4B : public ::System::Object
	{
	public:
		::FF1237522147A967* E4BD819DDBEC18B1; // 0x10
		::BED79290917896D4::F4012768D65BF855 EFDF7E5E52A7C55A; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYDIALOG_A5DB33FCBD8BBD4B__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::Win::PayDialog* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::PayDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYDIALOG_A5DB33FCBD8BBD4B_BF3138F24160F012_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
