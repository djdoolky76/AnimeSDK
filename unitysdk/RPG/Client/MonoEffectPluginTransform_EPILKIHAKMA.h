#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
namespace UnityEngine { class ParticleSystemRenderer; }
namespace UnityEngine { class Transform; }

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginTransform_EPILKIHAKMA_TypeDefinitionIndex = 70128;

	struct alignas(8) MonoEffectPluginTransform_EPILKIHAKMA
	{
		::UnityEngine::Transform* BKLBJFJHOLF; // 0x10
		::UnityEngine::ParticleSystemRenderer* ONEFCLJPGLE; // 0x18
		::UnityEngine::Matrix4x4 IAFFJECALCI; // 0x20
	};
}
