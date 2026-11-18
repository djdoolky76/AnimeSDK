#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MethodInfo; }
namespace UnityEngine { class Component; }

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int Variable_1___c__DisplayClass26_3_TypeDefinitionIndex = 29838;

	template <typename T1, typename T2, typename T3>
	class Variable_1___c__DisplayClass26_3 : public ::System::Object
	{
	public:
		::System::Reflection::MethodInfo* getMethod; // 0x0
		::UnityEngine::Component* instance; // 0x0
		::System::Reflection::MethodInfo* setMethod; // 0x0
	};
}
