#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class DKPJAEANAPO;
class MLLIJILKJCF;
namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_STEERGLOBALUPDATE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x198D4040)
#define MOLEMOLE_STEERGLOBALUPDATE_ONSTART_OFFSET UNITYSDK_OFFSET(0x198D4270)
#define MOLEMOLE_STEERGLOBALUPDATE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x198D4620)
#define MOLEMOLE_STEERGLOBALUPDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x198D4670)
#define MOLEMOLE_STEERGLOBALUPDATE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x198D4770)
#define MOLEMOLE_STEERGLOBALUPDATE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x198D4800)
#define MOLEMOLE_STEERGLOBALUPDATE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x198D4890)

namespace MoleMole
{
	inline static constexpr unsigned int SteerGlobalUpdate_TypeDefinitionIndex = 90958;

	class SteerGlobalUpdate : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* RVOWeight; // 0x58
		::MoleMole::SharedGameEntity* Entity; // 0x60
		::MLLIJILKJCF* rvoComponent; // 0x68
		::BehaviorDesigner::Runtime::SharedFloat* RVOPriority; // 0x70
		::MoleMole::Battle::Entity* ownerEntity; // 0x78
		::DKPJAEANAPO* steerComponent; // 0x80
		::BehaviorDesigner::Runtime::SharedFloat* NearWeight; // 0x88
		::BehaviorDesigner::Runtime::SharedFloat* CameraWeight; // 0x90
		::BehaviorDesigner::Runtime::SharedFloat* SeparateGatherWeight; // 0x98
		::BehaviorDesigner::Runtime::SharedFloat* IdleLength; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGLOBALUPDATE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGLOBALUPDATE_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGLOBALUPDATE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGLOBALUPDATE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGLOBALUPDATE___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGLOBALUPDATE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGLOBALUPDATE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
