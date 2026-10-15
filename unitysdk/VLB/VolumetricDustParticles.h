#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/VLB/VolumetricDustParticles_Direction.h"
#include "unitysdk/VLB/VolumetricDustParticles_ParticleType.h"
namespace UnityEngine { class ParticleSystem; }

#define VLB_VOLUMETRICDUSTPARTICLES_CCTOR_OFFSET UNITYSDK_OFFSET(0xE9E8FC0)
#define VLB_VOLUMETRICDUSTPARTICLES_CTOR_OFFSET UNITYSDK_OFFSET(0xE9E8F80)
#define VLB_VOLUMETRICDUSTPARTICLES_GET_ISCULLED_OFFSET UNITYSDK_OFFSET(0xE9E8F10)
#define VLB_VOLUMETRICDUSTPARTICLES_INSTANTIATEPARTICLESYSTEM_OFFSET UNITYSDK_OFFSET(0xE9E8F30)
#define VLB_VOLUMETRICDUSTPARTICLES_SET_ISCULLED_OFFSET UNITYSDK_OFFSET(0xE9E8F20)

namespace VLB
{
	inline static constexpr unsigned int VolumetricDustParticles_TypeDefinitionIndex = 49012;

	class VolumetricDustParticles
	{
	public:
		::VLB::VolumetricDustParticles_ParticleType particleType; // 0x30
		::System::Byte _padding0[0x4];
		::UnityEngine::ParticleSystem* particlePrefab; // 0x38
		::System::Single alpha; // 0x40
		::System::Single size; // 0x44
		::VLB::VolumetricDustParticles_Direction direction; // 0x48
		::System::Single speed; // 0x4C
		::System::Single density; // 0x50
		::System::Single spawnMaxDistance; // 0x54
		::System::Boolean cullingEnabled; // 0x58
		::System::Byte _padding1[0x3];
		::System::Single cullingMaxDistance; // 0x5C
		::System::Boolean _isCulled_k__BackingField; // 0x60
		static ::System::Boolean* StaticGet_isFeatureSupported()
		{
			return (::System::Boolean*)UnitySDK::FromName("VLB", "VolumetricDustParticles")->GetStaticField(0x4440);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICDUSTPARTICLES_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + VLB_VOLUMETRICDUSTPARTICLES_CCTOR_OFFSET))();
		}

		::System::Boolean get_isCulled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICDUSTPARTICLES_GET_ISCULLED_OFFSET))(this);
		}

		::System::Void set_isCulled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICDUSTPARTICLES_SET_ISCULLED_OFFSET))(this, a1);
		}

		::System::Void InstantiateParticleSystem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICDUSTPARTICLES_INSTANTIATEPARTICLESYSTEM_OFFSET))(this);
		}

	};
}
