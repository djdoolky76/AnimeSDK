#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoCanvasGroupAlphaModifierForParticleSystem_MaterialInfo_CDHOHJCGLAE.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class Material; }

namespace MoleMole
{
	inline static constexpr unsigned int MonoCanvasGroupAlphaModifierForParticleSystem_MaterialInfo_TypeDefinitionIndex = 73232;

	struct alignas(8) MonoCanvasGroupAlphaModifierForParticleSystem_MaterialInfo
	{
		::UnityEngine::Material* sharedMaterial; // 0x10
		::MoleMole::MonoCanvasGroupAlphaModifierForParticleSystem_MaterialInfo_CDHOHJCGLAE shaderAlphaPropertyType; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* shaderPropertyName; // 0x20
	};
}
