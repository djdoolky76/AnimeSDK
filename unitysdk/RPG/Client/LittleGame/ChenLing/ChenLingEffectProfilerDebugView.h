#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class FLDCOAJPMEP;
class LDLCIEJKBNH;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGEFFECTPROFILERDEBUGVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xD402290)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGEFFECTPROFILERDEBUGVIEW_IFGNDIINEJH_OFFSET UNITYSDK_OFFSET(0xD400E90)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGEFFECTPROFILERDEBUGVIEW_NNNNOOEGHBJ_OFFSET UNITYSDK_OFFSET(0xD400A20)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGEFFECTPROFILERDEBUGVIEW_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD4009D0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGEFFECTPROFILERDEBUGVIEW_REFRESHNOW_OFFSET UNITYSDK_OFFSET(0xD400BB0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGEFFECTPROFILERDEBUGVIEW_RESETPROFILERSESSION_OFFSET UNITYSDK_OFFSET(0xD402170)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGEFFECTPROFILERDEBUGVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0xD400DF0)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingEffectProfilerDebugView_TypeDefinitionIndex = 77841;

	class ChenLingEffectProfilerDebugView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean _AutoRefresh; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single _RefreshIntervalSec; // 0x1C
		::System::Int32 _TopN; // 0x20
		::System::Boolean _ProfilerEnabled; // 0x24
		::System::Byte _padding1[0x3];
		::System::String* _Status; // 0x28
		::System::Int64 _TotalSyncRequests; // 0x30
		::System::Int64 _TotalAsyncRequests; // 0x38
		::System::Int64 _TotalCreates; // 0x40
		::System::Int64 _TotalReuses; // 0x48
		::System::Int64 _TotalRemoved; // 0x50
		::System::Int64 _TotalBlockedByMaxCount; // 0x58
		::System::Int32 _CurrentFrameTotalRequests; // 0x60
		::System::Int32 _CurrentFrameSyncRequests; // 0x64
		::System::Int32 _CurrentFrameAsyncRequests; // 0x68
		::System::Int32 _PeakFrameTotalRequests; // 0x6C
		::System::Int32 _PeakFrameSyncRequests; // 0x70
		::System::Int32 _PeakFrameAsyncRequests; // 0x74
		::System::Int32 _PeakFrameIndex; // 0x78
		::System::Int32 _CurrentActiveCount; // 0x7C
		::System::Int32 _PeakActiveCount; // 0x80
		::System::Int32 _PendingAsyncCount; // 0x84
		::System::Int32 _CurrentPoolCachedCount; // 0x88
		::System::Single _ReuseRate; // 0x8C
		::System::Int32 _AsyncLatencySampleCount; // 0x90
		::System::Single _AsyncAvgLatencyMs; // 0x94
		::System::Single _AsyncP95LatencyMs; // 0x98
		::System::Single _AsyncMaxLatencyMs; // 0x9C
		::System::Collections::Generic::List_1<::System::Object*>* _TopPathRows; // 0xA0
		::System::Collections::Generic::List_1<::System::Object*>* _RemoveReasonRows; // 0xA8
		::System::Collections::Generic::List_1<::System::Object*>* _AsyncFailureReasonRows; // 0xB0
		::System::Single PGMIOKKLHIE; // 0xB8
		::System::Byte _padding2[0x4];
		::LDLCIEJKBNH* ADJNOFMEIKM; // 0xC0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGEFFECTPROFILERDEBUGVIEW_CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGEFFECTPROFILERDEBUGVIEW_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGEFFECTPROFILERDEBUGVIEW_UPDATE_OFFSET))(this);
		}

		::System::Void RefreshNow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGEFFECTPROFILERDEBUGVIEW_REFRESHNOW_OFFSET))(this);
		}

		::System::Void ResetProfilerSession()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGEFFECTPROFILERDEBUGVIEW_RESETPROFILERSESSION_OFFSET))(this);
		}

		::System::Boolean NNNNOOEGHBJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGEFFECTPROFILERDEBUGVIEW_NNNNOOEGHBJ_OFFSET))(this);
		}

		::System::Void IFGNDIINEJH(::FLDCOAJPMEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLDCOAJPMEP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGEFFECTPROFILERDEBUGVIEW_IFGNDIINEJH_OFFSET))(this, a1);
		}

	};
}
