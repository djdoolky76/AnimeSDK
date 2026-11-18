#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class DEBNKJEHNIL;

#define MOLEMOLE_UIAUTOBATTLEREWARDPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19F9C080)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattleRewardPopWindowController_Context_TypeDefinitionIndex = 57349;

	class UIAutoBattleRewardPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::DEBNKJEHNIL* ViewModel; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEREWARDPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
