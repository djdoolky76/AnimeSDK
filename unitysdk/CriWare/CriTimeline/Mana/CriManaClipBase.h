#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace CriWare::CriMana { class MovieInfo; }
namespace System { class Object; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_GETSEEKFRAME_OFFSET UNITYSDK_OFFSET(0x1FD5AF00)
#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1FD5AC30)
#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1FD5B040)
#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_GET_ISMOVIEINFOREADY_OFFSET UNITYSDK_OFFSET(0x1FD5AEF0)
#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_ISSAMEMOVIE_OFFSET UNITYSDK_OFFSET(0x1FD5AE30)
#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_REPLACEMOVIEINFO_OFFSET UNITYSDK_OFFSET(0x1FD5AC40)
#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_STRUCTTOMOVIEINFO_OFFSET UNITYSDK_OFFSET(0x1FD5ABE0)
#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FD5B070)

namespace CriWare::CriTimeline::Mana
{
	inline static constexpr unsigned int CriManaClipBase_TypeDefinitionIndex = 34580;

	class CriManaClipBase : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Guid guid; // 0x18
		::System::Boolean m_loopWithinClip; // 0x28
		::System::Boolean m_useOnMemoryPlayback; // 0x29
		::System::Byte _padding0[0x2];
		::System::Runtime::InteropServices::GCHandle gcHandle; // 0x2C
		::System::Double m_movieFrameRate; // 0x30
		::System::Double m_clipDuration; // 0x38
		::System::Single m_fadeinDuration; // 0x40
		::System::Byte _padding1[0x4];
		::UnityEngine::AnimationCurve* m_fadeinCurve; // 0x48
		::System::Single m_fadeoutDuration; // 0x50
		::System::Byte _padding2[0x4];
		::UnityEngine::AnimationCurve* m_fadeoutCurve; // 0x58
		::System::Boolean m_fadeAudio; // 0x60
		::System::Byte _padding3[0x7];
		::UnityEngine::Timeline::TimelineClip* m_clip; // 0x68
		::System::Nullable_1<::System::Object*> m_movieInfoStruct; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE__CTOR_OFFSET))(this);
		}

		::System::Nullable_1<::System::Object*> StructToMovieInfo(::CriWare::CriMana::MovieInfo* movieInfo)
		{
			return ((::System::Nullable_1<::System::Object*>(*)(::PVOID, ::CriWare::CriMana::MovieInfo*))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_STRUCTTOMOVIEINFO_OFFSET))(this, movieInfo);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_GET_CLIPCAPS_OFFSET))(this);
		}

		::System::Void ReplaceMovieInfo(::CriWare::CriMana::MovieInfo* movieInfo)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::MovieInfo*))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_REPLACEMOVIEINFO_OFFSET))(this, movieInfo);
		}

		::System::Boolean IsSameMovie(::CriWare::CriMana::MovieInfo* movieInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::CriWare::CriMana::MovieInfo*))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_ISSAMEMOVIE_OFFSET))(this, movieInfo);
		}

		::System::Boolean get_IsMovieInfoReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_GET_ISMOVIEINFOREADY_OFFSET))(this);
		}

		::System::Int32 GetSeekFrame(::System::Double seekTimeSec, ::System::Boolean loop)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Double, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_GETSEEKFRAME_OFFSET))(this, seekTimeSec, loop);
		}

		::System::Double get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_GET_DURATION_OFFSET))(this);
		}
	};
}
