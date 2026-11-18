#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CUSTOMGETENTITYSAVEMAPNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x12B33490)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int CustomGetEntitySaveMapNode_TypeDefinitionIndex = 63775;

	class CustomGetEntitySaveMapNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CUSTOMGETENTITYSAVEMAPNODE__CTOR_OFFSET))(this);
		}
	};
}
