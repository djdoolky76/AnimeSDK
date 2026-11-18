#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JCADHFOKIHK;
class KFHNCJALFJK;
class LHHNKBDEMGO;
class LNFCIBHFJHI;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_PINBALLSUBSYSTEM_PINBALLPENETRATIONHANDLE_GET_HASREMAININGHIT_OFFSET UNITYSDK_OFFSET(0x14BC0520)
#define MOLEMOLE_PINBALLSUBSYSTEM_PINBALLPENETRATIONHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x14BC0530)

namespace MoleMole
{
	inline static constexpr unsigned int PinballSubsystem_PinballPenetrationHandle_TypeDefinitionIndex = 56750;

	class PinballSubsystem_PinballPenetrationHandle : public ::System::Object
	{
	public:
		::KFHNCJALFJK* AbilityComponent; // 0x10
		::JCADHFOKIHK* InstancedAbility; // 0x18
		::LNFCIBHFJHI* InstancedModifier; // 0x20
		::Il2CppArray<::LHHNKBDEMGO*>* Predicates; // 0x28
		::System::Collections::Generic::HashSet_1<::System::UInt32>* PenetratedEntityIds; // 0x30
		::System::Int32 HitCount; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_PINBALLPENETRATIONHANDLE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_HasRemainingHit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_PINBALLPENETRATIONHANDLE_GET_HASREMAININGHIT_OFFSET))(this);
		}
	};
}
