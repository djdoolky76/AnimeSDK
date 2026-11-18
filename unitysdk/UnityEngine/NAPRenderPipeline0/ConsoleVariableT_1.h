#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ConsoleVariable.h"

namespace System { class String; }

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ConsoleVariableT_1_TypeDefinitionIndex = 5692;

	template <typename T>
	class ConsoleVariableT_1 : public ::UnityEngine::ConsoleVariable
	{
	public:
		::System::String* _name_k__BackingField; // 0x0
		::System::Int32 _id_k__BackingField; // 0x0
	};
}
