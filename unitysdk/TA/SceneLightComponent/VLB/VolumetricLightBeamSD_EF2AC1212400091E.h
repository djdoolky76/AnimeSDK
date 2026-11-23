#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define TA_SCENELIGHTCOMPONENT_VLB_VOLUMETRICLIGHTBEAMSD_EF2AC1212400091E_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define TA_SCENELIGHTCOMPONENT_VLB_VOLUMETRICLIGHTBEAMSD_EF2AC1212400091E__CTOR_OFFSET UNITYSDK_OFFSET(0x1F36B60)

namespace TA::SceneLightComponent::VLB
{
	inline static constexpr unsigned int VolumetricLightBeamSD_EF2AC1212400091E_TypeDefinitionIndex = 16335;

	class VolumetricLightBeamSD_EF2AC1212400091E : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_VOLUMETRICLIGHTBEAMSD_EF2AC1212400091E__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_VOLUMETRICLIGHTBEAMSD_EF2AC1212400091E_INVOKE_OFFSET))(this);
		}
	};
}
