#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AttackType.h"

class NBNJNBOMFOJ;
namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CHECKALLOWATTACK_ALLOWATTACK_OFFSET UNITYSDK_OFFSET(0x174E46D0)
#define MOLEMOLE_CHECKALLOWATTACK_DOCHECKBYTYPE_OFFSET UNITYSDK_OFFSET(0x174E4C30)
#define MOLEMOLE_CHECKALLOWATTACK_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x174E4490)
#define MOLEMOLE_CHECKALLOWATTACK_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x174E4680)
#define MOLEMOLE_CHECKALLOWATTACK_SETALLOWATTACKINFO_OFFSET UNITYSDK_OFFSET(0x174E4BC0)
#define MOLEMOLE_CHECKALLOWATTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x174E4E10)
#define MOLEMOLE_CHECKALLOWATTACK___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x174E4EA0)
#define MOLEMOLE_CHECKALLOWATTACK___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x174E4F30)

namespace MoleMole
{
	inline static constexpr unsigned int CheckAllowAttack_TypeDefinitionIndex = 89961;

	class CheckAllowAttack : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::NBNJNBOMFOJ* _levelAIComponent; // 0x50
		::MoleMole::Battle::Entity* _ownerEntity; // 0x58
		::BehaviorDesigner::Runtime::SharedBool* BoolReadyToAttack; // 0x60
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKALLOWATTACK__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKALLOWATTACK_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKALLOWATTACK_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean AllowAttack(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKALLOWATTACK_ALLOWATTACK_OFFSET))(this, entity);
		}

		::System::Boolean DoCheckByType(::MoleMole::AttackType attackType, ::System::UInt32 entityId)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AttackType, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKALLOWATTACK_DOCHECKBYTYPE_OFFSET))(this, attackType, entityId);
		}

		::System::Void SetAllowAttackInfo(::System::UInt32 entityId, ::System::Boolean allowAtk, ::MoleMole::AttackType attackType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::MoleMole::AttackType))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKALLOWATTACK_SETALLOWATTACKINFO_OFFSET))(this, entityId, allowAtk, attackType);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKALLOWATTACK___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKALLOWATTACK___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
