#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AOPOBBPLHAE.h"
#include "unitysdk/BNBONMHGNND.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/MessageShowInUIType.h"
#include "unitysdk/RPG/GameCore/PhoneMessagePlayMode.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class LKJMFLALFEH;
class LNHCHGFEJOI;
namespace Proto { class ItemList; }
namespace RPG::Client { class MessageContactData; }
namespace RPG::Client { class MessageGroupData; }
namespace RPG::Client { class MessageItemData; }
namespace RPG::Client { class MessageSectionData; }
namespace RPG::Client { class PhoneNoticeData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class MessageItemRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MESSAGEMODULE_CCTOR_OFFSET UNITYSDK_OFFSET(0xE143DF0)
#define RPG_CLIENT_MESSAGEMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0xE143AA0)
#define RPG_CLIENT_MESSAGEMODULE_FETCHALLCONTACTSTATUS_OFFSET UNITYSDK_OFFSET(0xE13A0D0)
#define RPG_CLIENT_MESSAGEMODULE_FINISHITEMBYCHOICE_OFFSET UNITYSDK_OFFSET(0xE1362B0)
#define RPG_CLIENT_MESSAGEMODULE_FINISHITEMINHISTORY_OFFSET UNITYSDK_OFFSET(0xE136BC0)
#define RPG_CLIENT_MESSAGEMODULE_GETALLCONTACTS_OFFSET UNITYSDK_OFFSET(0xE13AC00)
#define RPG_CLIENT_MESSAGEMODULE_GETCONTACTBYGROUPID_OFFSET UNITYSDK_OFFSET(0xE13B720)
#define RPG_CLIENT_MESSAGEMODULE_GETPHONENOTICES_OFFSET UNITYSDK_OFFSET(0xE138DF0)
#define RPG_CLIENT_MESSAGEMODULE_GETWAITINGCONTACTS_OFFSET UNITYSDK_OFFSET(0xE139150)
#define RPG_CLIENT_MESSAGEMODULE_GET_MESSAGENOTICESTOSHOW_OFFSET UNITYSDK_OFFSET(0xE139B40)
#define RPG_CLIENT_MESSAGEMODULE_GET_RINGINGMESSAGEGROUPID_OFFSET UNITYSDK_OFFSET(0xE139B20)
#define RPG_CLIENT_MESSAGEMODULE_GET_WAITINGCONTACTIDS_OFFSET UNITYSDK_OFFSET(0xE143A80)
#define RPG_CLIENT_MESSAGEMODULE_GOLINK_OFFSET UNITYSDK_OFFSET(0xE137140)
#define RPG_CLIENT_MESSAGEMODULE_HASBATTLE_OFFSET UNITYSDK_OFFSET(0xE138C30)
#define RPG_CLIENT_MESSAGEMODULE_HASNOTICE_OFFSET UNITYSDK_OFFSET(0xE138BD0)
#define RPG_CLIENT_MESSAGEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xE13A080)
#define RPG_CLIENT_MESSAGEMODULE_ISITEMCHOSEN_OFFSET UNITYSDK_OFFSET(0xE1370F0)
#define RPG_CLIENT_MESSAGEMODULE_ISITEMFINISHED_OFFSET UNITYSDK_OFFSET(0xE12FB90)
#define RPG_CLIENT_MESSAGEMODULE_ISSHOWINDIALOG_OFFSET UNITYSDK_OFFSET(0xE139F20)
#define RPG_CLIENT_MESSAGEMODULE_MARKMESSAGEUNFROZENSHOWN_OFFSET UNITYSDK_OFFSET(0xE13B5B0)
#define RPG_CLIENT_MESSAGEMODULE_MISSIONDATAPREPARED_OFFSET UNITYSDK_OFFSET(0xE13B9F0)
#define RPG_CLIENT_MESSAGEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xE13A280)
#define RPG_CLIENT_MESSAGEMODULE_PREPAREGROUPDATAFORPERFORMANCEREPLAY_OFFSET UNITYSDK_OFFSET(0xE137B90)
#define RPG_CLIENT_MESSAGEMODULE_RECORDMESSAGESEEN_OFFSET UNITYSDK_OFFSET(0xE13A550)
#define RPG_CLIENT_MESSAGEMODULE_REFRESHSCHEDULE_OFFSET UNITYSDK_OFFSET(0xE13A950)
#define RPG_CLIENT_MESSAGEMODULE_REQUESTUNLOCKDATA_OFFSET UNITYSDK_OFFSET(0xE13A6B0)
#define RPG_CLIENT_MESSAGEMODULE_SAFEINITCONTACTDATA_OFFSET UNITYSDK_OFFSET(0xE13A830)
#define RPG_CLIENT_MESSAGEMODULE_SAVEMESSAGEPERFORMANCELIST_OFFSET UNITYSDK_OFFSET(0xE1378D0)
#define RPG_CLIENT_MESSAGEMODULE_SAVEMESSAGEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xE137680)
#define RPG_CLIENT_MESSAGEMODULE_SET_MESSAGENOTICESTOSHOW_OFFSET UNITYSDK_OFFSET(0xE139B50)
#define RPG_CLIENT_MESSAGEMODULE_SET_RINGINGMESSAGEGROUPID_OFFSET UNITYSDK_OFFSET(0xE139B30)
#define RPG_CLIENT_MESSAGEMODULE_SET_WAITINGCONTACTIDS_OFFSET UNITYSDK_OFFSET(0xE143A90)
#define RPG_CLIENT_MESSAGEMODULE_SHOULDSHOWMESSAGEUNFROZEN_OFFSET UNITYSDK_OFFSET(0xE13B470)
#define RPG_CLIENT_MESSAGEMODULE_SHOWGROUPREDDOT_OFFSET UNITYSDK_OFFSET(0xE13B950)
#define RPG_CLIENT_MESSAGEMODULE_SHOWMESSAGENOTICEPAGEADAPTIVE_OFFSET UNITYSDK_OFFSET(0xE139670)
#define RPG_CLIENT_MESSAGEMODULE_SHOWMESSAGENOTICEPAGE_OFFSET UNITYSDK_OFFSET(0xE139390)
#define RPG_CLIENT_MESSAGEMODULE_SHOWUNSEENUNFROZENCONTACTTOASTS_OFFSET UNITYSDK_OFFSET(0xE13AEC0)
#define RPG_CLIENT_MESSAGEMODULE_STARTMESSAGEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xE137290)
#define RPG_CLIENT_MESSAGEMODULE_TRYGETGROUPCURRENTSECTION_OFFSET UNITYSDK_OFFSET(0xE13B850)
#define RPG_CLIENT_MESSAGEMODULE_TRYGETMESSAGEGROUP_OFFSET UNITYSDK_OFFSET(0xE138510)
#define RPG_CLIENT_MESSAGEMODULE_TRYSHOWPHONENOTICE_OFFSET UNITYSDK_OFFSET(0xE138880)
#define RPG_CLIENT_MESSAGEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xE143140)
#define RPG_CLIENT_MESSAGEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xE13DDD0)
#define RPG_CLIENT_MESSAGEMODULE__COLLECTNEXTITEMSTOSPECIALDIALOG_OFFSET UNITYSDK_OFFSET(0xE139D70)
#define RPG_CLIENT_MESSAGEMODULE__DELETEGROUP_OFFSET UNITYSDK_OFFSET(0xE13BC70)
#define RPG_CLIENT_MESSAGEMODULE__DELETESECTIONDATA_OFFSET UNITYSDK_OFFSET(0xE13DA80)
#define RPG_CLIENT_MESSAGEMODULE__DOFINISHITEMBYCHOICE_OFFSET UNITYSDK_OFFSET(0xE1369A0)
#define RPG_CLIENT_MESSAGEMODULE__GETNEEDSENDPERFORMANCESECTIONDATA_OFFSET UNITYSDK_OFFSET(0xE1377C0)
#define RPG_CLIENT_MESSAGEMODULE__GETSPECIALDIALOGTYPE_OFFSET UNITYSDK_OFFSET(0xE139FF0)
#define RPG_CLIENT_MESSAGEMODULE__HASSECTIONDATA_OFFSET UNITYSDK_OFFSET(0xE136440)
#define RPG_CLIENT_MESSAGEMODULE__INITSECTION_OFFSET UNITYSDK_OFFSET(0xE13CCF0)
#define RPG_CLIENT_MESSAGEMODULE__INITSHOWINSPECIALDIALOGITEMIDS_OFFSET UNITYSDK_OFFSET(0xE139B60)
#define RPG_CLIENT_MESSAGEMODULE__ISITEMINMESSAGEGROUP_OFFSET UNITYSDK_OFFSET(0xE13D340)
#define RPG_CLIENT_MESSAGEMODULE__ISITEMRECORDEDINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xE137030)
#define RPG_CLIENT_MESSAGEMODULE__ISPERFORMANCESECTION_OFFSET UNITYSDK_OFFSET(0xE136510)
#define RPG_CLIENT_MESSAGEMODULE__ISUNFROZENCONTACTREPLIED_OFFSET UNITYSDK_OFFSET(0xE13B310)
#define RPG_CLIENT_MESSAGEMODULE__ONFINISHITEMIDSCRSP_OFFSET UNITYSDK_OFFSET(0xE13FF60)
#define RPG_CLIENT_MESSAGEMODULE__ONFINISHMULTIPERFORMSECTIONIDSCRSP_OFFSET UNITYSDK_OFFSET(0xE141C80)
#define RPG_CLIENT_MESSAGEMODULE__ONFINISHPERFORMSECTIONIDSCRSP_OFFSET UNITYSDK_OFFSET(0xE1416A0)
#define RPG_CLIENT_MESSAGEMODULE__ONFINISHSECTIONIDSCRSP_OFFSET UNITYSDK_OFFSET(0xE140480)
#define RPG_CLIENT_MESSAGEMODULE__ONGETMISSIONMESSAGESCRSP_OFFSET UNITYSDK_OFFSET(0xE142B00)
#define RPG_CLIENT_MESSAGEMODULE__ONGETNPCMESSAGEGROUPSCRSP_OFFSET UNITYSDK_OFFSET(0xE13F290)
#define RPG_CLIENT_MESSAGEMODULE__ONGETNPCSTATUSSCRSP_OFFSET UNITYSDK_OFFSET(0xE13E370)
#define RPG_CLIENT_MESSAGEMODULE__ONMESSAGENOTICECLOSE_OFFSET UNITYSDK_OFFSET(0xE139AB0)
#define RPG_CLIENT_MESSAGEMODULE__ONPHONEMESSAGEGROUPCHECKED_OFFSET UNITYSDK_OFFSET(0xE1434A0)
#define RPG_CLIENT_MESSAGEMODULE__ONPHONEMESSAGETRYFINISHGROUP_OFFSET UNITYSDK_OFFSET(0xE143500)
#define RPG_CLIENT_MESSAGEMODULE__ONPLAYERSYNCSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xE1406D0)
#define RPG_CLIENT_MESSAGEMODULE__ONRAIDDATACHANGED_OFFSET UNITYSDK_OFFSET(0xE1439F0)
#define RPG_CLIENT_MESSAGEMODULE__ONSCHEDULEREFRESH_OFFSET UNITYSDK_OFFSET(0xE1439A0)
#define RPG_CLIENT_MESSAGEMODULE__ONSTORYLINECHANGE_OFFSET UNITYSDK_OFFSET(0xE143590)
#define RPG_CLIENT_MESSAGEMODULE__ONUNFROZENCONTACTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xE13F6F0)
#define RPG_CLIENT_MESSAGEMODULE__REBUILDMESSAGEGROUP_OFFSET UNITYSDK_OFFSET(0xE13CDF0)
#define RPG_CLIENT_MESSAGEMODULE__RECORDITEMCHOICES_OFFSET UNITYSDK_OFFSET(0xE13CBE0)
#define RPG_CLIENT_MESSAGEMODULE__RECORDITEMINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xE136600)
#define RPG_CLIENT_MESSAGEMODULE__RECORDMESSAGESEEN_OFFSET UNITYSDK_OFFSET(0xE13A5A0)
#define RPG_CLIENT_MESSAGEMODULE__REFRESHALLGROUPVISIBILITY_OFFSET UNITYSDK_OFFSET(0xE1435E0)
#define RPG_CLIENT_MESSAGEMODULE__REFRESHCONTACT_OFFSET UNITYSDK_OFFSET(0xE1375B0)
#define RPG_CLIENT_MESSAGEMODULE__REFRESHFROMGROUP_OFFSET UNITYSDK_OFFSET(0xE13ABA0)
#define RPG_CLIENT_MESSAGEMODULE__REFRESHWAITINGCONTACT_OFFSET UNITYSDK_OFFSET(0xE13BEF0)
#define RPG_CLIENT_MESSAGEMODULE__RESETSECTIONHISTORY_OFFSET UNITYSDK_OFFSET(0xE13D790)
#define RPG_CLIENT_MESSAGEMODULE__SAFEGETCONTACTDATA_OFFSET UNITYSDK_OFFSET(0xE13BDF0)
#define RPG_CLIENT_MESSAGEMODULE__SAFEGETGROUP_OFFSET UNITYSDK_OFFSET(0xE1374B0)
#define RPG_CLIENT_MESSAGEMODULE__SAFEGETSECTIONDATA_OFFSET UNITYSDK_OFFSET(0xE136580)
#define RPG_CLIENT_MESSAGEMODULE__TRYFINISHITEMINHISTORY_OFFSET UNITYSDK_OFFSET(0xE136D60)
#define RPG_CLIENT_MESSAGEMODULE__TRYFINISHSECTION_OFFSET UNITYSDK_OFFSET(0xE1400F0)
#define RPG_CLIENT_MESSAGEMODULE__TRYSHOWREWARD_OFFSET UNITYSDK_OFFSET(0xE1405C0)
#define RPG_CLIENT_MESSAGEMODULE__UPDATEGROUP_OFFSET UNITYSDK_OFFSET(0xE13C030)
#define RPG_CLIENT_MESSAGEMODULE__UPDATEMESSAGEGROUP_OFFSET UNITYSDK_OFFSET(0xE13C100)
#define RPG_CLIENT_MESSAGEMODULE__UPDATESECTIONACT_OFFSET UNITYSDK_OFFSET(0xE137310)
#define RPG_CLIENT_MESSAGEMODULE__UPDATESECTIONHISTORY_OFFSET UNITYSDK_OFFSET(0xE138780)
#define RPG_CLIENT_MESSAGEMODULE__UPDATESECTIONSTATUS_OFFSET UNITYSDK_OFFSET(0xE13D440)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageModule_TypeDefinitionIndex = 68006;

	class MessageModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnfrozenMessageGroupIDs; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _WaitingContactIDs_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _HistorySentItemIDs; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MessageShowInUIType>* _ItemToSpecialDialogIDMap; // 0x28
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _SubLineSectionIDs; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _ActingSentItemIDs; // 0x38
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnfrozenContactIDs; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _SendingFinishSectionIDs; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MessageGroupData*>* _AllGroupDatas; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MessageContactData*>* _AllContactDatas; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::MessageItemData*>* _MessageNoticesToShow_k__BackingField; // 0x60
		::RPG::GameCore::LevelGraphComponent* _ShowPhoneNoticeLevelGraph; // 0x68
		::System::UInt32 _RingingMessageGroupID_k__BackingField; // 0x70
		::System::UInt32 FINISH_SECTION_INTERVAL; // 0x74
		static ::System::String** StaticGet__LEVEL_GRAPH_PATH_BEGIN_REPLY_LOGIC_CONTROL()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "MessageModule")->GetStaticField(0x67840);
		}

		static ::System::String** StaticGet__LEVEL_GRAPH_PATH_BEGIN_REPLY_NO_NOTICE()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "MessageModule")->GetStaticField(0x67848);
		}

		static ::System::String** StaticGet__LEVEL_GRAPH_PATH_BEGIN_REPLY_WITH_NOTICE()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "MessageModule")->GetStaticField(0x67850);
		}

		static ::RPG::GameCore::StringHash* StaticGet__VARIABLE_KEY_WITH_NOTICEE()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("RPG.Client", "MessageModule")->GetStaticField(0x14CF0);
		}

		static ::RPG::GameCore::StringHash* StaticGet__VARIABLE_KEY_CHARACTER_POSTURE()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("RPG.Client", "MessageModule")->GetStaticField(0x14CF4);
		}

		static ::RPG::GameCore::StringHash* StaticGet__VARIABLE_KEY_ENABLE_UI_DOF()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("RPG.Client", "MessageModule")->GetStaticField(0x14CF8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_CCTOR_OFFSET))();
		}

		::System::Void FinishItemByChoice(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_FINISHITEMBYCHOICE_OFFSET))(this, a1);
		}

		::System::Void FinishItemInHistory(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_FINISHITEMINHISTORY_OFFSET))(this, a1);
		}

		::System::Boolean IsItemFinished(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_ISITEMFINISHED_OFFSET))(this, a1);
		}

		::System::Boolean IsItemChosen(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_ISITEMCHOSEN_OFFSET))(this, a1);
		}

		::System::Void GoLink(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_GOLINK_OFFSET))(this, a1);
		}

		::System::Void _DoFinishItemByChoice(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__DOFINISHITEMBYCHOICE_OFFSET))(this, a1);
		}

		::System::Void _TryFinishItemInHistory(::RPG::GameCore::MessageItemRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MessageItemRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__TRYFINISHITEMINHISTORY_OFFSET))(this, a1);
		}

		::System::Void StartMessagePerformance(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_STARTMESSAGEPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Boolean SaveMessagePerformance(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_SAVEMESSAGEPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Boolean SaveMessagePerformanceList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_SAVEMESSAGEPERFORMANCELIST_OFFSET))(this, a1);
		}

		::System::Void PrepareGroupDataForPerformanceReplay(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_PREPAREGROUPDATAFORPERFORMANCEREPLAY_OFFSET))(this, a1);
		}

		::RPG::Client::MessageSectionData* _GetNeedSendPerformanceSectionData(::System::UInt32 a1)
		{
			return ((::RPG::Client::MessageSectionData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__GETNEEDSENDPERFORMANCESECTIONDATA_OFFSET))(this, a1);
		}

		::System::Void _RecordItemInPerformance(::RPG::Client::MessageSectionData* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageSectionData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__RECORDITEMINPERFORMANCE_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsPerformanceSection(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ISPERFORMANCESECTION_OFFSET))(this, a1);
		}

		::System::Boolean _IsItemRecordedInPerformance(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ISITEMRECORDEDINPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Boolean TryShowPhoneNotice(::RPG::Client::MessageSectionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageSectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_TRYSHOWPHONENOTICE_OFFSET))(this, a1);
		}

		::System::Boolean HasNotice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_HASNOTICE_OFFSET))(this);
		}

		::System::Boolean HasBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_HASBATTLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PhoneNoticeData*>* GetPhoneNotices()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PhoneNoticeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_GETPHONENOTICES_OFFSET))(this);
		}

		::System::Boolean ShowMessageNoticePage(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_SHOWMESSAGENOTICEPAGE_OFFSET))(this, a1, a2);
		}

		::System::Boolean ShowMessageNoticePageAdaptive(::System::UInt32 a1, ::System::Boolean a2, ::RPG::GameCore::PhoneMessagePlayMode a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::RPG::GameCore::PhoneMessagePlayMode, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_SHOWMESSAGENOTICEPAGEADAPTIVE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _OnMessageNoticeClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONMESSAGENOTICECLOSE_OFFSET))(this);
		}

		::System::UInt32 get_RingingMessageGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_GET_RINGINGMESSAGEGROUPID_OFFSET))(this);
		}

		::System::Void set_RingingMessageGroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_SET_RINGINGMESSAGEGROUPID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MessageItemData*>* get_MessageNoticesToShow()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MessageItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_GET_MESSAGENOTICESTOSHOW_OFFSET))(this);
		}

		::System::Void set_MessageNoticesToShow(::System::Collections::Generic::List_1<::RPG::Client::MessageItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MessageItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_SET_MESSAGENOTICESTOSHOW_OFFSET))(this, a1);
		}

		::System::Void _InitShowInSpecialDialogItemIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__INITSHOWINSPECIALDIALOGITEMIDS_OFFSET))(this);
		}

		::System::Void _CollectNextItemsToSpecialDialog(::RPG::GameCore::MessageItemRow* a1, ::RPG::Client::MessageShowInUIType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MessageItemRow*, ::RPG::Client::MessageShowInUIType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__COLLECTNEXTITEMSTOSPECIALDIALOG_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsShowInDialog(::System::UInt32 a1, ::RPG::Client::MessageShowInUIType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::MessageShowInUIType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_ISSHOWINDIALOG_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MessageShowInUIType _GetSpecialDialogType(::System::UInt32 a1)
		{
			return ((::RPG::Client::MessageShowInUIType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__GETSPECIALDIALOGTYPE_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_INIT_OFFSET))(this);
		}

		::System::Void FetchAllContactStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_FETCHALLCONTACTSTATUS_OFFSET))(this);
		}

		::System::Void RecordMessageSeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_RECORDMESSAGESEEN_OFFSET))(this, a1);
		}

		::System::Void RequestUnlockData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_REQUESTUNLOCKDATA_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void SafeInitContactData(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_SAFEINITCONTACTDATA_OFFSET))(this, a1);
		}

		::System::Void RefreshSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_REFRESHSCHEDULE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MessageContactData*>* GetAllContacts()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MessageContactData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_GETALLCONTACTS_OFFSET))(this);
		}

		::System::Void ShowUnseenUnfrozenContactToasts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_SHOWUNSEENUNFROZENCONTACTTOASTS_OFFSET))(this);
		}

		::System::Boolean _IsUnfrozenContactReplied(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ISUNFROZENCONTACTREPLIED_OFFSET))(this, a1);
		}

		::System::Boolean ShouldShowMessageUnfrozen(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_SHOULDSHOWMESSAGEUNFROZEN_OFFSET))(this, a1);
		}

		::System::Void MarkMessageUnfrozenShown(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_MARKMESSAGEUNFROZENSHOWN_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MessageContactData*>* GetWaitingContacts()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MessageContactData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_GETWAITINGCONTACTS_OFFSET))(this);
		}

		::RPG::Client::MessageContactData* GetContactByGroupID(::System::UInt32 a1)
		{
			return ((::RPG::Client::MessageContactData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_GETCONTACTBYGROUPID_OFFSET))(this, a1);
		}

		::RPG::Client::MessageGroupData* TryGetMessageGroup(::System::UInt32 a1)
		{
			return ((::RPG::Client::MessageGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_TRYGETMESSAGEGROUP_OFFSET))(this, a1);
		}

		::RPG::Client::MessageSectionData* TryGetGroupCurrentSection(::System::UInt32 a1)
		{
			return ((::RPG::Client::MessageSectionData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_TRYGETGROUPCURRENTSECTION_OFFSET))(this, a1);
		}

		::System::Boolean ShowGroupRedDot(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_SHOWGROUPREDDOT_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* MissionDataPrepared()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_MISSIONDATAPREPARED_OFFSET))(this);
		}

		::RPG::Client::MessageGroupData* _SafeGetGroup(::System::UInt32 a1)
		{
			return ((::RPG::Client::MessageGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__SAFEGETGROUP_OFFSET))(this, a1);
		}

		::System::Void _DeleteGroup(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__DELETEGROUP_OFFSET))(this, a1);
		}

		::System::Void _UpdateGroup(::RPG::Client::MessageGroupData* a1, ::BNBONMHGNND a2, ::System::Int64 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageGroupData*, ::BNBONMHGNND, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__UPDATEGROUP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _UpdateMessageGroup(::LNHCHGFEJOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNHCHGFEJOI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__UPDATEMESSAGEGROUP_OFFSET))(this, a1);
		}

		::System::Void _RebuildMessageGroup(::LNHCHGFEJOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNHCHGFEJOI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__REBUILDMESSAGEGROUP_OFFSET))(this, a1);
		}

		::System::Boolean _IsItemInMessageGroup(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ISITEMINMESSAGEGROUP_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshFromGroup(::RPG::Client::MessageGroupData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__REFRESHFROMGROUP_OFFSET))(this, a1);
		}

		::System::Void _RefreshContact(::RPG::Client::MessageGroupData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__REFRESHCONTACT_OFFSET))(this, a1);
		}

		::System::Void _RefreshWaitingContact(::RPG::Client::MessageContactData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageContactData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__REFRESHWAITINGCONTACT_OFFSET))(this, a1);
		}

		::RPG::Client::MessageContactData* _SafeGetContactData(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::MessageContactData*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__SAFEGETCONTACTDATA_OFFSET))(this, a1, a2);
		}

		::System::Void _InitSection(::System::UInt32 a1, ::LKJMFLALFEH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::LKJMFLALFEH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__INITSECTION_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateSectionStatus(::RPG::Client::MessageSectionData* a1, ::AOPOBBPLHAE a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageSectionData*, ::AOPOBBPLHAE))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__UPDATESECTIONSTATUS_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateSectionAct(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__UPDATESECTIONACT_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateSectionHistory(::RPG::Client::MessageSectionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageSectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__UPDATESECTIONHISTORY_OFFSET))(this, a1);
		}

		::System::Void _ResetSectionHistory(::RPG::Client::MessageSectionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageSectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__RESETSECTIONHISTORY_OFFSET))(this, a1);
		}

		::RPG::Client::MessageSectionData* _SafeGetSectionData(::System::UInt32 a1)
		{
			return ((::RPG::Client::MessageSectionData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__SAFEGETSECTIONDATA_OFFSET))(this, a1);
		}

		::System::Void _DeleteSectionData(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__DELETESECTIONDATA_OFFSET))(this, a1);
		}

		::System::Boolean _HasSectionData(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__HASSECTIONDATA_OFFSET))(this, a1);
		}

		::System::Void _RecordItemChoices(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__RECORDITEMCHOICES_OFFSET))(this, a1);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetNpcStatusScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONGETNPCSTATUSSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetNpcMessageGroupScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONGETNPCMESSAGEGROUPSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnUnfrozenContactScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONUNFROZENCONTACTSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFinishItemIdScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONFINISHITEMIDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFinishSectionIdScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONFINISHSECTIONIDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPlayerSyncScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONPLAYERSYNCSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFinishPerformSectionIdScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONFINISHPERFORMSECTIONIDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFinishMultiPerformSectionIdScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONFINISHMULTIPERFORMSECTIONIDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetMissionMessageScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONGETMISSIONMESSAGESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _TryShowReward(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__TRYSHOWREWARD_OFFSET))(this, a1);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnPhoneMessageGroupChecked(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONPHONEMESSAGEGROUPCHECKED_OFFSET))(this, a1);
		}

		::System::Void _OnPhoneMessageTryFinishGroup(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONPHONEMESSAGETRYFINISHGROUP_OFFSET))(this, a1);
		}

		::System::Void _OnStoryLineChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONSTORYLINECHANGE_OFFSET))(this, a1);
		}

		::System::Void _RefreshAllGroupVisibility()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__REFRESHALLGROUPVISIBILITY_OFFSET))(this);
		}

		::System::Void _TryFinishSection(::RPG::Client::MessageSectionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageSectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__TRYFINISHSECTION_OFFSET))(this, a1);
		}

		::System::Void _RecordMessageSeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__RECORDMESSAGESEEN_OFFSET))(this, a1);
		}

		::System::Void _OnScheduleRefresh(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONSCHEDULEREFRESH_OFFSET))(this, a1);
		}

		::System::Void _OnRaidDataChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONRAIDDATACHANGED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_WaitingContactIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_GET_WAITINGCONTACTIDS_OFFSET))(this);
		}

		::System::Void set_WaitingContactIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_SET_WAITINGCONTACTIDS_OFFSET))(this, a1);
		}

	};
}
