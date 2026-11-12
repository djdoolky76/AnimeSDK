#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ConditionChecker; }
namespace RPG::Client { class WorldEarlyUnlockData; }
namespace RPG::GameCore { class WorldUnlockConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_WORLDEARLYUNLOCKDATA_COLLECTCONTENTIDSFROMEARLYUNLOCKPRECONDITION_OFFSET UNITYSDK_OFFSET(0xEF403F0)
#define RPG_CLIENT_WORLDEARLYUNLOCKDATA_COLLECTMISSIONSFROMEARLYUNLOCKPRECONDITION_OFFSET UNITYSDK_OFFSET(0xEF40290)
#define RPG_CLIENT_WORLDEARLYUNLOCKDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xEF3F510)
#define RPG_CLIENT_WORLDEARLYUNLOCKDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xEF3F5C0)
#define RPG_CLIENT_WORLDEARLYUNLOCKDATA_GETEARLYUNLOCKDOINGMISSIONID_OFFSET UNITYSDK_OFFSET(0xEF3FA10)
#define RPG_CLIENT_WORLDEARLYUNLOCKDATA_GETEARLYUNLOCKMISSIONIDS_OFFSET UNITYSDK_OFFSET(0xEF40080)
#define RPG_CLIENT_WORLDEARLYUNLOCKDATA_GETEARLYUNLOCKPRECONDITIONMISSIONIDS_OFFSET UNITYSDK_OFFSET(0xEF408B0)
#define RPG_CLIENT_WORLDEARLYUNLOCKDATA_GET_CANEARLYUNLOCK_OFFSET UNITYSDK_OFFSET(0xEF3FDF0)
#define RPG_CLIENT_WORLDEARLYUNLOCKDATA_GET_ISEARLYUNLOCKDOING_OFFSET UNITYSDK_OFFSET(0xEF3F9C0)
#define RPG_CLIENT_WORLDEARLYUNLOCKDATA_GET_ISEARLYUNLOCKED_OFFSET UNITYSDK_OFFSET(0xEF3FBA0)
#define RPG_CLIENT_WORLDEARLYUNLOCKDATA_GET_REMINDERACTIVITYID_OFFSET UNITYSDK_OFFSET(0xEF3F740)
#define RPG_CLIENT_WORLDEARLYUNLOCKDATA_GET_REMINDERBANNEDSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0xEF3F800)
#define RPG_CLIENT_WORLDEARLYUNLOCKDATA_GET_REMINDERDIALOGPREFABPATH_OFFSET UNITYSDK_OFFSET(0xEF3F780)
#define RPG_CLIENT_WORLDEARLYUNLOCKDATA_GET_REMINDERINITIALMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xEF3F7C0)
#define RPG_CLIENT_WORLDEARLYUNLOCKDATA_GET_SHOULDSHOWREMINDER_OFFSET UNITYSDK_OFFSET(0xEF3F8E0)
#define RPG_CLIENT_WORLDEARLYUNLOCKDATA_GET_WORLDID_OFFSET UNITYSDK_OFFSET(0xEF3F6F0)
#define RPG_CLIENT_WORLDEARLYUNLOCKDATA_GET_WORLDUNLOCKDATAREADY_OFFSET UNITYSDK_OFFSET(0xEF3FDB0)
#define RPG_CLIENT_WORLDEARLYUNLOCKDATA_ISWORLDEARLYUNLOCKFUNCTIONENABLED_OFFSET UNITYSDK_OFFSET(0xEF3F5D0)
#define RPG_CLIENT_WORLDEARLYUNLOCKDATA_PREPAREUNLOCKINADVANCEMAINMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xEF40B60)
#define RPG_CLIENT_WORLDEARLYUNLOCKDATA_REQUESTEARLYUNLOCK_OFFSET UNITYSDK_OFFSET(0xEF40E50)
#define RPG_CLIENT_WORLDEARLYUNLOCKDATA__HAVESHOWMAP_OFFSET UNITYSDK_OFFSET(0xEF3FEF0)
#define RPG_CLIENT_WORLDEARLYUNLOCKDATA__ISEARLYUNLOCKED_OFFSET UNITYSDK_OFFSET(0xEF3FBF0)
#define RPG_CLIENT_WORLDEARLYUNLOCKDATA__PREPAREUNLOCKINADVANCEMAINMISSIONDATA_B__27_0_OFFSET UNITYSDK_OFFSET(0xEF40FD0)

namespace RPG::Client
{
	inline static constexpr unsigned int WorldEarlyUnlockData_TypeDefinitionIndex = 65096;

	class WorldEarlyUnlockData : public ::System::Object
	{
	public:
		::System::String* _ReminderDialogPrefabPath; // 0x10
		::RPG::GameCore::WorldUnlockConfigRow* _UnlockRow; // 0x18
		::RPG::Client::ConditionChecker* _EarlyUnlockPreCondition; // 0x20
		::System::UInt32 _ReminderActivityID; // 0x28
		::System::Boolean _WorldUnlockDataReady; // 0x2C
		::System::Byte _padding0[0x3];
		::System::UInt32 _ReminderInitialMainMissionID; // 0x30
		// static const ::System::String* _WORLD_UNLOCK_ID_KEY; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDEARLYUNLOCKDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::WorldEarlyUnlockData* Create(::RPG::GameCore::WorldUnlockConfigRow* a1)
		{
			return ((::RPG::Client::WorldEarlyUnlockData*(*)(::RPG::GameCore::WorldUnlockConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDEARLYUNLOCKDATA_CREATE_OFFSET))(a1);
		}

		static ::System::Boolean IsWorldEarlyUnlockFunctionEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDEARLYUNLOCKDATA_ISWORLDEARLYUNLOCKFUNCTIONENABLED_OFFSET))();
		}

		::System::UInt32 get_WorldID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDEARLYUNLOCKDATA_GET_WORLDID_OFFSET))(this);
		}

		::System::UInt32 get_ReminderActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDEARLYUNLOCKDATA_GET_REMINDERACTIVITYID_OFFSET))(this);
		}

		::System::String* get_ReminderDialogPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDEARLYUNLOCKDATA_GET_REMINDERDIALOGPREFABPATH_OFFSET))(this);
		}

		::System::UInt32 get_ReminderInitialMainMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDEARLYUNLOCKDATA_GET_REMINDERINITIALMAINMISSIONID_OFFSET))(this);
		}

		::System::UInt32 get_ReminderBannedSubMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDEARLYUNLOCKDATA_GET_REMINDERBANNEDSUBMISSIONID_OFFSET))(this);
		}

		::System::Boolean get_ShouldShowReminder()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDEARLYUNLOCKDATA_GET_SHOULDSHOWREMINDER_OFFSET))(this);
		}

		::System::Boolean get_IsEarlyUnlockDoing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDEARLYUNLOCKDATA_GET_ISEARLYUNLOCKDOING_OFFSET))(this);
		}

		::System::Boolean get_IsEarlyUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDEARLYUNLOCKDATA_GET_ISEARLYUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_WorldUnlockDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDEARLYUNLOCKDATA_GET_WORLDUNLOCKDATAREADY_OFFSET))(this);
		}

		::System::Boolean get_CanEarlyUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDEARLYUNLOCKDATA_GET_CANEARLYUNLOCK_OFFSET))(this);
		}

		::System::UInt32 GetEarlyUnlockDoingMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDEARLYUNLOCKDATA_GETEARLYUNLOCKDOINGMISSIONID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetEarlyUnlockMissionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDEARLYUNLOCKDATA_GETEARLYUNLOCKMISSIONIDS_OFFSET))(this);
		}

		::System::Void CollectMissionsFromEarlyUnlockPreCondition(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDEARLYUNLOCKDATA_COLLECTMISSIONSFROMEARLYUNLOCKPRECONDITION_OFFSET))(this, a1);
		}

		::System::Void CollectContentIDsFromEarlyUnlockPreCondition(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDEARLYUNLOCKDATA_COLLECTCONTENTIDSFROMEARLYUNLOCKPRECONDITION_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetEarlyUnlockPreConditionMissionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDEARLYUNLOCKDATA_GETEARLYUNLOCKPRECONDITIONMISSIONIDS_OFFSET))(this);
		}

		::System::Void PrepareUnlockInAdvanceMainMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDEARLYUNLOCKDATA_PREPAREUNLOCKINADVANCEMAINMISSIONDATA_OFFSET))(this);
		}

		::System::Void RequestEarlyUnlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDEARLYUNLOCKDATA_REQUESTEARLYUNLOCK_OFFSET))(this);
		}

		::System::Boolean _HaveShowMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDEARLYUNLOCKDATA__HAVESHOWMAP_OFFSET))(this);
		}

		::System::Boolean _IsEarlyUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDEARLYUNLOCKDATA__ISEARLYUNLOCKED_OFFSET))(this);
		}

		::System::Void _PrepareUnlockInAdvanceMainMissionData_b__27_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLDEARLYUNLOCKDATA__PREPAREUNLOCKINADVANCEMAINMISSIONDATA_B__27_0_OFFSET))(this);
		}

	};
}
