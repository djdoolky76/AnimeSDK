#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class ParticleSystemRenderer; }

#define ABC_TECHART_VFX_DECALPARTICLERENDERER_A206C9E5504E82AD_OFFSET UNITYSDK_OFFSET(0x28AF870)
#define ABC_TECHART_VFX_DECALPARTICLERENDERER_B2E6D32805B9997F_OFFSET UNITYSDK_OFFSET(0x28AFA40)
#define ABC_TECHART_VFX_DECALPARTICLERENDERER_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x28AF720)
#define ABC_TECHART_VFX_DECALPARTICLERENDERER_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x28AFEE0)
#define ABC_TECHART_VFX_DECALPARTICLERENDERER_E85C17609510AA22_OFFSET UNITYSDK_OFFSET(0x28AFB40)
#define ABC_TECHART_VFX_DECALPARTICLERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::TechArt::VFX
{
	inline static constexpr unsigned int DecalParticleRenderer_TypeDefinitionIndex = 16292;

	class DecalParticleRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean EnableLocalTransform; // 0x20
		::System::Byte _padding0[0x7];
		::UnityEngine::ParticleSystemRenderer* BF2C1AFA9AB2EF5B; // 0x28
		::UnityEngine::ParticleSystem* E34BECE60DE90DFB; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_DECALPARTICLERENDERER__CTOR_OFFSET))(this);
		}

		::System::Void B2E6D32805B9997F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_DECALPARTICLERENDERER_B2E6D32805B9997F_OFFSET))(this);
		}

		::System::Void E85C17609510AA22()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_DECALPARTICLERENDERER_E85C17609510AA22_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_DECALPARTICLERENDERER_BF13C91AD80643D2_OFFSET))(this);
		}

		::System::Void E02954280801633F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_DECALPARTICLERENDERER_E02954280801633F_OFFSET))(this);
		}

		::System::Void A206C9E5504E82AD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_DECALPARTICLERENDERER_A206C9E5504E82AD_OFFSET))(this);
		}
	};
}
