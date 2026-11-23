#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"

#define ABC_COMMON_TIMELINE_UNITY_DISABLEOCANDSETSHADOWUPDATEFREQMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E456F0)

namespace ABC::Common::Timeline::Unity
{
	inline static constexpr unsigned int DisableOCAndSetShadowUpdateFreqMarker_TypeDefinitionIndex = 8120;

	class DisableOCAndSetShadowUpdateFreqMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::System::Boolean DisableOCAndSetShadowUpdateFreq; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_COMMON_TIMELINE_UNITY_DISABLEOCANDSETSHADOWUPDATEFREQMARKER__CTOR_OFFSET))(this);
		}
	};
}
