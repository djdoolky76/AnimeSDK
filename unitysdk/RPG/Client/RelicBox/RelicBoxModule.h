#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDFGBPHEPDI.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
class BPGHDFAFMKH;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::RelicBox { class RecommendationCalculator; }
namespace RPG::Client::RelicBox { class RelicBoxRewardDataManager; }
namespace RPG::Client::RelicBox { class RelicBoxSuitPlanData; }
namespace RPG::Client::RelicBox { class RelicBoxSuitPlanDataManager; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_ADDNEWRELICTOBOX_OFFSET UNITYSDK_OFFSET(0x1D089590)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_CLEARNEWRELICUID_OFFSET UNITYSDK_OFFSET(0x1D0896D0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D08B6B0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_DOESSNAPSHOTRELICEXIST_OFFSET UNITYSDK_OFFSET(0x1D089770)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_GETCURRENTRELICITEMDATA_OFFSET UNITYSDK_OFFSET(0x1D088F70)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_GETCURRENTRELICITEMLISTDATA_OFFSET UNITYSDK_OFFSET(0x1D087D60)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x1D087AE0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_CUSTOMKEYCOUNT_OFFSET UNITYSDK_OFFSET(0x1D08B4E0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_HASUSEDALLKEYS_OFFSET UNITYSDK_OFFSET(0x1D087BF0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_ISCANSHIELD_OFFSET UNITYSDK_OFFSET(0x1D08B630)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_PENDINGRELIC_OFFSET UNITYSDK_OFFSET(0x1D08B670)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_RELICBOXKEYCOUNT_OFFSET UNITYSDK_OFFSET(0x1D08B280)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_RELICBOXKEYID_OFFSET UNITYSDK_OFFSET(0x1D08B400)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_ROLLTIMES_OFFSET UNITYSDK_OFFSET(0x1D08B690)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_UNLOCKSHIELDCOUNT_OFFSET UNITYSDK_OFFSET(0x1D08B5F0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1D086C80)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_ISNEWRELIC_OFFSET UNITYSDK_OFFSET(0x1D089720)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_ISRELICBOXSNAPSHOTITEM_OFFSET UNITYSDK_OFFSET(0x1D089480)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_ISRELICINBOX_1_OFFSET UNITYSDK_OFFSET(0x1D087940)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_ISRELICINBOX_OFFSET UNITYSDK_OFFSET(0x1D0878A0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_SAVEALLDIRTYPLAN_OFFSET UNITYSDK_OFFSET(0x1D088940)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_SENDCONFIRMRELICBOXCSREQ_OFFSET UNITYSDK_OFFSET(0x1D088270)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_SENDGETRELICBOXDATACSREQ_OFFSET UNITYSDK_OFFSET(0x1D087DF0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_SENDOPENRELICBOXCSREQ_OFFSET UNITYSDK_OFFSET(0x1D087ED0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_SENDREPORTRELICBOXPOPUP_OFFSET UNITYSDK_OFFSET(0x1D088890)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_SENDSETRELICBOXSHIELDCSREQ_OFFSET UNITYSDK_OFFSET(0x1D089540)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_SENDSETRELICBOXTARGETCSREQ_OFFSET UNITYSDK_OFFSET(0x1D088490)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_SET_PENDINGRELIC_OFFSET UNITYSDK_OFFSET(0x1D08B680)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_SET_ROLLTIMES_OFFSET UNITYSDK_OFFSET(0x1D08B6A0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_TRYGETPOPUPRELICS_OFFSET UNITYSDK_OFFSET(0x1D087C40)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1D089930)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1D089A90)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE__CREATERELICITEMLISTFORSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1D08A350)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE__GETINVENTORYRELICITEMLISTDATA_OFFSET UNITYSDK_OFFSET(0x1D089190)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE__GETSORTEDRELICITEMLISTDATA_OFFSET UNITYSDK_OFFSET(0x1D08AFC0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONCONFIRMRELICBOXSCRSP_OFFSET UNITYSDK_OFFSET(0x1D08AA90)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONGETRELICBOXDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1D089F10)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONITEMCHANGED_OFFSET UNITYSDK_OFFSET(0x1D08B210)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONOPENRELICBOXSCRSP_OFFSET UNITYSDK_OFFSET(0x1D08A840)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONPLAYERDAILYREFRESHING_OFFSET UNITYSDK_OFFSET(0x1D08B3B0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONRELICBOXREGULARSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1D08AC60)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONREPORTRELICBOXACTIONSCRSP_OFFSET UNITYSDK_OFFSET(0x1D08AB60)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONSETRELICBOXCUSTOMSCRSP_OFFSET UNITYSDK_OFFSET(0x1D08ABD0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONSETRELICBOXTARGETSCRSP_OFFSET UNITYSDK_OFFSET(0x1D08A8D0)

namespace RPG::Client::RelicBox
{
	inline static constexpr unsigned int RelicBoxModule_TypeDefinitionIndex = 76596;

	class RelicBoxModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::RelicBox::RelicBoxRewardDataManager* RewardDataManager; // 0x10
		::RPG::Client::RelicBox::RecommendationCalculator* recommendationCalculator; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* _SnapshotRelicItems; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* ShieldPositions; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _CurrentRelicIDList; // 0x30
		::RPG::Client::RelicBox::RelicBoxSuitPlanDataManager* PlanDataManager; // 0x38
		::RPG::Client::RelicItemData* _PendingRelic_k__BackingField; // 0x40
		::BDFGBPHEPDI CurrentState; // 0x48
		::System::UInt32 _RollTimes_k__BackingField; // 0x4C
		::System::UInt32 _LastCustomKeyCount; // 0x50
		::System::UInt32 _NewRelicUID; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_INIT_OFFSET))(this);
		}

		::System::Boolean IsRelicInBox(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_ISRELICINBOX_OFFSET))(this, a1);
		}

		::System::Boolean IsRelicInBox_1(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_ISRELICINBOX_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* TryGetPopupRelics()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_TRYGETPOPUPRELICS_OFFSET))(this);
		}

		::System::Void SendGetRelicBoxDataCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_SENDGETRELICBOXDATACSREQ_OFFSET))(this);
		}

		::System::Void SendOpenRelicBoxCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_SENDOPENRELICBOXCSREQ_OFFSET))(this);
		}

		::System::Void SendConfirmRelicBoxCsReq(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_SENDCONFIRMRELICBOXCSREQ_OFFSET))(this, a1);
		}

		::System::Void SendSetRelicBoxTargetCsReq(::RPG::Client::RelicBox::RelicBoxSuitPlanData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicBox::RelicBoxSuitPlanData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_SENDSETRELICBOXTARGETCSREQ_OFFSET))(this, a1);
		}

		::System::Void SendReportRelicBoxPopup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_SENDREPORTRELICBOXPOPUP_OFFSET))(this);
		}

		::System::Boolean SaveAllDirtyPlan()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_SAVEALLDIRTYPLAN_OFFSET))(this);
		}

		::RPG::Client::RelicItemData* GetCurrentRelicItemData(::RPG::GameCore::RelicType a1)
		{
			return ((::RPG::Client::RelicItemData*(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_GETCURRENTRELICITEMDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* GetCurrentRelicItemListData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_GETCURRENTRELICITEMLISTDATA_OFFSET))(this);
		}

		::System::Boolean IsRelicBoxSnapshotItem(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_ISRELICBOXSNAPSHOTITEM_OFFSET))(this, a1);
		}

		::System::Void SendSetRelicBoxShieldCsReq(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_SENDSETRELICBOXSHIELDCSREQ_OFFSET))(this, a1);
		}

		::System::Void AddNewRelicToBox(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_ADDNEWRELICTOBOX_OFFSET))(this, a1);
		}

		::System::Void ClearNewRelicUid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_CLEARNEWRELICUID_OFFSET))(this);
		}

		::System::Boolean IsNewRelic(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_ISNEWRELIC_OFFSET))(this, a1);
		}

		::System::Boolean DoesSnapshotRelicExist(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_DOESSNAPSHOTRELICEXIST_OFFSET))(this, a1);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetRelicBoxDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONGETRELICBOXDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnOpenRelicBoxScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONOPENRELICBOXSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSetRelicBoxTargetScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONSETRELICBOXTARGETSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnConfirmRelicBoxScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONCONFIRMRELICBOXSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnReportRelicBoxActionScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONREPORTRELICBOXACTIONSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSetRelicBoxCustomScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONSETRELICBOXCUSTOMSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnRelicBoxRegularScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONRELICBOXREGULARSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* _CreateRelicItemListForSnapshot(::Google::Protobuf::Collections::RepeatedField_1<::BPGHDFAFMKH*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::BPGHDFAFMKH*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE__CREATERELICITEMLISTFORSNAPSHOT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* _GetInventoryRelicItemListData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE__GETINVENTORYRELICITEMLISTDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* _GetSortedRelicItemListData(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE__GETSORTEDRELICITEMLISTDATA_OFFSET))(this, a1);
		}

		::System::Void _OnItemChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONITEMCHANGED_OFFSET))(this, a1);
		}

		::System::Void _OnPlayerDailyRefreshing(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONPLAYERDAILYREFRESHING_OFFSET))(this, a1);
		}

		::System::UInt32 get_RelicBoxKeyCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_RELICBOXKEYCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_RelicBoxKeyID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_RELICBOXKEYID_OFFSET))(this);
		}

		::System::UInt32 get_CustomKeyCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_CUSTOMKEYCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_UnlockShieldCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_UNLOCKSHIELDCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsCanShield()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_ISCANSHIELD_OFFSET))(this);
		}

		::System::Boolean get_HasUsedAllKeys()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_HASUSEDALLKEYS_OFFSET))(this);
		}

		::RPG::Client::RelicItemData* get_PendingRelic()
		{
			return ((::RPG::Client::RelicItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_PENDINGRELIC_OFFSET))(this);
		}

		::System::Void set_PendingRelic(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_SET_PENDINGRELIC_OFFSET))(this, a1);
		}

		::System::UInt32 get_RollTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_ROLLTIMES_OFFSET))(this);
		}

		::System::Void set_RollTimes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_SET_ROLLTIMES_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_ACTIVITYID_OFFSET))(this);
		}

	};
}
