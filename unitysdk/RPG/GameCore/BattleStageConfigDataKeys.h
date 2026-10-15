#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleStageConfigDataKeys; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLESTAGECONFIGDATAKEYS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D468CD0)
#define RPG_GAMECORE_BATTLESTAGECONFIGDATAKEYS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4687E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleStageConfigDataKeys_TypeDefinitionIndex = 17119;

	class BattleStageConfigDataKeys : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ChallengeTurnLimitKey; // 0x10
		::System::String* CreateBattleEventKey; // 0x18
		::System::String* LevelEnsureTeamAliveKey; // 0x20
		::System::String* LevelTeamDistanceOffsetKey; // 0x28
		::System::String* StageInfiniteGroup; // 0x30
		::System::String* StageBindingMazeBuff; // 0x38
		::System::String* CreateBattleActionEvent; // 0x40
		::System::String* StageBannedAvatarID; // 0x48
		::System::String* StageBattleConditionKey; // 0x50
		::System::String* StageBattleTargetKey; // 0x58
		::System::String* MainMonsterKey; // 0x60
		::System::String* ChallengeStoryType; // 0x68
		::System::String* BattlePerformStage; // 0x70
		::System::String* Load3DTextFromFloor; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESTAGECONFIGDATAKEYS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleStageConfigDataKeys* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleStageConfigDataKeys*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESTAGECONFIGDATAKEYS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
