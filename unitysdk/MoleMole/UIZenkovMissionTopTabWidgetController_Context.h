#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNHFLKLIEEE.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIZENKOVMISSIONTOPTABWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13BFBDC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovMissionTopTabWidgetController_Context_TypeDefinitionIndex = 65800;

	class UIZenkovMissionTopTabWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* AfterClick; // 0x28
		::System::Boolean MapIsLocked; // 0x30
		::System::Byte _padding0[0x3];
		::System::Int32 UnlockQuestId; // 0x34
		::System::Int32 LockTipId; // 0x38
		::System::Int32 Difficulty; // 0x3C
		::System::Int32 DungeonId; // 0x40
		::FNHFLKLIEEE UnlockType; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONTOPTABWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
