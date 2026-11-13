#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace RPG::Client { class SilverWolfGroupData; }
namespace RPG::GameCore { class SilverWolfCollectionRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SILVERWOLFMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0x1B3FF050)
#define RPG_CLIENT_SILVERWOLFMODULE_GETAVAILREWARDQUESTIDLIST_OFFSET UNITYSDK_OFFSET(0x1B3FCD80)
#define RPG_CLIENT_SILVERWOLFMODULE_GETDECALCOLLECTEDNUM_OFFSET UNITYSDK_OFFSET(0x1B3FC1C0)
#define RPG_CLIENT_SILVERWOLFMODULE_GETDECALCOLLECTIONROWS_OFFSET UNITYSDK_OFFSET(0x1B3FBF90)
#define RPG_CLIENT_SILVERWOLFMODULE_GETNEWGROUPIDLIST_OFFSET UNITYSDK_OFFSET(0x1B3FA2B0)
#define RPG_CLIENT_SILVERWOLFMODULE_GETNEWTABGROUPIDLIST_OFFSET UNITYSDK_OFFSET(0x1B3F97B0)
#define RPG_CLIENT_SILVERWOLFMODULE_GETREWARDAVAILGROUPDATA_OFFSET UNITYSDK_OFFSET(0x1B3F9E20)
#define RPG_CLIENT_SILVERWOLFMODULE_GETSILVERWOLFGROUPDATA_OFFSET UNITYSDK_OFFSET(0x1B3FBA30)
#define RPG_CLIENT_SILVERWOLFMODULE_GETSORTEDSILVERWOLFGROUPDATAS_OFFSET UNITYSDK_OFFSET(0x1B3FBDA0)
#define RPG_CLIENT_SILVERWOLFMODULE_GET_ACTIVITYOPENSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1B3FA6B0)
#define RPG_CLIENT_SILVERWOLFMODULE_GET_COMPANIONMISSIONNEWFINISH_OFFSET UNITYSDK_OFFSET(0x1B3FF010)
#define RPG_CLIENT_SILVERWOLFMODULE_GET_DECALFUNCUNLOCKMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x1B3FEC10)
#define RPG_CLIENT_SILVERWOLFMODULE_GET_DECALUNLOCKSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1B3FE440)
#define RPG_CLIENT_SILVERWOLFMODULE_GET_ISDECALFUNCUNLOCK_OFFSET UNITYSDK_OFFSET(0x1B3FEFA0)
#define RPG_CLIENT_SILVERWOLFMODULE_GET_ONLYSHOPSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1B3FEE20)
#define RPG_CLIENT_SILVERWOLFMODULE_GET_SILVERWOLFGROUPDATAS_OFFSET UNITYSDK_OFFSET(0x1B3FEA70)
#define RPG_CLIENT_SILVERWOLFMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1B3FD1F0)
#define RPG_CLIENT_SILVERWOLFMODULE_SHOWCOMPANIONBTNREDDOT_OFFSET UNITYSDK_OFFSET(0x1B3FA000)
#define RPG_CLIENT_SILVERWOLFMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B3FD800)
#define RPG_CLIENT_SILVERWOLFMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B3FD720)
#define RPG_CLIENT_SILVERWOLFMODULE__CHECKCOMPANIONMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0x1B3FE590)
#define RPG_CLIENT_SILVERWOLFMODULE__CHECKDECALUNLOCK_OFFSET UNITYSDK_OFFSET(0x1B3FE1F0)
#define RPG_CLIENT_SILVERWOLFMODULE__GETOPENGROUPDATA_OFFSET UNITYSDK_OFFSET(0x1B3FC9E0)
#define RPG_CLIENT_SILVERWOLFMODULE__INITGROUPDATA_OFFSET UNITYSDK_OFFSET(0x1B3FBB10)
#define RPG_CLIENT_SILVERWOLFMODULE__INITPREMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x1B3FD4F0)
#define RPG_CLIENT_SILVERWOLFMODULE__INITUNLOCKMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x1B3FD320)
#define RPG_CLIENT_SILVERWOLFMODULE__ISDECALUNLOCKMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0x1B3FEAD0)
#define RPG_CLIENT_SILVERWOLFMODULE__ONCMDPLAYERSYNCSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1B3FC340)
#define RPG_CLIENT_SILVERWOLFMODULE__ONNEWDECALDIALOGEXIT_OFFSET UNITYSDK_OFFSET(0x1B3FE860)
#define RPG_CLIENT_SILVERWOLFMODULE__ONSCHEDULEEND_OFFSET UNITYSDK_OFFSET(0x1B3FE800)
#define RPG_CLIENT_SILVERWOLFMODULE__ONSCHEDULEREFRESH_OFFSET UNITYSDK_OFFSET(0x1B3FE6C0)
#define RPG_CLIENT_SILVERWOLFMODULE__ONTRANSFERFINISHEDEVENT_OFFSET UNITYSDK_OFFSET(0x1B3FE650)
#define RPG_CLIENT_SILVERWOLFMODULE__PREPARECONDITIONMISSION_OFFSET UNITYSDK_OFFSET(0x1B3FDCA0)
#define RPG_CLIENT_SILVERWOLFMODULE__PREPARETASKMAINMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x1B3FDB60)
#define RPG_CLIENT_SILVERWOLFMODULE__REFRESHPREMISSIONSTATE_OFFSET UNITYSDK_OFFSET(0x1B3FDFB0)

namespace RPG::Client
{
	inline static constexpr unsigned int SilverWolfModule_TypeDefinitionIndex = 69910;

	class SilverWolfModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::ScheduleData* _OnlyShopSchedule; // 0x10
		::System::String* TutorialKeyAfterTrans; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::SilverWolfGroupData*>* _SilverWolfGroupDatas; // 0x20
		::RPG::Client::ScheduleData* _DecalUnlockSchedule; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* UnlockMissionList; // 0x30
		::RPG::Client::ScheduleData* _ActivityOpenSchedule; // 0x38
		::RPG::Client::ScheduleTask* _WaitCloseTask; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _DecalFuncUnlockMissionList; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* PremissionList; // 0x50
		::System::Collections::Generic::List_1<::RPG::GameCore::SilverWolfCollectionRow*>* _DecalCollectionRows; // 0x58
		::System::Boolean _CompanionMissionNewFinish; // 0x60
		::System::Byte _padding0[0x3];
		::System::UInt32 _CompanionMissionID; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_CTOR_OFFSET))(this);
		}

		::RPG::Client::SilverWolfGroupData* GetSilverWolfGroupData(::System::UInt32 a1)
		{
			return ((::RPG::Client::SilverWolfGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GETSILVERWOLFGROUPDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SilverWolfGroupData*>* GetSortedSilverWolfGroupDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SilverWolfGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GETSORTEDSILVERWOLFGROUPDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::SilverWolfCollectionRow*>* GetDecalCollectionRows()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::SilverWolfCollectionRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GETDECALCOLLECTIONROWS_OFFSET))(this);
		}

		::System::UInt32 GetDecalCollectedNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GETDECALCOLLECTEDNUM_OFFSET))(this);
		}

		::System::Void _OnCmdPlayerSyncScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__ONCMDPLAYERSYNCSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNewGroupIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GETNEWGROUPIDLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::Collections::Generic::List_1<::System::UInt32>*>* GetNewTabGroupIDList()
		{
			return ((::Il2CppArray<::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GETNEWTABGROUPIDLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAvailRewardQuestIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GETAVAILREWARDQUESTIDLIST_OFFSET))(this);
		}

		::System::Boolean ShowCompanionBtnReddot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_SHOWCOMPANIONBTNREDDOT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SilverWolfGroupData*>* GetRewardAvailGroupData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SilverWolfGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GETREWARDAVAILGROUPDATA_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _InitUnlockMissionList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__INITUNLOCKMISSIONLIST_OFFSET))(this);
		}

		::System::Void _InitPremissionList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__INITPREMISSIONLIST_OFFSET))(this);
		}

		::System::Void _PrepareTaskMainMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__PREPARETASKMAINMISSIONDATA_OFFSET))(this);
		}

		::System::Void _InitGroupData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__INITGROUPDATA_OFFSET))(this);
		}

		::System::Void _RefreshPremissionState(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__REFRESHPREMISSIONSTATE_OFFSET))(this, a1);
		}

		::System::Void _CheckDecalUnlock(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__CHECKDECALUNLOCK_OFFSET))(this, a1);
		}

		::System::Void _CheckCompanionMissionFinish(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__CHECKCOMPANIONMISSIONFINISH_OFFSET))(this, a1);
		}

		::System::Void _OnTransferFinishedEvent(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__ONTRANSFERFINISHEDEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnScheduleRefresh(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__ONSCHEDULEREFRESH_OFFSET))(this, a1);
		}

		::System::Void _OnScheduleEnd(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__ONSCHEDULEEND_OFFSET))(this, a1);
		}

		::System::Void _OnNewDecalDialogExit(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__ONNEWDECALDIALOGEXIT_OFFSET))(this, a1);
		}

		::System::Void _PrepareConditionMission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__PREPARECONDITIONMISSION_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SilverWolfGroupData*>* _GetOpenGroupData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SilverWolfGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__GETOPENGROUPDATA_OFFSET))(this);
		}

		::System::Boolean _IsDecalUnlockMissionFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE__ISDECALUNLOCKMISSIONFINISH_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SilverWolfGroupData*>* get_SilverWolfGroupDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SilverWolfGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GET_SILVERWOLFGROUPDATAS_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_OnlyShopSchedule()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GET_ONLYSHOPSCHEDULE_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_ActivityOpenSchedule()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GET_ACTIVITYOPENSCHEDULE_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_DecalUnlockSchedule()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GET_DECALUNLOCKSCHEDULE_OFFSET))(this);
		}

		::System::Boolean get_IsDecalFuncUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GET_ISDECALFUNCUNLOCK_OFFSET))(this);
		}

		::System::Boolean get_CompanionMissionNewFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GET_COMPANIONMISSIONNEWFINISH_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_DecalFuncUnlockMissionList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE_GET_DECALFUNCUNLOCKMISSIONLIST_OFFSET))(this);
		}

	};
}
