#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/Config/BuddyFightModeType.h"

class DCAPDHHFBNN;
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CHECKBUDDYFIGHTMODE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x19089680)
#define MOLEMOLE_CHECKBUDDYFIGHTMODE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x19089840)
#define MOLEMOLE_CHECKBUDDYFIGHTMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x190898A0)
#define MOLEMOLE_CHECKBUDDYFIGHTMODE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x19089930)
#define MOLEMOLE_CHECKBUDDYFIGHTMODE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x190899C0)

namespace MoleMole
{
	inline static constexpr unsigned int CheckBuddyFightMode_TypeDefinitionIndex = 48392;

	class CheckBuddyFightMode : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x50
		::DCAPDHHFBNN* _buddyFightModeComponent; // 0x58
		::MoleMole::Battle::Entity* _ownerEntity; // 0x60
		::MoleMole::Config::BuddyFightModeType TargetFightMode; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKBUDDYFIGHTMODE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKBUDDYFIGHTMODE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKBUDDYFIGHTMODE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKBUDDYFIGHTMODE___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKBUDDYFIGHTMODE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
