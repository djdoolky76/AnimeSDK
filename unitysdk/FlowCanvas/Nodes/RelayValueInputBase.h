#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

#define FLOWCANVAS_NODES_RELAYVALUEINPUTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3F4440)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int RelayValueInputBase_TypeDefinitionIndex = 29382;

	class RelayValueInputBase : public ::FlowCanvas::FlowNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_RELAYVALUEINPUTBASE__CTOR_OFFSET))(this);
		}
	};
}
