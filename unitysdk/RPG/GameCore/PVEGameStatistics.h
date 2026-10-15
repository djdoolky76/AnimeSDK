#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BADALKDAOGH.h"
#include "unitysdk/System/Object.h"
class ABIEGBANPEE;
class AFGMNFFBBIG;
class BJOFJDKIOPG;
class BMKIIODBMJF;
class CDMPJODLBEE;
class CKOKAGGLKHG;
class COMGNGLLCFN;
class DPMFBDHCNNO;
class EANJJJPKIPJ;
class FAHGFCIJHFK;
class FCDDPJIEDGP;
class FMEKABDGCEC;
class GBJMLKNLEPD;
class HDKEPPDIDIH;
class HFALLFOEHKN;
class KHJJGHDAPFD;
class KNBMAPNNDJL;
class LOHBCIPAIPI;
class MGMJOPHJCNL;
class MKICACCMBOF;
class NGDGDIGJPFP;
class OJEANLINGCJ;
namespace RPG::GameCore { class PVECharacterStt; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_PVEGAMESTATISTICS_CTOR_OFFSET UNITYSDK_OFFSET(0xE7081E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PVEGameStatistics_TypeDefinitionIndex = 57631;

	class PVEGameStatistics : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* customValues; // 0x10
		::NGDGDIGJPFP* EvolveBuild; // 0x18
		::System::Collections::Generic::List_1<::COMGNGLLCFN*>* battleAchievementList; // 0x20
		::System::Collections::Generic::List_1<::COMGNGLLCFN*>* battleChallengeScoreList; // 0x28
		::System::Collections::Generic::List_1<::KHJJGHDAPFD*>* avatarGlobalBuffInfoList; // 0x30
		::System::Collections::Generic::List_1<::COMGNGLLCFN*>* battleScoringList; // 0x38
		::System::Collections::Generic::List_1<::HFALLFOEHKN*>* servantBattleInfoList; // 0x40
		::System::Collections::Generic::List_1<::MKICACCMBOF*>* ActionBarEventInfos; // 0x48
		::Il2CppArray<::System::UInt32>* totalSkillUseTimes; // 0x50
		::System::Collections::Generic::List_1<::System::Int32>* avatarBPChain; // 0x58
		::BJOFJDKIOPG* ChallengeFeverTimeStat; // 0x60
		::System::Collections::Generic::List_1<::BMKIIODBMJF*>* waveStt; // 0x68
		::System::Collections::Generic::List_1<::COMGNGLLCFN*>* battleTargetList; // 0x70
		::System::Collections::Generic::List_1<::DPMFBDHCNNO*>* lightTeamBattleInfoList; // 0x78
		::FMEKABDGCEC* FateStt; // 0x80
		::Il2CppArray<::System::UInt32>* totalInsertAbilityTimes; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Double>* reportCustomValues; // 0x90
		::FAHGFCIJHFK* FateRinStt; // 0x98
		::System::Collections::Generic::List_1<::CDMPJODLBEE*>* AetherDivideSpiritPropertyInfos; // 0xA0
		::MGMJOPHJCNL* GridFightStt; // 0xA8
		::System::Collections::Generic::List_1<::FCDDPJIEDGP*>* monsterBattleInfoList; // 0xB0
		::System::Collections::Generic::List_1<::System::UInt32>* lightTeam; // 0xB8
		::Il2CppArray<::RPG::GameCore::PVECharacterStt*>* lightTeamStt; // 0xC0
		::GBJMLKNLEPD* ActivityStt; // 0xC8
		::KNBMAPNNDJL* ElationStt; // 0xD0
		::System::Collections::Generic::List_1<::COMGNGLLCFN*>* battleClientAchievementList; // 0xD8
		::System::Collections::Generic::List_1<::LOHBCIPAIPI*>* battleEventBattleInfoList; // 0xE0
		::System::Collections::Generic::List_1<::ABIEGBANPEE*>* statisticEvents; // 0xE8
		::OJEANLINGCJ* FeverTimeStat; // 0xF0
		::System::Collections::Generic::List_1<::AFGMNFFBBIG*>* monsterPhaseChangeInfos; // 0xF8
		::System::Collections::Generic::List_1<::HDKEPPDIDIH*>* avatarDeathInfos; // 0x100
		::System::Collections::Generic::List_1<::System::UInt32>* InvasionMonsterList; // 0x108
		::System::Collections::Generic::List_1<::COMGNGLLCFN*>* battleRaidTargetList; // 0x110
		::CKOKAGGLKHG* ExpeditionStt; // 0x118
		::EANJJJPKIPJ* RogueStt; // 0x120
		::System::UInt32 totalAvatarTurns; // 0x128
		::System::UInt32 maxLightTeamComboTurn; // 0x12C
		::System::UInt32 totalScore; // 0x130
		::System::UInt32 totalMonsterTurns; // 0x134
		::System::UInt32 skillUltraCount; // 0x138
		::System::UInt32 totalBattleRounds; // 0x13C
		::System::UInt32 InvasionLevel; // 0x140
		::System::UInt32 totalServantTurns; // 0x144
		::System::UInt32 totalAutoTurns; // 0x148
		::BADALKDAOGH battleEndReason; // 0x14C
		::System::UInt32 challengeTurnLeft; // 0x150
		::System::Boolean isAsWin; // 0x154
		::System::Byte _padding0[0x3];
		::System::Double costTime; // 0x158
		::System::UInt32 totalBattleTurns; // 0x160
		::System::UInt32 challengeTurnCount; // 0x164
		::System::UInt32 totalServantAutoTurns; // 0x168
		::System::Byte _padding1[0x4];
		::System::Double totalDelayCumulate; // 0x170
		::System::UInt32 totalSkillPerformTime; // 0x178
		::System::UInt32 CleanWave; // 0x17C
		::System::Double bossHpPercent; // 0x180
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PVEGAMESTATISTICS_CTOR_OFFSET))(this);
		}

	};
}
