#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AITargetType.h"

class NLNIIPDCABP;
namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections { class IEnumerator; }

#define MOLEMOLE_SETFLOATPARAMETER_GETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x13118A00)
#define MOLEMOLE_SETFLOATPARAMETER_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x131188B0)
#define MOLEMOLE_SETFLOATPARAMETER_ONRESET_OFFSET UNITYSDK_OFFSET(0x131190E0)
#define MOLEMOLE_SETFLOATPARAMETER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13118B20)
#define MOLEMOLE_SETFLOATPARAMETER_RESETVALUE_OFFSET UNITYSDK_OFFSET(0x13119040)
#define MOLEMOLE_SETFLOATPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x13119170)
#define MOLEMOLE_SETFLOATPARAMETER___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x13119200)
#define MOLEMOLE_SETFLOATPARAMETER___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x13119290)
#define MOLEMOLE_SETFLOATPARAMETER___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13119320)

namespace MoleMole
{
	inline static constexpr unsigned int SetFloatParameter_TypeDefinitionIndex = 71441;

	class SetFloatParameter : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedString* paramaterName; // 0x58
		::MoleMole::Battle::Entity* ownerEntity; // 0x60
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x68
		::BehaviorDesigner::Runtime::SharedString* CustomKey; // 0x70
		::BehaviorDesigner::Runtime::SharedFloat* floatValue; // 0x78
		::MoleMole::AITargetType TargetType; // 0x80
		::System::Boolean setOnce; // 0x84
		::System::Byte _padding0[0x3];
		::System::Int32 hashID; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETFLOATPARAMETER__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETFLOATPARAMETER_ONAWAKE_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* GetTargetEntity()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETFLOATPARAMETER_GETTARGETENTITY_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETFLOATPARAMETER_ONUPDATE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* ResetValue(::NLNIIPDCABP* animatorComponent, ::System::Single origVale)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::NLNIIPDCABP*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SETFLOATPARAMETER_RESETVALUE_OFFSET))(this, animatorComponent, origVale);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETFLOATPARAMETER_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETFLOATPARAMETER___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETFLOATPARAMETER___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETFLOATPARAMETER___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
