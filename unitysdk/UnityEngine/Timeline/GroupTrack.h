#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"
#include "unitysdk/FA1EDF0909FD0302/B98D7A2DC3621144.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define UNITYENGINE_TIMELINE_GROUPTRACK_CANCOMPILECLIPS_OFFSET UNITYSDK_OFFSET(0x16A4160)
#define UNITYENGINE_TIMELINE_GROUPTRACK_GET_OUTPUTS_OFFSET UNITYSDK_OFFSET(0x40D6C40)
#define UNITYENGINE_TIMELINE_GROUPTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x40D6BF0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int GroupTrack_TypeDefinitionIndex = 20198;

	class GroupTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Boolean CanCompileClips()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_GROUPTRACK_CANCOMPILECLIPS_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_GROUPTRACK__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::FA1EDF0909FD0302::B98D7A2DC3621144>* get_outputs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::FA1EDF0909FD0302::B98D7A2DC3621144>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_GROUPTRACK_GET_OUTPUTS_OFFSET))(this);
		}
	};
}
