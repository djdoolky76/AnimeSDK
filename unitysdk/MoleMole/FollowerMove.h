#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/FollowerMove_FORWARD_TYPE.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FOLLOWERMOVE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x162C79A0)
#define MOLEMOLE_FOLLOWERMOVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x162C7AF0)
#define MOLEMOLE_FOLLOWERMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x162C7B40)
#define MOLEMOLE_FOLLOWERMOVE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x162C7C00)
#define MOLEMOLE_FOLLOWERMOVE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x162C7C90)

namespace MoleMole
{
	inline static constexpr unsigned int FollowerMove_TypeDefinitionIndex = 87391;

	class FollowerMove : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::MoleMole::Battle::Entity* _ownerEntity; // 0x58
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x60
		::MoleMole::FollowerMove_FORWARD_TYPE ForwardType; // 0x68
		::System::Single aimHeightOffset; // 0x6C
		::System::Single forwardLerpRatio; // 0x70
		::UnityEngine::Vector3 PosOffset; // 0x74
		::System::Single posLerpRatio; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWERMOVE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWERMOVE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWERMOVE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWERMOVE___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWERMOVE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
