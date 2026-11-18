#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJPBMMDAFKB.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivityCompRewardBtnGroupWidgetController; }

#define KFGCLOPEGJO_HJPAHNDOEDB_JBNBLFJFMKA_OFFSET UNITYSDK_OFFSET(0x13C55470)
#define KFGCLOPEGJO_HJPAHNDOEDB_OFKEKALDLNC_OFFSET UNITYSDK_OFFSET(0x13C555C0)
#define KFGCLOPEGJO_HJPAHNDOEDB__CTOR_OFFSET UNITYSDK_OFFSET(0x13C55460)

inline static constexpr unsigned int KFGCLOPEGJO_HJPAHNDOEDB_TypeDefinitionIndex = 78932;

class KFGCLOPEGJO_HJPAHNDOEDB : public ::System::Object
{
public:
	::MoleMole::UIActivityCompRewardBtnGroupWidgetController* KEHCNDLFKGA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_HJPAHNDOEDB__CTOR_OFFSET))(this);
	}

	::System::Void JBNBLFJFMKA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_HJPAHNDOEDB_JBNBLFJFMKA_OFFSET))(this);
	}

	::System::Void OFKEKALDLNC(::MoleMole::UIActivityCompRewardBtnGroupWidgetController* MNOMCCLBJAO, ::DJPBMMDAFKB EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityCompRewardBtnGroupWidgetController*, ::DJPBMMDAFKB))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_HJPAHNDOEDB_OFKEKALDLNC_OFFSET))(this, MNOMCCLBJAO, EGEGIMGMJHN);
	}
};
