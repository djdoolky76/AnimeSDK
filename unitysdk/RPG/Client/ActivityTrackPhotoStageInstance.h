#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrackPhotoShotParam.h"
#include "unitysdk/RPG/GameCore/TrackPhotoCanType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ActivityTrackPhotoStageData; }
namespace RPG::Client { class ActivityTrackPhotoStageInstance; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_CREATE_OFFSET UNITYSDK_OFFSET(0x18D0B760)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x18D0B9C0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18D0BA60)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_GET_CURCOUNT_OFFSET UNITYSDK_OFFSET(0x18D0C2E0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x18D0C530)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x18D0C3B0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_GET_STAGEDATAREF_OFFSET UNITYSDK_OFFSET(0x18D0C730)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x18D0C330)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_GET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0x18D0C4D0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_GET_TRACKSHOTPARAMLIST_OFFSET UNITYSDK_OFFSET(0x18D0C750)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_GET_VIEWRANGE_OFFSET UNITYSDK_OFFSET(0x18D0C6B0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_ONTRACKPHOTOFINISH_OFFSET UNITYSDK_OFFSET(0x18D0BE00)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_ONTRACKPHOTOSHOT_OFFSET UNITYSDK_OFFSET(0x18D0BC50)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_PAUSETRACKPHOTO_OFFSET UNITYSDK_OFFSET(0x18D0BAE0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_PAUSEUPDATETOTALTIME_OFFSET UNITYSDK_OFFSET(0x18D0C7E0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_RECOVERTRACKPHOTO_OFFSET UNITYSDK_OFFSET(0x18D0BB70)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_RECOVERUPDATETOTALTIME_OFFSET UNITYSDK_OFFSET(0x18D0C820)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_SET_STAGEDATAREF_OFFSET UNITYSDK_OFFSET(0x18D0C740)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_SET_TRACKSHOTPARAMLIST_OFFSET UNITYSDK_OFFSET(0x18D0C760)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_UPDATETOTALTIME_OFFSET UNITYSDK_OFFSET(0x18D0C770)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE__CALCULATETOTALSCORE_OFFSET UNITYSDK_OFFSET(0x18D0C220)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE__FINISHINTERVAL_OFFSET UNITYSDK_OFFSET(0x18D0BE70)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE__RESETTOTALTIME_OFFSET UNITYSDK_OFFSET(0x18D0C1D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityTrackPhotoStageInstance_TypeDefinitionIndex = 63417;

	class ActivityTrackPhotoStageInstance : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TrackPhotoShotParam>* _TrackShotParamList_k__BackingField; // 0x10
		::RPG::Client::ActivityTrackPhotoStageData* _StageDataRef_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TrackPhotoCanType, ::System::UInt32>* TrackTypeTotalCount; // 0x20
		::System::UInt32 ExtraShotTotalCount; // 0x28
		::System::UInt32 _TotalScore; // 0x2C
		::System::Boolean _IsUpdateTotalTime; // 0x30
		::System::Byte _padding0[0x3];
		::System::Single _TotalTime; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityTrackPhotoStageInstance* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityTrackPhotoStageInstance*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_CREATE_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_DISPOSE_OFFSET))(this);
		}

		::System::Void PauseTrackPhoto()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_PAUSETRACKPHOTO_OFFSET))(this);
		}

		::System::Void RecoverTrackPhoto()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_RECOVERTRACKPHOTO_OFFSET))(this);
		}

		::System::Void OnTrackPhotoShot(::System::Collections::Generic::List_1<::RPG::Client::TrackPhotoShotParam>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TrackPhotoShotParam>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_ONTRACKPHOTOSHOT_OFFSET))(this, a1);
		}

		::System::Void OnTrackPhotoFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_ONTRACKPHOTOFINISH_OFFSET))(this);
		}

		::System::Void _CalculateTotalScore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE__CALCULATETOTALSCORE_OFFSET))(this);
		}

		::System::Void _FinishInterval()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE__FINISHINTERVAL_OFFSET))(this);
		}

		::System::UInt32 get_CurCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_GET_CURCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_TotalCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_GET_TOTALCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_Score()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_GET_SCORE_OFFSET))(this);
		}

		::System::UInt32 get_TotalScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_GET_TOTALSCORE_OFFSET))(this);
		}

		::System::Single get_Progress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_GET_PROGRESS_OFFSET))(this);
		}

		::System::Single get_ViewRange()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_GET_VIEWRANGE_OFFSET))(this);
		}

		::RPG::Client::ActivityTrackPhotoStageData* get_StageDataRef()
		{
			return ((::RPG::Client::ActivityTrackPhotoStageData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_GET_STAGEDATAREF_OFFSET))(this);
		}

		::System::Void set_StageDataRef(::RPG::Client::ActivityTrackPhotoStageData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityTrackPhotoStageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_SET_STAGEDATAREF_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrackPhotoShotParam>* get_TrackShotParamList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrackPhotoShotParam>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_GET_TRACKSHOTPARAMLIST_OFFSET))(this);
		}

		::System::Void set_TrackShotParamList(::System::Collections::Generic::List_1<::RPG::Client::TrackPhotoShotParam>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TrackPhotoShotParam>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_SET_TRACKSHOTPARAMLIST_OFFSET))(this, a1);
		}

		::System::Void UpdateTotalTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_UPDATETOTALTIME_OFFSET))(this);
		}

		::System::Void PauseUpdateTotalTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_PAUSEUPDATETOTALTIME_OFFSET))(this);
		}

		::System::Void RecoverUpdateTotalTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_RECOVERUPDATETOTALTIME_OFFSET))(this);
		}

		::System::Void _ResetTotalTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE__RESETTOTALTIME_OFFSET))(this);
		}

	};
}
