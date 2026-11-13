#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNLAEDCLICP.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PlanetFesQuestType.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"
class JHACFFJIPHK;
namespace RPG::Client { class PlanetFesQuestData; }
namespace RPG::GameCore { class FinishWayRow; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_CLIENT_PLANETFESQUESTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1E7DC0)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_ACHIEVEMENTLEVEL_OFFSET UNITYSDK_OFFSET(0x1D1F3130)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_CURPROGRESS_OFFSET UNITYSDK_OFFSET(0x1D1F2AA0)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_DESCRIPTIONSTR_OFFSET UNITYSDK_OFFSET(0x1D1F4810)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1D1F56A0)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_DYNAMICTARGETAVATARLEVEL_OFFSET UNITYSDK_OFFSET(0x1D1F2FE0)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_DYNAMICTARGETPROFITRATE_OFFSET UNITYSDK_OFFSET(0x1D1F2FC0)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_FINISHBUSINESSDAY_OFFSET UNITYSDK_OFFSET(0x1D1F2F80)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_FINISHWAYROW_OFFSET UNITYSDK_OFFSET(0x1D1F3020)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1D1F56E0)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_ISACHIEVEMENTVISIBLE_OFFSET UNITYSDK_OFFSET(0x1D1F3910)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_ISCLOSE_OFFSET UNITYSDK_OFFSET(0x1D1F3040)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_ISDOING_OFFSET UNITYSDK_OFFSET(0x1D1F30E0)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x1D1F3090)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_ISLASTACHIEVEMENTLEVEL_OFFSET UNITYSDK_OFFSET(0x1D1F33A0)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_NAMESTR_OFFSET UNITYSDK_OFFSET(0x1D1F39E0)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D1F5680)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_OVERRIDEREWARDID_OFFSET UNITYSDK_OFFSET(0x1D1F3000)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_PREVACHIEVEMENTQUESTDATA_OFFSET UNITYSDK_OFFSET(0x1D1F3600)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_PROGRESSRATIO_OFFSET UNITYSDK_OFFSET(0x1D1F2AC0)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_QUESTID_OFFSET UNITYSDK_OFFSET(0x1D1F2A80)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_QUESTTYPE_OFFSET UNITYSDK_OFFSET(0x1D1F5640)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_REWARDITEMLIST_OFFSET UNITYSDK_OFFSET(0x1D1F5660)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1D1F2FA0)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_TASKTIPS_OFFSET UNITYSDK_OFFSET(0x1D1F56C0)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_TOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0x1D1F2F10)
#define RPG_CLIENT_PLANETFESQUESTDATA_SETTASKOVERRIDEREWARDID_OFFSET UNITYSDK_OFFSET(0x1D1E80B0)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_CURPROGRESS_OFFSET UNITYSDK_OFFSET(0x1D1F2AB0)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1D1F56B0)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_DYNAMICTARGETAVATARLEVEL_OFFSET UNITYSDK_OFFSET(0x1D1F2FF0)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_DYNAMICTARGETPROFITRATE_OFFSET UNITYSDK_OFFSET(0x1D1F2FD0)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_FINISHBUSINESSDAY_OFFSET UNITYSDK_OFFSET(0x1D1F2F90)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_FINISHWAYROW_OFFSET UNITYSDK_OFFSET(0x1D1F3030)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1D1F56F0)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1D1F5690)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_OVERRIDEREWARDID_OFFSET UNITYSDK_OFFSET(0x1D1F3010)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_QUESTID_OFFSET UNITYSDK_OFFSET(0x1D1F2A90)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_QUESTTYPE_OFFSET UNITYSDK_OFFSET(0x1D1F5650)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_REWARDITEMLIST_OFFSET UNITYSDK_OFFSET(0x1D1F5670)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1D1F2FB0)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_TASKTIPS_OFFSET UNITYSDK_OFFSET(0x1D1F56D0)
#define RPG_CLIENT_PLANETFESQUESTDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x1D1E8450)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesQuestData_TypeDefinitionIndex = 68562;

	class PlanetFesQuestData : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* _RewardItemList_k__BackingField; // 0x18
		::System::Numerics::BigInteger _DynamicTargetProfitRate_k__BackingField; // 0x20
		::RPG::GameCore::FinishWayRow* _FinishWayRow_k__BackingField; // 0x30
		::CNLAEDCLICP _State_k__BackingField; // 0x38
		::System::UInt32 _OverrideRewardID_k__BackingField; // 0x3C
		::System::UInt32 _DynamicTargetAvatarLevel_k__BackingField; // 0x40
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _TaskTips_k__BackingField; // 0x48
		::System::UInt32 _FinishBusinessDay_k__BackingField; // 0x58
		::RPG::GameCore::PlanetFesQuestType _QuestType_k__BackingField; // 0x5C
		::RPG::Client::TextID _Name_k__BackingField; // 0x60
		::RPG::Client::TextID _Description_k__BackingField; // 0x70
		::System::UInt32 _CurProgress_k__BackingField; // 0x80
		::System::UInt32 _QuestID_k__BackingField; // 0x84
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Sync(::JHACFFJIPHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JHACFFJIPHK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void SetTaskOverrideRewardID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SETTASKOVERRIDEREWARDID_OFFSET))(this, a1);
		}

		::System::UInt32 get_QuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_QUESTID_OFFSET))(this);
		}

		::System::Void set_QuestID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_QUESTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_CURPROGRESS_OFFSET))(this);
		}

		::System::Void set_CurProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_CURPROGRESS_OFFSET))(this, a1);
		}

		::System::Single get_ProgressRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_PROGRESSRATIO_OFFSET))(this);
		}

		::System::UInt32 get_FinishBusinessDay()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_FINISHBUSINESSDAY_OFFSET))(this);
		}

		::System::Void set_FinishBusinessDay(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_FINISHBUSINESSDAY_OFFSET))(this, a1);
		}

		::CNLAEDCLICP get_State()
		{
			return ((::CNLAEDCLICP(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::CNLAEDCLICP a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNLAEDCLICP))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_STATE_OFFSET))(this, a1);
		}

		::System::Numerics::BigInteger get_DynamicTargetProfitRate()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_DYNAMICTARGETPROFITRATE_OFFSET))(this);
		}

		::System::Void set_DynamicTargetProfitRate(::System::Numerics::BigInteger a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_DYNAMICTARGETPROFITRATE_OFFSET))(this, a1);
		}

		::System::UInt32 get_DynamicTargetAvatarLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_DYNAMICTARGETAVATARLEVEL_OFFSET))(this);
		}

		::System::Void set_DynamicTargetAvatarLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_DYNAMICTARGETAVATARLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_OverrideRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_OVERRIDEREWARDID_OFFSET))(this);
		}

		::System::Void set_OverrideRewardID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_OVERRIDEREWARDID_OFFSET))(this, a1);
		}

		::RPG::GameCore::FinishWayRow* get_FinishWayRow()
		{
			return ((::RPG::GameCore::FinishWayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_FINISHWAYROW_OFFSET))(this);
		}

		::System::Void set_FinishWayRow(::RPG::GameCore::FinishWayRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FinishWayRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_FINISHWAYROW_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_TOTALPROGRESS_OFFSET))(this);
		}

		::System::Boolean get_IsClose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_ISCLOSE_OFFSET))(this);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_ISFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsDoing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_ISDOING_OFFSET))(this);
		}

		::System::UInt32 get_AchievementLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_ACHIEVEMENTLEVEL_OFFSET))(this);
		}

		::System::Boolean get_IsLastAchievementLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_ISLASTACHIEVEMENTLEVEL_OFFSET))(this);
		}

		::RPG::Client::PlanetFesQuestData* get_PrevAchievementQuestData()
		{
			return ((::RPG::Client::PlanetFesQuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_PREVACHIEVEMENTQUESTDATA_OFFSET))(this);
		}

		::System::Boolean get_IsAchievementVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_ISACHIEVEMENTVISIBLE_OFFSET))(this);
		}

		::System::String* get_NameStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_NAMESTR_OFFSET))(this);
		}

		::System::String* get_DescriptionStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_DESCRIPTIONSTR_OFFSET))(this);
		}

		::RPG::GameCore::PlanetFesQuestType get_QuestType()
		{
			return ((::RPG::GameCore::PlanetFesQuestType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_QUESTTYPE_OFFSET))(this);
		}

		::System::Void set_QuestType(::RPG::GameCore::PlanetFesQuestType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesQuestType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_QUESTTYPE_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::ItemConfig*>* get_RewardItemList()
		{
			return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_REWARDITEMLIST_OFFSET))(this);
		}

		::System::Void set_RewardItemList(::Il2CppArray<::RPG::GameCore::ItemConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_REWARDITEMLIST_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_NAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Description()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void set_Description(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_DESCRIPTION_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_TaskTips()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_TASKTIPS_OFFSET))(this);
		}

		::System::Void set_TaskTips(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_TASKTIPS_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_ICONPATH_OFFSET))(this, a1);
		}

	};
}
