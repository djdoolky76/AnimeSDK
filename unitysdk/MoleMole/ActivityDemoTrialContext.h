#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ActivityDemoTrialContext_EShowType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class IBENDELLLAO;

#define MOLEMOLE_ACTIVITYDEMOTRIALCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xFA84560)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityDemoTrialContext_TypeDefinitionIndex = 66819;

	class ActivityDemoTrialContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::IBENDELLLAO* notificationNode; // 0x28
		::System::Int32 trialRoleID; // 0x30
		::MoleMole::ActivityDemoTrialContext_EShowType showType; // 0x34
		::System::Int32 weaponId; // 0x38
		::System::Boolean isFocus; // 0x3C
		::System::Boolean muteSound; // 0x3D
		::System::Byte _padding0[0x2];
		::System::Int32 gachaScheduleId; // 0x40
		::System::Int32 gachaId; // 0x44
		::System::Boolean isSelect; // 0x48
		::System::Boolean isCanClick; // 0x49
		::System::Boolean canDirectTake; // 0x4A
		::System::Boolean hideNumImage; // 0x4B
		::System::Int32 trialQuestID; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYDEMOTRIALCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
