#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJMFOABLOCE.h"
#include "unitysdk/RPG/GameCore/RogueMode.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/System/Object.h"
class CCGFLDDDIPN;
class FAPIMOFPHBB;
class FEKLMJPJIKG;
class FGKJPPIIKDN;
class GMMNMPCKJEM;
class HIJGDJLAOKI;
class HOIGPAEEAHD;
class NCAHBIPJHFD;
class NGDGDIGJPFP;
class NIODADALNHA;
class ONIIPFNFOFB;
class PBNONKAIAMK;
namespace RPG::GameCore { class BattleRogueData; }
namespace RPG::GameCore { class LineUpContext; }
namespace RPG::GameCore { class MazeBuffData; }
namespace RPG::GameCore { class StageRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_LINEUPCONTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0xF204B10)
#define RPG_GAMECORE_LINEUPCONTEXT_DEEPCLONE_OFFSET UNITYSDK_OFFSET(0xF204220)
#define RPG_GAMECORE_LINEUPCONTEXT_GETBATTLEACHIEVEMENTDATA_OFFSET UNITYSDK_OFFSET(0xF203B40)
#define RPG_GAMECORE_LINEUPCONTEXT_GETBATTLERAIDTARGETDATA_OFFSET UNITYSDK_OFFSET(0xF203D20)
#define RPG_GAMECORE_LINEUPCONTEXT_GETMONSTERWAVELIST_OFFSET UNITYSDK_OFFSET(0xF203990)
#define RPG_GAMECORE_LINEUPCONTEXT_GETMONSTERWAVESTAGECOUNT_OFFSET UNITYSDK_OFFSET(0xF2039E0)
#define RPG_GAMECORE_LINEUPCONTEXT_GETROGUEGOALDATA_OFFSET UNITYSDK_OFFSET(0xF203F40)
#define RPG_GAMECORE_LINEUPCONTEXT_GET_MAXWAVEOVERRIDE_OFFSET UNITYSDK_OFFSET(0xF205260)
#define RPG_GAMECORE_LINEUPCONTEXT_GET_STAGEBINDINGMAZEBUFFDATALIST_OFFSET UNITYSDK_OFFSET(0xF2051F0)
#define RPG_GAMECORE_LINEUPCONTEXT_GET_STAGECONFIG_OFFSET UNITYSDK_OFFSET(0xF204E50)
#define RPG_GAMECORE_LINEUPCONTEXT_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xF204B70)
#define RPG_GAMECORE_LINEUPCONTEXT_GET_STAGETYPE_OFFSET UNITYSDK_OFFSET(0xF204E30)
#define RPG_GAMECORE_LINEUPCONTEXT_GET_TREATWAVESASINFINITE_OFFSET UNITYSDK_OFFSET(0xF205270)
#define RPG_GAMECORE_LINEUPCONTEXT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xF204B50)
#define RPG_GAMECORE_LINEUPCONTEXT_GET_WAVECOUNT_OFFSET UNITYSDK_OFFSET(0xF205200)
#define RPG_GAMECORE_LINEUPCONTEXT_HASMAZEBUFFDATA_OFFSET UNITYSDK_OFFSET(0xF205160)
#define RPG_GAMECORE_LINEUPCONTEXT_RESET_OFFSET UNITYSDK_OFFSET(0xF203860)
#define RPG_GAMECORE_LINEUPCONTEXT_SETWAVESBYOVERRIDE_OFFSET UNITYSDK_OFFSET(0xF204140)
#define RPG_GAMECORE_LINEUPCONTEXT_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0xF203930)
#define RPG_GAMECORE_LINEUPCONTEXT_SET_STAGETYPE_OFFSET UNITYSDK_OFFSET(0xF204E40)
#define RPG_GAMECORE_LINEUPCONTEXT_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xF204B60)
#define RPG_GAMECORE_LINEUPCONTEXT__ONSTAGEIDCHANGED_OFFSET UNITYSDK_OFFSET(0xF204B80)
#define RPG_GAMECORE_LINEUPCONTEXT__SETUPSTAGEBINDINGMAZEBUFFDATA_OFFSET UNITYSDK_OFFSET(0xF204EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LineUpContext_TypeDefinitionIndex = 57511;

	class LineUpContext : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* AdditionBattleLoseConditions; // 0x10
		::Il2CppArray<::HOIGPAEEAHD*>* BattleRougeGoalList; // 0x18
		::NGDGDIGJPFP* BattleEvolveBuildData; // 0x20
		::GMMNMPCKJEM* BattleGridFightData; // 0x28
		::FGKJPPIIKDN* BattleSwordTrainingData; // 0x30
		::Il2CppArray<::RPG::GameCore::MazeBuffData*>* MazeBuffDataList; // 0x38
		::Il2CppArray<::CCGFLDDDIPN*>* BattleAchievementList; // 0x40
		::Il2CppArray<::RPG::GameCore::MazeBuffData*>* _StageBindingMazeBuffDataList; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::CCGFLDDDIPN*>* _BattleAchievementDataMap; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::HOIGPAEEAHD*>* _BattleChallengeScoreDataMap; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NIODADALNHA*>* _BattleRaidTargetDataMap; // 0x60
		::Il2CppArray<::PBNONKAIAMK*>* BattleScoreList; // 0x68
		::Il2CppArray<::System::String*>* AdditionBattleWinConditions; // 0x70
		::Il2CppArray<::NCAHBIPJHFD*>* AvatarExtraAbilityList; // 0x78
		::Il2CppArray<::PBNONKAIAMK*>* BattleTargetList; // 0x80
		::ONIIPFNFOFB* BattleFateRinData; // 0x88
		::Il2CppArray<::FEKLMJPJIKG*>* MonsterRewardList; // 0x90
		::FAPIMOFPHBB* BattleFateData; // 0x98
		::Il2CppArray<::NIODADALNHA*>* BattleRaidTargetList; // 0xA0
		::System::Collections::Generic::List_1<::RPG::GameCore::MazeBuffData*>* GeneratedBindingBuffList; // 0xA8
		::System::Collections::Generic::List_1<::HIJGDJLAOKI*>* _MonsterWaves; // 0xB0
		::RPG::GameCore::BattleRogueData* BattleRogueData; // 0xB8
		::JJMFOABLOCE _Type_k__BackingField; // 0xC0
		::System::UInt32 BattleActionEventId; // 0xC4
		::System::UInt32 _StageID; // 0xC8
		::System::Boolean _GetOverrideWaveFlag; // 0xCC
		::System::Byte _padding0[0x3];
		::RPG::GameCore::StageType _StageType_k__BackingField; // 0xD0
		::RPG::GameCore::RogueMode BattleRogueMode; // 0xD4
		::System::UInt32 _MaxWaveOverride; // 0xD8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_RESET_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::HIJGDJLAOKI*>* GetMonsterWaveList()
		{
			return ((::System::Collections::Generic::List_1<::HIJGDJLAOKI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_GETMONSTERWAVELIST_OFFSET))(this);
		}

		::System::Int32 GetMonsterWaveStageCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_GETMONSTERWAVESTAGECOUNT_OFFSET))(this);
		}

		::CCGFLDDDIPN* GetBattleAchievementData(::System::UInt32 a1)
		{
			return ((::CCGFLDDDIPN*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_GETBATTLEACHIEVEMENTDATA_OFFSET))(this, a1);
		}

		::NIODADALNHA* GetBattleRaidTargetData(::System::UInt32 a1)
		{
			return ((::NIODADALNHA*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_GETBATTLERAIDTARGETDATA_OFFSET))(this, a1);
		}

		::HOIGPAEEAHD* GetRogueGoalData(::System::UInt32 a1)
		{
			return ((::HOIGPAEEAHD*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_GETROGUEGOALDATA_OFFSET))(this, a1);
		}

		::System::Void SetWavesByOverride(::Il2CppArray<::HIJGDJLAOKI*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::HIJGDJLAOKI*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_SETWAVESBYOVERRIDE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::LineUpContext* DeepClone()
		{
			return ((::RPG::GameCore::LineUpContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_DEEPCLONE_OFFSET))(this);
		}

		::JJMFOABLOCE get_Type()
		{
			return ((::JJMFOABLOCE(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::JJMFOABLOCE a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJMFOABLOCE))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_SET_TYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_GET_STAGEID_OFFSET))(this);
		}

		::System::Void set_StageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_SET_STAGEID_OFFSET))(this, a1);
		}

		::RPG::GameCore::StageType get_StageType()
		{
			return ((::RPG::GameCore::StageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_GET_STAGETYPE_OFFSET))(this);
		}

		::System::Void set_StageType(::RPG::GameCore::StageType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_SET_STAGETYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::StageRow* get_StageConfig()
		{
			return ((::RPG::GameCore::StageRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_GET_STAGECONFIG_OFFSET))(this);
		}

		::System::Void _OnStageIDChanged(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT__ONSTAGEIDCHANGED_OFFSET))(this, a1);
		}

		::System::Void _SetupStageBindingMazeBuffData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT__SETUPSTAGEBINDINGMAZEBUFFDATA_OFFSET))(this);
		}

		::System::Boolean HasMazeBuffData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_HASMAZEBUFFDATA_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::MazeBuffData*>* get_StageBindingMazeBuffDataList()
		{
			return ((::Il2CppArray<::RPG::GameCore::MazeBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_GET_STAGEBINDINGMAZEBUFFDATALIST_OFFSET))(this);
		}

		::System::Int32 get_WaveCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_GET_WAVECOUNT_OFFSET))(this);
		}

		::System::UInt32 get_MaxWaveOverride()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_GET_MAXWAVEOVERRIDE_OFFSET))(this);
		}

		::System::Boolean get_TreatWavesAsInfinite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_GET_TREATWAVESASINFINITE_OFFSET))(this);
		}

	};
}
