#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class AbilityBeforeEscape; }

#define RPG_GAMECORE_ABILITYBEFOREESCAPE_CTOR_OFFSET UNITYSDK_OFFSET(0xE4AECB0)
#define RPG_GAMECORE_ABILITYBEFOREESCAPE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE4AEC60)
#define RPG_GAMECORE_ABILITYBEFOREESCAPE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE4AEC20)
#define RPG_GAMECORE_ABILITYBEFOREESCAPE_INIT_OFFSET UNITYSDK_OFFSET(0xE4AEBD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityBeforeEscape_TypeDefinitionIndex = 56583;

	class AbilityBeforeEscape : public ::CMPGEAFHHDC
	{
	public:
		::System::UInt32 _SourceEntityRuntimeID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEFOREESCAPE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityBeforeEscape* Init(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AbilityBeforeEscape*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEFOREESCAPE_INIT_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEFOREESCAPE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEFOREESCAPE_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
