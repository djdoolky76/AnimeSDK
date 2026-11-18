#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectPluginTransform_KPFLIFKONPJ.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class ParticleSystemRenderer; }

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginTransform_SyncDataStruct_TypeDefinitionIndex = 53493;

	struct alignas(8) MonoEffectPluginTransform_SyncDataStruct
	{
		::MoleMole::MonoEffectPluginTransform_KPFLIFKONPJ syncType; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::ParticleSystem* particleSystem; // 0x18
		::UnityEngine::ParticleSystemRenderer* psRenderer; // 0x20
		::System::Boolean everInited; // 0x28
	};
}
