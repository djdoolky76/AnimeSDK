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

#define RPG_CLIENT_SCENEMONSTERBATTLESERVERCHECKRESULT_CTOR_OFFSET UNITYSDK_OFFSET(0xE08A400)

namespace RPG::Client
{
	inline static constexpr unsigned int SceneMonsterBattleServerCheckResult_TypeDefinitionIndex = 60137;

	class SceneMonsterBattleServerCheckResult : public ::System::Object
	{
	public:
		::FAPIMOFPHBB* battleFateData; // 0x10
		::APHKOFKECCK* AetherDivideBattleInfo; // 0x18
		::Il2CppArray<::HIJGDJLAOKI*>* monsterWaves; // 0x20
		::Il2CppArray<::PBNONKAIAMK*>* battleTargetList; // 0x28
		::RPG::GameCore::BattleRogueData* battleRogueData; // 0x30
		::NNPGLCGNICI* BattleInfo; // 0x38
		::Il2CppArray<::FEKLMJPJIKG*>* monsterRewardList; // 0x40
		::ONIIPFNFOFB* battleFateRinData; // 0x48
		::Il2CppArray<::RPG::GameCore::LineUpCharacter*>* avatarlist; // 0x50
		::Il2CppArray<::PBNONKAIAMK*>* battleScoreList; // 0x58
		::Il2CppArray<::HOIGPAEEAHD*>* battleRogueGoalList; // 0x60
		::NGDGDIGJPFP* battleEvolveBuildData; // 0x68
		::GMMNMPCKJEM* battleGridFightData; // 0x70
		::FGKJPPIIKDN* battleSwordTrainingData; // 0x78
		::Il2CppArray<::RPG::GameCore::MazeBuffData*>* bufflist; // 0x80
		::Il2CppArray<::CCGFLDDDIPN*>* battleAchievementList; // 0x88
		::Il2CppArray<::NIODADALNHA*>* battleRaidTargetList; // 0x90
		::RPG::GameCore::RogueMode battleRogueMode; // 0x98
		::System::Boolean encryptResult; // 0x9C
		::System::Byte _padding0[0x3];
		::System::UInt32 stageID; // 0xA0
		::System::UInt32 worldLevel; // 0xA4
		::System::UInt32 seed; // 0xA8
		::System::UInt32 monsterMaxWaveOverride; // 0xAC
		::System::UInt32 roundsLimit; // 0xB0
		::System::UInt32 retcode; // 0xB4
		::System::UInt32 battleID; // 0xB8
		::System::UInt32 battleActionEventId; // 0xBC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENEMONSTERBATTLESERVERCHECKRESULT_CTOR_OFFSET))(this);
		}

	};
}
