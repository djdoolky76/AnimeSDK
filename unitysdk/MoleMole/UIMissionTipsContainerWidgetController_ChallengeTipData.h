#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMissionTipsContainerWidgetController_MissionTipData.h"
#include "unitysdk/MoleMole/UIMissionTipsContainerWidgetController_MissionTipType.h"

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER_CHALLENGETIPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17FA3600)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController_ChallengeTipData_TypeDefinitionIndex = 77591;

	class UIMissionTipsContainerWidgetController_ChallengeTipData : public ::MoleMole::UIMissionTipsContainerWidgetController_MissionTipData
	{
	public:
		::System::Int32 ChallengeID; // 0x20
		::System::Boolean NeedPlayFadeInAnim; // 0x24
		::System::Byte _padding0[0x3];
		::System::UInt32 GroupId; // 0x28

		::System::Void _ctor(::MoleMole::UIMissionTipsContainerWidgetController_MissionTipType tipType, ::System::Boolean fromResume, ::System::Int32 questID)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMissionTipsContainerWidgetController_MissionTipType, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER_CHALLENGETIPDATA__CTOR_OFFSET))(this, tipType, fromResume, questID);
		}
	};
}
