#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AITargetType.h"

class NLNIIPDCABP;
namespace BehaviorDesigner::Runtime { class SharedInt; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections { class IEnumerator; }

#define MOLEMOLE_SETINTPARAMETER_GETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x14BC2D80)
#define MOLEMOLE_SETINTPARAMETER_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x14BC2C30)
#define MOLEMOLE_SETINTPARAMETER_ONRESET_OFFSET UNITYSDK_OFFSET(0x14BC3430)
#define MOLEMOLE_SETINTPARAMETER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14BC2EA0)
#define MOLEMOLE_SETINTPARAMETER_RESETVALUE_OFFSET UNITYSDK_OFFSET(0x14BC33A0)
#define MOLEMOLE_SETINTPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x14BC34C0)
#define MOLEMOLE_SETINTPARAMETER___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x14BC3550)
#define MOLEMOLE_SETINTPARAMETER___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x14BC35E0)
#define MOLEMOLE_SETINTPARAMETER___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14BC3670)

namespace MoleMole
{
	inline static constexpr unsigned int SetIntParameter_TypeDefinitionIndex = 64164;

	class SetIntParameter : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedInt* intValue; // 0x58
		::BehaviorDesigner::Runtime::SharedString* paramaterName; // 0x60
		::BehaviorDesigner::Runtime::SharedString* CustomKey; // 0x68
		::MoleMole::Battle::Entity* ownerEntity; // 0x70
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x78
		::System::Boolean setOnce; // 0x80
		::System::Byte _padding0[0x3];
		::System::Int32 hashID; // 0x84
		::MoleMole::AITargetType TargetType; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETINTPARAMETER__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETINTPARAMETER_ONAWAKE_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* GetTargetEntity()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETINTPARAMETER_GETTARGETENTITY_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETINTPARAMETER_ONUPDATE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* ResetValue(::NLNIIPDCABP* animatorComponent, ::System::Int32 origVale)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::NLNIIPDCABP*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SETINTPARAMETER_RESETVALUE_OFFSET))(this, animatorComponent, origVale);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETINTPARAMETER_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETINTPARAMETER___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETINTPARAMETER___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETINTPARAMETER___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
