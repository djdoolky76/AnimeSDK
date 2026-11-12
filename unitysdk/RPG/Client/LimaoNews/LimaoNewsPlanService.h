#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LimaoNews/LimaoNewsManagementPlanInfoItemViewModelState.h"
#include "unitysdk/System/Object.h"
class BJGNOHEEIGD;
class BMDEEMIDNEL;
class GIFMNJNCIEF;
class KFJKHEKMJKE;
class OBJANKHLNGO;
class OEIHBAJCCAF;
namespace RPG::Client::LimaoNews { class LimaoNewsManagementPlanInfoItemViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsManagementPlanInfoViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsMessageSequence; }
namespace RPG::Client::LimaoNews { class LimaoNewsMessageService; }
namespace RPG::Client::LimaoNews { class LimaoNewsNetworkService; }
namespace RPG::Client::LimaoNews { class LimaoNewsOfferingService; }
namespace RPG::Client::LimaoNews { class LimaoNewsPlanData; }
namespace RPG::Client::LimaoNews { class LimaoNewsPlanPhaseData; }
namespace RPG::Client::LimaoNews { class LimaoNewsPlanReviewDialogViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsPlanReviewPhaseItemViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsWindowService; }
namespace RPG::Client::LimaoNews { class LimaoNewsWorkData; }
namespace RPG::Client::LimaoNews { class LimaoNewsWorkPhaseData; }
namespace RPG::Client::LimaoNews { class LimaoNewsWorkProgressOngoingViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsWorkProgressResultViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsWorkProgressStartViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsWorkResultData; }
namespace RPG::GameCore { class FloorSavedValueOverride; }
namespace RPG::GameCore { class TaskConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_CREATEMANAGEMENTPLANINFOVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDDF7860)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_CREATEONGOINGVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDDF8DB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_CREATERESULTVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDE086F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_CREATEREVIEWDIALOGVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDE070B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_CREATEREVIEWWORKPROGRESSVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDE05E00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_CREATESTARTVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDDF8D10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_CTOR_OFFSET UNITYSDK_OFFSET(0xDDFBE40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDDFC640)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GETMANAGEMENTPLANINFOITEMVIEWMODELSTATE_OFFSET UNITYSDK_OFFSET(0xDE06280)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GETMANAGEMENTPLANINFOITEMVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xDE06690)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GETPLANDATA_OFFSET UNITYSDK_OFFSET(0xDE08FE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_CURRENTPLANDATA_OFFSET UNITYSDK_OFFSET(0xDDF97A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_CURRENTPLANPHASEDATA_OFFSET UNITYSDK_OFFSET(0xDDF97F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_CURRENTWORKDATA_OFFSET UNITYSDK_OFFSET(0xDE08A70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_CURRENTWORKPHASEDATA_OFFSET UNITYSDK_OFFSET(0xDDF8C30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_CURRENTWORKRESULTDATA_OFFSET UNITYSDK_OFFSET(0xDDF8CC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_FINISHEDMESSAGEARCHIVEBYMESSAGEID_OFFSET UNITYSDK_OFFSET(0xDE09A10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_FINISHEDWORKARCHIVEBYWORKID_OFFSET UNITYSDK_OFFSET(0xDE09A30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_ISCURRENTPLANFINISHED_OFFSET UNITYSDK_OFFSET(0xDE09950)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_ISCURRENTPLANPHASEFINISHED_OFFSET UNITYSDK_OFFSET(0xDE09970)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_ISCURRENTPLANUNLOCK_OFFSET UNITYSDK_OFFSET(0xDE06E90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_LASTFINISHEDPLANID_OFFSET UNITYSDK_OFFSET(0xDE099B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_MESSENGER_OFFSET UNITYSDK_OFFSET(0xDE09A50)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_PLANDATALIST_OFFSET UNITYSDK_OFFSET(0xDE099F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_REFRESHFINISHEDPLANPHASEID_OFFSET UNITYSDK_OFFSET(0xDE09990)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_WORKPHASEWAYLIST_OFFSET UNITYSDK_OFFSET(0xDE099D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_HASANYFINISHEDPLANPHASE_OFFSET UNITYSDK_OFFSET(0xDE06F00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_HASFINISHEDMESSAGEARCHIVE_OFFSET UNITYSDK_OFFSET(0xDE091C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_ISCURRENTLASTPLANPHASEOFLASTPLAN_OFFSET UNITYSDK_OFFSET(0xDE09370)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_ISLASTPLANPHASEOFLASTPLAN_OFFSET UNITYSDK_OFFSET(0xDE09430)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_PLAYPLANPHASEACT_OFFSET UNITYSDK_OFFSET(0xDDF9210)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_PLAYWORKRESULTPERFORMANCEANDSHOWRESULTPAGE_OFFSET UNITYSDK_OFFSET(0xDDF8EE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_REFRESHFINISHEDMESSAGEARCHIVE_OFFSET UNITYSDK_OFFSET(0xDDFF730)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_REFRESHFINISHEDWORKARCHIVE_OFFSET UNITYSDK_OFFSET(0xDDFF890)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_REFRESHPLANSTATE_OFFSET UNITYSDK_OFFSET(0xDDFF180)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_REPLAYPLANPHASEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xDE05AF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_SET_FINISHEDMESSAGEARCHIVEBYMESSAGEID_OFFSET UNITYSDK_OFFSET(0xDE09A20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_SET_FINISHEDWORKARCHIVEBYWORKID_OFFSET UNITYSDK_OFFSET(0xDE09A40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_SET_ISCURRENTPLANFINISHED_OFFSET UNITYSDK_OFFSET(0xDE09960)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_SET_ISCURRENTPLANPHASEFINISHED_OFFSET UNITYSDK_OFFSET(0xDE09980)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_SET_LASTFINISHEDPLANID_OFFSET UNITYSDK_OFFSET(0xDE099C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_SET_MESSENGER_OFFSET UNITYSDK_OFFSET(0xDE09A60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_SET_PLANDATALIST_OFFSET UNITYSDK_OFFSET(0xDE09A00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_SET_REFRESHFINISHEDPLANPHASEID_OFFSET UNITYSDK_OFFSET(0xDE099A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_SET_WORKPHASEWAYLIST_OFFSET UNITYSDK_OFFSET(0xDE099E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_TRYTRIGGERPLANPHASEFINISHTASK_OFFSET UNITYSDK_OFFSET(0xDE062C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_TRYTRIGGERPLANSTATUSREFRESHTASK_OFFSET UNITYSDK_OFFSET(0xDE06180)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__CALCULATEMANAGEMENTPLANINFOITEMVIEWMODELSTATE_OFFSET UNITYSDK_OFFSET(0xDE06CF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__CHECKISCURRENTPLANUNLOCK_OFFSET UNITYSDK_OFFSET(0xDE09630)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__CHECKPLANPHASEFINISHED_OFFSET UNITYSDK_OFFSET(0xDE064E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__CREATEFLOORSAVEDVALUEOVERRIDELIST_OFFSET UNITYSDK_OFFSET(0xDE07580)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__CREATEHISTORYOPTIONFLOWBYMESSAGEID_OFFSET UNITYSDK_OFFSET(0xDE08440)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__CREATEHISTORYWORKPHASEDATALIST_OFFSET UNITYSDK_OFFSET(0xDE08AC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__CREATEOPTIONFLOW_OFFSET UNITYSDK_OFFSET(0xDE07EC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__CREATEPLANPHASEACTFINISHTASKLIST_OFFSET UNITYSDK_OFFSET(0xDE09250)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__CREATEREVIEWONGOINGVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDE077A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__CREATEREVIEWPHASEITEMS_OFFSET UNITYSDK_OFFSET(0xDE07300)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__FINISHCURRENTPLANPHASEANDSHOWRESULTPAGE_OFFSET UNITYSDK_OFFSET(0xDE08790)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__GETCURRENTPLANDATA_OFFSET UNITYSDK_OFFSET(0xDE09690)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__GETCURRENTPLANPHASEDATA_OFFSET UNITYSDK_OFFSET(0xDE09700)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__GETCURRENTWORKDATA_OFFSET UNITYSDK_OFFSET(0xDE097C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__GETMESSAGEOPTIONFLOW_OFFSET UNITYSDK_OFFSET(0xDE07DC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__GETOPTIONINDEX_OFFSET UNITYSDK_OFFSET(0xDE08CF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__GETREFRESHFINISHEDPLANPHASEID_OFFSET UNITYSDK_OFFSET(0xDE09110)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__INITPLANDATALIST_OFFSET UNITYSDK_OFFSET(0xDE08DB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE___CHECKPLANPHASEFINISHED_B__6_0_OFFSET UNITYSDK_OFFSET(0xDE09A70)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPlanService_TypeDefinitionIndex = 83109;

	class LimaoNewsPlanService : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPlanData*>* _PlanDataList_k__BackingField; // 0x10
		::RPG::Client::LimaoNews::LimaoNewsOfferingService* _OfferingService; // 0x18
		::RPG::Client::LimaoNews::LimaoNewsNetworkService* _NetworkService; // 0x20
		::RPG::Client::LimaoNews::LimaoNewsWindowService* _WindowService; // 0x28
		::RPG::Client::LimaoNews::LimaoNewsMessageService* _MessageService; // 0x30
		::GIFMNJNCIEF* _LimaoNewsConditionService; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BMDEEMIDNEL*>* _FinishedMessageArchiveByMessageID_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _WorkPhaseWayList_k__BackingField; // 0x48
		::OBJANKHLNGO* _Messenger_k__BackingField; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BJGNOHEEIGD*>* _FinishedWorkArchiveByWorkID_k__BackingField; // 0x58
		::System::UInt32 _CurrentPlanID; // 0x60
		::System::UInt32 _CurrentWorkPhaseID; // 0x64
		::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModelState _ManagementPlanInfoItemViewModelState; // 0x68
		::System::UInt32 _RefreshFinishedPlanPhaseID_k__BackingField; // 0x6C
		::System::UInt32 _CurrentPlanPhaseID; // 0x70
		::System::UInt32 _CurrentWorkID; // 0x74
		::System::UInt32 _LastFinishedPlanID_k__BackingField; // 0x78
		::System::UInt32 _CurrentWorkResultID; // 0x7C
		::System::Boolean _IsCurrentPlanFinished_k__BackingField; // 0x80
		::System::Boolean _IsCurrentPlanPhaseFinished_k__BackingField; // 0x81
		::System::Void _ctor(::RPG::Client::LimaoNews::LimaoNewsMessageService* a1, ::RPG::Client::LimaoNews::LimaoNewsWindowService* a2, ::RPG::Client::LimaoNews::LimaoNewsNetworkService* a3, ::GIFMNJNCIEF* a4, ::RPG::Client::LimaoNews::LimaoNewsOfferingService* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsMessageService*, ::RPG::Client::LimaoNews::LimaoNewsWindowService*, ::RPG::Client::LimaoNews::LimaoNewsNetworkService*, ::GIFMNJNCIEF*, ::RPG::Client::LimaoNews::LimaoNewsOfferingService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void TryTriggerPlanStatusRefreshTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_TRYTRIGGERPLANSTATUSREFRESHTASK_OFFSET))(this);
		}

		::System::Void TryTriggerPlanPhaseFinishTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_TRYTRIGGERPLANPHASEFINISHTASK_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoViewModel* CreateManagementPlanInfoViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_CREATEMANAGEMENTPLANINFOVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModelState GetManagementPlanInfoItemViewModelState()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModelState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GETMANAGEMENTPLANINFOITEMVIEWMODELSTATE_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModelState _CalculateManagementPlanInfoItemViewModelState()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModelState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__CALCULATEMANAGEMENTPLANINFOITEMVIEWMODELSTATE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModel*>* GetManagementPlanInfoItemViewModels()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GETMANAGEMENTPLANINFOITEMVIEWMODELS_OFFSET))(this);
		}

		::System::Boolean _CheckPlanPhaseFinished(::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__CHECKPLANPHASEFINISHED_OFFSET))(this, a1);
		}

		::System::Boolean HasAnyFinishedPlanPhase()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_HASANYFINISHEDPLANPHASE_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsPlanReviewDialogViewModel* CreateReviewDialogViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPlanReviewDialogViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_CREATEREVIEWDIALOGVIEWMODEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPlanReviewPhaseItemViewModel*>* _CreateReviewPhaseItems(::RPG::Client::LimaoNews::LimaoNewsPlanData* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPlanReviewPhaseItemViewModel*>*(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPlanData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__CREATEREVIEWPHASEITEMS_OFFSET))(this, a1);
		}

		::System::Void ReplayPlanPhasePerformance(::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_REPLAYPLANPHASEPERFORMANCE_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsWorkProgressResultViewModel* CreateReviewWorkProgressViewModel(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWorkProgressResultViewModel*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_CREATEREVIEWWORKPROGRESSVIEWMODEL_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetMessageOptionFlow(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__GETMESSAGEOPTIONFLOW_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsWorkProgressOngoingViewModel* _CreateReviewOngoingViewModel(::RPG::Client::LimaoNews::LimaoNewsWorkData* a1, ::BJGNOHEEIGD* a2, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel* a3)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWorkProgressOngoingViewModel*(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsWorkData*, ::BJGNOHEEIGD*, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__CREATEREVIEWONGOINGVIEWMODEL_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::LimaoNews::LimaoNewsWorkProgressResultViewModel* CreateResultViewModel(::RPG::Client::LimaoNews::LimaoNewsWorkResultData* a1, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel* a2, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressOngoingViewModel* a3)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWorkProgressResultViewModel*(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsWorkResultData*, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel*, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressOngoingViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_CREATERESULTVIEWMODEL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PlayWorkResultPerformanceAndShowResultPage(::System::UInt32 a1, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel* a2, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressOngoingViewModel* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel*, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressOngoingViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_PLAYWORKRESULTPERFORMANCEANDSHOWRESULTPAGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _FinishCurrentPlanPhaseAndShowResultPage(::RPG::Client::LimaoNews::LimaoNewsWorkResultData* a1, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel* a2, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressOngoingViewModel* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsWorkResultData*, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel*, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressOngoingViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__FINISHCURRENTPLANPHASEANDSHOWRESULTPAGE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel* CreateStartViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_CREATESTARTVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsWorkProgressOngoingViewModel* CreateOngoingViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWorkProgressOngoingViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_CREATEONGOINGVIEWMODEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData*>* _CreateHistoryWorkPhaseDataList(::RPG::Client::LimaoNews::LimaoNewsWorkData* a1, ::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData*>*(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsWorkData*, ::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__CREATEHISTORYWORKPHASEDATALIST_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _CreateHistoryOptionFlowByMessageID(::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData*>* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__CREATEHISTORYOPTIONFLOWBYMESSAGEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _CreateOptionFlow(::RPG::Client::LimaoNews::LimaoNewsMessageSequence* a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsMessageSequence*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__CREATEOPTIONFLOW_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _GetOptionIndex(::RPG::Client::LimaoNews::LimaoNewsMessageSequence* a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsMessageSequence*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__GETOPTIONINDEX_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_DISPOSE_OFFSET))(this);
		}

		::System::Void RefreshPlanState(::OEIHBAJCCAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEIHBAJCCAF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_REFRESHPLANSTATE_OFFSET))(this, a1);
		}

		::System::UInt32 _GetRefreshFinishedPlanPhaseID(::OEIHBAJCCAF* a1, ::System::Boolean a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::OEIHBAJCCAF*, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__GETREFRESHFINISHEDPLANPHASEID_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RefreshFinishedMessageArchive(::BMDEEMIDNEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMDEEMIDNEL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_REFRESHFINISHEDMESSAGEARCHIVE_OFFSET))(this, a1);
		}

		::System::Boolean HasFinishedMessageArchive(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_HASFINISHEDMESSAGEARCHIVE_OFFSET))(this, a1);
		}

		::System::Void RefreshFinishedWorkArchive(::BJGNOHEEIGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJGNOHEEIGD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_REFRESHFINISHEDWORKARCHIVE_OFFSET))(this, a1);
		}

		::System::Void PlayPlanPhaseAct()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_PLAYPLANPHASEACT_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::TaskConfig*>* _CreatePlanPhaseActFinishTaskList()
		{
			return ((::Il2CppArray<::RPG::GameCore::TaskConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__CREATEPLANPHASEACTFINISHTASKLIST_OFFSET))(this);
		}

		::System::Boolean IsCurrentLastPlanPhaseOfLastPlan()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_ISCURRENTLASTPLANPHASEOFLASTPLAN_OFFSET))(this);
		}

		::System::Boolean IsLastPlanPhaseOfLastPlan(::RPG::Client::LimaoNews::LimaoNewsPlanData* a1, ::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPlanData*, ::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_ISLASTPLANPHASEOFLASTPLAN_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::FloorSavedValueOverride*>* _CreateFloorSavedValueOverrideList(::Il2CppArray<::KFJKHEKMJKE*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::FloorSavedValueOverride*>*(*)(::PVOID, ::Il2CppArray<::KFJKHEKMJKE*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__CREATEFLOORSAVEDVALUEOVERRIDELIST_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsPlanData* GetPlanData(::System::UInt32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPlanData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GETPLANDATA_OFFSET))(this, a1);
		}

		::System::Void _InitPlanDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__INITPLANDATALIST_OFFSET))(this);
		}

		::System::Boolean _CheckIsCurrentPlanUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__CHECKISCURRENTPLANUNLOCK_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsPlanData* _GetCurrentPlanData()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPlanData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__GETCURRENTPLANDATA_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData* _GetCurrentPlanPhaseData()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__GETCURRENTPLANPHASEDATA_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsWorkData* _GetCurrentWorkData()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWorkData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE__GETCURRENTWORKDATA_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsPlanData* get_CurrentPlanData()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPlanData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_CURRENTPLANDATA_OFFSET))(this);
		}

		::System::Boolean get_IsCurrentPlanFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_ISCURRENTPLANFINISHED_OFFSET))(this);
		}

		::System::Void set_IsCurrentPlanFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_SET_ISCURRENTPLANFINISHED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCurrentPlanPhaseFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_ISCURRENTPLANPHASEFINISHED_OFFSET))(this);
		}

		::System::Void set_IsCurrentPlanPhaseFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_SET_ISCURRENTPLANPHASEFINISHED_OFFSET))(this, a1);
		}

		::System::UInt32 get_RefreshFinishedPlanPhaseID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_REFRESHFINISHEDPLANPHASEID_OFFSET))(this);
		}

		::System::Void set_RefreshFinishedPlanPhaseID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_SET_REFRESHFINISHEDPLANPHASEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_LastFinishedPlanID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_LASTFINISHEDPLANID_OFFSET))(this);
		}

		::System::Void set_LastFinishedPlanID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_SET_LASTFINISHEDPLANID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_WorkPhaseWayList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_WORKPHASEWAYLIST_OFFSET))(this);
		}

		::System::Void set_WorkPhaseWayList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_SET_WORKPHASEWAYLIST_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCurrentPlanUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_ISCURRENTPLANUNLOCK_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData* get_CurrentPlanPhaseData()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_CURRENTPLANPHASEDATA_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsWorkData* get_CurrentWorkData()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWorkData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_CURRENTWORKDATA_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsWorkResultData* get_CurrentWorkResultData()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWorkResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_CURRENTWORKRESULTDATA_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData* get_CurrentWorkPhaseData()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_CURRENTWORKPHASEDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPlanData*>* get_PlanDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPlanData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_PLANDATALIST_OFFSET))(this);
		}

		::System::Void set_PlanDataList(::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPlanData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPlanData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_SET_PLANDATALIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BMDEEMIDNEL*>* get_FinishedMessageArchiveByMessageID()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BMDEEMIDNEL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_FINISHEDMESSAGEARCHIVEBYMESSAGEID_OFFSET))(this);
		}

		::System::Void set_FinishedMessageArchiveByMessageID(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BMDEEMIDNEL*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BMDEEMIDNEL*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_SET_FINISHEDMESSAGEARCHIVEBYMESSAGEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BJGNOHEEIGD*>* get_FinishedWorkArchiveByWorkID()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BJGNOHEEIGD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_FINISHEDWORKARCHIVEBYWORKID_OFFSET))(this);
		}

		::System::Void set_FinishedWorkArchiveByWorkID(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BJGNOHEEIGD*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BJGNOHEEIGD*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_SET_FINISHEDWORKARCHIVEBYWORKID_OFFSET))(this, a1);
		}

		::OBJANKHLNGO* get_Messenger()
		{
			return ((::OBJANKHLNGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_GET_MESSENGER_OFFSET))(this);
		}

		::System::Void set_Messenger(::OBJANKHLNGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE_SET_MESSENGER_OFFSET))(this, a1);
		}

		::System::Boolean __CheckPlanPhaseFinished_b__6_0(::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE___CHECKPLANPHASEFINISHED_B__6_0_OFFSET))(this, a1);
		}

	};
}
