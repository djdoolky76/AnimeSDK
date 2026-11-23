#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BED79290917896D4/B752CB7EAF4106D4.h"
#include "unitysdk/System/Object.h"

class F00D975466190277;
class FF1237522147A967;
namespace MiHoYo::SDK::Win { class OverseaPayDialog; }

#define MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_F28DE6C6B60AA9EC_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x3AF91B0)
#define MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_F28DE6C6B60AA9EC__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaPayDialog_F28DE6C6B60AA9EC_TypeDefinitionIndex = 12209;

	class OverseaPayDialog_F28DE6C6B60AA9EC : public ::System::Object
	{
	public:
		::FF1237522147A967* B29880F033C1F232; // 0x10
		::F00D975466190277* E3B6795CBED67768; // 0x18
		::BED79290917896D4::B752CB7EAF4106D4 B273BA2EBABECEDF; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_F28DE6C6B60AA9EC__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::Win::OverseaPayDialog* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::OverseaPayDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYDIALOG_F28DE6C6B60AA9EC_BF3138F24160F012_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
