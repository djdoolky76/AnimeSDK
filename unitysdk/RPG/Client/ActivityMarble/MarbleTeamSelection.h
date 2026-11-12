#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityMarble { class IMarbleData; }
namespace RPG::Client::ActivityMarble { class IMarbleRepository; }
namespace RPG::Client::ActivityMarble { class MarbleTeamSelection; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_ADDMEMBER_OFFSET UNITYSDK_OFFSET(0xCE95FE0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_CLEARMEMBERS_OFFSET UNITYSDK_OFFSET(0xCE957E0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_CREATEEMPTYWITHCUSTOMMAXSELECTION_OFFSET UNITYSDK_OFFSET(0xCE94E80)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_CREATEEMPTY_OFFSET UNITYSDK_OFFSET(0xCE8BE20)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_CREATEFULLTEAM_OFFSET UNITYSDK_OFFSET(0xCE8BD50)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_CREATEWITHDEFAULTMEMBERS_1_OFFSET UNITYSDK_OFFSET(0xCE95310)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_CREATEWITHDEFAULTMEMBERS_OFFSET UNITYSDK_OFFSET(0xCE8B7C0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_CTOR_OFFSET UNITYSDK_OFFSET(0xCE94D70)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_GETFIRSTEMPTYINDEX_OFFSET UNITYSDK_OFFSET(0xCE95DC0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_GETMARBLESEALDATABYTEAMINDEX_OFFSET UNITYSDK_OFFSET(0xCE7E2B0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_GETMARBLESUBSEALDATABYTEAMINDEX_OFFSET UNITYSDK_OFFSET(0xCE7FC50)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_GETMEMBERIDS_OFFSET UNITYSDK_OFFSET(0xCE958B0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_GETMEMBERSCOUNT_OFFSET UNITYSDK_OFFSET(0xCE95EC0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_GETMEMBERS_OFFSET UNITYSDK_OFFSET(0xCE87980)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_GETONFIELDMARBLESEALDATABYTEAMINDEX_OFFSET UNITYSDK_OFFSET(0xCE7F840)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_GETONFIELDMEMBERS_OFFSET UNITYSDK_OFFSET(0xCE94770)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_GETTEAMINDEXBYMARBLESEALDATA_OFFSET UNITYSDK_OFFSET(0xCE95E40)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_GET_MAXSELECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xCE96160)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xCE829F0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_ISFULL_OFFSET UNITYSDK_OFFSET(0xCE95B10)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_ISSAMETEAM_OFFSET UNITYSDK_OFFSET(0xCE95BA0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_OVERRIDEREPOSITORY_OFFSET UNITYSDK_OFFSET(0xCE95790)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_REMOVEMEMBER_OFFSET UNITYSDK_OFFSET(0xCE7E470)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_SETFULLTEAM_OFFSET UNITYSDK_OFFSET(0xCE94F10)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_SETISINEDITMODE_OFFSET UNITYSDK_OFFSET(0xCE95860)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_SETMEMBER_OFFSET UNITYSDK_OFFSET(0xCE960A0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_SET_MAXSELECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xCE96170)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_SYNCSERVERTEAM_OFFSET UNITYSDK_OFFSET(0xCE8B490)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarbleTeamSelection_TypeDefinitionIndex = 78306;

	class MarbleTeamSelection : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::ActivityMarble::IMarbleData*>* _SelectedMarbleSeals; // 0x10
		::RPG::Client::ActivityMarble::IMarbleRepository* _Repository; // 0x18
		::FJPMJPEKLJL _GameMode; // 0x20
		::System::Int32 _MaxSelectionCount_k__BackingField; // 0x24
		::System::Boolean _IsInEditMode; // 0x28
		// static const ::System::Object INVALID_TEAM_INDEX; // 0x0
		::System::Void _ctor(::System::Int32 a1, ::FJPMJPEKLJL a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::FJPMJPEKLJL))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::ActivityMarble::MarbleTeamSelection* CreateEmpty(::FJPMJPEKLJL a1)
		{
			return ((::RPG::Client::ActivityMarble::MarbleTeamSelection*(*)(::FJPMJPEKLJL))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_CREATEEMPTY_OFFSET))(a1);
		}

		static ::RPG::Client::ActivityMarble::MarbleTeamSelection* CreateEmptyWithCustomMaxSelection(::FJPMJPEKLJL a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::ActivityMarble::MarbleTeamSelection*(*)(::FJPMJPEKLJL, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_CREATEEMPTYWITHCUSTOMMAXSELECTION_OFFSET))(a1, a2);
		}

		static ::RPG::Client::ActivityMarble::MarbleTeamSelection* CreateFullTeam(::System::Collections::Generic::IList_1<::System::UInt32>* a1, ::FJPMJPEKLJL a2)
		{
			return ((::RPG::Client::ActivityMarble::MarbleTeamSelection*(*)(::System::Collections::Generic::IList_1<::System::UInt32>*, ::FJPMJPEKLJL))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_CREATEFULLTEAM_OFFSET))(a1, a2);
		}

		static ::RPG::Client::ActivityMarble::MarbleTeamSelection* CreateWithDefaultMembers(::System::Collections::Generic::IEnumerator_1<::System::UInt32>* a1, ::FJPMJPEKLJL a2)
		{
			return ((::RPG::Client::ActivityMarble::MarbleTeamSelection*(*)(::System::Collections::Generic::IEnumerator_1<::System::UInt32>*, ::FJPMJPEKLJL))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_CREATEWITHDEFAULTMEMBERS_OFFSET))(a1, a2);
		}

		static ::RPG::Client::ActivityMarble::MarbleTeamSelection* CreateWithDefaultMembers_1(::System::Collections::Generic::IList_1<::System::UInt32>* a1, ::FJPMJPEKLJL a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::ActivityMarble::MarbleTeamSelection*(*)(::System::Collections::Generic::IList_1<::System::UInt32>*, ::FJPMJPEKLJL, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_CREATEWITHDEFAULTMEMBERS_1_OFFSET))(a1, a2, a3);
		}

		::System::Void OverrideRepository(::RPG::Client::ActivityMarble::IMarbleRepository* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::IMarbleRepository*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_OVERRIDEREPOSITORY_OFFSET))(this, a1);
		}

		::System::Void SetFullTeam(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_SETFULLTEAM_OFFSET))(this, a1);
		}

		::System::Void SyncServerTeam(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_SYNCSERVERTEAM_OFFSET))(this, a1);
		}

		::System::Void ClearMembers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_CLEARMEMBERS_OFFSET))(this);
		}

		::System::Void SetIsInEditMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_SETISINEDITMODE_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::Client::ActivityMarble::IMarbleData*>* GetMembers()
		{
			return ((::Il2CppArray<::RPG::Client::ActivityMarble::IMarbleData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_GETMEMBERS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetMemberIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_GETMEMBERIDS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::ActivityMarble::IMarbleData*>* GetOnFieldMembers()
		{
			return ((::Il2CppArray<::RPG::Client::ActivityMarble::IMarbleData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_GETONFIELDMEMBERS_OFFSET))(this);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_ISEMPTY_OFFSET))(this);
		}

		::System::Boolean IsFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_ISFULL_OFFSET))(this);
		}

		::System::Boolean IsSameTeam(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_ISSAMETEAM_OFFSET))(this, a1);
		}

		::System::Int32 GetFirstEmptyIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_GETFIRSTEMPTYINDEX_OFFSET))(this);
		}

		::System::Int32 GetTeamIndexByMarbleSealData(::RPG::Client::ActivityMarble::IMarbleData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityMarble::IMarbleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_GETTEAMINDEXBYMARBLESEALDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityMarble::IMarbleData* GetMarbleSealDataByTeamIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::ActivityMarble::IMarbleData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_GETMARBLESEALDATABYTEAMINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityMarble::IMarbleData* GetOnFieldMarbleSealDataByTeamIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::ActivityMarble::IMarbleData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_GETONFIELDMARBLESEALDATABYTEAMINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityMarble::IMarbleData* GetMarbleSubSealDataByTeamIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::ActivityMarble::IMarbleData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_GETMARBLESUBSEALDATABYTEAMINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 GetMembersCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_GETMEMBERSCOUNT_OFFSET))(this);
		}

		::System::Void AddMember(::RPG::Client::ActivityMarble::IMarbleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::IMarbleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_ADDMEMBER_OFFSET))(this, a1);
		}

		::System::Void SetMember(::RPG::Client::ActivityMarble::IMarbleData* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::IMarbleData*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_SETMEMBER_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveMember(::RPG::Client::ActivityMarble::IMarbleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::IMarbleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_REMOVEMEMBER_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxSelectionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_GET_MAXSELECTIONCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxSelectionCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLETEAMSELECTION_SET_MAXSELECTIONCOUNT_OFFSET))(this, a1);
		}

	};
}
