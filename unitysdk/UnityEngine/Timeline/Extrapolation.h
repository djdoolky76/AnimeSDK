#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine::Timeline { class TimelineClip; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define UNITYENGINE_TIMELINE_EXTRAPOLATION_CALCULATEEXTRAPOLATIONTIMES_OFFSET UNITYSDK_OFFSET(0x1D6E73A0)
#define UNITYENGINE_TIMELINE_EXTRAPOLATION_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6E7A80)
#define UNITYENGINE_TIMELINE_EXTRAPOLATION_SORTCLIPSBYSTARTTIME_OFFSET UNITYSDK_OFFSET(0x1D6E78E0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int Extrapolation_TypeDefinitionIndex = 39801;

	class Extrapolation : public ::System::Object
	{
	public:
		static ::System::Double* StaticGet_kMinExtrapolationTime()
		{
			return (::System::Double*)UnitySDK::FromName("UnityEngine.Timeline", "Extrapolation")->GetStaticField(0xC480);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EXTRAPOLATION_CCTOR_OFFSET))();
		}

		static ::System::Void CalculateExtrapolationTimes(::UnityEngine::Timeline::TrackAsset* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EXTRAPOLATION_CALCULATEEXTRAPOLATIONTIMES_OFFSET))(a1);
		}

		static ::Il2CppArray<::UnityEngine::Timeline::TimelineClip*>* SortClipsByStartTime(::Il2CppArray<::UnityEngine::Timeline::TimelineClip*>* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Timeline::TimelineClip*>*(*)(::Il2CppArray<::UnityEngine::Timeline::TimelineClip*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EXTRAPOLATION_SORTCLIPSBYSTARTTIME_OFFSET))(a1);
		}

	};
}
