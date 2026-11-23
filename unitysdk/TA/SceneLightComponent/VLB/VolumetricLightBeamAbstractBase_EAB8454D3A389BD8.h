#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace TA::SceneLightComponent::VLB { class VolumetricLightBeamAbstractBase; }

#define TA_SCENELIGHTCOMPONENT_VLB_VOLUMETRICLIGHTBEAMABSTRACTBASE_EAB8454D3A389BD8_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define TA_SCENELIGHTCOMPONENT_VLB_VOLUMETRICLIGHTBEAMABSTRACTBASE_EAB8454D3A389BD8__CTOR_OFFSET UNITYSDK_OFFSET(0x27E21E0)

namespace TA::SceneLightComponent::VLB
{
	inline static constexpr unsigned int VolumetricLightBeamAbstractBase_EAB8454D3A389BD8_TypeDefinitionIndex = 16195;

	class VolumetricLightBeamAbstractBase_EAB8454D3A389BD8 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_VOLUMETRICLIGHTBEAMABSTRACTBASE_EAB8454D3A389BD8__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::TA::SceneLightComponent::VLB::VolumetricLightBeamAbstractBase* AC89894A6933E3E7)
		{
			return ((::System::Void(*)(::PVOID, ::TA::SceneLightComponent::VLB::VolumetricLightBeamAbstractBase*))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_VOLUMETRICLIGHTBEAMABSTRACTBASE_EAB8454D3A389BD8_INVOKE_OFFSET))(this, AC89894A6933E3E7);
		}
	};
}
