#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectPluginTransform_KPFLIFKONPJ.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class ParticleSystemRenderer; }

#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_EPGEKLAFHFL_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x162675F0)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_EPGEKLAFHFL__CTOR_OFFSET UNITYSDK_OFFSET(0x162675E0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginTransform_EPGEKLAFHFL_TypeDefinitionIndex = 53491;

	class MonoEffectPluginTransform_EPGEKLAFHFL : public ::System::Object
	{
	public:
		::UnityEngine::ParticleSystem* JFGELGEHMGF; // 0x10
		::UnityEngine::ParticleSystemRenderer* JOHMDPEHMPO; // 0x18
		::System::Boolean DFBLPMKMNGN; // 0x20
		::System::Byte _padding0[0x3];
		::MoleMole::MonoEffectPluginTransform_KPFLIFKONPJ LKOCEPJLFDK; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_EPGEKLAFHFL__CTOR_OFFSET))(this);
		}

		::System::Void NPOLNFDBOOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_EPGEKLAFHFL_NPOLNFDBOOD_OFFSET))(this);
		}
	};
}
