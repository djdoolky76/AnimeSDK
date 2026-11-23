#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class OverseaAlertWithTitle; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_OVERSEAALERTWITHTITLE_F9EAB77001D82A34_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x3B0B700)
#define MIHOYO_SDK_WIN_OVERSEAALERTWITHTITLE_F9EAB77001D82A34__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaAlertWithTitle_F9EAB77001D82A34_TypeDefinitionIndex = 12242;

	class OverseaAlertWithTitle_F9EAB77001D82A34 : public ::System::Object
	{
	public:
		::System::String* B383F0530E7FBDBD; // 0x10
		::System::String* E0C0689B1CEBE48C; // 0x18
		::System::String* E0B4391AC34FC359; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAALERTWITHTITLE_F9EAB77001D82A34__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::Win::OverseaAlertWithTitle* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::OverseaAlertWithTitle*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAALERTWITHTITLE_F9EAB77001D82A34_BF3138F24160F012_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
