#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPGCamera/CameraStateData.h"

#define RPGCAMERA_CAMERASTATEPOSTMODULE_COLLECTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1CF241D0)
#define RPGCAMERA_CAMERASTATEPOSTMODULE_COLLECT_OFFSET UNITYSDK_OFFSET(0x1CF24140)
#define RPGCAMERA_CAMERASTATEPOSTMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CF242A0)
#define RPGCAMERA_CAMERASTATEPOSTMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CF24290)
#define RPGCAMERA_CAMERASTATEPOSTMODULE_TICKINTERNAL_OFFSET UNITYSDK_OFFSET(0x1CF24280)
#define RPGCAMERA_CAMERASTATEPOSTMODULE_TICK_OFFSET UNITYSDK_OFFSET(0x1CF241E0)

namespace RPGCamera
{
	inline static constexpr unsigned int CameraStatePostModule_TypeDefinitionIndex = 46979;

	class CameraStatePostModule : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEPOSTMODULE_CTOR_OFFSET))(this);
		}

		::System::Void Collect(::RPGCamera::CameraStateData a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::CameraStateData))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEPOSTMODULE_COLLECT_OFFSET))(this, a1);
		}

		::System::Void CollectInternal(::RPGCamera::CameraStateData a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::CameraStateData))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEPOSTMODULE_COLLECTINTERNAL_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1, ::RPGCamera::CameraStateData a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPGCamera::CameraStateData))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEPOSTMODULE_TICK_OFFSET))(this, a1, a2);
		}

		::System::Void TickInternal(::System::Single a1, ::RPGCamera::CameraStateData a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPGCamera::CameraStateData))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEPOSTMODULE_TICKINTERNAL_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEPOSTMODULE_DISPOSE_OFFSET))(this);
		}

	};
}
