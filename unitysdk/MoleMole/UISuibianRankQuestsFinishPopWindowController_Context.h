#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class MDIGEHANODA;

#define MOLEMOLE_UISUIBIANRANKQUESTSFINISHPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17DB0460)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianRankQuestsFinishPopWindowController_Context_TypeDefinitionIndex = 66414;

	class UISuibianRankQuestsFinishPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MDIGEHANODA* Config; // 0x28
		::System::Int32 CurFinishCount; // 0x30
		::System::Int32 PrvFinishCount; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANRANKQUESTSFINISHPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
