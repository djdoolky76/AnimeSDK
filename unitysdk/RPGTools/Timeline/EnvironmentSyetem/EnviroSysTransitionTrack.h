#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONTRACK_CTOR_OFFSET UNITYSDK_OFFSET(0xE8F9900)

namespace RPGTools::Timeline::EnvironmentSyetem
{
	class EnviroSysTransitionTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONTRACK_CTOR_OFFSET))(this);
		}

	};
}
