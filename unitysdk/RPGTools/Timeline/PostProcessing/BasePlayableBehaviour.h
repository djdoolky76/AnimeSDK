#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
namespace UnityEngine::Timeline { class TrackAsset; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_BASEPLAYABLEBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE91A2A0)

namespace RPGTools::Timeline::PostProcessing
{
	class BasePlayableBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Boolean AutoReset; // 0x10
		::System::Boolean HiendOnly; // 0x11
		::System::Byte _padding0[0x6];
		::UnityEngine::Timeline::TrackAsset* TrackAssetObj; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_BASEPLAYABLEBEHAVIOUR_CTOR_OFFSET))(this);
		}

	};
}
