#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Basic/UnityAnimator/EntityTargetType.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/HandleAnimatorZoneTags_TagHandleType.h"

namespace BehaviorDesigner::Runtime { class SharedString; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_HANDLEANIMATORZONETAGS_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x12B4B1B0)
#define MOLEMOLE_HANDLEANIMATORZONETAGS_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12B4B300)
#define MOLEMOLE_HANDLEANIMATORZONETAGS__CTOR_OFFSET UNITYSDK_OFFSET(0x12B4B930)
#define MOLEMOLE_HANDLEANIMATORZONETAGS___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x12B4B9C0)
#define MOLEMOLE_HANDLEANIMATORZONETAGS___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12B4BA50)

namespace MoleMole
{
	inline static constexpr unsigned int HandleAnimatorZoneTags_TypeDefinitionIndex = 40979;

	class HandleAnimatorZoneTags : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x58
		::MoleMole::Battle::Entity* _ownerEntity; // 0x60
		::BehaviorDesigner::Runtime::SharedString* CustomTargetKey; // 0x68
		::Il2CppArray<::BehaviorDesigner::Runtime::SharedString*>* SharedZoneTags; // 0x70
		::MoleMole::HandleAnimatorZoneTags_TagHandleType HandleType; // 0x78
		::BehaviorDesigner::Runtime::Tasks::Basic::UnityAnimator::EntityTargetType TargetType; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HANDLEANIMATORZONETAGS__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HANDLEANIMATORZONETAGS_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HANDLEANIMATORZONETAGS_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HANDLEANIMATORZONETAGS___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HANDLEANIMATORZONETAGS___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
