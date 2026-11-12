#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNBONMHGNND.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MessageSectionData; }
namespace RPG::GameCore { class MessageGroupRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MESSAGEGROUPDATA_CLEARSTATUS_OFFSET UNITYSDK_OFFSET(0xE1338C0)
#define RPG_CLIENT_MESSAGEGROUPDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE133560)
#define RPG_CLIENT_MESSAGEGROUPDATA_GETALLSECTIONS_OFFSET UNITYSDK_OFFSET(0xE133CA0)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_ALLSECTIONIDS_OFFSET UNITYSDK_OFFSET(0xE133F00)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_CANFINISH_OFFSET UNITYSDK_OFFSET(0xE1346E0)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xE134000)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_INSCHEDULE_OFFSET UNITYSDK_OFFSET(0xE134F80)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_ISACTIVITY_OFFSET UNITYSDK_OFFSET(0xE134F20)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0xE135100)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_ISEND_OFFSET UNITYSDK_OFFSET(0xE134810)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0xE134290)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0xE135350)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_ISWAITINGCHOOSE_OFFSET UNITYSDK_OFFSET(0xE134150)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_LASTSECTIONDATA_OFFSET UNITYSDK_OFFSET(0xE134080)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_LASTTIME_OFFSET UNITYSDK_OFFSET(0xE134130)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_LATESTSECTIONID_OFFSET UNITYSDK_OFFSET(0xE133A10)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_LINKEDMAINMISSIONS_OFFSET UNITYSDK_OFFSET(0xE134860)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_LINKMISSIONID_OFFSET UNITYSDK_OFFSET(0xE135430)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xE134020)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_SECTIONDATAS_OFFSET UNITYSDK_OFFSET(0xE134060)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_SHOWBATTLE_OFFSET UNITYSDK_OFFSET(0xE134DF0)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_SHOWMISSION_OFFSET UNITYSDK_OFFSET(0xE134B50)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_SHOWREDDOT_OFFSET UNITYSDK_OFFSET(0xE134540)
#define RPG_CLIENT_MESSAGEGROUPDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xE134040)
#define RPG_CLIENT_MESSAGEGROUPDATA_SAFEGETSECTIONDATA_OFFSET UNITYSDK_OFFSET(0xE133670)
#define RPG_CLIENT_MESSAGEGROUPDATA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xE134010)
#define RPG_CLIENT_MESSAGEGROUPDATA_SET_LASTTIME_OFFSET UNITYSDK_OFFSET(0xE134140)
#define RPG_CLIENT_MESSAGEGROUPDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0xE134030)
#define RPG_CLIENT_MESSAGEGROUPDATA_SET_SECTIONDATAS_OFFSET UNITYSDK_OFFSET(0xE134070)
#define RPG_CLIENT_MESSAGEGROUPDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xE134050)
#define RPG_CLIENT_MESSAGEGROUPDATA_UPDATESTATUS_OFFSET UNITYSDK_OFFSET(0xE133920)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageGroupData_TypeDefinitionIndex = 68004;

	class MessageGroupData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MessageSectionData*>* _SectionDatas_k__BackingField; // 0x10
		::RPG::GameCore::MessageGroupRow* _Row_k__BackingField; // 0x18
		::System::Boolean IsSubLineGroup; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 _GroupID_k__BackingField; // 0x24
		::System::Int64 _LastTime_k__BackingField; // 0x28
		::BNBONMHGNND _Status_k__BackingField; // 0x30
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::MessageSectionData* SafeGetSectionData(::System::UInt32 a1)
		{
			return ((::RPG::Client::MessageSectionData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_SAFEGETSECTIONDATA_OFFSET))(this, a1);
		}

		::System::Void ClearStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_CLEARSTATUS_OFFSET))(this);
		}

		::System::Void UpdateStatus(::BNBONMHGNND a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::BNBONMHGNND, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_UPDATESTATUS_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MessageSectionData*>* GetAllSections()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MessageSectionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GETALLSECTIONS_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_SET_GROUPID_OFFSET))(this, a1);
		}

		::RPG::GameCore::MessageGroupRow* get_Row()
		{
			return ((::RPG::GameCore::MessageGroupRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::MessageGroupRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MessageGroupRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_SET_ROW_OFFSET))(this, a1);
		}

		::BNBONMHGNND get_Status()
		{
			return ((::BNBONMHGNND(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::BNBONMHGNND a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNBONMHGNND))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_SET_STATUS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MessageSectionData*>* get_SectionDatas()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MessageSectionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_SECTIONDATAS_OFFSET))(this);
		}

		::System::Void set_SectionDatas(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MessageSectionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MessageSectionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_SET_SECTIONDATAS_OFFSET))(this, a1);
		}

		::RPG::Client::MessageSectionData* get_LastSectionData()
		{
			return ((::RPG::Client::MessageSectionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_LASTSECTIONDATA_OFFSET))(this);
		}

		::System::Int64 get_LastTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_LASTTIME_OFFSET))(this);
		}

		::System::Void set_LastTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_SET_LASTTIME_OFFSET))(this, a1);
		}

		::System::Boolean get_IsWaitingChoose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_ISWAITINGCHOOSE_OFFSET))(this);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_ISNEW_OFFSET))(this);
		}

		::System::Boolean get_ShowRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_SHOWREDDOT_OFFSET))(this);
		}

		::System::Boolean get_CanFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_CANFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_ISEND_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_LinkedMainMissions()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_LINKEDMAINMISSIONS_OFFSET))(this);
		}

		::System::Boolean get_ShowMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_SHOWMISSION_OFFSET))(this);
		}

		::System::Boolean get_ShowBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_SHOWBATTLE_OFFSET))(this);
		}

		::System::Boolean get_IsActivity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_ISACTIVITY_OFFSET))(this);
		}

		::System::Boolean get_InSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_INSCHEDULE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_AllSectionIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_ALLSECTIONIDS_OFFSET))(this);
		}

		::System::UInt32 get_LatestSectionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_LATESTSECTIONID_OFFSET))(this);
		}

		::System::Boolean get_IsAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_ISAVAILABLE_OFFSET))(this);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_ISVISIBLE_OFFSET))(this);
		}

		::System::UInt32 get_LinkMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEGROUPDATA_GET_LINKMISSIONID_OFFSET))(this);
		}

	};
}
