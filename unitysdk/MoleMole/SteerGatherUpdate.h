#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class DKPJAEANAPO;
class GEIHCPAOKKK;
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Battle { class MonoSteerGather; }

#define MOLEMOLE_STEERGATHERUPDATE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1311B400)
#define MOLEMOLE_STEERGATHERUPDATE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1311B670)
#define MOLEMOLE_STEERGATHERUPDATE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1311BB30)
#define MOLEMOLE_STEERGATHERUPDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1311BB80)
#define MOLEMOLE_STEERGATHERUPDATE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1311BC20)
#define MOLEMOLE_STEERGATHERUPDATE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1311BCB0)
#define MOLEMOLE_STEERGATHERUPDATE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1311BD40)

namespace MoleMole
{
	inline static constexpr unsigned int SteerGatherUpdate_TypeDefinitionIndex = 89705;

	class SteerGatherUpdate : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::MoleMole::Battle::MonoSteerGather* monoSteer; // 0x58
		::MoleMole::Battle::Entity* ownerEntity; // 0x60
		::DKPJAEANAPO* steerComponent; // 0x68
		::GEIHCPAOKKK* modelComponent; // 0x70
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x78
		::System::Boolean Enable; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGATHERUPDATE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGATHERUPDATE_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGATHERUPDATE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGATHERUPDATE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGATHERUPDATE___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGATHERUPDATE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGATHERUPDATE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
