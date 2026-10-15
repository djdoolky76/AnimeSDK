#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/ES_ParticleComponent.h"
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEMV2SPACE_ES_CLOUDPARTICLECOMPONENT_AEOAIJGAGJH_OFFSET UNITYSDK_OFFSET(0x156352F0)
#define ENVIROMENTSYSTEMV2SPACE_ES_CLOUDPARTICLECOMPONENT_CTOR_OFFSET UNITYSDK_OFFSET(0x15635F70)
#define ENVIROMENTSYSTEMV2SPACE_ES_CLOUDPARTICLECOMPONENT_INIT_OFFSET UNITYSDK_OFFSET(0x15635010)
#define ENVIROMENTSYSTEMV2SPACE_ES_CLOUDPARTICLECOMPONENT_NIGFADGHBBD_OFFSET UNITYSDK_OFFSET(0x15635B70)

namespace EnviromentSystemV2Space
{
	class ES_CloudParticleComponent : public ::EnviromentSystemV2Space::ES_ParticleComponent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_CLOUDPARTICLECOMPONENT_CTOR_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_CLOUDPARTICLECOMPONENT_INIT_OFFSET))(this, a1);
		}

		::System::Void AEOAIJGAGJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_CLOUDPARTICLECOMPONENT_AEOAIJGAGJH_OFFSET))(this);
		}

		::System::Void NIGFADGHBBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_CLOUDPARTICLECOMPONENT_NIGFADGHBBD_OFFSET))(this);
		}

	};
}
