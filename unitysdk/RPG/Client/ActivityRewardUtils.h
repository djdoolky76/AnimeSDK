#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ActivityRewardUtils_MultiIDCheckerFunc; }
namespace RPG::Client { class ActivityRewardUtils_QuestCheckerFunc; }
namespace RPG::Client { class IActivityQuestRewardData; }
namespace RPG::Client { class QuestData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class ActivityQuestRewardConfigRow; }
namespace RPG::GameCore { class ActivityQuestRewardDataRow; }
namespace RPG::GameCore { class ActivityQuestRewardTabRow; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYREWARDUTILS_CREATECOMMONACTIVITYQUESTREWARDDATA_OFFSET UNITYSDK_OFFSET(0x1DCB9490)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_GETQUESTDATA_OFFSET UNITYSDK_OFFSET(0x1DCB93E0)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_GETQUESTIDSBYREWARDCONFIGID_OFFSET UNITYSDK_OFFSET(0x1DCBA2D0)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_GETQUESTIDSBYREWARDCONFIGROW_OFFSET UNITYSDK_OFFSET(0x1DCBA330)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_GETQUESTIDSBYTABGROUPID_OFFSET UNITYSDK_OFFSET(0x1DCBA490)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_GETQUESTIDSBYTABGROUPROW_OFFSET UNITYSDK_OFFSET(0x1DCBA500)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_GETQUESTIDSBYTABID_OFFSET UNITYSDK_OFFSET(0x1DCBA650)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_GETQUESTIDSBYTABROW_OFFSET UNITYSDK_OFFSET(0x1DCBA6C0)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_GETSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x1DCBA780)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_ISACTIVITYREWARDSHOWREDDOT_1_OFFSET UNITYSDK_OFFSET(0x1DCB95D0)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_ISACTIVITYREWARDSHOWREDDOT_OFFSET UNITYSDK_OFFSET(0x1DCB9570)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_ISALLACTIVITYREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x1DCB9E00)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_ISANYACTIVITYREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x1DCBA0A0)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_ISTABGROUPSHOWREDDOT_1_OFFSET UNITYSDK_OFFSET(0x1DCB9820)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_ISTABGROUPSHOWREDDOT_OFFSET UNITYSDK_OFFSET(0x1DCB97C0)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_ISTABSHOWREDDOT_1_OFFSET UNITYSDK_OFFSET(0x1DCB99B0)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_ISTABSHOWREDDOT_OFFSET UNITYSDK_OFFSET(0x1DCB9950)
#define RPG_CLIENT_ACTIVITYREWARDUTILS__CHECKMULTIIDAND_OFFSET UNITYSDK_OFFSET(0x1DCBA8E0)
#define RPG_CLIENT_ACTIVITYREWARDUTILS__CHECKMULTIIDOR_OFFSET UNITYSDK_OFFSET(0x1DCBA980)
#define RPG_CLIENT_ACTIVITYREWARDUTILS__ISACTIVITYREWARDQUESTPASS_OFFSET UNITYSDK_OFFSET(0x1DCB9B30)
#define RPG_CLIENT_ACTIVITYREWARDUTILS__ISQUESTREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x1DCBA050)
#define RPG_CLIENT_ACTIVITYREWARDUTILS__ISQUESTSHOWREDDOT_OFFSET UNITYSDK_OFFSET(0x1DCB9AE0)
#define RPG_CLIENT_ACTIVITYREWARDUTILS__ISTABGROUPQUESTPASS_OFFSET UNITYSDK_OFFSET(0x1DCB9C20)
#define RPG_CLIENT_ACTIVITYREWARDUTILS__ISTABQUESTPASS_OFFSET UNITYSDK_OFFSET(0x1DCB9D10)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityRewardUtils_TypeDefinitionIndex = 63151;

	class ActivityRewardUtils : public ::System::Object
	{
	public:
		static ::RPG::Client::QuestData* GetQuestData(::System::UInt32 a1)
		{
			return ((::RPG::Client::QuestData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_GETQUESTDATA_OFFSET))(a1);
		}

		static ::RPG::Client::IActivityQuestRewardData* CreateCommonActivityQuestRewardData(::System::UInt32 a1)
		{
			return ((::RPG::Client::IActivityQuestRewardData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_CREATECOMMONACTIVITYQUESTREWARDDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsActivityRewardShowRedDot(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_ISACTIVITYREWARDSHOWREDDOT_OFFSET))(a1);
		}

		static ::System::Boolean IsTabGroupShowRedDot(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_ISTABGROUPSHOWREDDOT_OFFSET))(a1);
		}

		static ::System::Boolean IsTabShowRedDot(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_ISTABSHOWREDDOT_OFFSET))(a1);
		}

		static ::System::Boolean IsActivityRewardShowRedDot_1(::RPG::GameCore::ActivityQuestRewardConfigRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ActivityQuestRewardConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_ISACTIVITYREWARDSHOWREDDOT_1_OFFSET))(a1);
		}

		static ::System::Boolean IsTabGroupShowRedDot_1(::RPG::GameCore::ActivityQuestRewardTabRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ActivityQuestRewardTabRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_ISTABGROUPSHOWREDDOT_1_OFFSET))(a1);
		}

		static ::System::Boolean IsTabShowRedDot_1(::RPG::GameCore::ActivityQuestRewardDataRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ActivityQuestRewardDataRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_ISTABSHOWREDDOT_1_OFFSET))(a1);
		}

		static ::System::Boolean _IsQuestShowRedDot(::RPG::Client::QuestData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS__ISQUESTSHOWREDDOT_OFFSET))(a1);
		}

		static ::System::Boolean IsAllActivityRewardTaken(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_ISALLACTIVITYREWARDTAKEN_OFFSET))(a1);
		}

		static ::System::Boolean IsAnyActivityRewardTaken(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_ISANYACTIVITYREWARDTAKEN_OFFSET))(a1);
		}

		static ::System::Boolean _IsQuestRewardTaken(::RPG::Client::QuestData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS__ISQUESTREWARDTAKEN_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetQuestIDsByRewardConfigID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_GETQUESTIDSBYREWARDCONFIGID_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetQuestIDsByTabGroupID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_GETQUESTIDSBYTABGROUPID_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetQuestIDsByTabID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_GETQUESTIDSBYTABID_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetQuestIDsByRewardConfigRow(::RPG::GameCore::ActivityQuestRewardConfigRow* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::RPG::GameCore::ActivityQuestRewardConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_GETQUESTIDSBYREWARDCONFIGROW_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetQuestIDsByTabGroupRow(::RPG::GameCore::ActivityQuestRewardTabRow* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::RPG::GameCore::ActivityQuestRewardTabRow*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_GETQUESTIDSBYTABGROUPROW_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetQuestIDsByTabRow(::RPG::GameCore::ActivityQuestRewardDataRow* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::RPG::GameCore::ActivityQuestRewardDataRow*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_GETQUESTIDSBYTABROW_OFFSET))(a1, a2);
		}

		static ::RPG::Client::ScheduleData* GetScheduleData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ScheduleData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_GETSCHEDULEDATA_OFFSET))(a1);
		}

		static ::System::Boolean _IsActivityRewardQuestPass(::RPG::GameCore::ActivityQuestRewardConfigRow* a1, ::RPG::Client::ActivityRewardUtils_MultiIDCheckerFunc* a2, ::RPG::Client::ActivityRewardUtils_QuestCheckerFunc* a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ActivityQuestRewardConfigRow*, ::RPG::Client::ActivityRewardUtils_MultiIDCheckerFunc*, ::RPG::Client::ActivityRewardUtils_QuestCheckerFunc*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS__ISACTIVITYREWARDQUESTPASS_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean _IsTabGroupQuestPass(::RPG::GameCore::ActivityQuestRewardTabRow* a1, ::RPG::Client::ActivityRewardUtils_MultiIDCheckerFunc* a2, ::RPG::Client::ActivityRewardUtils_QuestCheckerFunc* a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ActivityQuestRewardTabRow*, ::RPG::Client::ActivityRewardUtils_MultiIDCheckerFunc*, ::RPG::Client::ActivityRewardUtils_QuestCheckerFunc*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS__ISTABGROUPQUESTPASS_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean _IsTabQuestPass(::RPG::GameCore::ActivityQuestRewardDataRow* a1, ::RPG::Client::ActivityRewardUtils_MultiIDCheckerFunc* a2, ::RPG::Client::ActivityRewardUtils_QuestCheckerFunc* a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ActivityQuestRewardDataRow*, ::RPG::Client::ActivityRewardUtils_MultiIDCheckerFunc*, ::RPG::Client::ActivityRewardUtils_QuestCheckerFunc*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS__ISTABQUESTPASS_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean _CheckMultiIDAnd(::Il2CppArray<::System::UInt32>* a1, ::System::Func_2<::System::UInt32, ::System::Boolean>* a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::UInt32>*, ::System::Func_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS__CHECKMULTIIDAND_OFFSET))(a1, a2);
		}

		static ::System::Boolean _CheckMultiIDOr(::Il2CppArray<::System::UInt32>* a1, ::System::Func_2<::System::UInt32, ::System::Boolean>* a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::UInt32>*, ::System::Func_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS__CHECKMULTIIDOR_OFFSET))(a1, a2);
		}

	};
}
