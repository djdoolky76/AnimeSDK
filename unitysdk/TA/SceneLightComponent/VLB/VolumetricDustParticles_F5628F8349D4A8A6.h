#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class ParticleSystem; }

#define TA_SCENELIGHTCOMPONENT_VLB_VOLUMETRICDUSTPARTICLES_F5628F8349D4A8A6_AA246B08F0E73B8B_OFFSET UNITYSDK_OFFSET(0x28AA950)
#define TA_SCENELIGHTCOMPONENT_VLB_VOLUMETRICDUSTPARTICLES_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x28AAA70)
#define TA_SCENELIGHTCOMPONENT_VLB_VOLUMETRICDUSTPARTICLES_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace TA::SceneLightComponent::VLB
{
	inline static constexpr unsigned int VolumetricDustParticles_F5628F8349D4A8A6_TypeDefinitionIndex = 16202;

	class VolumetricDustParticles_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::TA::SceneLightComponent::VLB::VolumetricDustParticles_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::TA::SceneLightComponent::VLB::VolumetricDustParticles_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(VolumetricDustParticles_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::UnityEngine::ParticleSystem*>** StaticGet_FDE7746D7ED93F4E()
		{
			return (::System::Action_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(VolumetricDustParticles_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_VOLUMETRICDUSTPARTICLES_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_VOLUMETRICDUSTPARTICLES_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void AA246B08F0E73B8B(::UnityEngine::ParticleSystem* FE067202C45BBC9A)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_VOLUMETRICDUSTPARTICLES_F5628F8349D4A8A6_AA246B08F0E73B8B_OFFSET))(this, FE067202C45BBC9A);
		}
	};
}
