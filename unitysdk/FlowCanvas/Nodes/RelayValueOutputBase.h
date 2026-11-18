#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

#define FLOWCANVAS_NODES_RELAYVALUEOUTPUTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2F96E0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int RelayValueOutputBase_TypeDefinitionIndex = 30580;

	class RelayValueOutputBase : public ::FlowCanvas::FlowNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_RELAYVALUEOUTPUTBASE__CTOR_OFFSET))(this);
		}
	};
}
