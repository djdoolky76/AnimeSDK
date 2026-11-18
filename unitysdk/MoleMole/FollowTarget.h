#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class CAPAFILOMGC;
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FOLLOWTARGET_CHECKLOCKTARGETVALID_OFFSET UNITYSDK_OFFSET(0x12B41C50)
#define MOLEMOLE_FOLLOWTARGET_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x12B41380)
#define MOLEMOLE_FOLLOWTARGET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12B41500)
#define MOLEMOLE_FOLLOWTARGET_TRYGETLOCKENTITY_OFFSET UNITYSDK_OFFSET(0x12B41560)
#define MOLEMOLE_FOLLOWTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x12B41DF0)
#define MOLEMOLE_FOLLOWTARGET___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x12B41E80)
#define MOLEMOLE_FOLLOWTARGET___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12B41F10)

namespace MoleMole
{
	inline static constexpr unsigned int FollowTarget_TypeDefinitionIndex = 86361;

	class FollowTarget : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::CAPAFILOMGC* _attackTargetComponent_follower; // 0x58
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x60
		::MoleMole::Battle::Entity* _followerEntity; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWTARGET__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWTARGET_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWTARGET_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean TryGetLockEntity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWTARGET_TRYGETLOCKENTITY_OFFSET))(this);
		}

		::System::Boolean CheckLockTargetValid(::MoleMole::Battle::Entity* lockEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWTARGET_CHECKLOCKTARGETVALID_OFFSET))(this, lockEntity);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWTARGET___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWTARGET___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
