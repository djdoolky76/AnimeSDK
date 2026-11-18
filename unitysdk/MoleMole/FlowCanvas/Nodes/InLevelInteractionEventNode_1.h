#pragma once
#include "unitysdk/unitysdk.h"

namespace FlowCanvas { class FlowOutput; }

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int InLevelInteractionEventNode_1_TypeDefinitionIndex = 54142;

	template <typename T>
	class InLevelInteractionEventNode_1
	{
	public:
		T _receivedValue; // 0x0
		::FlowCanvas::FlowOutput* _onReceived; // 0x0
	};
}
