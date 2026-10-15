#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/PrefabPropertyComponent.h"
namespace UnityEngine::Rendering { class VolumeProfile; }

#define ENVIROMENTSYSTEMV2SPACE_ES_POSTPROCESSVOLUMECOMPONENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1563A3D0)

namespace EnviromentSystemV2Space
{
	class ES_PostProcessVolumeComponent : public ::EnviromentSystemV2Space::PrefabPropertyComponent
	{
	public:
		::UnityEngine::Rendering::VolumeProfile* PostProcessVolumeProfile; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_POSTPROCESSVOLUMECOMPONENT_CTOR_OFFSET))(this);
		}

	};
}
