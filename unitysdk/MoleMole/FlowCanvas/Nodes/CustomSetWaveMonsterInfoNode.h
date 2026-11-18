#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CUSTOMSETWAVEMONSTERINFONODE__CTOR_OFFSET UNITYSDK_OFFSET(0x12447A10)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int CustomSetWaveMonsterInfoNode_TypeDefinitionIndex = 80833;

	class CustomSetWaveMonsterInfoNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CUSTOMSETWAVEMONSTERINFONODE__CTOR_OFFSET))(this);
		}
	};
}
