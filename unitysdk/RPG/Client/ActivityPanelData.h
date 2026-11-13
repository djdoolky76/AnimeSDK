#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelTemplate.h"
#include "unitysdk/RPG/GameCore/ActivityPanelFinishType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class ActivityData; }
namespace RPG::Client { class ActivityPanelDataResidentAdaptor; }
namespace RPG::Client { class ActivityPanelResidentExtraData; }
namespace RPG::Client { class ActivityRewardItem; }
namespace RPG::Client { class ActivityStateData; }
namespace RPG::Client { class ActivityTagData; }
namespace RPG::Client { class ConditionChecker; }
namespace RPG::Client { class ExprConditionChecker; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class ActivityPanelRow; }
namespace RPG::GameCore { class ActivityThemeRow; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define RPG_CLIENT_ACTIVITYPANELDATA_COLLECTREQUIREDMISSION_OFFSET UNITYSDK_OFFSET(0x1C895F90)
#define RPG_CLIENT_ACTIVITYPANELDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8940D0)
#define RPG_CLIENT_ACTIVITYPANELDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C894670)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_ACTIVITYTHEMEID_OFFSET UNITYSDK_OFFSET(0x1C898580)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_BEGINTIMEDATE_OFFSET UNITYSDK_OFFSET(0x1C895120)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1C895040)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x1C895C30)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_DAILYHINT_OFFSET UNITYSDK_OFFSET(0x1C897060)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_DISPLAYITEMLIST_OFFSET UNITYSDK_OFFSET(0x1C898030)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_DISPLAYITEMMANUALSORT_OFFSET UNITYSDK_OFFSET(0x1C898180)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_ENDTIMEDATE_OFFSET UNITYSDK_OFFSET(0x1C895300)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1C895220)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_FINISHCONDITIONS_OFFSET UNITYSDK_OFFSET(0x1C894480)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_FINISHTYPE_OFFSET UNITYSDK_OFFSET(0x1C894C30)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_GUIDEVIDEOID_OFFSET UNITYSDK_OFFSET(0x1C8986E0)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_INTRODESC_OFFSET UNITYSDK_OFFSET(0x1C897E80)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_ISCANDISPLAY_OFFSET UNITYSDK_OFFSET(0x1C8947D0)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_ISDELAYEDFOREXCHANGE_OFFSET UNITYSDK_OFFSET(0x1C8958E0)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_ISDISPLAY_OFFSET UNITYSDK_OFFSET(0x1C894780)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_ISEARLYACCESSCANUNLOCK_OFFSET UNITYSDK_OFFSET(0x1C895CF0)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_ISFULLCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1C894D80)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_ISINPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C895850)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_ISINRESIDENT_OFFSET UNITYSDK_OFFSET(0x1C8955F0)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_ISINTIMELIMIT_OFFSET UNITYSDK_OFFSET(0x1C895530)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_ISPANELHAVERESIDENTPART_OFFSET UNITYSDK_OFFSET(0x1C8956C0)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_ISPREGUIDECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1C8957C0)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_ISPREMISSIONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1C895730)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_ISRESIDENTPANEL_OFFSET UNITYSDK_OFFSET(0x1C894DA0)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_ISSKIPSWITCHSTORYLINE_OFFSET UNITYSDK_OFFSET(0x1C898640)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_ISSOCIALSHOW_OFFSET UNITYSDK_OFFSET(0x1C898690)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_ISWORLDEARLYACCESSCANUNLOCK_OFFSET UNITYSDK_OFFSET(0x1C895E70)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_PANELBRIEFDESC_OFFSET UNITYSDK_OFFSET(0x1C898460)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_PANELDESC_OFFSET UNITYSDK_OFFSET(0x1C897CC0)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_PANELID_OFFSET UNITYSDK_OFFSET(0x1C894760)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_PANELTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1C8968D0)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_RELATEDACTIVITYID_OFFSET UNITYSDK_OFFSET(0x1C894EC0)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_RELATEDACTIVITY_OFFSET UNITYSDK_OFFSET(0x1C894EA0)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_RESIDENTADAPTOR_OFFSET UNITYSDK_OFFSET(0x1C897C60)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_RESIDENTEXTRADATA_OFFSET UNITYSDK_OFFSET(0x1C897C50)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x1C894F80)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_SORTEDDISPLAYITEMLIST_OFFSET UNITYSDK_OFFSET(0x1C898730)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_SORTWEIGHT_OFFSET UNITYSDK_OFFSET(0x1C88E2D0)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_STATEDATA_OFFSET UNITYSDK_OFFSET(0x1C895710)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_TABICON_OFFSET UNITYSDK_OFFSET(0x1C898330)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_TABNAME_OFFSET UNITYSDK_OFFSET(0x1C898380)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_TAGDESC_OFFSET UNITYSDK_OFFSET(0x1C8984D0)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_TAGS_OFFSET UNITYSDK_OFFSET(0x1C898540)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_THEME_OFFSET UNITYSDK_OFFSET(0x1C8985D0)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_TITLENAME_OFFSET UNITYSDK_OFFSET(0x1C8983F0)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_UIPREFAB_OFFSET UNITYSDK_OFFSET(0x1C8982E0)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_UNLOCKCONDITIONS_OFFSET UNITYSDK_OFFSET(0x1C894430)
#define RPG_CLIENT_ACTIVITYPANELDATA_GET_WORLDID_OFFSET UNITYSDK_OFFSET(0x1C895DB0)
#define RPG_CLIENT_ACTIVITYPANELDATA_INIT_OFFSET UNITYSDK_OFFSET(0x1C894580)
#define RPG_CLIENT_ACTIVITYPANELDATA_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1C894A30)
#define RPG_CLIENT_ACTIVITYPANELDATA_ISEXTRACONDSATISFY_OFFSET UNITYSDK_OFFSET(0x1C894D40)
#define RPG_CLIENT_ACTIVITYPANELDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1C895940)
#define RPG_CLIENT_ACTIVITYPANELDATA_ISHIDEALLREDDOT_OFFSET UNITYSDK_OFFSET(0x1C896900)
#define RPG_CLIENT_ACTIVITYPANELDATA_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1C895400)
#define RPG_CLIENT_ACTIVITYPANELDATA_ISNEW_OFFSET UNITYSDK_OFFSET(0x1C8972A0)
#define RPG_CLIENT_ACTIVITYPANELDATA_ISSHOWDAILYREDDOT_OFFSET UNITYSDK_OFFSET(0x1C896DE0)
#define RPG_CLIENT_ACTIVITYPANELDATA_ISSHOWEARLYACCESSREDDOT_OFFSET UNITYSDK_OFFSET(0x1C896B10)
#define RPG_CLIENT_ACTIVITYPANELDATA_ISSHOWGOTOBTNREDDOT_OFFSET UNITYSDK_OFFSET(0x1C896D30)
#define RPG_CLIENT_ACTIVITYPANELDATA_ISSHOWMAPGUIDEHINT_OFFSET UNITYSDK_OFFSET(0x1C894D00)
#define RPG_CLIENT_ACTIVITYPANELDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET UNITYSDK_OFFSET(0x1C896A90)
#define RPG_CLIENT_ACTIVITYPANELDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x1C896AD0)
#define RPG_CLIENT_ACTIVITYPANELDATA_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0x1C897170)
#define RPG_CLIENT_ACTIVITYPANELDATA_ISSHOWNOPASSNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x1C896A50)
#define RPG_CLIENT_ACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x1C896A10)
#define RPG_CLIENT_ACTIVITYPANELDATA_MANUALMARKOLD_OFFSET UNITYSDK_OFFSET(0x1C8979E0)
#define RPG_CLIENT_ACTIVITYPANELDATA_MARKOLD_OFFSET UNITYSDK_OFFSET(0x1C8973F0)
#define RPG_CLIENT_ACTIVITYPANELDATA_PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x1C895F30)
#define RPG_CLIENT_ACTIVITYPANELDATA_REQUESTDATA_OFFSET UNITYSDK_OFFSET(0x1C894CC0)
#define RPG_CLIENT_ACTIVITYPANELDATA_RPG_CLIENT_IACTIVITYPANELREPORTABLE_GET_ACTIVITYGOTO_OFFSET UNITYSDK_OFFSET(0x1C898C70)
#define RPG_CLIENT_ACTIVITYPANELDATA_RPG_CLIENT_IACTIVITYPANELREPORTABLE_GET_GUIDEGOTO_OFFSET UNITYSDK_OFFSET(0x1C898C10)
#define RPG_CLIENT_ACTIVITYPANELDATA_RPG_CLIENT_IACTIVITYPANELREPORTABLE_GET_GUIDETAKEMISSION_OFFSET UNITYSDK_OFFSET(0x1C898BB0)
#define RPG_CLIENT_ACTIVITYPANELDATA_RPG_CLIENT_IACTIVITYPANELREPORTABLE_GET_PANELID_OFFSET UNITYSDK_OFFSET(0x1C898B60)
#define RPG_CLIENT_ACTIVITYPANELDATA_RPG_CLIENT_IACTIVITYPANELREPORTABLE_GET_RELATEDACTIVITYID_OFFSET UNITYSDK_OFFSET(0x1C898AB0)
#define RPG_CLIENT_ACTIVITYPANELDATA_SETPANELTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1C896860)
#define RPG_CLIENT_ACTIVITYPANELDATA_SETRELATEDACTIVITY_OFFSET UNITYSDK_OFFSET(0x1C894E50)
#define RPG_CLIENT_ACTIVITYPANELDATA_SET_ISFULLCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1C894D90)
#define RPG_CLIENT_ACTIVITYPANELDATA_SET_PANELID_OFFSET UNITYSDK_OFFSET(0x1C894770)
#define RPG_CLIENT_ACTIVITYPANELDATA_SET_PANELTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1C8968F0)
#define RPG_CLIENT_ACTIVITYPANELDATA_SET_RELATEDACTIVITY_OFFSET UNITYSDK_OFFSET(0x1C894EB0)
#define RPG_CLIENT_ACTIVITYPANELDATA_SET_STATEDATA_OFFSET UNITYSDK_OFFSET(0x1C895720)
#define RPG_CLIENT_ACTIVITYPANELDATA_SYNCSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1C8960F0)
#define RPG_CLIENT_ACTIVITYPANELDATA_UPDATEFULLCOMPLETESTATUS_OFFSET UNITYSDK_OFFSET(0x1C894C80)
#define RPG_CLIENT_ACTIVITYPANELDATA_UPDATEREDDOTSTATUS_OFFSET UNITYSDK_OFFSET(0x1C897A90)
#define RPG_CLIENT_ACTIVITYPANELDATA__ISCACHEDDISPLAYITEMLISTDIRTY_OFFSET UNITYSDK_OFFSET(0x1C898790)
#define RPG_CLIENT_ACTIVITYPANELDATA__ISHIDEPANEL_OFFSET UNITYSDK_OFFSET(0x1C894920)
#define RPG_CLIENT_ACTIVITYPANELDATA__ISNEEDSHOWDAILYREDDOT_OFFSET UNITYSDK_OFFSET(0x1C8970B0)
#define RPG_CLIENT_ACTIVITYPANELDATA__ISNOTSHIELDED_OFFSET UNITYSDK_OFFSET(0x1C894B30)
#define RPG_CLIENT_ACTIVITYPANELDATA__ISSHOWEARLYACCESSREDDOT_OFFSET UNITYSDK_OFFSET(0x1C896B60)
#define RPG_CLIENT_ACTIVITYPANELDATA__ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1C894BE0)
#define RPG_CLIENT_ACTIVITYPANELDATA__ONACTIVITYENDEDCUSTOM_OFFSET UNITYSDK_OFFSET(0x1C896820)
#define RPG_CLIENT_ACTIVITYPANELDATA__ONACTIVITYENDED_OFFSET UNITYSDK_OFFSET(0x1C8966C0)
#define RPG_CLIENT_ACTIVITYPANELDATA__ONACTIVITYOPENEDCUSTOM_OFFSET UNITYSDK_OFFSET(0x1C8967E0)
#define RPG_CLIENT_ACTIVITYPANELDATA__ONACTIVITYOPENED_OFFSET UNITYSDK_OFFSET(0x1C8965A0)
#define RPG_CLIENT_ACTIVITYPANELDATA__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1C894720)
#define RPG_CLIENT_ACTIVITYPANELDATA__ONINIT_OFFSET UNITYSDK_OFFSET(0x1C894630)
#define RPG_CLIENT_ACTIVITYPANELDATA__REFRESHDISPLAYITEMLIST_OFFSET UNITYSDK_OFFSET(0x1C8988D0)
#define RPG_CLIENT_ACTIVITYPANELDATA__TRYMARKOLDWITHOLDPREFSDATA_OFFSET UNITYSDK_OFFSET(0x1C8975C0)
#define RPG_CLIENT_ACTIVITYPANELDATA__TRYSETSCHEDULEBEGINHANDLER_OFFSET UNITYSDK_OFFSET(0x1C896140)
#define RPG_CLIENT_ACTIVITYPANELDATA__TRYSETSCHEDULEENDHANDLER_OFFSET UNITYSDK_OFFSET(0x1C896370)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityPanelData_TypeDefinitionIndex = 63100;

	class ActivityPanelData : public ::System::Object
	{
	public:
		::RPG::Client::ActivityPanelDataResidentAdaptor* _ResidentAdaptor_k__BackingField; // 0x10
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::ActivityTagData*>* _Tags_ReadOnly; // 0x18
		::RPG::Client::ActivityPanelTemplate _PanelTemplate_k__BackingField; // 0x20
		::RPG::Client::ActivityPanelResidentExtraData* _ResidentExtraData_k__BackingField; // 0x40
		::RPG::Client::ExprConditionChecker* _UnlockChecker; // 0x48
		::RPG::Client::ScheduleTask* _WaitOpenTask; // 0x50
		::RPG::Client::ConditionChecker* _FinishConditionChecker; // 0x58
		::Il2CppArray<::RPG::Client::ActivityRewardItem*>* _SortedDisplayItemList; // 0x60
		::RPG::Client::ScheduleTask* _WaitEndTask; // 0x68
		::RPG::GameCore::ActivityPanelRow* _Row; // 0x70
		::RPG::Client::ActivityData* _RelatedActivity_k__BackingField; // 0x78
		::System::Collections::Generic::List_1<::RPG::Client::ActivityTagData*>* _Tags; // 0x80
		::RPG::Client::ActivityStateData* _StateData_k__BackingField; // 0x88
		::System::UInt32 _CachePlayerLevel; // 0x90
		::System::Boolean _IsFullCompleted_k__BackingField; // 0x94
		::System::Boolean _CacheIsInResident; // 0x95
		::System::Byte _padding0[0x2];
		::System::UInt32 _PanelID_k__BackingField; // 0x98
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_INIT_OFFSET))(this);
		}

		::System::Void _OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA__ONINIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA__ONDISPOSE_OFFSET))(this);
		}

		::System::UInt32 get_PanelID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_PANELID_OFFSET))(this);
		}

		::System::Void set_PanelID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_SET_PANELID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDisplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_ISDISPLAY_OFFSET))(this);
		}

		::System::Boolean get_IsCanDisplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_ISCANDISPLAY_OFFSET))(this);
		}

		::System::Boolean IsAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_ISAVAILABLE_OFFSET))(this);
		}

		::System::Boolean _IsNotShielded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA__ISNOTSHIELDED_OFFSET))(this);
		}

		::System::Boolean _IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA__ISUNLOCKED_OFFSET))(this);
		}

		::System::Boolean _IsHidePanel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA__ISHIDEPANEL_OFFSET))(this);
		}

		::System::Void UpdateFullCompleteStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_UPDATEFULLCOMPLETESTATUS_OFFSET))(this);
		}

		::System::Void RequestData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_REQUESTDATA_OFFSET))(this);
		}

		::System::Boolean IsShowMapGuideHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_ISSHOWMAPGUIDEHINT_OFFSET))(this);
		}

		::System::Boolean IsExtraCondSatisfy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_ISEXTRACONDSATISFY_OFFSET))(this);
		}

		::System::Boolean get_IsFullCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_ISFULLCOMPLETED_OFFSET))(this);
		}

		::System::Void set_IsFullCompleted(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_SET_ISFULLCOMPLETED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsResidentPanel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_ISRESIDENTPANEL_OFFSET))(this);
		}

		::System::Void SetRelatedActivity(::RPG::Client::ActivityData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_SETRELATEDACTIVITY_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityData* get_RelatedActivity()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_RELATEDACTIVITY_OFFSET))(this);
		}

		::System::Void set_RelatedActivity(::RPG::Client::ActivityData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_SET_RELATEDACTIVITY_OFFSET))(this, a1);
		}

		::System::UInt32 get_RelatedActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_RELATEDACTIVITYID_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_ScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_SCHEDULEDATA_OFFSET))(this);
		}

		::System::UInt32 get_BeginTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_BEGINTIMESTAMP_OFFSET))(this);
		}

		::RPG::Client::DateTimePro get_BeginTimeDate()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_BEGINTIMEDATE_OFFSET))(this);
		}

		::System::UInt32 get_EndTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_ENDTIMESTAMP_OFFSET))(this);
		}

		::RPG::Client::DateTimePro get_EndTimeDate()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_ENDTIMEDATE_OFFSET))(this);
		}

		::System::Boolean IsInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_ISINSCHEDULE_OFFSET))(this);
		}

		::System::Boolean get_IsInTimeLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_ISINTIMELIMIT_OFFSET))(this);
		}

		::System::Boolean get_IsInResident()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_ISINRESIDENT_OFFSET))(this);
		}

		::System::Boolean get_IsPanelHaveResidentPart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_ISPANELHAVERESIDENTPART_OFFSET))(this);
		}

		::RPG::Client::ActivityStateData* get_StateData()
		{
			return ((::RPG::Client::ActivityStateData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_STATEDATA_OFFSET))(this);
		}

		::System::Void set_StateData(::RPG::Client::ActivityStateData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityStateData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_SET_STATEDATA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPreMissionComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_ISPREMISSIONCOMPLETE_OFFSET))(this);
		}

		::System::Boolean get_IsPreGuideComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_ISPREGUIDECOMPLETE_OFFSET))(this);
		}

		::System::Boolean get_IsInProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_ISINPROGRESS_OFFSET))(this);
		}

		::System::Boolean get_IsDelayedForExchange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_ISDELAYEDFOREXCHANGE_OFFSET))(this);
		}

		::System::Boolean IsFinishConditionsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET))(this);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_CONTENTID_OFFSET))(this);
		}

		::System::Boolean get_IsEarlyAccessCanUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_ISEARLYACCESSCANUNLOCK_OFFSET))(this);
		}

		::System::UInt32 get_WorldID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_WORLDID_OFFSET))(this);
		}

		::System::Boolean get_IsWorldEarlyAccessCanUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_ISWORLDEARLYACCESSCANUNLOCK_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* PrepareData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_PREPAREDATA_OFFSET))(this);
		}

		::System::Void CollectRequiredMission(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_COLLECTREQUIREDMISSION_OFFSET))(this, a1, a2);
		}

		::System::Void SyncSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_SYNCSCHEDULE_OFFSET))(this);
		}

		::System::Void _TrySetScheduleBeginHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA__TRYSETSCHEDULEBEGINHANDLER_OFFSET))(this);
		}

		::System::Void _OnActivityOpened(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA__ONACTIVITYOPENED_OFFSET))(this, a1);
		}

		::System::Void _TrySetScheduleEndHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA__TRYSETSCHEDULEENDHANDLER_OFFSET))(this);
		}

		::System::Void _OnActivityEnded(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA__ONACTIVITYENDED_OFFSET))(this, a1);
		}

		::System::Void _OnActivityOpenedCustom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA__ONACTIVITYOPENEDCUSTOM_OFFSET))(this);
		}

		::System::Void _OnActivityEndedCustom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA__ONACTIVITYENDEDCUSTOM_OFFSET))(this);
		}

		::System::Void SetPanelTemplate(::RPG::Client::ActivityPanelTemplate a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityPanelTemplate))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_SETPANELTEMPLATE_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityPanelTemplate get_PanelTemplate()
		{
			return ((::RPG::Client::ActivityPanelTemplate(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_PANELTEMPLATE_OFFSET))(this);
		}

		::System::Void set_PanelTemplate(::RPG::Client::ActivityPanelTemplate a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityPanelTemplate))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_SET_PANELTEMPLATE_OFFSET))(this, a1);
		}

		::System::Boolean IsHideAllRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_ISHIDEALLREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowNoPassNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_ISSHOWNOPASSNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoNewContentRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowEarlyAccessRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_ISSHOWEARLYACCESSREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowGotoBtnRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_ISSHOWGOTOBTNREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowDailyRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_ISSHOWDAILYREDDOT_OFFSET))(this);
		}

		::System::Boolean _IsNeedShowDailyRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA__ISNEEDSHOWDAILYREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowNewRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_ISSHOWNEWREDDOT_OFFSET))(this);
		}

		::System::Boolean IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_ISNEW_OFFSET))(this);
		}

		::System::Void MarkOld()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_MARKOLD_OFFSET))(this);
		}

		::System::Void _TryMarkOldWithOldPrefsData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA__TRYMARKOLDWITHOLDPREFSDATA_OFFSET))(this);
		}

		::System::Boolean _IsShowEarlyAccessRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA__ISSHOWEARLYACCESSREDDOT_OFFSET))(this);
		}

		::System::Void ManualMarkOld()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_MANUALMARKOLD_OFFSET))(this);
		}

		::System::Void UpdateRedDotStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_UPDATEREDDOTSTATUS_OFFSET))(this);
		}

		::RPG::Client::ActivityPanelResidentExtraData* get_ResidentExtraData()
		{
			return ((::RPG::Client::ActivityPanelResidentExtraData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_RESIDENTEXTRADATA_OFFSET))(this);
		}

		::RPG::Client::ActivityPanelDataResidentAdaptor* get_ResidentAdaptor()
		{
			return ((::RPG::Client::ActivityPanelDataResidentAdaptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_RESIDENTADAPTOR_OFFSET))(this);
		}

		::System::UInt32 get_SortWeight()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_SORTWEIGHT_OFFSET))(this);
		}

		::RPG::Client::TextID get_PanelDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_PANELDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_IntroDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_INTRODESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ItemConfig*>* get_DisplayItemList()
		{
			return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_DISPLAYITEMLIST_OFFSET))(this);
		}

		::System::Boolean get_DisplayItemManualSort()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_DISPLAYITEMMANUALSORT_OFFSET))(this);
		}

		::System::String* get_UIPrefab()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_UIPREFAB_OFFSET))(this);
		}

		::System::String* get_TabIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_TABICON_OFFSET))(this);
		}

		::System::String* get_UnlockConditions()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_UNLOCKCONDITIONS_OFFSET))(this);
		}

		::RPG::GameCore::ActivityPanelFinishType get_FinishType()
		{
			return ((::RPG::GameCore::ActivityPanelFinishType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_FINISHTYPE_OFFSET))(this);
		}

		::System::String* get_FinishConditions()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_FINISHCONDITIONS_OFFSET))(this);
		}

		::System::Boolean get_DailyHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_DAILYHINT_OFFSET))(this);
		}

		::RPG::Client::TextID get_TabName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_TABNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_TitleName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_TITLENAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_PanelBriefDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_PANELBRIEFDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_TagDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_TAGDESC_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityTagData*>* get_Tags()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityTagData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_TAGS_OFFSET))(this);
		}

		::System::UInt32 get_ActivityThemeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_ACTIVITYTHEMEID_OFFSET))(this);
		}

		::RPG::GameCore::ActivityThemeRow* get_Theme()
		{
			return ((::RPG::GameCore::ActivityThemeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_THEME_OFFSET))(this);
		}

		::System::Boolean get_IsSkipSwitchStoryLine()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_ISSKIPSWITCHSTORYLINE_OFFSET))(this);
		}

		::System::UInt32 get_IsSocialShow()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_ISSOCIALSHOW_OFFSET))(this);
		}

		::System::UInt32 get_GuideVideoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_GUIDEVIDEOID_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::ActivityRewardItem*>* get_SortedDisplayItemList()
		{
			return ((::Il2CppArray<::RPG::Client::ActivityRewardItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_GET_SORTEDDISPLAYITEMLIST_OFFSET))(this);
		}

		::System::Boolean _IsCachedDisplayItemListDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA__ISCACHEDDISPLAYITEMLISTDIRTY_OFFSET))(this);
		}

		::System::Void _RefreshDisplayItemList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA__REFRESHDISPLAYITEMLIST_OFFSET))(this);
		}

		::System::UInt32 RPG_Client_IActivityPanelReportable_get_RelatedActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_RPG_CLIENT_IACTIVITYPANELREPORTABLE_GET_RELATEDACTIVITYID_OFFSET))(this);
		}

		::System::UInt32 RPG_Client_IActivityPanelReportable_get_PanelID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_RPG_CLIENT_IACTIVITYPANELREPORTABLE_GET_PANELID_OFFSET))(this);
		}

		::System::UInt32 RPG_Client_IActivityPanelReportable_get_GuideTakeMission()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_RPG_CLIENT_IACTIVITYPANELREPORTABLE_GET_GUIDETAKEMISSION_OFFSET))(this);
		}

		::System::UInt32 RPG_Client_IActivityPanelReportable_get_GuideGoto()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_RPG_CLIENT_IACTIVITYPANELREPORTABLE_GET_GUIDEGOTO_OFFSET))(this);
		}

		::System::UInt32 RPG_Client_IActivityPanelReportable_get_ActivityGoto()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATA_RPG_CLIENT_IACTIVITYPANELREPORTABLE_GET_ACTIVITYGOTO_OFFSET))(this);
		}

	};
}
