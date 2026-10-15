#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
class NCJILFFNINI;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterBeginAttack; }

#define RPG_GAMECORE_LEVELCHARACTERBEGINATTACK_CLEAR_OFFSET UNITYSDK_OFFSET(0xE6D79E0)
#define RPG_GAMECORE_LEVELCHARACTERBEGINATTACK_CTOR_OFFSET UNITYSDK_OFFSET(0xE6D7AD0)
#define RPG_GAMECORE_LEVELCHARACTERBEGINATTACK_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6D7A80)
#define RPG_GAMECORE_LEVELCHARACTERBEGINATTACK_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6D7A30)
#define RPG_GAMECORE_LEVELCHARACTERBEGINATTACK_INIT_OFFSET UNITYSDK_OFFSET(0xE6D7970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterBeginAttack_TypeDefinitionIndex = 56785;

	class LevelCharacterBeginAttack : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::GameEntity* Attacker; // 0x18
		::RPG::GameCore::GameEntity* Defender; // 0x20
		::NCJILFFNINI* DamageData; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERBEGINATTACK_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelCharacterBeginAttack* Init(::NCJILFFNINI* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::RPG::GameCore::LevelCharacterBeginAttack*(*)(::PVOID, ::NCJILFFNINI*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERBEGINATTACK_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERBEGINATTACK_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERBEGINATTACK_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERBEGINATTACK_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
