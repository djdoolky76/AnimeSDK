#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class PayLimitTipsDialog; }

#define MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG_F635810EEAC7BD68_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x3908EE0)
#define MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG_F635810EEAC7BD68__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int PayLimitTipsDialog_F635810EEAC7BD68_TypeDefinitionIndex = 12292;

	class PayLimitTipsDialog_F635810EEAC7BD68 : public ::System::Object
	{
	public:
		::System::Int32 F3E779D3DD2E3559; // 0x10
		::System::Boolean A578BE7279338FD5; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG_F635810EEAC7BD68__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::Win::PayLimitTipsDialog* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::PayLimitTipsDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG_F635810EEAC7BD68_BF3138F24160F012_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
