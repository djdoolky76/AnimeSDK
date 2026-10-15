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

#define RPG_GAMECORE_PVEGAMESTATISTICS_CTOR_OFFSET UNITYSDK_OFFSET(0xE712EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PVEGameStatistics_TypeDefinitionIndex = 57631;

	class PVEGameStatistics : public ::System::Object
	{
	public:
		::GBJMLKNLEPD* ActivityStt; // 0x10
		::FMEKABDGCEC* FateStt; // 0x18
		::System::Collections::Generic::List_1<::CDMPJODLBEE*>* AetherDivideSpiritPropertyInfos; // 0x20
		::CKOKAGGLKHG* ExpeditionStt; // 0x28
		::System::Collections::Generic::List_1<::COMGNGLLCFN*>* battleClientAchievementList; // 0x30
		::EANJJJPKIPJ* RogueStt; // 0x38
		::KNBMAPNNDJL* ElationStt; // 0x40
		::BJOFJDKIOPG* ChallengeFeverTimeStat; // 0x48
		::System::Collections::Generic::List_1<::BMKIIODBMJF*>* waveStt; // 0x50
		::System::Collections::Generic::List_1<::COMGNGLLCFN*>* battleRaidTargetList; // 0x58
		::Il2CppArray<::System::UInt32>* totalSkillUseTimes; // 0x60
		::System::Collections::Generic::List_1<::System::UInt32>* InvasionMonsterList; // 0x68
		::OJEANLINGCJ* FeverTimeStat; // 0x70
		::System::Collections::Generic::List_1<::AFGMNFFBBIG*>* monsterPhaseChangeInfos; // 0x78
		::System::Collections::Generic::List_1<::HFALLFOEHKN*>* servantBattleInfoList; // 0x80
		::System::Collections::Generic::List_1<::System::UInt32>* lightTeam; // 0x88
		::System::Collections::Generic::List_1<::COMGNGLLCFN*>* battleChallengeScoreList; // 0x90
		::Il2CppArray<::RPG::GameCore::PVECharacterStt*>* lightTeamStt; // 0x98
		::System::Collections::Generic::List_1<::KHJJGHDAPFD*>* avatarGlobalBuffInfoList; // 0xA0
		::System::Collections::Generic::List_1<::HDKEPPDIDIH*>* avatarDeathInfos; // 0xA8
		::System::Collections::Generic::List_1<::COMGNGLLCFN*>* battleTargetList; // 0xB0
		::System::Collections::Generic::List_1<::System::Int32>* avatarBPChain; // 0xB8
		::NGDGDIGJPFP* EvolveBuild; // 0xC0
		::System::Collections::Generic::List_1<::LOHBCIPAIPI*>* battleEventBattleInfoList; // 0xC8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* customValues; // 0xD0
		::System::Collections::Generic::List_1<::COMGNGLLCFN*>* battleScoringList; // 0xD8
		::System::Collections::Generic::List_1<::ABIEGBANPEE*>* statisticEvents; // 0xE0
		::FAHGFCIJHFK* FateRinStt; // 0xE8
		::System::Collections::Generic::List_1<::COMGNGLLCFN*>* battleAchievementList; // 0xF0
		::System::Collections::Generic::List_1<::FCDDPJIEDGP*>* monsterBattleInfoList; // 0xF8
		::MGMJOPHJCNL* GridFightStt; // 0x100
		::Il2CppArray<::System::UInt32>* totalInsertAbilityTimes; // 0x108
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Double>* reportCustomValues; // 0x110
		::System::Collections::Generic::List_1<::DPMFBDHCNNO*>* lightTeamBattleInfoList; // 0x118
		::System::Collections::Generic::List_1<::MKICACCMBOF*>* ActionBarEventInfos; // 0x120
		::System::UInt32 challengeTurnLeft; // 0x128
		::System::UInt32 totalScore; // 0x12C
		::System::UInt32 challengeTurnCount; // 0x130
		::System::Byte _padding0[0x4];
		::System::Double totalDelayCumulate; // 0x138
		::System::UInt32 totalServantTurns; // 0x140
		::BADALKDAOGH battleEndReason; // 0x144
		::System::UInt32 totalServantAutoTurns; // 0x148
		::System::UInt32 totalBattleRounds; // 0x14C
		::System::UInt32 totalAvatarTurns; // 0x150
		::System::UInt32 totalAutoTurns; // 0x154
		::System::Double bossHpPercent; // 0x158
		::System::Double costTime; // 0x160
		::System::UInt32 CleanWave; // 0x168
		::System::UInt32 skillUltraCount; // 0x16C
		::System::Boolean isAsWin; // 0x170
		::System::Byte _padding1[0x3];
		::System::UInt32 InvasionLevel; // 0x174
		::System::UInt32 maxLightTeamComboTurn; // 0x178
		::System::UInt32 totalSkillPerformTime; // 0x17C
		::System::UInt32 totalBattleTurns; // 0x180
		::System::UInt32 totalMonsterTurns; // 0x184
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PVEGAMESTATISTICS_CTOR_OFFSET))(this);
		}

	};
}
