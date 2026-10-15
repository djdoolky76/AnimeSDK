#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattlePerformActorCreateType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattlePerformCreateActor; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLEPERFORMCREATEACTOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D464CC0)
#define RPG_GAMECORE_BATTLEPERFORMCREATEACTOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4649B0)

namespace RPG::GameCore
{
	class BattlePerformCreateActor : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* UniqueName; // 0x10
		::System::String* StageInitKey; // 0x18
		::RPG::GameCore::BattlePerformActorCreateType CharacterType; // 0x20
		::System::UInt32 CharacterID; // 0x24
		::System::Boolean UsePlayableGraphEmo; // 0x28
		::System::Boolean OverridePrefab; // 0x29
		::System::Byte _padding0[0x6];
		::System::String* ModelPath; // 0x30
		::System::String* JsonPath; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPERFORMCREATEACTOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattlePerformCreateActor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattlePerformCreateActor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPERFORMCREATEACTOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
