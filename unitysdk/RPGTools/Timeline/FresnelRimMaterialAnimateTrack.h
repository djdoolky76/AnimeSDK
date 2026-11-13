#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_FRESNELRIMMATERIALANIMATETRACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D914890)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int FresnelRimMaterialAnimateTrack_TypeDefinitionIndex = 49104;

	class FresnelRimMaterialAnimateTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FRESNELRIMMATERIALANIMATETRACK_CTOR_OFFSET))(this);
		}

	};
}
