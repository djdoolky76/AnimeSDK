#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/PathGraphShadowOverrideApplier_ShadowFadeState.h"
#include "unitysdk/System/ValueType.h"

class MonoRenderEntity;
namespace UnityEngine { class GameObject; }

namespace NPCCrowd
{
	inline static constexpr unsigned int PathGraphShadowOverrideApplier_CachedNpcShadowState_TypeDefinitionIndex = 62251;

	struct alignas(8) PathGraphShadowOverrideApplier_CachedNpcShadowState
	{
		::UnityEngine::GameObject* rootGo; // 0x10
		::MonoRenderEntity* monoRenderEntity; // 0x18
		::System::Boolean hasMonoRenderEntitySnapshot; // 0x20
		::System::Byte _padding0[0x3];
		::NPCCrowd::PathGraphShadowOverrideApplier_ShadowFadeState monoRenderEntitySnapshot; // 0x24
	};
}
