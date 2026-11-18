#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDIBDJABMDM.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_BATTLE_RBDBEHITTRIGGERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xFFB4E90)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int RBDBehitTriggerData_TypeDefinitionIndex = 64663;

	class RBDBehitTriggerData : public ::System::Object
	{
	public:
		::KDIBDJABMDM m_triggerType; // 0x10
		::System::Single m_fAngleFilter; // 0x14
		::System::Single m_fBreakLevel; // 0x18
		::System::Single m_fSpeed; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBEHITTRIGGERDATA__CTOR_OFFSET))(this);
		}
	};
}
