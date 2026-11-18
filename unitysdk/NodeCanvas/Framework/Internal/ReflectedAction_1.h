#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/Internal/ReflectedActionWrapper.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace ParadoxNotion { template <typename T> class ActionCall_1; }

namespace NodeCanvas::Framework::Internal
{
	inline static constexpr unsigned int ReflectedAction_1_TypeDefinitionIndex = 30291;

	template <typename T>
	class ReflectedAction_1 : public ::NodeCanvas::Framework::Internal::ReflectedActionWrapper
	{
	public:
		::ParadoxNotion::ActionCall_1<T>* call; // 0x0
		::NodeCanvas::Framework::BBParameter_1<T>* p1; // 0x0
	};
}
