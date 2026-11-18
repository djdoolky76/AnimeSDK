#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIRABBOSSSWEEPREWARDROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x186F2A90)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABBossSweepRewardRowWidgetController_Data_TypeDefinitionIndex = 44727;

	class UIRABBossSweepRewardRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::Boolean isNowPhase; // 0x10
		::System::Boolean isUnlock; // 0x11
		::System::Byte _padding0[0x2];
		::System::Int32 bossChallengeId; // 0x14
		::System::Int32 rewardRuleId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSSWEEPREWARDROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
