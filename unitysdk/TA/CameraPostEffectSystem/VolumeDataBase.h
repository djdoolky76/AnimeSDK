#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define TA_CAMERAPOSTEFFECTSYSTEM_VOLUMEDATABASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace TA::CameraPostEffectSystem
{
	inline static constexpr unsigned int VolumeDataBase_TypeDefinitionIndex = 16316;

	class VolumeDataBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_CAMERAPOSTEFFECTSYSTEM_VOLUMEDATABASE__CTOR_OFFSET))(this);
		}
	};
}
