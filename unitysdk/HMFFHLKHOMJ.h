#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamTowersLevelGameMode.h"
#include "unitysdk/System/Object.h"
class CLCOAJDPMJN;
class DCIAAMADOGH;
class HDLCAPDIKJI;
class HMFFHLKHOMJ;
namespace RPG::Client { class PlayerPlatformInfo; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HMFFHLKHOMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1A34E1B0)
#define HMFFHLKHOMJ_GEJLOLCAEAB_OFFSET UNITYSDK_OFFSET(0x1A34E0F0)
#define HMFFHLKHOMJ_GET_ACHIEVEMENTIDLIST_OFFSET UNITYSDK_OFFSET(0x1A34DE50)
#define HMFFHLKHOMJ_GET_ALLYOUTPUTNUM_OFFSET UNITYSDK_OFFSET(0x1A34DE90)
#define HMFFHLKHOMJ_GET_ALLYPLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x1A34DFF0)
#define HMFFHLKHOMJ_GET_BREAKRECORD_OFFSET UNITYSDK_OFFSET(0x1A34DEB0)
#define HMFFHLKHOMJ_GET_BREAKWAVECOUNTRECORD_OFFSET UNITYSDK_OFFSET(0x1A34DED0)
#define HMFFHLKHOMJ_GET_BRICKCOUNT_OFFSET UNITYSDK_OFFSET(0x1A34E050)
#define HMFFHLKHOMJ_GET_CASTSKILLINFOLIST_OFFSET UNITYSDK_OFFSET(0x1A34DE10)
#define HMFFHLKHOMJ_GET_DEADCOUNT_OFFSET UNITYSDK_OFFSET(0x1A34DDD0)
#define HMFFHLKHOMJ_GET_EXPOBTAINED_OFFSET UNITYSDK_OFFSET(0x1A34DF50)
#define HMFFHLKHOMJ_GET_FIRSTPASS_OFFSET UNITYSDK_OFFSET(0x1A34DF90)
#define HMFFHLKHOMJ_GET_HEIGHTLINECOUNT_OFFSET UNITYSDK_OFFSET(0x1A34DDF0)
#define HMFFHLKHOMJ_GET_ISPVPMODE_OFFSET UNITYSDK_OFFSET(0x1A34E010)
#define HMFFHLKHOMJ_GET_LEVELGAMEMODE_OFFSET UNITYSDK_OFFSET(0x1A34E030)
#define HMFFHLKHOMJ_GET_PLAYEROUTPUTNUM_OFFSET UNITYSDK_OFFSET(0x1A34DE70)
#define HMFFHLKHOMJ_GET_PLAYERPLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x1A34DFD0)
#define HMFFHLKHOMJ_GET_PREVEXTRAEXP_OFFSET UNITYSDK_OFFSET(0x1A34DF10)
#define HMFFHLKHOMJ_GET_PREVLEVELTOTALEXP_OFFSET UNITYSDK_OFFSET(0x1A34DF30)
#define HMFFHLKHOMJ_GET_PREVLEVEL_OFFSET UNITYSDK_OFFSET(0x1A34DEF0)
#define HMFFHLKHOMJ_GET_SETTLEEXPINFOLIST_OFFSET UNITYSDK_OFFSET(0x1A34DFB0)
#define HMFFHLKHOMJ_GET_SILVERWOLFEXTRAEXP_OFFSET UNITYSDK_OFFSET(0x1A34DF70)
#define HMFFHLKHOMJ_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x1A34DDB0)
#define HMFFHLKHOMJ_GET_STARIDLIST_OFFSET UNITYSDK_OFFSET(0x1A34DE30)
#define HMFFHLKHOMJ_GET_SUCCESS_OFFSET UNITYSDK_OFFSET(0x1A34DD90)
#define HMFFHLKHOMJ_GET_WAVECOUNT_OFFSET UNITYSDK_OFFSET(0x1A34E070)
#define HMFFHLKHOMJ_HMGOMCHPFGB_OFFSET UNITYSDK_OFFSET(0x1A34E090)
#define HMFFHLKHOMJ_KHEFLOHLHGP_OFFSET UNITYSDK_OFFSET(0x1A34D7F0)
#define HMFFHLKHOMJ_PKOJCCBDDNK_OFFSET UNITYSDK_OFFSET(0x1A34E150)
#define HMFFHLKHOMJ_PPACFGBCLAM_OFFSET UNITYSDK_OFFSET(0x1A34D850)
#define HMFFHLKHOMJ_SET_ACHIEVEMENTIDLIST_OFFSET UNITYSDK_OFFSET(0x1A34DE60)
#define HMFFHLKHOMJ_SET_ALLYOUTPUTNUM_OFFSET UNITYSDK_OFFSET(0x1A34DEA0)
#define HMFFHLKHOMJ_SET_ALLYPLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x1A34E000)
#define HMFFHLKHOMJ_SET_BREAKRECORD_OFFSET UNITYSDK_OFFSET(0x1A34DEC0)
#define HMFFHLKHOMJ_SET_BREAKWAVECOUNTRECORD_OFFSET UNITYSDK_OFFSET(0x1A34DEE0)
#define HMFFHLKHOMJ_SET_BRICKCOUNT_OFFSET UNITYSDK_OFFSET(0x1A34E060)
#define HMFFHLKHOMJ_SET_CASTSKILLINFOLIST_OFFSET UNITYSDK_OFFSET(0x1A34DE20)
#define HMFFHLKHOMJ_SET_DEADCOUNT_OFFSET UNITYSDK_OFFSET(0x1A34DDE0)
#define HMFFHLKHOMJ_SET_EXPOBTAINED_OFFSET UNITYSDK_OFFSET(0x1A34DF60)
#define HMFFHLKHOMJ_SET_FIRSTPASS_OFFSET UNITYSDK_OFFSET(0x1A34DFA0)
#define HMFFHLKHOMJ_SET_HEIGHTLINECOUNT_OFFSET UNITYSDK_OFFSET(0x1A34DE00)
#define HMFFHLKHOMJ_SET_ISPVPMODE_OFFSET UNITYSDK_OFFSET(0x1A34E020)
#define HMFFHLKHOMJ_SET_LEVELGAMEMODE_OFFSET UNITYSDK_OFFSET(0x1A34E040)
#define HMFFHLKHOMJ_SET_PLAYEROUTPUTNUM_OFFSET UNITYSDK_OFFSET(0x1A34DE80)
#define HMFFHLKHOMJ_SET_PLAYERPLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x1A34DFE0)
#define HMFFHLKHOMJ_SET_PREVEXTRAEXP_OFFSET UNITYSDK_OFFSET(0x1A34DF20)
#define HMFFHLKHOMJ_SET_PREVLEVELTOTALEXP_OFFSET UNITYSDK_OFFSET(0x1A34DF40)
#define HMFFHLKHOMJ_SET_PREVLEVEL_OFFSET UNITYSDK_OFFSET(0x1A34DF00)
#define HMFFHLKHOMJ_SET_SETTLEEXPINFOLIST_OFFSET UNITYSDK_OFFSET(0x1A34DFC0)
#define HMFFHLKHOMJ_SET_SILVERWOLFEXTRAEXP_OFFSET UNITYSDK_OFFSET(0x1A34DF80)
#define HMFFHLKHOMJ_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0x1A34DDC0)
#define HMFFHLKHOMJ_SET_STARIDLIST_OFFSET UNITYSDK_OFFSET(0x1A34DE40)
#define HMFFHLKHOMJ_SET_SUCCESS_OFFSET UNITYSDK_OFFSET(0x1A34DDA0)
#define HMFFHLKHOMJ_SET_WAVECOUNT_OFFSET UNITYSDK_OFFSET(0x1A34E080)

inline static constexpr unsigned int HMFFHLKHOMJ_TypeDefinitionIndex = 81814;

	class HMFFHLKHOMJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _StarIDList_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::HDLCAPDIKJI*>* _CastSkillInfoList_k__BackingField; // 0x18
		::RPG::Client::PlayerPlatformInfo* _PlayerPlatformInfo_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _AchievementIDList_k__BackingField; // 0x28
		::RPG::Client::PlayerPlatformInfo* _AllyPlatformInfo_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::DCIAAMADOGH*>* _SettleExpInfoList_k__BackingField; // 0x38
		::System::UInt32 _ExpObtained_k__BackingField; // 0x40
		::System::UInt32 _PrevExtraExp_k__BackingField; // 0x44
		::System::UInt32 _DeadCount_k__BackingField; // 0x48
		::System::UInt32 _StageID_k__BackingField; // 0x4C
		::System::UInt32 _PrevLevelTotalExp_k__BackingField; // 0x50
		::System::UInt32 _SilverWolfExtraExp_k__BackingField; // 0x54
		::System::UInt32 _BrickCount_k__BackingField; // 0x58
		::System::UInt32 _HeightLineCount_k__BackingField; // 0x5C
		::System::Boolean _BreakWaveCountRecord_k__BackingField; // 0x60
		::System::Boolean _FirstPass_k__BackingField; // 0x61
		::System::Byte _padding0[0x2];
		::System::UInt32 _PrevLevel_k__BackingField; // 0x64
		::System::UInt32 _WaveCount_k__BackingField; // 0x68
		::System::UInt32 _AllyOutputNum_k__BackingField; // 0x6C
		::System::UInt32 _PlayerOutputNum_k__BackingField; // 0x70
		::RPG::GameCore::TeamTowersLevelGameMode _LevelGameMode_k__BackingField; // 0x74
		::System::Boolean _BreakRecord_k__BackingField; // 0x75
		::System::Boolean _IsPvpMode_k__BackingField; // 0x76
		::System::Boolean _Success_k__BackingField; // 0x77
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_CTOR_OFFSET))(this);
		}

		::System::Void KHEFLOHLHGP(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_KHEFLOHLHGP_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Promises::IPromise_1<::HMFFHLKHOMJ*>* PPACFGBCLAM(::CLCOAJDPMJN* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::HMFFHLKHOMJ*>*(*)(::PVOID, ::CLCOAJDPMJN*))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_PPACFGBCLAM_OFFSET))(this, a1);
		}

		::System::Boolean get_Success()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_GET_SUCCESS_OFFSET))(this);
		}

		::System::Void set_Success(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_SET_SUCCESS_OFFSET))(this, a1);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_GET_STAGEID_OFFSET))(this);
		}

		::System::Void set_StageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_SET_STAGEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_DeadCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_GET_DEADCOUNT_OFFSET))(this);
		}

		::System::Void set_DeadCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_SET_DEADCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_HeightLineCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_GET_HEIGHTLINECOUNT_OFFSET))(this);
		}

		::System::Void set_HeightLineCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_SET_HEIGHTLINECOUNT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::HDLCAPDIKJI*>* get_CastSkillInfoList()
		{
			return ((::System::Collections::Generic::List_1<::HDLCAPDIKJI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_GET_CASTSKILLINFOLIST_OFFSET))(this);
		}

		::System::Void set_CastSkillInfoList(::System::Collections::Generic::List_1<::HDLCAPDIKJI*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HDLCAPDIKJI*>*))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_SET_CASTSKILLINFOLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_StarIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_GET_STARIDLIST_OFFSET))(this);
		}

		::System::Void set_StarIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_SET_STARIDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AchievementIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_GET_ACHIEVEMENTIDLIST_OFFSET))(this);
		}

		::System::Void set_AchievementIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_SET_ACHIEVEMENTIDLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_PlayerOutputNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_GET_PLAYEROUTPUTNUM_OFFSET))(this);
		}

		::System::Void set_PlayerOutputNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_SET_PLAYEROUTPUTNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_AllyOutputNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_GET_ALLYOUTPUTNUM_OFFSET))(this);
		}

		::System::Void set_AllyOutputNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_SET_ALLYOUTPUTNUM_OFFSET))(this, a1);
		}

		::System::Boolean get_BreakRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_GET_BREAKRECORD_OFFSET))(this);
		}

		::System::Void set_BreakRecord(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_SET_BREAKRECORD_OFFSET))(this, a1);
		}

		::System::Boolean get_BreakWaveCountRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_GET_BREAKWAVECOUNTRECORD_OFFSET))(this);
		}

		::System::Void set_BreakWaveCountRecord(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_SET_BREAKWAVECOUNTRECORD_OFFSET))(this, a1);
		}

		::System::UInt32 get_PrevLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_GET_PREVLEVEL_OFFSET))(this);
		}

		::System::Void set_PrevLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_SET_PREVLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_PrevExtraExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_GET_PREVEXTRAEXP_OFFSET))(this);
		}

		::System::Void set_PrevExtraExp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_SET_PREVEXTRAEXP_OFFSET))(this, a1);
		}

		::System::UInt32 get_PrevLevelTotalExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_GET_PREVLEVELTOTALEXP_OFFSET))(this);
		}

		::System::Void set_PrevLevelTotalExp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_SET_PREVLEVELTOTALEXP_OFFSET))(this, a1);
		}

		::System::UInt32 get_ExpObtained()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_GET_EXPOBTAINED_OFFSET))(this);
		}

		::System::Void set_ExpObtained(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_SET_EXPOBTAINED_OFFSET))(this, a1);
		}

		::System::UInt32 get_SilverWolfExtraExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_GET_SILVERWOLFEXTRAEXP_OFFSET))(this);
		}

		::System::Void set_SilverWolfExtraExp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_SET_SILVERWOLFEXTRAEXP_OFFSET))(this, a1);
		}

		::System::Boolean get_FirstPass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_GET_FIRSTPASS_OFFSET))(this);
		}

		::System::Void set_FirstPass(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_SET_FIRSTPASS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::DCIAAMADOGH*>* get_SettleExpInfoList()
		{
			return ((::System::Collections::Generic::List_1<::DCIAAMADOGH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_GET_SETTLEEXPINFOLIST_OFFSET))(this);
		}

		::System::Void set_SettleExpInfoList(::System::Collections::Generic::List_1<::DCIAAMADOGH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DCIAAMADOGH*>*))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_SET_SETTLEEXPINFOLIST_OFFSET))(this, a1);
		}

		::RPG::Client::PlayerPlatformInfo* get_PlayerPlatformInfo()
		{
			return ((::RPG::Client::PlayerPlatformInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_GET_PLAYERPLATFORMINFO_OFFSET))(this);
		}

		::System::Void set_PlayerPlatformInfo(::RPG::Client::PlayerPlatformInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerPlatformInfo*))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_SET_PLAYERPLATFORMINFO_OFFSET))(this, a1);
		}

		::RPG::Client::PlayerPlatformInfo* get_AllyPlatformInfo()
		{
			return ((::RPG::Client::PlayerPlatformInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_GET_ALLYPLATFORMINFO_OFFSET))(this);
		}

		::System::Void set_AllyPlatformInfo(::RPG::Client::PlayerPlatformInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerPlatformInfo*))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_SET_ALLYPLATFORMINFO_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPvpMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_GET_ISPVPMODE_OFFSET))(this);
		}

		::System::Void set_IsPvpMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_SET_ISPVPMODE_OFFSET))(this, a1);
		}

		::RPG::GameCore::TeamTowersLevelGameMode get_LevelGameMode()
		{
			return ((::RPG::GameCore::TeamTowersLevelGameMode(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_GET_LEVELGAMEMODE_OFFSET))(this);
		}

		::System::Void set_LevelGameMode(::RPG::GameCore::TeamTowersLevelGameMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamTowersLevelGameMode))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_SET_LEVELGAMEMODE_OFFSET))(this, a1);
		}

		::System::UInt32 get_BrickCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_GET_BRICKCOUNT_OFFSET))(this);
		}

		::System::Void set_BrickCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_SET_BRICKCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_WaveCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_GET_WAVECOUNT_OFFSET))(this);
		}

		::System::Void set_WaveCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_SET_WAVECOUNT_OFFSET))(this, a1);
		}

		::System::Boolean HMGOMCHPFGB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_HMGOMCHPFGB_OFFSET))(this);
		}

		::System::Boolean GEJLOLCAEAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_GEJLOLCAEAB_OFFSET))(this);
		}

		::System::Boolean PKOJCCBDDNK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFFHLKHOMJ_PKOJCCBDDNK_OFFSET))(this);
		}

	};
