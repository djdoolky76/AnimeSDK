#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/Config/BuddyFightModeType.h"

class DCAPDHHFBNN;
class MKMFENKPFKM;
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CHECKALLIESFIGHTMODE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xFA982B0)
#define MOLEMOLE_CHECKALLIESFIGHTMODE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xFA98510)
#define MOLEMOLE_CHECKALLIESFIGHTMODE__CTOR_OFFSET UNITYSDK_OFFSET(0xFA98590)
#define MOLEMOLE_CHECKALLIESFIGHTMODE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xFA98620)
#define MOLEMOLE_CHECKALLIESFIGHTMODE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xFA986B0)

namespace MoleMole
{
	inline static constexpr unsigned int CheckAlliesFightMode_TypeDefinitionIndex = 64430;

	class CheckAlliesFightMode : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::MoleMole::Battle::Entity* _ownerEntity; // 0x50
		::MKMFENKPFKM* _FightModeComponent; // 0x58
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x60
		::DCAPDHHFBNN* _buddyFightModeComponent; // 0x68
		::MoleMole::Config::BuddyFightModeType TargetFightMode; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKALLIESFIGHTMODE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKALLIESFIGHTMODE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKALLIESFIGHTMODE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKALLIESFIGHTMODE___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKALLIESFIGHTMODE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
