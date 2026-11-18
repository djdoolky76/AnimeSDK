#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CUSTOMGETRANDOMMONSTERLABNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x142F7370)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int CustomGetRandomMonsterLabNode_TypeDefinitionIndex = 45908;

	class CustomGetRandomMonsterLabNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CUSTOMGETRANDOMMONSTERLABNODE__CTOR_OFFSET))(this);
		}
	};
}
