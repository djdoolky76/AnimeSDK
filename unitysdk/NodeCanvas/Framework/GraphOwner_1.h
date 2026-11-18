#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/GraphOwner.h"

namespace UnityEngine { class Object; }

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int GraphOwner_1_TypeDefinitionIndex = 30191;

	template <typename T>
	class GraphOwner_1 : public ::NodeCanvas::Framework::GraphOwner
	{
	public:
		T _graph; // 0x0
		::UnityEngine::Object* _blackboard; // 0x0
	};
}
