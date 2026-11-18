#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class CameraDataAccessor; }

#define MOLEMOLE_CAMERAS_NAPVIRTUAL3DACTIONCAMERA_1_HNNEHIIBODC_FEKCOPELAIC_OFFSET UNITYSDK_OFFSET(0x11A52890)
#define MOLEMOLE_CAMERAS_NAPVIRTUAL3DACTIONCAMERA_1_HNNEHIIBODC__CTOR_OFFSET UNITYSDK_OFFSET(0x11A51FB0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int NapVirtual3DActionCamera_1_HNNEHIIBODC_TypeDefinitionIndex = 53912;

	template <typename T>
	class NapVirtual3DActionCamera_1_HNNEHIIBODC : public ::System::Object
	{
	public:
		::MoleMole::Cameras::CameraDataAccessor* GPBKDGGEBCF; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUAL3DACTIONCAMERA_1_HNNEHIIBODC__CTOR_OFFSET))(this);
		}

		::System::Single FEKCOPELAIC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUAL3DACTIONCAMERA_1_HNNEHIIBODC_FEKCOPELAIC_OFFSET))(this);
		}
	};
}
