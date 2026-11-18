#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int Dict_1_Node_TypeDefinitionIndex = 26765;

	template <typename T>
	class Dict_1_Node : public ::System::Object
	{
	public:
		T _key; // 0x0
		::System::Object* _prev; // 0x0
		::System::Object* _next; // 0x0
	};
}
