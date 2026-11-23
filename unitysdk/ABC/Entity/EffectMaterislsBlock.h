#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace ABC::Entity
{
	inline static constexpr unsigned int EffectMaterislsBlock_TypeDefinitionIndex = 8139;

	struct alignas(8) EffectMaterislsBlock
	{
		::System::String* RendererName; // 0x10
		::Il2CppArray<::System::Int32>* MaterialIndex; // 0x18
	};
}
