#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
class DEEJKBIMHAA;
class POOCFKHNDCH;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class PerformanceRecallRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PERFORMANCERECALLMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0xE4FA590)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_GETALLUNLOCKEDPERFORMANCERECALLDATA_OFFSET UNITYSDK_OFFSET(0xE4F98D0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_GETSHOWINPLAYERROOMPHOTOSRECALLID_OFFSET UNITYSDK_OFFSET(0xE4F85D0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_GET_ISWAITINGRECALL_OFFSET UNITYSDK_OFFSET(0xE4FA570)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_HASSEEN_OFFSET UNITYSDK_OFFSET(0xE4F8500)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_HASUNLOCKED_OFFSET UNITYSDK_OFFSET(0xE4F8850)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xE4F8A80)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_ISNEW_1_OFFSET UNITYSDK_OFFSET(0xE4F96A0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_ISNEW_OFFSET UNITYSDK_OFFSET(0xE4F9630)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0xE4F8AE0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_RANDOMGETPHOTOSRECALLID_OFFSET UNITYSDK_OFFSET(0xE4F7FB0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_SET_ISWAITINGRECALL_OFFSET UNITYSDK_OFFSET(0xE4FA580)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_SHOWRECALLUI_OFFSET UNITYSDK_OFFSET(0xE4F8C90)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_STARTPERFORMANCERECALL_1_OFFSET UNITYSDK_OFFSET(0xE4F8EB0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_STARTPERFORMANCERECALL_OFFSET UNITYSDK_OFFSET(0xE4F8DA0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xE4F9C50)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_UPDATESEEN_OFFSET UNITYSDK_OFFSET(0xE4F9730)
#define RPG_CLIENT_PERFORMANCERECALLMODULE_WAITUNLOCKEDCONDITIONDATAREADY_OFFSET UNITYSDK_OFFSET(0xE4F9BF0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xE4FA250)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__CANRECALLINCURRENTSCENE_OFFSET UNITYSDK_OFFSET(0xE4F8FE0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__CREATEPERFORMANCELEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xE4F91D0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__DESTROYLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xE4F9F50)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__DOPLAYPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xE4F9260)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__ENTERCLIENTPERFORMANCEMAP_OFFSET UNITYSDK_OFFSET(0xE4F9380)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__GETALLPHOTOSRECALLID_OFFSET UNITYSDK_OFFSET(0xE4F8280)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__INITPHOTOWALLDATA_OFFSET UNITYSDK_OFFSET(0xE4F88B0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xE4FA480)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__ONMISSIONSYSTEMCREATED_OFFSET UNITYSDK_OFFSET(0xE4FA3B0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__ONPERFORMANCEEND_OFFSET UNITYSDK_OFFSET(0xE4F9CC0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__PREPAREUNLOCKEDCONDITIONDATA_OFFSET UNITYSDK_OFFSET(0xE4F9B10)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__REFRESHUNLOCKEDCONDITIONDATA_OFFSET UNITYSDK_OFFSET(0xE4F8B50)
#define RPG_CLIENT_PERFORMANCERECALLMODULE__RETURNORIGINMAP_OFFSET UNITYSDK_OFFSET(0xE4FA020)

namespace RPG::Client
{
	inline static constexpr unsigned int PerformanceRecallModule_TypeDefinitionIndex = 68380;

	class PerformanceRecallModule : public ::RPG::Client::BaseModule
	{
	public:
		::DEEJKBIMHAA* _LogicRandom; // 0x10
		::POOCFKHNDCH* _CurrentRecallData; // 0x18
		::RPG::GameCore::PerformanceRecallRow* _AutoOpenConfig; // 0x20
		::RPG::GameCore::LevelGraphComponent* _CurrentRecallLevelGraph; // 0x28
		::RPG::Client::Promises::IPromise* _UnlockConditionDataReadyPromise; // 0x30
		::System::Int32 _PhotoTotalCount; // 0x38
		::System::Int32 _UnseenPhotoCount; // 0x3C
		::System::Boolean _HasAddedPerformanceLock; // 0x40
		::System::Boolean _IsWaitingRecall_k__BackingField; // 0x41
		// static const ::System::String* _PHOTO_TOTAL_COUNT_KEY; // 0x0
		// static const ::System::String* _UNSEEN_PHOTO_COUNT_KEY; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* RandomGetPhotosRecallID()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_RANDOMGETPHOTOSRECALLID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetShowInPlayerRoomPhotosRecallID()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_GETSHOWINPLAYERROOMPHOTOSRECALLID_OFFSET))(this);
		}

		::System::Void _InitPhotoWallData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE__INITPHOTOWALLDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetAllPhotosRecallID()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE__GETALLPHOTOSRECALLID_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_INIT_OFFSET))(this);
		}

		::System::Void OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void ShowRecallUI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_SHOWRECALLUI_OFFSET))(this, a1);
		}

		::System::Void StartPerformanceRecall(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_STARTPERFORMANCERECALL_OFFSET))(this, a1);
		}

		::System::Void StartPerformanceRecall_1(::RPG::GameCore::PerformanceRecallRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PerformanceRecallRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_STARTPERFORMANCERECALL_1_OFFSET))(this, a1);
		}

		::System::Boolean IsNew(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_ISNEW_OFFSET))(this, a1);
		}

		::System::Boolean IsNew_1(::RPG::GameCore::PerformanceRecallRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PerformanceRecallRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_ISNEW_1_OFFSET))(this, a1);
		}

		::System::Boolean HasSeen(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_HASSEEN_OFFSET))(this, a1);
		}

		::System::Boolean HasUnlocked(::RPG::GameCore::PerformanceRecallRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PerformanceRecallRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_HASUNLOCKED_OFFSET))(this, a1);
		}

		::System::Void UpdateSeen(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_UPDATESEEN_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAllUnlockedPerformanceRecallData()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_GETALLUNLOCKEDPERFORMANCERECALLDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _PrepareUnlockedConditionData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE__PREPAREUNLOCKEDCONDITIONDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* WaitUnlockedConditionDataReady()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_WAITUNLOCKEDCONDITIONDATAREADY_OFFSET))(this);
		}

		::System::Boolean TryAutoShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void _RefreshUnlockedConditionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE__REFRESHUNLOCKEDCONDITIONDATA_OFFSET))(this);
		}

		static ::RPG::GameCore::LevelGraphComponent* _CreatePerformanceLevelGraph(::POOCFKHNDCH* a1)
		{
			return ((::RPG::GameCore::LevelGraphComponent*(*)(::POOCFKHNDCH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE__CREATEPERFORMANCELEVELGRAPH_OFFSET))(a1);
		}

		::System::Boolean _CanRecallInCurrentScene(::POOCFKHNDCH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::POOCFKHNDCH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE__CANRECALLINCURRENTSCENE_OFFSET))(this, a1);
		}

		::System::Void _EnterClientPerformanceMap(::POOCFKHNDCH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POOCFKHNDCH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE__ENTERCLIENTPERFORMANCEMAP_OFFSET))(this, a1);
		}

		::System::Void _DoPlayPerformance(::RPG::GameCore::LevelGraphComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGraphComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE__DOPLAYPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void _OnPerformanceEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE__ONPERFORMANCEEND_OFFSET))(this);
		}

		::System::Void _DestroyLevelGraph(::RPG::GameCore::LevelGraphComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGraphComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE__DESTROYLEVELGRAPH_OFFSET))(this, a1);
		}

		::System::Void _ReturnOriginMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE__RETURNORIGINMAP_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnMissionSystemCreated(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE__ONMISSIONSYSTEMCREATED_OFFSET))(this, a1);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE__ONADVENTUREPHASEENTERED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsWaitingRecall()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_GET_ISWAITINGRECALL_OFFSET))(this);
		}

		::System::Void set_IsWaitingRecall(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE_SET_ISWAITINGRECALL_OFFSET))(this, a1);
		}

	};
}
