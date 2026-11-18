#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class DJAGNIDEICF;
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CHECKSKILLCD_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x18B7DA30)
#define MOLEMOLE_CHECKSKILLCD_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x18B7DBE0)
#define MOLEMOLE_CHECKSKILLCD__CTOR_OFFSET UNITYSDK_OFFSET(0x18B7DC50)
#define MOLEMOLE_CHECKSKILLCD___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x18B7DCE0)
#define MOLEMOLE_CHECKSKILLCD___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x18B7DD70)

namespace MoleMole
{
	inline static constexpr unsigned int CheckSkillCD_TypeDefinitionIndex = 77226;

	class CheckSkillCD : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::MoleMole::SharedGameEntity* sharedOwnerEntity; // 0x50
		::MoleMole::Battle::Entity* _ownerEntity; // 0x58
		::DJAGNIDEICF* _skillComponent; // 0x60
		::System::Int32 skillBtnIndex; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKSKILLCD__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKSKILLCD_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKSKILLCD_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKSKILLCD___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKSKILLCD___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
