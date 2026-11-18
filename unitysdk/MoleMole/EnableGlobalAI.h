#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class NBNJNBOMFOJ;
namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_ENABLEGLOBALAI_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1B90AA70)
#define MOLEMOLE_ENABLEGLOBALAI_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1B90AC60)
#define MOLEMOLE_ENABLEGLOBALAI__CTOR_OFFSET UNITYSDK_OFFSET(0x1B90AD30)
#define MOLEMOLE_ENABLEGLOBALAI___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1B90ADC0)
#define MOLEMOLE_ENABLEGLOBALAI___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1B90AE50)

namespace MoleMole
{
	inline static constexpr unsigned int EnableGlobalAI_TypeDefinitionIndex = 76980;

	class EnableGlobalAI : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::MoleMole::Battle::Entity* ownerEntity; // 0x58
		::NBNJNBOMFOJ* _levelAIComponent; // 0x60
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x68
		::BehaviorDesigner::Runtime::SharedBool* enableGlobalAI; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENABLEGLOBALAI__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENABLEGLOBALAI_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENABLEGLOBALAI_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENABLEGLOBALAI___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENABLEGLOBALAI___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
