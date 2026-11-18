#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GEIHCPAOKKK;
class HPIHEMJEJEM;
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace BehaviorDesigner::Runtime { class SharedVector3; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPatrolPointSet; }
namespace System { class String; }

#define MOLEMOLE_UPDATENEARESTPATROLPOS_GETNEARESTPOINTPOSITION_OFFSET UNITYSDK_OFFSET(0x120A5730)
#define MOLEMOLE_UPDATENEARESTPATROLPOS_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x120A5360)
#define MOLEMOLE_UPDATENEARESTPATROLPOS_ONRESET_OFFSET UNITYSDK_OFFSET(0x120A5D00)
#define MOLEMOLE_UPDATENEARESTPATROLPOS_ONSTART_OFFSET UNITYSDK_OFFSET(0x120A5590)
#define MOLEMOLE_UPDATENEARESTPATROLPOS_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x120A5B90)
#define MOLEMOLE_UPDATENEARESTPATROLPOS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x120A5BE0)
#define MOLEMOLE_UPDATENEARESTPATROLPOS__CTOR_OFFSET UNITYSDK_OFFSET(0x120A5D80)
#define MOLEMOLE_UPDATENEARESTPATROLPOS___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x120A5E10)
#define MOLEMOLE_UPDATENEARESTPATROLPOS___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x120A5EA0)
#define MOLEMOLE_UPDATENEARESTPATROLPOS___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x120A5F30)
#define MOLEMOLE_UPDATENEARESTPATROLPOS___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x120A5FC0)
#define MOLEMOLE_UPDATENEARESTPATROLPOS___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x120A6050)

namespace MoleMole
{
	inline static constexpr unsigned int UpdateNearestPatrolPos_TypeDefinitionIndex = 85094;

	class UpdateNearestPatrolPos : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedVector3* NearestPatrolPos; // 0x58
		::GEIHCPAOKKK* modelComponent; // 0x60
		::HPIHEMJEJEM* patrolMoveComponent; // 0x68
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x70
		::MoleMole::Battle::Entity* ownerEntity; // 0x78
		::BehaviorDesigner::Runtime::SharedString* WayPathName; // 0x80
		::System::Boolean _done; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATENEARESTPATROLPOS__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATENEARESTPATROLPOS_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATENEARESTPATROLPOS_ONSTART_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetNearestPointPosition(::MoleMole::Config::ConfigPatrolPointSet* pointSet)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::MoleMole::Config::ConfigPatrolPointSet*))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATENEARESTPATROLPOS_GETNEARESTPOINTPOSITION_OFFSET))(this, pointSet);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATENEARESTPATROLPOS_ONUPDATE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATENEARESTPATROLPOS_TOSTRING_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATENEARESTPATROLPOS_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATENEARESTPATROLPOS___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATENEARESTPATROLPOS___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATENEARESTPATROLPOS___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATENEARESTPATROLPOS___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATENEARESTPATROLPOS___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
