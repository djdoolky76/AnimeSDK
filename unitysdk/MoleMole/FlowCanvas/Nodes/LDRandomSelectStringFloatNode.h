#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMSELECTSTRINGFLOATNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B4B4E70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMSELECTSTRINGFLOATNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B4F90)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDRandomSelectStringFloatNode_TypeDefinitionIndex = 54355;

	class LDRandomSelectStringFloatNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMSELECTSTRINGFLOATNODE__CTOR_OFFSET))(this);
		}

		::System::String* Invoke()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMSELECTSTRINGFLOATNODE_INVOKE_OFFSET))(this);
		}
	};
}
