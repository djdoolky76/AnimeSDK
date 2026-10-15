#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class AbilityBeingLimbo; }

#define RPG_GAMECORE_ABILITYBEINGLIMBO_CTOR_OFFSET UNITYSDK_OFFSET(0xE4A4420)
#define RPG_GAMECORE_ABILITYBEINGLIMBO_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE4A43D0)
#define RPG_GAMECORE_ABILITYBEINGLIMBO_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE4A4390)
#define RPG_GAMECORE_ABILITYBEINGLIMBO_INIT_OFFSET UNITYSDK_OFFSET(0xE4A4340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityBeingLimbo_TypeDefinitionIndex = 56581;

	class AbilityBeingLimbo : public ::CMPGEAFHHDC
	{
	public:
		::System::UInt32 _SourceEntityRuntimeID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEINGLIMBO_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityBeingLimbo* Init(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AbilityBeingLimbo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEINGLIMBO_INIT_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEINGLIMBO_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYBEINGLIMBO_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
