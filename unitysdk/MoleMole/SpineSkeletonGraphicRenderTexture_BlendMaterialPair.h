#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_BLENDMATERIALPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x3657B0)

namespace MoleMole
{
	inline static constexpr unsigned int SpineSkeletonGraphicRenderTexture_BlendMaterialPair_TypeDefinitionIndex = 41792;

	struct alignas(8) SpineSkeletonGraphicRenderTexture_BlendMaterialPair
	{
		::System::String* pageName; // 0x10
		::UnityEngine::Material* material; // 0x18

		::System::Void _ctor(::System::String* ECAFOHDBICH, ::UnityEngine::Material* AEIHFBNNLBP)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_BLENDMATERIALPAIR__CTOR_OFFSET))(this, ECAFOHDBICH, AEIHFBNNLBP);
		}
	};
}
