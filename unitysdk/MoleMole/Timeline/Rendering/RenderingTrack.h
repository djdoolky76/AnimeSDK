#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define MOLEMOLE_TIMELINE_RENDERING_RENDERINGTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x18970BF0)

namespace MoleMole::Timeline::Rendering
{
	inline static constexpr unsigned int RenderingTrack_TypeDefinitionIndex = 80573;

	class RenderingTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RENDERING_RENDERINGTRACK__CTOR_OFFSET))(this);
		}
	};
}
