#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class Map; }
namespace RPG::GameCore { class BattleAreaReferenceInfo; }
namespace RPG::GameCore { class BattleLineupData; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_BATTLEGAMEPHASEINITPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0x1B1DBE80)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleGamePhaseInitParams_TypeDefinitionIndex = 62350;

	class BattleGamePhaseInitParams : public ::System::Object
	{
	public:
		::System::Object* ExtraData; // 0x10
		::RPG::Client::Map* ADVMap; // 0x18
		::RPG::GameCore::BattleLineupData* LineupData; // 0x20
		::System::String* BattleSceneName; // 0x28
		::RPG::GameCore::BattleAreaReferenceInfo* BattleAreaInfo; // 0x30
		::System::Boolean DirectKillBattle; // 0x38
		::System::Boolean IsShowBattleUI; // 0x39
		::System::Boolean IsForceLoadScene; // 0x3A
		::System::Boolean AutoBattleAtStart; // 0x3B
		::System::Boolean TriggerBattleFromDevPage; // 0x3C
		::System::Boolean Simulate; // 0x3D
		::System::Boolean EncryptTime; // 0x3E
		::System::Boolean IsFromRestart; // 0x3F
		::System::Boolean IsClientBattle; // 0x40
		::System::Byte _padding0[0x3];
		::RPG::Client::GamePhaseType FromPhaseType; // 0x44
		::System::UInt32 BattleID; // 0x48
		::System::UInt32 PlanID; // 0x4C
		::System::Int32 RestartCount; // 0x50
		::System::Int32 LogicRandomSeed; // 0x54
		::System::UInt32 RoundsLimit; // 0x58
		::UnityEngine::Vector3 CoordinatePos; // 0x5C
		::System::UInt32 FloorID; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASEINITPARAMS_CTOR_OFFSET))(this);
		}

	};
}
