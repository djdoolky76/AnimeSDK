#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/PinballSubsystem_PendingContactAbilityPhase.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_PINBALLSUBSYSTEM_TRIGGEREDCONTACTABILITYKEY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x62C0C0)
#define MOLEMOLE_PINBALLSUBSYSTEM_TRIGGEREDCONTACTABILITYKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x62C000)
#define MOLEMOLE_PINBALLSUBSYSTEM_TRIGGEREDCONTACTABILITYKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x62C0D0)
#define MOLEMOLE_PINBALLSUBSYSTEM_TRIGGEREDCONTACTABILITYKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x62BFE0)
#define MOLEMOLE_PINBALLSUBSYSTEM_TRIGGEREDCONTACTABILITYKEY___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x62C1C0)
#define MOLEMOLE_PINBALLSUBSYSTEM_TRIGGEREDCONTACTABILITYKEY___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x62C230)

namespace MoleMole
{
	inline static constexpr unsigned int PinballSubsystem_TriggeredContactAbilityKey_TypeDefinitionIndex = 56754;

	struct alignas(8) PinballSubsystem_TriggeredContactAbilityKey
	{
		::System::UInt32 _casterEntityId; // 0x10
		::System::UInt32 _targetEntityId; // 0x14
		::MoleMole::PinballSubsystem_PendingContactAbilityPhase _phase; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* _abilityName; // 0x20

		::System::Void _ctor(::System::UInt32 casterEntityId, ::System::UInt32 targetEntityId, ::MoleMole::PinballSubsystem_PendingContactAbilityPhase phase, ::System::String* abilityName)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::MoleMole::PinballSubsystem_PendingContactAbilityPhase, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_TRIGGEREDCONTACTABILITYKEY__CTOR_OFFSET))(this, casterEntityId, targetEntityId, phase, abilityName);
		}

		/*
		::System::Boolean Equals(::MoleMole::PinballSubsystem_TriggeredContactAbilityKey other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::PinballSubsystem_TriggeredContactAbilityKey))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_TRIGGEREDCONTACTABILITYKEY_EQUALS_OFFSET))(this, other);
		}
		*/

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_TRIGGEREDCONTACTABILITYKEY_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_TRIGGEREDCONTACTABILITYKEY_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_TRIGGEREDCONTACTABILITYKEY___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_TRIGGEREDCONTACTABILITYKEY___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
