#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace UnityEngine { class Camera; }

#define TA_SCENELIGHTCOMPONENT_VLB_VOLUMETRICLIGHTBEAMSD_EE970B30209D10CA_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define TA_SCENELIGHTCOMPONENT_VLB_VOLUMETRICLIGHTBEAMSD_EE970B30209D10CA__CTOR_OFFSET UNITYSDK_OFFSET(0x22B96A0)

namespace TA::SceneLightComponent::VLB
{
	inline static constexpr unsigned int VolumetricLightBeamSD_EE970B30209D10CA_TypeDefinitionIndex = 16334;

	class VolumetricLightBeamSD_EE970B30209D10CA : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_VOLUMETRICLIGHTBEAMSD_EE970B30209D10CA__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::UnityEngine::Camera* A98EBC175E852459)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_VOLUMETRICLIGHTBEAMSD_EE970B30209D10CA_INVOKE_OFFSET))(this, A98EBC175E852459);
		}
	};
}
