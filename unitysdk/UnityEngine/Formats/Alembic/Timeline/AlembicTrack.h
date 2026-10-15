#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define UNITYENGINE_FORMATS_ALEMBIC_TIMELINE_ALEMBICTRACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1F17F460)

namespace UnityEngine::Formats::Alembic::Timeline
{
	class AlembicTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_TIMELINE_ALEMBICTRACK_CTOR_OFFSET))(this);
		}

	};
}
