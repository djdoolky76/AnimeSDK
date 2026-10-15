#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMode.h"
#include "unitysdk/System/Object.h"
class APHKOFKECCK;
class CCGFLDDDIPN;
class FAPIMOFPHBB;
class FEKLMJPJIKG;
class FGKJPPIIKDN;
class GMMNMPCKJEM;
class HIJGDJLAOKI;
class HOIGPAEEAHD;
class NGDGDIGJPFP;
class NIODADALNHA;
class NNPGLCGNICI;
class ONIIPFNFOFB;
class PBNONKAIAMK;
namespace RPG::GameCore { class BattleRogueData; }
namespace RPG::GameCore { class LineUpCharacter; }
namespace RPG::GameCore { class MazeBuffData; }

#define RPG_CLIENT_SCENEMONSTERBATTLESERVERCHECKRESULT_CTOR_OFFSET UNITYSDK_OFFSET(0xE094710)

namespace RPG::Client
{
	class SceneMonsterBattleServerCheckResult : public ::System::Object
	{
	public:
		::Il2CppArray<::FEKLMJPJIKG*>* monsterRewardList; // 0x10
		::RPG::GameCore::BattleRogueData* battleRogueData; // 0x18
		::Il2CppArray<::RPG::GameCore::MazeBuffData*>* bufflist; // 0x20
		::NGDGDIGJPFP* battleEvolveBuildData; // 0x28
		::FAPIMOFPHBB* battleFateData; // 0x30
		::Il2CppArray<::PBNONKAIAMK*>* battleScoreList; // 0x38
		::Il2CppArray<::RPG::GameCore::LineUpCharacter*>* avatarlist; // 0x40
		::GMMNMPCKJEM* battleGridFightData; // 0x48
		::APHKOFKECCK* AetherDivideBattleInfo; // 0x50
		::Il2CppArray<::PBNONKAIAMK*>* battleTargetList; // 0x58
		::ONIIPFNFOFB* battleFateRinData; // 0x60
		::Il2CppArray<::HOIGPAEEAHD*>* battleRogueGoalList; // 0x68
		::Il2CppArray<::HIJGDJLAOKI*>* monsterWaves; // 0x70
		::NNPGLCGNICI* BattleInfo; // 0x78
		::FGKJPPIIKDN* battleSwordTrainingData; // 0x80
		::Il2CppArray<::CCGFLDDDIPN*>* battleAchievementList; // 0x88
		::Il2CppArray<::NIODADALNHA*>* battleRaidTargetList; // 0x90
		::RPG::GameCore::RogueMode battleRogueMode; // 0x98
		::System::UInt32 seed; // 0x9C
		::System::UInt32 monsterMaxWaveOverride; // 0xA0
		::System::UInt32 battleActionEventId; // 0xA4
		::System::Boolean encryptResult; // 0xA8
		::System::Byte _padding0[0x3];
		::System::UInt32 roundsLimit; // 0xAC
		::System::UInt32 battleID; // 0xB0
		::System::UInt32 worldLevel; // 0xB4
		::System::UInt32 retcode; // 0xB8
		::System::UInt32 stageID; // 0xBC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENEMONSTERBATTLESERVERCHECKRESULT_CTOR_OFFSET))(this);
		}

	};
}
