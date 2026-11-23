#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::UIElements { class VectorImage; }

#define BF47C5BD32803E8C_ED695CE7EFADA1BB_F09024656C52EF89_OFFSET UNITYSDK_OFFSET(0x42331F0)

namespace BF47C5BD32803E8C
{
	inline static constexpr unsigned int ED695CE7EFADA1BB_TypeDefinitionIndex = 13085;

	struct alignas(8) ED695CE7EFADA1BB
	{
		::UnityEngine::Texture2D* ACD79FF40F9FEAC3; // 0x10
		::UnityEngine::Sprite* ACE795ECEC11E621; // 0x18
		::UnityEngine::UIElements::VectorImage* BCBC8DCD1CA88E5A; // 0x20
		::UnityEngine::RenderTexture* AE2EABF3B181DE28; // 0x28

		::System::Boolean F09024656C52EF89()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BF47C5BD32803E8C_ED695CE7EFADA1BB_F09024656C52EF89_OFFSET))(this);
		}
	};
}
