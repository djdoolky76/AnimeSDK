#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/MissionReplayModule_DownloadState.h"
class JAFIJLKFFCP;
namespace RPG::Client { class MissionChronicleBasePathData; }
namespace RPG::Client::MissionReplayData { class IMissionReplayContext; }
namespace RPG::Client::MissionReplayData { class IMissionReplayData; }
namespace RPG::Client::MissionReplayData { class IMissionReplayPerformanceData; }
namespace System { class String; }

#define RPG_CLIENT_MISSIONREPLAYMODULE_BACKTOCHRONICLEPAGE_OFFSET UNITYSDK_OFFSET(0x19857540)
#define RPG_CLIENT_MISSIONREPLAYMODULE_BEGINDOWNLOADMISSIONRES_OFFSET UNITYSDK_OFFSET(0x19859560)
#define RPG_CLIENT_MISSIONREPLAYMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0x19859E70)
#define RPG_CLIENT_MISSIONREPLAYMODULE_DELETEDOWNLOADEDMISSIONREPLAYRES_OFFSET UNITYSDK_OFFSET(0x19859C10)
#define RPG_CLIENT_MISSIONREPLAYMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19859F80)
#define RPG_CLIENT_MISSIONREPLAYMODULE_EXITREPLAY_GM_OFFSET UNITYSDK_OFFSET(0x198577B0)
#define RPG_CLIENT_MISSIONREPLAYMODULE_GETCURINDEX_OFFSET UNITYSDK_OFFSET(0x19858820)
#define RPG_CLIENT_MISSIONREPLAYMODULE_GETCURMISSIONREPLAYCONTEXT_OFFSET UNITYSDK_OFFSET(0x19859150)
#define RPG_CLIENT_MISSIONREPLAYMODULE_GETCURMISSIONREPLAYDATA_OFFSET UNITYSDK_OFFSET(0x198565B0)
#define RPG_CLIENT_MISSIONREPLAYMODULE_GETCURPERFORMANCEDATA_OFFSET UNITYSDK_OFFSET(0x19856770)
#define RPG_CLIENT_MISSIONREPLAYMODULE_GETDOWNLOADEDMISSIONREPLAYRESSIZE_OFFSET UNITYSDK_OFFSET(0x19859BB0)
#define RPG_CLIENT_MISSIONREPLAYMODULE_GETDOWNLOADSTATE_OFFSET UNITYSDK_OFFSET(0x19859970)
#define RPG_CLIENT_MISSIONREPLAYMODULE_GETISAUTOPLAYNEXT_OFFSET UNITYSDK_OFFSET(0x19858490)
#define RPG_CLIENT_MISSIONREPLAYMODULE_GETLASTREPLAYPERFORMANCENUMBER_OFFSET UNITYSDK_OFFSET(0x1985A1F0)
#define RPG_CLIENT_MISSIONREPLAYMODULE_GETLASTREPLAYSUBPAGEPATHID_OFFSET UNITYSDK_OFFSET(0x1985A140)
#define RPG_CLIENT_MISSIONREPLAYMODULE_GETNEEDDOWNLOADSIZE_OFFSET UNITYSDK_OFFSET(0x198593E0)
#define RPG_CLIENT_MISSIONREPLAYMODULE_GET__CURINDEX_OFFSET UNITYSDK_OFFSET(0x198568F0)
#define RPG_CLIENT_MISSIONREPLAYMODULE_GET__MISSIONREPLAYDATA_OFFSET UNITYSDK_OFFSET(0x19856600)
#define RPG_CLIENT_MISSIONREPLAYMODULE_HAVENEXTPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x198581E0)
#define RPG_CLIENT_MISSIONREPLAYMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x19859E90)
#define RPG_CLIENT_MISSIONREPLAYMODULE_ISMISSIONRESCOMPLETED_OFFSET UNITYSDK_OFFSET(0x19859260)
#define RPG_CLIENT_MISSIONREPLAYMODULE_ONAUTOSELECTSETTINGCHANGEDURINGPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x19859000)
#define RPG_CLIENT_MISSIONREPLAYMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x19859F20)
#define RPG_CLIENT_MISSIONREPLAYMODULE_ONSINGLEPERFORMANCEEND_OFFSET UNITYSDK_OFFSET(0x198578A0)
#define RPG_CLIENT_MISSIONREPLAYMODULE_PAUSEDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x19859AD0)
#define RPG_CLIENT_MISSIONREPLAYMODULE_PLAYNEXTPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x198574D0)
#define RPG_CLIENT_MISSIONREPLAYMODULE_RESUMEDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x19859B40)
#define RPG_CLIENT_MISSIONREPLAYMODULE_SDKREPORT_OPENCHOOSEPLOTDIALOG_OFFSET UNITYSDK_OFFSET(0x198585A0)
#define RPG_CLIENT_MISSIONREPLAYMODULE_SDKREPORT_PERFORMANCEFINISH_OFFSET UNITYSDK_OFFSET(0x19857C70)
#define RPG_CLIENT_MISSIONREPLAYMODULE_SETISAUTOPLAYNEXT_OFFSET UNITYSDK_OFFSET(0x19858870)
#define RPG_CLIENT_MISSIONREPLAYMODULE_SETMISSIONREPLAYCONTEXT_OFFSET UNITYSDK_OFFSET(0x19856560)
#define RPG_CLIENT_MISSIONREPLAYMODULE_SETMISSIONREPLAYDATA_OFFSET UNITYSDK_OFFSET(0x19856720)
#define RPG_CLIENT_MISSIONREPLAYMODULE_SET__CURINDEX_OFFSET UNITYSDK_OFFSET(0x19856EA0)
#define RPG_CLIENT_MISSIONREPLAYMODULE_STARTREPLAYMISSION_OFFSET UNITYSDK_OFFSET(0x19856E30)
#define RPG_CLIENT_MISSIONREPLAYMODULE_STOPDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x198599B0)
#define RPG_CLIENT_MISSIONREPLAYMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x1985A000)
#define RPG_CLIENT_MISSIONREPLAYMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x19859EE0)
#define RPG_CLIENT_MISSIONREPLAYMODULE__BEGINBLACKSCREEN_OFFSET UNITYSDK_OFFSET(0x198584F0)
#define RPG_CLIENT_MISSIONREPLAYMODULE__CHECKCURINDEX_OFFSET UNITYSDK_OFFSET(0x19856FE0)
#define RPG_CLIENT_MISSIONREPLAYMODULE__CHECKHAVENEXTPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x19856BD0)
#define RPG_CLIENT_MISSIONREPLAYMODULE__CHECKPERFORMANCELIST_OFFSET UNITYSDK_OFFSET(0x19858E80)
#define RPG_CLIENT_MISSIONREPLAYMODULE__CLOSEBLACKSCREEN_OFFSET UNITYSDK_OFFSET(0x19858390)
#define RPG_CLIENT_MISSIONREPLAYMODULE__DISPOSEDOWNLOADHANDLER_OFFSET UNITYSDK_OFFSET(0x19859200)
#define RPG_CLIENT_MISSIONREPLAYMODULE__DISPOSE_REPLAY_OFFSET UNITYSDK_OFFSET(0x19856520)
#define RPG_CLIENT_MISSIONREPLAYMODULE__DISPOSE_RESOURCE_OFFSET UNITYSDK_OFFSET(0x19859190)
#define RPG_CLIENT_MISSIONREPLAYMODULE__GETNEXTPERFORMANCEDATA_OFFSET UNITYSDK_OFFSET(0x19856A10)
#define RPG_CLIENT_MISSIONREPLAYMODULE__ONDOWNLOADFAILED_OFFSET UNITYSDK_OFFSET(0x19859D70)
#define RPG_CLIENT_MISSIONREPLAYMODULE__ONDOWNLOADSUCCESS_OFFSET UNITYSDK_OFFSET(0x19859C70)
#define RPG_CLIENT_MISSIONREPLAYMODULE__PLAYCURRENTPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x19857200)
#define RPG_CLIENT_MISSIONREPLAYMODULE__RECORDBEFOREREPLAY_OFFSET UNITYSDK_OFFSET(0x19858B50)
#define RPG_CLIENT_MISSIONREPLAYMODULE__SETAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x198576D0)
#define RPG_CLIENT_MISSIONREPLAYMODULE__SETDOWNLOADSTATE_OFFSET UNITYSDK_OFFSET(0x198598F0)
#define RPG_CLIENT_MISSIONREPLAYMODULE__SETNEXTLOADINGPAGE_OFFSET UNITYSDK_OFFSET(0x19857710)
#define RPG_CLIENT_MISSIONREPLAYMODULE__STARTRECORDFORSDKREPORTPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x19858CB0)
#define RPG_CLIENT_MISSIONREPLAYMODULE__TRYSTARTREPLAYMISSION_OFFSET UNITYSDK_OFFSET(0x198588D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionReplayModule_TypeDefinitionIndex = 68141;

	class MissionReplayModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::MissionReplayData::IMissionReplayContext* _ReplayContext; // 0x10
		::RPG::Client::MissionChronicleBasePathData* _LastClickMainPagePathData; // 0x18
		::RPG::Client::MissionChronicleBasePathData* _LastClickSubPagePathData; // 0x20
		::JAFIJLKFFCP* _DownloadHandler; // 0x28
		::System::Boolean _IsWaitShowOriginalPage; // 0x30
		::System::Boolean _IsAutoSelectUsed; // 0x31
		::System::Boolean _IsAutoPlayNextOpenedAtBegin; // 0x32
		::System::Boolean _IsPausing; // 0x33
		::RPG::Client::MissionReplayModule_DownloadState _CurDownloadState; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_CTOR_OFFSET))(this);
		}

		::System::Void _Dispose_Replay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE__DISPOSE_REPLAY_OFFSET))(this);
		}

		::System::Void SetMissionReplayContext(::RPG::Client::MissionReplayData::IMissionReplayContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionReplayData::IMissionReplayContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_SETMISSIONREPLAYCONTEXT_OFFSET))(this, a1);
		}

		::RPG::Client::MissionReplayData::IMissionReplayData* GetCurMissionReplayData()
		{
			return ((::RPG::Client::MissionReplayData::IMissionReplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_GETCURMISSIONREPLAYDATA_OFFSET))(this);
		}

		::System::Void SetMissionReplayData(::RPG::Client::MissionReplayData::IMissionReplayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionReplayData::IMissionReplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_SETMISSIONREPLAYDATA_OFFSET))(this, a1);
		}

		::RPG::Client::MissionReplayData::IMissionReplayPerformanceData* GetCurPerformanceData()
		{
			return ((::RPG::Client::MissionReplayData::IMissionReplayPerformanceData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_GETCURPERFORMANCEDATA_OFFSET))(this);
		}

		::RPG::Client::MissionReplayData::IMissionReplayPerformanceData* _GetNextPerformanceData()
		{
			return ((::RPG::Client::MissionReplayData::IMissionReplayPerformanceData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE__GETNEXTPERFORMANCEDATA_OFFSET))(this);
		}

		::System::Void StartReplayMission(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_STARTREPLAYMISSION_OFFSET))(this, a1);
		}

		::System::Void PlayNextPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_PLAYNEXTPERFORMANCE_OFFSET))(this);
		}

		::System::Void BackToChroniclePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_BACKTOCHRONICLEPAGE_OFFSET))(this);
		}

		::System::Void ExitReplay_GM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_EXITREPLAY_GM_OFFSET))(this);
		}

		::System::Void OnSinglePerformanceEnd(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_ONSINGLEPERFORMANCEEND_OFFSET))(this, a1);
		}

		::System::Void _BeginBlackScreen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE__BEGINBLACKSCREEN_OFFSET))(this);
		}

		::System::Void _CloseBlackScreen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE__CLOSEBLACKSCREEN_OFFSET))(this);
		}

		::System::Boolean HaveNextPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_HAVENEXTPERFORMANCE_OFFSET))(this);
		}

		::System::UInt32 GetCurIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_GETCURINDEX_OFFSET))(this);
		}

		::System::Boolean GetIsAutoPlayNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_GETISAUTOPLAYNEXT_OFFSET))(this);
		}

		::System::Void SetIsAutoPlayNext(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_SETISAUTOPLAYNEXT_OFFSET))(this, a1);
		}

		::System::Void _PlayCurrentPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE__PLAYCURRENTPERFORMANCE_OFFSET))(this);
		}

		::System::Boolean _TryStartReplayMission(::RPG::Client::MissionReplayData::IMissionReplayPerformanceData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MissionReplayData::IMissionReplayPerformanceData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE__TRYSTARTREPLAYMISSION_OFFSET))(this, a1);
		}

		::System::Boolean _CheckCurIndex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE__CHECKCURINDEX_OFFSET))(this);
		}

		::System::Boolean _CheckHaveNextPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE__CHECKHAVENEXTPERFORMANCE_OFFSET))(this);
		}

		::System::Boolean _CheckPerformanceList()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE__CHECKPERFORMANCELIST_OFFSET))(this);
		}

		::System::Void SDKReport_OpenChoosePlotDialog(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_SDKREPORT_OPENCHOOSEPLOTDIALOG_OFFSET))(this, a1);
		}

		::System::Void SDKReport_PerformanceFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_SDKREPORT_PERFORMANCEFINISH_OFFSET))(this, a1);
		}

		::System::Void OnAutoSelectSettingChangeDuringPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_ONAUTOSELECTSETTINGCHANGEDURINGPERFORMANCE_OFFSET))(this);
		}

		::RPG::Client::MissionReplayData::IMissionReplayContext* GetCurMissionReplayContext()
		{
			return ((::RPG::Client::MissionReplayData::IMissionReplayContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_GETCURMISSIONREPLAYCONTEXT_OFFSET))(this);
		}

		::System::Void _StartRecordForSDKReportPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE__STARTRECORDFORSDKREPORTPERFORMANCE_OFFSET))(this);
		}

		::RPG::Client::MissionReplayData::IMissionReplayData* get__MissionReplayData()
		{
			return ((::RPG::Client::MissionReplayData::IMissionReplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_GET__MISSIONREPLAYDATA_OFFSET))(this);
		}

		::System::Int32 get__CurIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_GET__CURINDEX_OFFSET))(this);
		}

		::System::Void set__CurIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_SET__CURINDEX_OFFSET))(this, a1);
		}

		::System::Void _Dispose_Resource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE__DISPOSE_RESOURCE_OFFSET))(this);
		}

		::System::Boolean IsMissionResCompleted(::RPG::Client::MissionReplayData::IMissionReplayData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MissionReplayData::IMissionReplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_ISMISSIONRESCOMPLETED_OFFSET))(this, a1);
		}

		::System::Int64 GetNeedDownloadSize(::RPG::Client::MissionReplayData::IMissionReplayData* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::RPG::Client::MissionReplayData::IMissionReplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_GETNEEDDOWNLOADSIZE_OFFSET))(this, a1);
		}

		::System::Void BeginDownloadMissionRes(::RPG::Client::MissionReplayData::IMissionReplayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionReplayData::IMissionReplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_BEGINDOWNLOADMISSIONRES_OFFSET))(this, a1);
		}

		::RPG::Client::MissionReplayModule_DownloadState GetDownloadState()
		{
			return ((::RPG::Client::MissionReplayModule_DownloadState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_GETDOWNLOADSTATE_OFFSET))(this);
		}

		::System::Void StopDownload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_STOPDOWNLOAD_OFFSET))(this);
		}

		::System::Void PauseDownload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_PAUSEDOWNLOAD_OFFSET))(this);
		}

		::System::Void ResumeDownload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_RESUMEDOWNLOAD_OFFSET))(this);
		}

		::System::Int64 GetDownloadedMissionReplayResSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_GETDOWNLOADEDMISSIONREPLAYRESSIZE_OFFSET))(this);
		}

		::System::Void DeleteDownloadedMissionReplayRes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_DELETEDOWNLOADEDMISSIONREPLAYRES_OFFSET))(this);
		}

		::System::Void _DisposeDownloadHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE__DISPOSEDOWNLOADHANDLER_OFFSET))(this);
		}

		::System::Void _SetDownloadState(::RPG::Client::MissionReplayModule_DownloadState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionReplayModule_DownloadState))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE__SETDOWNLOADSTATE_OFFSET))(this, a1);
		}

		::System::Void _OnDownloadSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE__ONDOWNLOADSUCCESS_OFFSET))(this);
		}

		::System::Void _OnDownloadFailed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE__ONDOWNLOADFAILED_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::UInt32 GetLastReplaySubPagePathID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_GETLASTREPLAYSUBPAGEPATHID_OFFSET))(this);
		}

		::System::UInt32 GetLastReplayPerformanceNumber()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE_GETLASTREPLAYPERFORMANCENUMBER_OFFSET))(this);
		}

		::System::Void _SetAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE__SETAUTOSHOW_OFFSET))(this);
		}

		::System::Void _RecordBeforeReplay(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE__RECORDBEFOREREPLAY_OFFSET))(this, a1);
		}

		::System::Void _SetNextLoadingPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE__SETNEXTLOADINGPAGE_OFFSET))(this);
		}

	};
}
