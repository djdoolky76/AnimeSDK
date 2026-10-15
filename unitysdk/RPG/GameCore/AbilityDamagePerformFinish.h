#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class AbilityDamagePerformFinish; }
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ABILITYDAMAGEPERFORMFINISH_CLEAR_OFFSET UNITYSDK_OFFSET(0xE4AA5C0)
#define RPG_GAMECORE_ABILITYDAMAGEPERFORMFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0xE4AA6B0)
#define RPG_GAMECORE_ABILITYDAMAGEPERFORMFINISH_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE4AA660)
#define RPG_GAMECORE_ABILITYDAMAGEPERFORMFINISH_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE4AA610)
#define RPG_GAMECORE_ABILITYDAMAGEPERFORMFINISH_INIT_OFFSET UNITYSDK_OFFSET(0xE4AA570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityDamagePerformFinish_TypeDefinitionIndex = 56591;

	class AbilityDamagePerformFinish : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYDAMAGEPERFORMFINISH_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityDamagePerformFinish* Init(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::AbilityDamagePerformFinish*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYDAMAGEPERFORMFINISH_INIT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYDAMAGEPERFORMFINISH_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYDAMAGEPERFORMFINISH_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYDAMAGEPERFORMFINISH_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
