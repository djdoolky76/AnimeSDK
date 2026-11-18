#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CUSTOMGETWAVEMONSTERINFONODE__CTOR_OFFSET UNITYSDK_OFFSET(0x12B334E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int CustomGetWaveMonsterInfoNode_TypeDefinitionIndex = 61300;

	class CustomGetWaveMonsterInfoNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CUSTOMGETWAVEMONSTERINFONODE__CTOR_OFFSET))(this);
		}
	};
}
