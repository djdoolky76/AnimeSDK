#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AOPOBBPLHAE.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MessageItemData; }
namespace RPG::Client { class MessageSectionData; }
namespace RPG::GameCore { class MessageSectionRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MESSAGESECTIONDATA_CLEARSTATUS_OFFSET UNITYSDK_OFFSET(0x19646B00)
#define RPG_CLIENT_MESSAGESECTIONDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1963CFB0)
#define RPG_CLIENT_MESSAGESECTIONDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1964DA10)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_CANFINISH_OFFSET UNITYSDK_OFFSET(0x1963DFF0)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_CONTACTID_OFFSET UNITYSDK_OFFSET(0x1964E240)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_FIRSTITEM_OFFSET UNITYSDK_OFFSET(0x19642390)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1964E260)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_HASUPDATED_OFFSET UNITYSDK_OFFSET(0x1964DB80)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_HISTORYITEMS_OFFSET UNITYSDK_OFFSET(0x1964E090)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x19641F70)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_INPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1964E070)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_ISEND_OFFSET UNITYSDK_OFFSET(0x19641E00)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_ISFROZEN_OFFSET UNITYSDK_OFFSET(0x1964E1D0)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_ISPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x19646F30)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_ISVISIBLEINCONTACT_OFFSET UNITYSDK_OFFSET(0x1963EB10)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_ISVISIBLEINHISTORY_OFFSET UNITYSDK_OFFSET(0x1963D790)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_ISWAITINGITEMCHOOSE_OFFSET UNITYSDK_OFFSET(0x1963DA70)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_ISWAITINGITEMFINISH_OFFSET UNITYSDK_OFFSET(0x196470B0)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_ISWAITINGITEM_OFFSET UNITYSDK_OFFSET(0x1964E0B0)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_LATESTITEM_OFFSET UNITYSDK_OFFSET(0x1963DD00)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_LINKMISSIONID_OFFSET UNITYSDK_OFFSET(0x1963EE70)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_PREVIEW_OFFSET UNITYSDK_OFFSET(0x1964E280)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1964E220)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_SHOWBATTLE_OFFSET UNITYSDK_OFFSET(0x1963E6D0)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_SHOWREDDOT_OFFSET UNITYSDK_OFFSET(0x1963DE90)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1964E050)
#define RPG_CLIENT_MESSAGESECTIONDATA_GET_WAITINGITEMIDS_OFFSET UNITYSDK_OFFSET(0x1964E150)
#define RPG_CLIENT_MESSAGESECTIONDATA_SETLASTFINISHEDITEM_OFFSET UNITYSDK_OFFSET(0x19646C30)
#define RPG_CLIENT_MESSAGESECTIONDATA_SET_CONTACTID_OFFSET UNITYSDK_OFFSET(0x1964E250)
#define RPG_CLIENT_MESSAGESECTIONDATA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1964E270)
#define RPG_CLIENT_MESSAGESECTIONDATA_SET_HISTORYITEMS_OFFSET UNITYSDK_OFFSET(0x1964E0A0)
#define RPG_CLIENT_MESSAGESECTIONDATA_SET_INPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1964E080)
#define RPG_CLIENT_MESSAGESECTIONDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x1964E230)
#define RPG_CLIENT_MESSAGESECTIONDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x1964E060)
#define RPG_CLIENT_MESSAGESECTIONDATA_UPDATEHISTORY_OFFSET UNITYSDK_OFFSET(0x19647180)
#define RPG_CLIENT_MESSAGESECTIONDATA_UPDATEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x19646F80)
#define RPG_CLIENT_MESSAGESECTIONDATA_UPDATESTATUS_OFFSET UNITYSDK_OFFSET(0x1963D490)
#define RPG_CLIENT_MESSAGESECTIONDATA__RECORDITEM_OFFSET UNITYSDK_OFFSET(0x1964DF50)
#define RPG_CLIENT_MESSAGESECTIONDATA__SHOULDRECORDITEM_OFFSET UNITYSDK_OFFSET(0x1964DE30)
#define RPG_CLIENT_MESSAGESECTIONDATA__TRYFINISHLASTITEM_OFFSET UNITYSDK_OFFSET(0x1964DA50)
#define RPG_CLIENT_MESSAGESECTIONDATA__TRYRECORDITEM_OFFSET UNITYSDK_OFFSET(0x1964DBE0)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageSectionData_TypeDefinitionIndex = 68010;

	class MessageSectionData : public ::System::Object
	{
	public:
		::RPG::GameCore::MessageSectionRow* _Row_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::MessageItemData*>* _HistoryItems_k__BackingField; // 0x18
		::System::UInt32 _LastFinishedItemID; // 0x20
		::System::UInt32 _GroupID_k__BackingField; // 0x24
		::AOPOBBPLHAE _Status_k__BackingField; // 0x28
		::System::Boolean _InPerformance_k__BackingField; // 0x2C
		::System::Byte _padding0[0x3];
		::System::UInt32 _ContactID_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MessageSectionData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::MessageSectionData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_CREATE_OFFSET))(a1);
		}

		::System::UInt32 UpdateHistory(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_UPDATEHISTORY_OFFSET))(this, a1);
		}

		::System::Void SetLastFinishedItem(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_SETLASTFINISHEDITEM_OFFSET))(this, a1);
		}

		::System::Boolean UpdateStatus(::AOPOBBPLHAE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AOPOBBPLHAE))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_UPDATESTATUS_OFFSET))(this, a1);
		}

		::System::Void ClearStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_CLEARSTATUS_OFFSET))(this);
		}

		::System::Boolean UpdatePerformance(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_UPDATEPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void _TryFinishLastItem(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA__TRYFINISHLASTITEM_OFFSET))(this, a1);
		}

		::System::Boolean _TryRecordItem(::Il2CppArray<::System::UInt32>* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA__TRYRECORDITEM_OFFSET))(this, a1, a2);
		}

		::System::Boolean _ShouldRecordItem(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA__SHOULDRECORDITEM_OFFSET))(this, a1, a2);
		}

		::System::Void _RecordItem(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA__RECORDITEM_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_ID_OFFSET))(this);
		}

		::AOPOBBPLHAE get_Status()
		{
			return ((::AOPOBBPLHAE(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::AOPOBBPLHAE a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOPOBBPLHAE))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_SET_STATUS_OFFSET))(this, a1);
		}

		::System::Boolean get_InPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_INPERFORMANCE_OFFSET))(this);
		}

		::System::Void set_InPerformance(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_SET_INPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_ISPERFORMANCE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MessageItemData*>* get_HistoryItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MessageItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_HISTORYITEMS_OFFSET))(this);
		}

		::System::Void set_HistoryItems(::System::Collections::Generic::List_1<::RPG::Client::MessageItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MessageItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_SET_HISTORYITEMS_OFFSET))(this, a1);
		}

		::RPG::Client::MessageItemData* get_FirstItem()
		{
			return ((::RPG::Client::MessageItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_FIRSTITEM_OFFSET))(this);
		}

		::RPG::Client::MessageItemData* get_LatestItem()
		{
			return ((::RPG::Client::MessageItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_LATESTITEM_OFFSET))(this);
		}

		::System::Boolean get_IsWaitingItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_ISWAITINGITEM_OFFSET))(this);
		}

		::System::Boolean get_IsWaitingItemChoose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_ISWAITINGITEMCHOOSE_OFFSET))(this);
		}

		::System::Boolean get_IsWaitingItemFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_ISWAITINGITEMFINISH_OFFSET))(this);
		}

		::System::Boolean get_ShowRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_SHOWREDDOT_OFFSET))(this);
		}

		::System::Boolean get_IsVisibleInHistory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_ISVISIBLEINHISTORY_OFFSET))(this);
		}

		::System::Boolean get_IsVisibleInContact()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_ISVISIBLEINCONTACT_OFFSET))(this);
		}

		::System::Boolean get_IsEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_ISEND_OFFSET))(this);
		}

		::System::Boolean get_ShowBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_SHOWBATTLE_OFFSET))(this);
		}

		::System::Boolean get_IsFrozen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_ISFROZEN_OFFSET))(this);
		}

		::System::Boolean get_CanFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_CANFINISH_OFFSET))(this);
		}

		::System::Boolean get_HasUpdated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_HASUPDATED_OFFSET))(this);
		}

		::RPG::GameCore::MessageSectionRow* get_Row()
		{
			return ((::RPG::GameCore::MessageSectionRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::MessageSectionRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MessageSectionRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_SET_ROW_OFFSET))(this, a1);
		}

		::System::UInt32 get_ContactID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_CONTACTID_OFFSET))(this);
		}

		::System::Void set_ContactID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_SET_CONTACTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_SET_GROUPID_OFFSET))(this, a1);
		}

		::System::String* get_Preview()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_PREVIEW_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_WaitingItemIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_WAITINGITEMIDS_OFFSET))(this);
		}

		::System::UInt32 get_LinkMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGESECTIONDATA_GET_LINKMISSIONID_OFFSET))(this);
		}

	};
}
