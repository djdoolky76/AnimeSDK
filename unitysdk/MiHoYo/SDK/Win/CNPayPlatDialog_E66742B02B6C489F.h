#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FF1237522147A967;
namespace MiHoYo::SDK::Win { class CNPayPlatDialog; }

#define MIHOYO_SDK_WIN_CNPAYPLATDIALOG_E66742B02B6C489F_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x39CCD20)
#define MIHOYO_SDK_WIN_CNPAYPLATDIALOG_E66742B02B6C489F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int CNPayPlatDialog_E66742B02B6C489F_TypeDefinitionIndex = 12580;

	class CNPayPlatDialog_E66742B02B6C489F : public ::System::Object
	{
	public:
		::FF1237522147A967* E4BD819DDBEC18B1; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATDIALOG_E66742B02B6C489F__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::Win::CNPayPlatDialog* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::CNPayPlatDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATDIALOG_E66742B02B6C489F_BF3138F24160F012_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
