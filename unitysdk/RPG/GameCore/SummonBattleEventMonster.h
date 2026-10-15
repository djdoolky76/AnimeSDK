#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SummonBattleEventMonster; }
namespace RPG::GameCore { class SummonMonsterData; }
namespace RPG::GameCore { class VCameraConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SUMMONBATTLEEVENTMONSTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB39380)
#define RPG_GAMECORE_SUMMONBATTLEEVENTMONSTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB393E0)
#define RPG_GAMECORE_SUMMONBATTLEEVENTMONSTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB39300)

namespace RPG::GameCore
{
	class SummonBattleEventMonster : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::SummonMonsterData* MonsterData; // 0x18
		::RPG::GameCore::VCameraConfig* CameraConfig; // 0x20
		::RPG::GameCore::DynamicFloat* DelayRatio; // 0x28
		::System::Boolean InheritSummonerDelay; // 0x30
		::System::Byte _padding0[0x7];
		::System::String* AnchorName; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONBATTLEEVENTMONSTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SummonBattleEventMonster* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SummonBattleEventMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONBATTLEEVENTMONSTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SummonBattleEventMonster* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SummonBattleEventMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONBATTLEEVENTMONSTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
