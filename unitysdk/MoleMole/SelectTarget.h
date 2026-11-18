#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/Config/MonsterFunctionType.h"
#include "unitysdk/MoleMole/AIMoveTargetType.h"

class NHKKAEBJNEN;
class OAMAMDGEJKH;
namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SELECTTARGET_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x13A06070)
#define MOLEMOLE_SELECTTARGET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13A06230)
#define MOLEMOLE_SELECTTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x13A068B0)
#define MOLEMOLE_SELECTTARGET___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x13A06AC0)
#define MOLEMOLE_SELECTTARGET___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13A06B50)

namespace MoleMole
{
	inline static constexpr unsigned int SelectTarget_TypeDefinitionIndex = 43460;

	class SelectTarget : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* ValidDistance; // 0x58
		::System::String* DistanceEntityAttachPoint; // 0x60
		::BehaviorDesigner::Runtime::SharedBool* enableFindFeatureTarget; // 0x68
		::BehaviorDesigner::Runtime::SharedBool* OverrideSelectConditionWithAbilityTargetKey; // 0x70
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x78
		::BehaviorDesigner::Runtime::SharedBool* IsAreaDetect; // 0x80
		::NHKKAEBJNEN* _selectTargetPara; // 0x88
		::BehaviorDesigner::Runtime::SharedBool* IsFailClearTarget; // 0x90
		::BehaviorDesigner::Runtime::SharedString* AbilityTargetCustomKey; // 0x98
		::BehaviorDesigner::Runtime::SharedBool* EnableDistanceFilter; // 0xA0
		::System::String* DistanceEntityCustomKey; // 0xA8
		::System::Collections::Generic::List_1<::OAMAMDGEJKH*>* _featureTargets; // 0xB0
		::BehaviorDesigner::Runtime::SharedBool* ExcludeExitBattleTarget; // 0xB8
		::MoleMole::Battle::Entity* ownerEntity; // 0xC0
		::Il2CppArray<::MoleMole::Config::MonsterFunctionType>* monsterFunctionTypeArray; // 0xC8
		::MoleMole::AIMoveTargetType DistanceCenterEntity; // 0xD0
		::System::Boolean isLocalAvatarFirst; // 0xD4
		::System::Boolean isSelectEnemy; // 0xD5
		::System::Boolean isSelectAllied; // 0xD6
		::System::Boolean isSelectNeutral; // 0xD7

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SELECTTARGET__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SELECTTARGET_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SELECTTARGET_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SELECTTARGET___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SELECTTARGET___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
