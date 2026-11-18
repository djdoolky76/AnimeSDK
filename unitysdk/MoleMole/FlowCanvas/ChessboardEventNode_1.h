#pragma once
#include "unitysdk/unitysdk.h"

namespace FlowCanvas { class FlowOutput; }

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardEventNode_1_TypeDefinitionIndex = 83730;

	template <typename T>
	class ChessboardEventNode_1
	{
	public:
		T _receivedValue; // 0x0
		::FlowCanvas::FlowOutput* _onReceived; // 0x0
	};
}
