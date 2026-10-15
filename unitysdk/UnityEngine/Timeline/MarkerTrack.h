#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableBinding.h"
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define UNITYENGINE_TIMELINE_MARKERTRACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1F35F440)
#define UNITYENGINE_TIMELINE_MARKERTRACK_GET_OUTPUTS_OFFSET UNITYSDK_OFFSET(0x1F35F0D0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int MarkerTrack_TypeDefinitionIndex = 38830;

	class MarkerTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERTRACK_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* get_outputs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERTRACK_GET_OUTPUTS_OFFSET))(this);
		}

	};
}
