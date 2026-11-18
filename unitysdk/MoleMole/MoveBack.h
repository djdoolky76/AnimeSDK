#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AIMoveTargetType.h"

namespace MoleMole { class SharedGameEntity; }
namespace System { class String; }

#define MOLEMOLE_MOVEBACK_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14BB0510)
#define MOLEMOLE_MOVEBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x14BB0560)
#define MOLEMOLE_MOVEBACK___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14BB05F0)

namespace MoleMole
{
	inline static constexpr unsigned int MoveBack_TypeDefinitionIndex = 80382;

	class MoveBack : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::System::String* TargetAnchorName; // 0x58
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x60
		::System::Single RotateSpeed; // 0x68
		::MoleMole::AIMoveTargetType Type; // 0x6C
		::System::Single MinDistance; // 0x70
		::System::Single MoveTime; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVEBACK__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVEBACK_ONUPDATE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVEBACK___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
