#pragma once
#include "unitysdk/unitysdk.h"

#define FLOWCANVAS_NODES_FLOWNESTEDFLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE97970)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int FlowNestedFlow_TypeDefinitionIndex = 29889;

	class FlowNestedFlow
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOWNESTEDFLOW__CTOR_OFFSET))(this);
		}
	};
}
