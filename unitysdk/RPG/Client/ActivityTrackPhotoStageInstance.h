#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrackPhotoShotParam.h"
#include "unitysdk/RPG/GameCore/TrackPhotoCanType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ActivityTrackPhotoStageData; }
namespace RPG::Client { class ActivityTrackPhotoStageInstance; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_CREATE_OFFSET UNITYSDK_OFFSET(0xCF1BDF0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0xCF1C050)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF1C0F0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_GET_CURCOUNT_OFFSET UNITYSDK_OFFSET(0xCF1C960)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xCF1CBB0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_GET_SCORE_OFFSET UNITYSDK_OFFSET(0xCF1CA30)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_GET_STAGEDATAREF_OFFSET UNITYSDK_OFFSET(0xCF1CDB0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xCF1C9B0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_GET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0xCF1CB50)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_GET_TRACKSHOTPARAMLIST_OFFSET UNITYSDK_OFFSET(0xCF1CDD0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_GET_VIEWRANGE_OFFSET UNITYSDK_OFFSET(0xCF1CD30)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_ONTRACKPHOTOFINISH_OFFSET UNITYSDK_OFFSET(0xCF1C480)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_ONTRACKPHOTOSHOT_OFFSET UNITYSDK_OFFSET(0xCF1C2D0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_PAUSETRACKPHOTO_OFFSET UNITYSDK_OFFSET(0xCF1C160)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_PAUSEUPDATETOTALTIME_OFFSET UNITYSDK_OFFSET(0xCF1CE60)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_RECOVERTRACKPHOTO_OFFSET UNITYSDK_OFFSET(0xCF1C1F0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_RECOVERUPDATETOTALTIME_OFFSET UNITYSDK_OFFSET(0xCF1CEA0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_SET_STAGEDATAREF_OFFSET UNITYSDK_OFFSET(0xCF1CDC0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_SET_TRACKSHOTPARAMLIST_OFFSET UNITYSDK_OFFSET(0xCF1CDE0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE_UPDATETOTALTIME_OFFSET UNITYSDK_OFFSET(0xCF1CDF0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE__CALCULATETOTALSCORE_OFFSET UNITYSDK_OFFSET(0xCF1C8A0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE__FINISHINTERVAL_OFFSET UNITYSDK_OFFSET(0xCF1C4F0)
#define RPG_CLIENT_ACTIVITYTRACKPHOTOSTAGEINSTANCE__RESETTOTALTIME_OFFSET UNITYSDK_OFFSET(0xCF1C850)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityTrackPhotoStageInstance_TypeDefinitionIndex = 63417;

	class ActivityTrackPhotoStageInstance : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TrackPhotoCanType, ::System::UInt32>* TrackTypeTotalCount; // 0x10
		::RPG::Client::ActivityTrackPhotoStageData* _StageDataRef_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::TrackPhotoShotParam>* _TrackShotParamList_k__BackingField; // 0x20
		::System::UInt32 _TotalScore; // 0x28
		::System::Single _TotalTime; // 0x2C
		::System::UInt32 ExtraShotTotalCount; // 0x30
		::System::Boolean _IsUpdateTotalTime; // 0x34
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
