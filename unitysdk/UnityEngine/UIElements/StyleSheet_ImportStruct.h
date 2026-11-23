#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine::UIElements { class StyleSheet; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleSheet_ImportStruct_TypeDefinitionIndex = 13622;

	struct alignas(8) StyleSheet_ImportStruct
	{
		::UnityEngine::UIElements::StyleSheet* styleSheet; // 0x10
		::Il2CppArray<::System::String*>* mediaQueries; // 0x18
	};
}
