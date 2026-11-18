#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTARGETARROWUINODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1244BAC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTARGETARROWUINODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1244BBC0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDDestroyTargetArrowUINode_TypeDefinitionIndex = 51811;

	class LDDestroyTargetArrowUINode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTARGETARROWUINODE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTARGETARROWUINODE_INVOKE_OFFSET))(this, key);
		}
	};
}
