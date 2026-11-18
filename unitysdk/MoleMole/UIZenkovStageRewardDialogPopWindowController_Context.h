#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIZENKOVSTAGEREWARDDIALOGPOPWINDOWCONTROLLER_CONTEXT_AUTO_OFFSET UNITYSDK_OFFSET(0x14E55CB0)
#define MOLEMOLE_UIZENKOVSTAGEREWARDDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14E55FA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovStageRewardDialogPopWindowController_Context_TypeDefinitionIndex = 46036;

	class UIZenkovStageRewardDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 ZkDungeonId; // 0x28
		::System::Byte _padding0[0x4];
		::System::Int64 Cost; // 0x30
		::System::Int64 Value; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSTAGEREWARDDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::MoleMole::UIZenkovStageRewardDialogPopWindowController_Context* Auto()
		{
			return ((::MoleMole::UIZenkovStageRewardDialogPopWindowController_Context*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSTAGEREWARDDIALOGPOPWINDOWCONTROLLER_CONTEXT_AUTO_OFFSET))(this);
		}
	};
}
