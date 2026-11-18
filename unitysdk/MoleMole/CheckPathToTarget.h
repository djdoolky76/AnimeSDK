#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/MoleMole/CheckPathToTarget_TargetType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::AI { class NavMeshPath; }

#define MOLEMOLE_CHECKPATHTOTARGET_CHECKPATH_OFFSET UNITYSDK_OFFSET(0x1079E790)
#define MOLEMOLE_CHECKPATHTOTARGET_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1079E5B0)
#define MOLEMOLE_CHECKPATHTOTARGET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1079E740)
#define MOLEMOLE_CHECKPATHTOTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1079ED10)
#define MOLEMOLE_CHECKPATHTOTARGET___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1079EE00)
#define MOLEMOLE_CHECKPATHTOTARGET___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1079EE90)

namespace MoleMole
{
	inline static constexpr unsigned int CheckPathToTarget_TypeDefinitionIndex = 78232;

	class CheckPathToTarget : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::UnityEngine::AI::NavMeshPath* navpath; // 0x50
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _cachedDataPath; // 0x60
		::MoleMole::Battle::Entity* _ownerEntity; // 0x68
		::Il2CppArray<::UnityEngine::Vector3>* navMeshPathCorners; // 0x70
		::MoleMole::Config::ValueCompareType compareType; // 0x78
		::MoleMole::CheckPathToTarget_TargetType type; // 0x7C
		::System::Single distance; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKPATHTOTARGET__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKPATHTOTARGET_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKPATHTOTARGET_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean CheckPath(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKPATHTOTARGET_CHECKPATH_OFFSET))(this, entity);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKPATHTOTARGET___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKPATHTOTARGET___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
