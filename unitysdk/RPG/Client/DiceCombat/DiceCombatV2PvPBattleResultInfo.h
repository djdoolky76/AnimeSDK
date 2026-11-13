#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatV2BattleResultInfo.h"
class DDKNIMHHNPA;
namespace RPG::Client { class PlayerPlatformInfo; }
namespace RPG::Client::DiceCombat { class DiceCombatBattlePlayerInfo; }
namespace RPG::Client::DiceCombat { class DiceCombatV2PvPBattleResultInfo; }
namespace RPG::Client::DiceCombat { class DiceCombatV2PvPScoreData; }
namespace RPG::Client::DiceCombat { class DiceCombatV2PvPTitleData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x1C536C80)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5371D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_GET_LOCALPLAYERTITLEDATA_OFFSET UNITYSDK_OFFSET(0x1C537130)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_GET_SCOREDATAS_OFFSET UNITYSDK_OFFSET(0x1C537170)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_GET_TEAMMATEPLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x1C5371B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_GET_TEAMMATETITLEDATA_OFFSET UNITYSDK_OFFSET(0x1C537150)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_GET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0x1C537190)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_SET_LOCALPLAYERTITLEDATA_OFFSET UNITYSDK_OFFSET(0x1C537140)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_SET_SCOREDATAS_OFFSET UNITYSDK_OFFSET(0x1C537180)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_SET_TEAMMATEPLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x1C5371C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_SET_TEAMMATETITLEDATA_OFFSET UNITYSDK_OFFSET(0x1C537160)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_SET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0x1C5371A0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2PvPBattleResultInfo_TypeDefinitionIndex = 78472;

	class DiceCombatV2PvPBattleResultInfo : public ::RPG::Client::DiceCombat::DiceCombatV2BattleResultInfo
	{
	public:
		::RPG::Client::DiceCombat::DiceCombatV2PvPTitleData* _TeamMateTitleData_k__BackingField; // 0x48
		::RPG::Client::PlayerPlatformInfo* _TeamMatePlatformInfo_k__BackingField; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatV2PvPScoreData*>* _ScoreDatas_k__BackingField; // 0x58
		::RPG::Client::DiceCombat::DiceCombatV2PvPTitleData* _LocalPlayerTitleData_k__BackingField; // 0x60
		::System::UInt32 _TotalScore_k__BackingField; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_CTOR_OFFSET))(this);
		}

		::RPG::Client::DiceCombat::DiceCombatV2PvPTitleData* get_LocalPlayerTitleData()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2PvPTitleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_GET_LOCALPLAYERTITLEDATA_OFFSET))(this);
		}

		::System::Void set_LocalPlayerTitleData(::RPG::Client::DiceCombat::DiceCombatV2PvPTitleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2PvPTitleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_SET_LOCALPLAYERTITLEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::DiceCombat::DiceCombatV2PvPTitleData* get_TeamMateTitleData()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2PvPTitleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_GET_TEAMMATETITLEDATA_OFFSET))(this);
		}

		::System::Void set_TeamMateTitleData(::RPG::Client::DiceCombat::DiceCombatV2PvPTitleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2PvPTitleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_SET_TEAMMATETITLEDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatV2PvPScoreData*>* get_ScoreDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatV2PvPScoreData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_GET_SCOREDATAS_OFFSET))(this);
		}

		::System::Void set_ScoreDatas(::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatV2PvPScoreData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatV2PvPScoreData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_SET_SCOREDATAS_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_GET_TOTALSCORE_OFFSET))(this);
		}

		::System::Void set_TotalScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_SET_TOTALSCORE_OFFSET))(this, a1);
		}

		::RPG::Client::PlayerPlatformInfo* get_TeamMatePlatformInfo()
		{
			return ((::RPG::Client::PlayerPlatformInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_GET_TEAMMATEPLATFORMINFO_OFFSET))(this);
		}

		::System::Void set_TeamMatePlatformInfo(::RPG::Client::PlayerPlatformInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerPlatformInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_SET_TEAMMATEPLATFORMINFO_OFFSET))(this, a1);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2PvPBattleResultInfo* Create(::RPG::Client::DiceCombat::DiceCombatBattlePlayerInfo* a1, ::RPG::Client::DiceCombat::DiceCombatBattlePlayerInfo* a2, ::RPG::Client::DiceCombat::DiceCombatBattlePlayerInfo* a3, ::DDKNIMHHNPA* a4)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2PvPBattleResultInfo*(*)(::RPG::Client::DiceCombat::DiceCombatBattlePlayerInfo*, ::RPG::Client::DiceCombat::DiceCombatBattlePlayerInfo*, ::RPG::Client::DiceCombat::DiceCombatBattlePlayerInfo*, ::DDKNIMHHNPA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLERESULTINFO_CREATE_OFFSET))(a1, a2, a3, a4);
		}

	};
}
