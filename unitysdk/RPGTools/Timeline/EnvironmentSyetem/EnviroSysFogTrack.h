#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGTRACK_CTOR_OFFSET UNITYSDK_OFFSET(0xE8F8060)

namespace RPGTools::Timeline::EnvironmentSyetem
{
	class EnviroSysFogTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGTRACK_CTOR_OFFSET))(this);
		}

	};
}
