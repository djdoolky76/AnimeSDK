#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"
#include "unitysdk/FA1EDF0909FD0302/B98D7A2DC3621144.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define UNITYENGINE_TIMELINE_MARKERTRACK_GET_OUTPUTS_OFFSET UNITYSDK_OFFSET(0x40D7B80)
#define UNITYENGINE_TIMELINE_MARKERTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x40D7B30)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int MarkerTrack_TypeDefinitionIndex = 20240;

	class MarkerTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Collections::Generic::IEnumerable_1<::FA1EDF0909FD0302::B98D7A2DC3621144>* get_outputs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::FA1EDF0909FD0302::B98D7A2DC3621144>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERTRACK_GET_OUTPUTS_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERTRACK__CTOR_OFFSET))(this);
		}
	};
}
