#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class PlayerReturnConfigRow; }
namespace RPG::GameCore { class PlayerReturnLoginRewardRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8A4660)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETCONSTVALUE_OFFSET UNITYSDK_OFFSET(0x1C8A5CA0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETLOGINREWARDROWS_OFFSET UNITYSDK_OFFSET(0x1C8A5770)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETMULTIDROPIDLIST_OFFSET UNITYSDK_OFFSET(0x1C8A5D30)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETQUESTKEYPOINTID_OFFSET UNITYSDK_OFFSET(0x1C8A59E0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETQUESTKEYPOINTITEMID_OFFSET UNITYSDK_OFFSET(0x1C8A5BE0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETQUESTKEYPOINTREWARDID_OFFSET UNITYSDK_OFFSET(0x1C8A5B20)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETQUESTKEYPOINT_OFFSET UNITYSDK_OFFSET(0x1C8A5A60)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETSORTEDSIGNREWARDITEMLIST_OFFSET UNITYSDK_OFFSET(0x1C8A6920)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETTABQUESTGROUP_OFFSET UNITYSDK_OFFSET(0x1C8A5940)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETTABUNLOCKDAY_OFFSET UNITYSDK_OFFSET(0x1C8A5990)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETTOTALDOUBLETIME_OFFSET UNITYSDK_OFFSET(0x1C8A5620)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETTOTALHCOINCOUNT_OFFSET UNITYSDK_OFFSET(0x1C8A5670)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GET_ISOLDVERSIONPLAYERRETURNDATA_OFFSET UNITYSDK_OFFSET(0x1C8A69C0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GET_QUESTIDLIST_OFFSET UNITYSDK_OFFSET(0x1C8A6960)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GET_QUESTIONNAIRELINK_OFFSET UNITYSDK_OFFSET(0x1C8A69A0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GET_VERSIONHOTPOINTLINK_OFFSET UNITYSDK_OFFSET(0x1C8A6980)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_HASAVAILABLEMULTIDROP_OFFSET UNITYSDK_OFFSET(0x1C8A62A0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_HASPOINTREWARDTOGET_OFFSET UNITYSDK_OFFSET(0x1C8A6030)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_HASQUESTREWARDTOGET_OFFSET UNITYSDK_OFFSET(0x1C8A5EB0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_ISALLMULTIDROPFINISH_OFFSET UNITYSDK_OFFSET(0x1C8A67A0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_ISALLPOINTREWARDGOT_OFFSET UNITYSDK_OFFSET(0x1C8A65A0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_ISALLQUESTREWARDGOT_OFFSET UNITYSDK_OFFSET(0x1C8A6420)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_SET_QUESTIDLIST_OFFSET UNITYSDK_OFFSET(0x1C8A6970)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_SET_QUESTIONNAIRELINK_OFFSET UNITYSDK_OFFSET(0x1C8A69B0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_SET_VERSIONHOTPOINTLINK_OFFSET UNITYSDK_OFFSET(0x1C8A6990)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA__GETQUESTGROUPS_OFFSET UNITYSDK_OFFSET(0x1C8A4C40)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA__GETQUESTIONNAIRELINK_OFFSET UNITYSDK_OFFSET(0x1C8A4AC0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA__GETQUESTKEYPOINTSANDREWARDS_OFFSET UNITYSDK_OFFSET(0x1C8A4F40)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA__GETVERSIONHOTPOINTLINK_OFFSET UNITYSDK_OFFSET(0x1C8A4960)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA__INITSORTEDSIGNREWARDITEMLIST_OFFSET UNITYSDK_OFFSET(0x1C8A50B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityPlayerReturnData_TypeDefinitionIndex = 63271;

	class ActivityPlayerReturnData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _QuestKeyPointItemDict; // 0x10
		::System::String* _QuestionnaireLink_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _QuestKeyPointDict; // 0x20
		::RPG::GameCore::PlayerReturnConfigRow* _PlayerReturnConfigRow; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _SortedTotalSignRewardItemList; // 0x30
		::System::String* _VersionHotPointLink_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* MultiDropIDList; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _QuestIDList_k__BackingField; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _QuestKeyPointRewardDict; // 0x50
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 GetTotalDoubleTime()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETTOTALDOUBLETIME_OFFSET))(this);
		}

		::System::UInt32 GetTotalHcoinCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETTOTALHCOINCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::PlayerReturnLoginRewardRow*>* GetLoginRewardRows()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::PlayerReturnLoginRewardRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETLOGINREWARDROWS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetTabQuestGroup(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETTABQUESTGROUP_OFFSET))(this, a1);
		}

		::System::UInt32 GetTabUnlockDay(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETTABUNLOCKDAY_OFFSET))(this, a1);
		}

		::System::UInt32 GetQuestKeyPointID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETQUESTKEYPOINTID_OFFSET))(this, a1);
		}

		::System::UInt32 GetQuestKeyPoint(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETQUESTKEYPOINT_OFFSET))(this, a1);
		}

		::System::UInt32 GetQuestKeyPointRewardID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETQUESTKEYPOINTREWARDID_OFFSET))(this, a1);
		}

		::System::UInt32 GetQuestKeyPointItemID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETQUESTKEYPOINTITEMID_OFFSET))(this, a1);
		}

		::System::String* GetConstValue(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETCONSTVALUE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetMultiDropIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETMULTIDROPIDLIST_OFFSET))(this);
		}

		::System::Boolean HasQuestRewardToGet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_HASQUESTREWARDTOGET_OFFSET))(this);
		}

		::System::Boolean HasPointRewardToGet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_HASPOINTREWARDTOGET_OFFSET))(this);
		}

		::System::Boolean HasAvailableMultiDrop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_HASAVAILABLEMULTIDROP_OFFSET))(this);
		}

		::System::Boolean IsAllQuestRewardGot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_ISALLQUESTREWARDGOT_OFFSET))(this);
		}

		::System::Boolean IsAllPointRewardGot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_ISALLPOINTREWARDGOT_OFFSET))(this);
		}

		::System::Boolean IsAllMultiDropFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_ISALLMULTIDROPFINISH_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetSortedSignRewardItemList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETSORTEDSIGNREWARDITEMLIST_OFFSET))(this);
		}

		::System::Void _GetVersionHotPointLink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA__GETVERSIONHOTPOINTLINK_OFFSET))(this);
		}

		::System::Void _GetQuestionnaireLink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA__GETQUESTIONNAIRELINK_OFFSET))(this);
		}

		::System::Void _GetQuestGroups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA__GETQUESTGROUPS_OFFSET))(this);
		}

		::System::Void _GetQuestKeyPointsAndRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA__GETQUESTKEYPOINTSANDREWARDS_OFFSET))(this);
		}

		::System::Void _InitSortedSignRewardItemList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA__INITSORTEDSIGNREWARDITEMLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_QuestIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GET_QUESTIDLIST_OFFSET))(this);
		}

		::System::Void set_QuestIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_SET_QUESTIDLIST_OFFSET))(this, a1);
		}

		::System::String* get_VersionHotPointLink()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GET_VERSIONHOTPOINTLINK_OFFSET))(this);
		}

		::System::Void set_VersionHotPointLink(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_SET_VERSIONHOTPOINTLINK_OFFSET))(this, a1);
		}

		::System::String* get_QuestionnaireLink()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GET_QUESTIONNAIRELINK_OFFSET))(this);
		}

		::System::Void set_QuestionnaireLink(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_SET_QUESTIONNAIRELINK_OFFSET))(this, a1);
		}

		::System::Boolean get_IsOldVersionPlayerReturnData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GET_ISOLDVERSIONPLAYERRETURNDATA_OFFSET))(this);
		}

	};
}
