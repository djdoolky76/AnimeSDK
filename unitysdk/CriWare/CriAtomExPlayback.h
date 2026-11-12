#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExPlayback_Status.h"
#include "unitysdk/CriWare/CriAtomEx_ResumeMode.h"
#include "unitysdk/CriWare/CriAtomExBeatSync_Info.h"
#include "unitysdk/CriWare/CriAtomExPlayback_TrackInfo.h"
#include "unitysdk/CriWare/CriAtomEx_FormatInfo.h"

#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETBEATSYNCINFO_OFFSET UNITYSDK_OFFSET(0x17537570)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETCURRENTBLOCKINDEX_OFFSET UNITYSDK_OFFSET(0x17537340)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETFORMATINFO_OFFSET UNITYSDK_OFFSET(0x17536D10)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETNUMPLAYEDSAMPLES_OFFSET UNITYSDK_OFFSET(0x17537130)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETPLAYBACKTRACKINFO_OFFSET UNITYSDK_OFFSET(0x17537450)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETSEQUENCEPOSITION_OFFSET UNITYSDK_OFFSET(0x17537240)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x17536E20)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETTIMESYNCEDWITHAUDIO_OFFSET UNITYSDK_OFFSET(0x17537020)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETTIME_OFFSET UNITYSDK_OFFSET(0x17536F20)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x17536C00)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_PAUSE_OFFSET UNITYSDK_OFFSET(0x17536A00)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_RESUME_OFFSET UNITYSDK_OFFSET(0x17536B00)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_SETBEATSYNCOFFSET_OFFSET UNITYSDK_OFFSET(0x17537790)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_SETNEXTBLOCKINDEX_OFFSET UNITYSDK_OFFSET(0x17537680)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_STOPWITHOUTRELEASETIME_OFFSET UNITYSDK_OFFSET(0x17536900)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_STOP_OFFSET UNITYSDK_OFFSET(0x17536880)
#define CRIWARE_CRIATOMEXPLAYBACK_CTOR_OFFSET UNITYSDK_OFFSET(0xAF40)
#define CRIWARE_CRIATOMEXPLAYBACK_GETBEATSYNCINFO_OFFSET UNITYSDK_OFFSET(0x305F450)
#define CRIWARE_CRIATOMEXPLAYBACK_GETCURRENTBLOCKINDEX_OFFSET UNITYSDK_OFFSET(0x305F340)
#define CRIWARE_CRIATOMEXPLAYBACK_GETFORMATINFO_OFFSET UNITYSDK_OFFSET(0x305F010)
#define CRIWARE_CRIATOMEXPLAYBACK_GETNUMPLAYEDSAMPLES_OFFSET UNITYSDK_OFFSET(0x305F220)
#define CRIWARE_CRIATOMEXPLAYBACK_GETSEQUENCEPOSITION_OFFSET UNITYSDK_OFFSET(0x305F2C0)
#define CRIWARE_CRIATOMEXPLAYBACK_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x305F0A0)
#define CRIWARE_CRIATOMEXPLAYBACK_GETTIMESYNCEDWITHAUDIO_OFFSET UNITYSDK_OFFSET(0x305F1A0)
#define CRIWARE_CRIATOMEXPLAYBACK_GETTIME_OFFSET UNITYSDK_OFFSET(0x305F120)
#define CRIWARE_CRIATOMEXPLAYBACK_GETTRACKINFO_OFFSET UNITYSDK_OFFSET(0x305F3C0)
#define CRIWARE_CRIATOMEXPLAYBACK_GET_ID_OFFSET UNITYSDK_OFFSET(0xE600)
#define CRIWARE_CRIATOMEXPLAYBACK_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x305F0A0)
#define CRIWARE_CRIATOMEXPLAYBACK_GET_TIMESYNCEDWITHAUDIO_OFFSET UNITYSDK_OFFSET(0x305F1A0)
#define CRIWARE_CRIATOMEXPLAYBACK_GET_TIME_OFFSET UNITYSDK_OFFSET(0x305F120)
#define CRIWARE_CRIATOMEXPLAYBACK_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x305EF90)
#define CRIWARE_CRIATOMEXPLAYBACK_PAUSE_1_OFFSET UNITYSDK_OFFSET(0x305F610)
#define CRIWARE_CRIATOMEXPLAYBACK_PAUSE_OFFSET UNITYSDK_OFFSET(0x305EE90)
#define CRIWARE_CRIATOMEXPLAYBACK_RESUME_OFFSET UNITYSDK_OFFSET(0x305EF10)
#define CRIWARE_CRIATOMEXPLAYBACK_SETBEATSYNCOFFSET_OFFSET UNITYSDK_OFFSET(0x305F560)
#define CRIWARE_CRIATOMEXPLAYBACK_SETNEXTBLOCKINDEX_OFFSET UNITYSDK_OFFSET(0x305F4E0)
#define CRIWARE_CRIATOMEXPLAYBACK_SET_ID_OFFSET UNITYSDK_OFFSET(0xAF40)
#define CRIWARE_CRIATOMEXPLAYBACK_STOPWITHOUTRELEASETIME_OFFSET UNITYSDK_OFFSET(0x305F600)
#define CRIWARE_CRIATOMEXPLAYBACK_STOP_1_OFFSET UNITYSDK_OFFSET(0x305F5F0)
#define CRIWARE_CRIATOMEXPLAYBACK_STOP_OFFSET UNITYSDK_OFFSET(0x305EE80)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExPlayback_TypeDefinitionIndex = 41028;

	struct alignas(4) CriAtomExPlayback
	{
		::System::UInt32 _id_k__BackingField; // 0x10
		// static const ::System::Object invalidId; // 0x0
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CTOR_OFFSET))(this, a1);
		}

		::System::Void Stop(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_STOP_OFFSET))(this, a1);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_PAUSE_OFFSET))(this);
		}

		::System::Void Resume(::CriWare::CriAtomEx_ResumeMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomEx_ResumeMode))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_RESUME_OFFSET))(this, a1);
		}

		::System::Boolean IsPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_ISPAUSED_OFFSET))(this);
		}

		::System::Boolean GetFormatInfo(::CriWare::CriAtomEx_FormatInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CriWare::CriAtomEx_FormatInfo))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_GETFORMATINFO_OFFSET))(this, a1);
		}

		::CriWare::CriAtomExPlayback_Status GetStatus()
		{
			return ((::CriWare::CriAtomExPlayback_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_GETSTATUS_OFFSET))(this);
		}

		::System::Int64 GetTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_GETTIME_OFFSET))(this);
		}

		::System::Int64 GetTimeSyncedWithAudio()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_GETTIMESYNCEDWITHAUDIO_OFFSET))(this);
		}

		::System::Boolean GetNumPlayedSamples(::System::Int64 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_GETNUMPLAYEDSAMPLES_OFFSET))(this, a1, a2);
		}

		::System::Int64 GetSequencePosition()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_GETSEQUENCEPOSITION_OFFSET))(this);
		}

		::System::Int32 GetCurrentBlockIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_GETCURRENTBLOCKINDEX_OFFSET))(this);
		}

		::System::Boolean GetTrackInfo(::CriWare::CriAtomExPlayback_TrackInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CriWare::CriAtomExPlayback_TrackInfo))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_GETTRACKINFO_OFFSET))(this, a1);
		}

		::System::Boolean GetBeatSyncInfo(::CriWare::CriAtomExBeatSync_Info a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CriWare::CriAtomExBeatSync_Info))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_GETBEATSYNCINFO_OFFSET))(this, a1);
		}

		::System::Void SetNextBlockIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_SETNEXTBLOCKINDEX_OFFSET))(this, a1);
		}

		::System::Boolean SetBeatSyncOffset(::System::Int16 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_SETBEATSYNCOFFSET_OFFSET))(this, a1);
		}

		::System::UInt32 get_id()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_GET_ID_OFFSET))(this);
		}

		::System::Void set_id(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_SET_ID_OFFSET))(this, a1);
		}

		::CriWare::CriAtomExPlayback_Status get_status()
		{
			return ((::CriWare::CriAtomExPlayback_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_GET_STATUS_OFFSET))(this);
		}

		::System::Int64 get_time()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_GET_TIME_OFFSET))(this);
		}

		::System::Int64 get_timeSyncedWithAudio()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_GET_TIMESYNCEDWITHAUDIO_OFFSET))(this);
		}

		::System::Void Stop_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_STOP_1_OFFSET))(this);
		}

		::System::Void StopWithoutReleaseTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_STOPWITHOUTRELEASETIME_OFFSET))(this);
		}

		::System::Void Pause_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_PAUSE_1_OFFSET))(this, a1);
		}

		static ::System::Void criAtomExPlayback_Stop(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_STOP_OFFSET))(a1);
		}

		static ::System::Void criAtomExPlayback_StopWithoutReleaseTime(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_STOPWITHOUTRELEASETIME_OFFSET))(a1);
		}

		static ::System::Void criAtomExPlayback_Pause(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_PAUSE_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExPlayback_Resume(::System::UInt32 a1, ::CriWare::CriAtomEx_ResumeMode a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::CriWare::CriAtomEx_ResumeMode))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_RESUME_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomExPlayback_IsPaused(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_ISPAUSED_OFFSET))(a1);
		}

		static ::CriWare::CriAtomExPlayback_Status criAtomExPlayback_GetStatus(::System::UInt32 a1)
		{
			return ((::CriWare::CriAtomExPlayback_Status(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETSTATUS_OFFSET))(a1);
		}

		static ::System::Boolean criAtomExPlayback_GetFormatInfo(::System::UInt32 a1, ::CriWare::CriAtomEx_FormatInfo a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::CriWare::CriAtomEx_FormatInfo))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETFORMATINFO_OFFSET))(a1, a2);
		}

		static ::System::Int64 criAtomExPlayback_GetTime(::System::UInt32 a1)
		{
			return ((::System::Int64(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETTIME_OFFSET))(a1);
		}

		static ::System::Int64 criAtomExPlayback_GetTimeSyncedWithAudio(::System::UInt32 a1)
		{
			return ((::System::Int64(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETTIMESYNCEDWITHAUDIO_OFFSET))(a1);
		}

		static ::System::Boolean criAtomExPlayback_GetNumPlayedSamples(::System::UInt32 a1, ::System::Int64 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETNUMPLAYEDSAMPLES_OFFSET))(a1, a2, a3);
		}

		static ::System::Int64 criAtomExPlayback_GetSequencePosition(::System::UInt32 a1)
		{
			return ((::System::Int64(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETSEQUENCEPOSITION_OFFSET))(a1);
		}

		static ::System::Void criAtomExPlayback_SetNextBlockIndex(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_SETNEXTBLOCKINDEX_OFFSET))(a1, a2);
		}

		static ::System::Int32 criAtomExPlayback_GetCurrentBlockIndex(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETCURRENTBLOCKINDEX_OFFSET))(a1);
		}

		static ::System::Boolean criAtomExPlayback_GetPlaybackTrackInfo(::System::UInt32 a1, ::CriWare::CriAtomExPlayback_TrackInfo a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::CriWare::CriAtomExPlayback_TrackInfo))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETPLAYBACKTRACKINFO_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomExPlayback_GetBeatSyncInfo(::System::UInt32 a1, ::CriWare::CriAtomExBeatSync_Info a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::CriWare::CriAtomExBeatSync_Info))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETBEATSYNCINFO_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomExPlayback_SetBeatSyncOffset(::System::UInt32 a1, ::System::Int16 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::Int16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_SETBEATSYNCOFFSET_OFFSET))(a1, a2);
		}

	};
}
