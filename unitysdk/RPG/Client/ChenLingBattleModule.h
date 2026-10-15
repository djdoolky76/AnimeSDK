#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
class DOINPNEOMDK;
class FDDNKPJEMJE;
class IOELPDDJGFJ;
class LCKBHJBKHNH;
class NKLKPLEELIL;
namespace RPG::Client { class ActivityData; }
namespace RPG::Client { class ChenLingBattleDeckInfo; }
namespace RPG::Client { class ChenLingBattleSoldierInfo; }
namespace RPG::Client { class ChenLingBattleStageInfo; }
namespace RPG::Client { class ChenLingPrivilegeInfo; }
namespace RPG::Client::Level { class ChenLingBattleConquerLevelInfo; }
namespace RPG::GameCore { class ChenLingBattleScoreSoldierConfig; }
namespace System { class Object; }

#define RPG_CLIENT_CHENLINGBATTLEMODULE_CCTOR_OFFSET UNITYSDK_OFFSET(0xCA70A50)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0xCA70A30)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCA70590)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_GETRELATEDACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0xCA6EB50)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_GETRESIDENTREWARDID_OFFSET UNITYSDK_OFFSET(0xCA6EA40)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_GETTIMELIMITREWARDID_OFFSET UNITYSDK_OFFSET(0xCA6E930)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_GET_CONQUERLEVELINFO_OFFSET UNITYSDK_OFFSET(0xCA6FEC0)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_GET_DECKINFO_OFFSET UNITYSDK_OFFSET(0xCA6FE80)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_GET_ENCHANTINFO_OFFSET UNITYSDK_OFFSET(0xCA6FEE0)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_GET_PRIVILEGEINFO_OFFSET UNITYSDK_OFFSET(0xCA6FEA0)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_GET_SKILLINFO_OFFSET UNITYSDK_OFFSET(0xCA6FE60)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_GET_SOLDIERINFO_OFFSET UNITYSDK_OFFSET(0xCA6FE20)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_GET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0xCA6FE40)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xCA6FF00)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xCA709D0)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_SET_CONQUERLEVELINFO_OFFSET UNITYSDK_OFFSET(0xCA6FED0)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_SET_DECKINFO_OFFSET UNITYSDK_OFFSET(0xCA6FE90)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_SET_ENCHANTINFO_OFFSET UNITYSDK_OFFSET(0xCA6FEF0)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_SET_PRIVILEGEINFO_OFFSET UNITYSDK_OFFSET(0xCA6FEB0)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_SET_SKILLINFO_OFFSET UNITYSDK_OFFSET(0xCA6FE70)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_SET_SOLDIERINFO_OFFSET UNITYSDK_OFFSET(0xCA6FE30)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_SET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0xCA6FE50)
#define RPG_CLIENT_CHENLINGBATTLEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xCA6EC10)
#define RPG_CLIENT_CHENLINGBATTLEMODULE__HANDLESINGLECHANGE_OFFSET UNITYSDK_OFFSET(0xCA6FA40)
#define RPG_CLIENT_CHENLINGBATTLEMODULE__INITCONSTANTS_OFFSET UNITYSDK_OFFSET(0xCA6E880)
#define RPG_CLIENT_CHENLINGBATTLEMODULE__ONCHENLINGACTIVATEDPRIVILEGESCRSP_OFFSET UNITYSDK_OFFSET(0xCA6FD70)
#define RPG_CLIENT_CHENLINGBATTLEMODULE__ONCHENLINGGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0xCA6F320)
#define RPG_CLIENT_CHENLINGBATTLEMODULE__ONCHENLINGQUITSTAGESCRSP_OFFSET UNITYSDK_OFFSET(0xCA6F270)
#define RPG_CLIENT_CHENLINGBATTLEMODULE__ONCHENLINGSTARTSTAGESCRSP_OFFSET UNITYSDK_OFFSET(0xCA6F070)
#define RPG_CLIENT_CHENLINGBATTLEMODULE__ONCHENLINGSYNCCHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xCA6F610)
#define RPG_CLIENT_CHENLINGBATTLEMODULE__ONFINALSTAGEMAXWAVECHANGE_OFFSET UNITYSDK_OFFSET(0xCA6FC50)
#define RPG_CLIENT_CHENLINGBATTLEMODULE__ONSTAGEPROGRESSCHANGE_OFFSET UNITYSDK_OFFSET(0xCA6F500)
#define RPG_CLIENT_CHENLINGBATTLEMODULE__ONSTAGEWAVEPHASECHANGE_OFFSET UNITYSDK_OFFSET(0xCA6FBB0)
#define RPG_CLIENT_CHENLINGBATTLEMODULE__SENDGETDATAREQ_OFFSET UNITYSDK_OFFSET(0xCA6EF60)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingBattleModule_TypeDefinitionIndex = 61421;

	class ChenLingBattleModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::ChenLingBattleStageInfo* _StageInfo_k__BackingField; // 0x10
		::NKLKPLEELIL* _EnchantInfo_k__BackingField; // 0x18
		::RPG::Client::ChenLingBattleDeckInfo* _DeckInfo_k__BackingField; // 0x20
		::RPG::Client::ChenLingBattleSoldierInfo* _SoldierInfo_k__BackingField; // 0x28
		::RPG::Client::Level::ChenLingBattleConquerLevelInfo* _ConquerLevelInfo_k__BackingField; // 0x30
		::DOINPNEOMDK* _SkillInfo_k__BackingField; // 0x38
		::RPG::GameCore::ChenLingBattleScoreSoldierConfig* BattleScoreSoldierConfig; // 0x40
		::RPG::Client::ChenLingPrivilegeInfo* _PrivilegeInfo_k__BackingField; // 0x48
		static ::System::UInt32* StaticGet_ACTIVITY_OFFERING_ID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "ChenLingBattleModule")->GetStaticField(0x4CB0);
		}

		static ::System::UInt32* StaticGet_ACTIVITY_REWARD_ID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "ChenLingBattleModule")->GetStaticField(0x4CB4);
		}

		static ::System::UInt32* StaticGet_ACTIVITY_ID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "ChenLingBattleModule")->GetStaticField(0x4CB8);
		}

		// static const ::System::String* BattleGameConfigPath; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_CCTOR_OFFSET))();
		}

		::System::Void _InitConstants()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE__INITCONSTANTS_OFFSET))(this);
		}

		::System::UInt32 GetTimeLimitRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_GETTIMELIMITREWARDID_OFFSET))(this);
		}

		::System::UInt32 GetResidentRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_GETRESIDENTREWARDID_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetRelatedActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_GETRELATEDACTIVITYDATA_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _SendGetDataReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE__SENDGETDATAREQ_OFFSET))(this);
		}

		::System::Void _OnChenLingStartStageScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE__ONCHENLINGSTARTSTAGESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnChenLingQuitStageScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE__ONCHENLINGQUITSTAGESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnChenLingGetDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE__ONCHENLINGGETDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnChenLingSyncChangeScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE__ONCHENLINGSYNCCHANGESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _HandleSingleChange(::IOELPDDJGFJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOELPDDJGFJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE__HANDLESINGLECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnStageProgressChange(::FDDNKPJEMJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDDNKPJEMJE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE__ONSTAGEPROGRESSCHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnStageWavePhaseChange(::LCKBHJBKHNH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LCKBHJBKHNH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE__ONSTAGEWAVEPHASECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnFinalStageMaxWaveChange(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE__ONFINALSTAGEMAXWAVECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnChenLingActivatedPrivilegeScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE__ONCHENLINGACTIVATEDPRIVILEGESCRSP_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ChenLingBattleSoldierInfo* get_SoldierInfo()
		{
			return ((::RPG::Client::ChenLingBattleSoldierInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_GET_SOLDIERINFO_OFFSET))(this);
		}

		::System::Void set_SoldierInfo(::RPG::Client::ChenLingBattleSoldierInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattleSoldierInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_SET_SOLDIERINFO_OFFSET))(this, a1);
		}

		::RPG::Client::ChenLingBattleStageInfo* get_StageInfo()
		{
			return ((::RPG::Client::ChenLingBattleStageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_GET_STAGEINFO_OFFSET))(this);
		}

		::System::Void set_StageInfo(::RPG::Client::ChenLingBattleStageInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattleStageInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_SET_STAGEINFO_OFFSET))(this, a1);
		}

		::DOINPNEOMDK* get_SkillInfo()
		{
			return ((::DOINPNEOMDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_GET_SKILLINFO_OFFSET))(this);
		}

		::System::Void set_SkillInfo(::DOINPNEOMDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOINPNEOMDK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_SET_SKILLINFO_OFFSET))(this, a1);
		}

		::RPG::Client::ChenLingBattleDeckInfo* get_DeckInfo()
		{
			return ((::RPG::Client::ChenLingBattleDeckInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_GET_DECKINFO_OFFSET))(this);
		}

		::System::Void set_DeckInfo(::RPG::Client::ChenLingBattleDeckInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattleDeckInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_SET_DECKINFO_OFFSET))(this, a1);
		}

		::RPG::Client::ChenLingPrivilegeInfo* get_PrivilegeInfo()
		{
			return ((::RPG::Client::ChenLingPrivilegeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_GET_PRIVILEGEINFO_OFFSET))(this);
		}

		::System::Void set_PrivilegeInfo(::RPG::Client::ChenLingPrivilegeInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingPrivilegeInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_SET_PRIVILEGEINFO_OFFSET))(this, a1);
		}

		::RPG::Client::Level::ChenLingBattleConquerLevelInfo* get_ConquerLevelInfo()
		{
			return ((::RPG::Client::Level::ChenLingBattleConquerLevelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_GET_CONQUERLEVELINFO_OFFSET))(this);
		}

		::System::Void set_ConquerLevelInfo(::RPG::Client::Level::ChenLingBattleConquerLevelInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Level::ChenLingBattleConquerLevelInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_SET_CONQUERLEVELINFO_OFFSET))(this, a1);
		}

		::NKLKPLEELIL* get_EnchantInfo()
		{
			return ((::NKLKPLEELIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_GET_ENCHANTINFO_OFFSET))(this);
		}

		::System::Void set_EnchantInfo(::NKLKPLEELIL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKLKPLEELIL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_SET_ENCHANTINFO_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_ONRECONNECT_OFFSET))(this);
		}

	};
}
