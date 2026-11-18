#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CUSTOMSETENTITYSAVEMAPNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x13565090)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int CustomSetEntitySaveMapNode_TypeDefinitionIndex = 61474;

	class CustomSetEntitySaveMapNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CUSTOMSETENTITYSAVEMAPNODE__CTOR_OFFSET))(this);
		}
	};
}
