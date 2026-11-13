#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }

#define RPGTOOLS_ROADGENERATOR_TRACKSAMPLEPOINTDETECTOR_CAMERAPOINTSAMPLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD58AE0)

namespace RPGTools::RoadGenerator
{
	inline static constexpr unsigned int TrackSamplePointDetector_CameraPointSample_TypeDefinitionIndex = 49923;

	class TrackSamplePointDetector_CameraPointSample : public ::System::Object
	{
	public:
		::System::String* Label; // 0x10
		::System::Single Distance; // 0x18
		::UnityEngine::Vector3 ProjectedPosition; // 0x1C
		::UnityEngine::Vector3 SourcePosition; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_TRACKSAMPLEPOINTDETECTOR_CAMERAPOINTSAMPLE_CTOR_OFFSET))(this);
		}

	};
}
