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

#define RPG_CLIENT_SCENEMONSTERBATTLESERVERCHECKRESULT_CTOR_OFFSET UNITYSDK_OFFSET(0x1C0852F0)

namespace RPG::Client
{
	inline static constexpr unsigned int SceneMonsterBattleServerCheckResult_TypeDefinitionIndex = 61421;

	class SceneMonsterBattleServerCheckResult : public ::System::Object
	{
	public:
		::Il2CppArray<::PBNONKAIAMK*>* battleScoreList; // 0x10
		::ONIIPFNFOFB* battleFateRinData; // 0x18
		::RPG::GameCore::BattleRogueData* battleRogueData; // 0x20
		::NNPGLCGNICI* BattleInfo; // 0x28
		::Il2CppArray<::HIJGDJLAOKI*>* monsterWaves; // 0x30
		::Il2CppArray<::CCGFLDDDIPN*>* battleAchievementList; // 0x38
		::Il2CppArray<::RPG::GameCore::LineUpCharacter*>* appendAvatarList; // 0x40
		::APHKOFKECCK* AetherDivideBattleInfo; // 0x48
		::Il2CppArray<::PBNONKAIAMK*>* battleTargetList; // 0x50
		::FAPIMOFPHBB* battleFateData; // 0x58
		::Il2CppArray<::FEKLMJPJIKG*>* monsterRewardList; // 0x60
		::NGDGDIGJPFP* battleEvolveBuildData; // 0x68
		::Il2CppArray<::RPG::GameCore::LineUpCharacter*>* avatarlist; // 0x70
		::Il2CppArray<::RPG::GameCore::MazeBuffData*>* bufflist; // 0x78
		::Il2CppArray<::NIODADALNHA*>* battleRaidTargetList; // 0x80
		::FGKJPPIIKDN* battleSwordTrainingData; // 0x88
		::GMMNMPCKJEM* battleGridFightData; // 0x90
		::Il2CppArray<::HOIGPAEEAHD*>* battleRogueGoalList; // 0x98
		::System::Boolean encryptResult; // 0xA0
		::System::Byte _padding0[0x3];
		::System::UInt32 roundsLimit; // 0xA4
		::System::UInt32 seed; // 0xA8
		::System::UInt32 battleActionEventId; // 0xAC
		::System::UInt32 retcode; // 0xB0
		::System::UInt32 stageID; // 0xB4
		::System::UInt32 worldLevel; // 0xB8
		::RPG::GameCore::RogueMode battleRogueMode; // 0xBC
		::System::UInt32 monsterMaxWaveOverride; // 0xC0
		::System::UInt32 battleID; // 0xC4
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENEMONSTERBATTLESERVERCHECKRESULT_CTOR_OFFSET))(this);
		}

	};
}
