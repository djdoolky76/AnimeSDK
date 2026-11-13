#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterBeforeBreak; }

#define RPG_GAMECORE_LEVELCHARACTERBEFOREBREAK_CLEAR_OFFSET UNITYSDK_OFFSET(0x18491D10)
#define RPG_GAMECORE_LEVELCHARACTERBEFOREBREAK_CTOR_OFFSET UNITYSDK_OFFSET(0x18491E00)
#define RPG_GAMECORE_LEVELCHARACTERBEFOREBREAK_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x18491DB0)
#define RPG_GAMECORE_LEVELCHARACTERBEFOREBREAK_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x18491D60)
#define RPG_GAMECORE_LEVELCHARACTERBEFOREBREAK_INIT_OFFSET UNITYSDK_OFFSET(0x18491CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterBeforeBreak_TypeDefinitionIndex = 58023;

	class LevelCharacterBeforeBreak : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::GameEntity* AttackerEntity; // 0x18
		::RPG::GameCore::GameEntity* Entity; // 0x20
		::System::Boolean IsRedStance; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERBEFOREBREAK_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelCharacterBeforeBreak* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3)
		{
			return ((::RPG::GameCore::LevelCharacterBeforeBreak*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERBEFOREBREAK_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERBEFOREBREAK_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERBEFOREBREAK_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERBEFOREBREAK_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
