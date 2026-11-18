#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class AnimatorParamControl; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_TELEPORTTOAVATAR_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x13121800)
#define MOLEMOLE_TELEPORTTOAVATAR_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13121FA0)
#define MOLEMOLE_TELEPORTTOAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x13122680)
#define MOLEMOLE_TELEPORTTOAVATAR___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x13122710)
#define MOLEMOLE_TELEPORTTOAVATAR___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x131227A0)

namespace MoleMole
{
	inline static constexpr unsigned int TeleportToAvatar_TypeDefinitionIndex = 82656;

	class TeleportToAvatar : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* BooleanAnimatorParamControl; // 0x58
		::System::Collections::Generic::List_1<::System::Object*>* TriggerAnimatorParamControl; // 0x60
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x68
		::MoleMole::Battle::Entity* ownerEntity; // 0x70
		::System::Collections::Generic::List_1<::System::Object*>* IntegerAnimatorParamControl; // 0x78
		::MoleMole::Battle::AnimatorParamControl* AnimatorParamControl; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTTOAVATAR__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTTOAVATAR_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTTOAVATAR_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTTOAVATAR___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTTOAVATAR___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
