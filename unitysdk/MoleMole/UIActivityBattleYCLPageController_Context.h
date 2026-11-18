#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADDEBPHFFIF_EGCGFAGAFPD.h"
#include "unitysdk/ADDEBPHFFIF_IOIGKKONACG.h"
#include "unitysdk/MoleMole/UIActivityBattleYCLPageController_PageState.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYBATTLEYCLPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18842570)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBattleYCLPageController_Context_TypeDefinitionIndex = 59294;

	class UIActivityBattleYCLPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 activityID; // 0x28
		::ADDEBPHFFIF_EGCGFAGAFPD activityBattleType; // 0x2C
		::MoleMole::UIActivityBattleYCLPageController_PageState pageState; // 0x30
		::ADDEBPHFFIF_IOIGKKONACG activityBattleSubType; // 0x34
		::System::Int32 questID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
