#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AITargetType.h"

class CAPAFILOMGC;
class HJDNNLKBHBA;
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_REMOVETAG_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1044CAF0)
#define MOLEMOLE_REMOVETAG_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1044CD60)
#define MOLEMOLE_REMOVETAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1044D010)
#define MOLEMOLE_REMOVETAG___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1044D0A0)
#define MOLEMOLE_REMOVETAG___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1044D130)

namespace MoleMole
{
	inline static constexpr unsigned int RemoveTag_TypeDefinitionIndex = 87306;

	class RemoveTag : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::System::String* TagName; // 0x58
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x60
		::CAPAFILOMGC* attackTargetComponent; // 0x68
		::MoleMole::Battle::Entity* ownerEntity; // 0x70
		::HJDNNLKBHBA* characterData; // 0x78
		::MoleMole::AITargetType TargetType; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REMOVETAG__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REMOVETAG_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REMOVETAG_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REMOVETAG___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REMOVETAG___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
