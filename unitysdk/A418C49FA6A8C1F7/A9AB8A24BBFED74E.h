#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine::UIElements { class StyleComplexSelector; }
namespace UnityEngine::UIElements { class StyleSheet; }

#define A418C49FA6A8C1F7_A9AB8A24BBFED74E_E80B9F472EEFDF74_OFFSET UNITYSDK_OFFSET(0x42F2630)

namespace A418C49FA6A8C1F7
{
	inline static constexpr unsigned int A9AB8A24BBFED74E_TypeDefinitionIndex = 13384;

	struct alignas(8) A9AB8A24BBFED74E
	{
		::UnityEngine::UIElements::StyleSheet* A09E23F4346ABE8E; // 0x10
		::UnityEngine::UIElements::StyleComplexSelector* AB9D5BFADB131C22; // 0x18

		::System::String* E80B9F472EEFDF74()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_A9AB8A24BBFED74E_E80B9F472EEFDF74_OFFSET))(this);
		}
	};
}
