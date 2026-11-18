#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AITargetType.h"

class NLNIIPDCABP;
namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections { class IEnumerator; }

#define MOLEMOLE_SETBOOLPARAMETER_GETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x13117F20)
#define MOLEMOLE_SETBOOLPARAMETER_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x13117DD0)
#define MOLEMOLE_SETBOOLPARAMETER_ONRESET_OFFSET UNITYSDK_OFFSET(0x131185E0)
#define MOLEMOLE_SETBOOLPARAMETER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13118040)
#define MOLEMOLE_SETBOOLPARAMETER_RESETVALUE_OFFSET UNITYSDK_OFFSET(0x13118550)
#define MOLEMOLE_SETBOOLPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x13118670)
#define MOLEMOLE_SETBOOLPARAMETER___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x13118700)
#define MOLEMOLE_SETBOOLPARAMETER___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x13118790)
#define MOLEMOLE_SETBOOLPARAMETER___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13118820)

namespace MoleMole
{
	inline static constexpr unsigned int SetBoolParameter_TypeDefinitionIndex = 60613;

	class SetBoolParameter : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::MoleMole::Battle::Entity* ownerEntity; // 0x58
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x60
		::BehaviorDesigner::Runtime::SharedString* paramaterName; // 0x68
		::BehaviorDesigner::Runtime::SharedString* CustomKey; // 0x70
		::BehaviorDesigner::Runtime::SharedBool* boolValue; // 0x78
		::System::Boolean setOnce; // 0x80
		::System::Byte _padding0[0x3];
		::System::Int32 hashID; // 0x84
		::MoleMole::AITargetType TargetType; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETBOOLPARAMETER__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETBOOLPARAMETER_ONAWAKE_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* GetTargetEntity()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETBOOLPARAMETER_GETTARGETENTITY_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETBOOLPARAMETER_ONUPDATE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* ResetValue(::NLNIIPDCABP* animatorComponent, ::System::Boolean origVale)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::NLNIIPDCABP*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SETBOOLPARAMETER_RESETVALUE_OFFSET))(this, animatorComponent, origVale);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETBOOLPARAMETER_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETBOOLPARAMETER___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETBOOLPARAMETER___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETBOOLPARAMETER___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
