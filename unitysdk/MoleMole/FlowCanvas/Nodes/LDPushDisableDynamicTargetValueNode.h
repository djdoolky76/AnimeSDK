#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDPUSHDISABLEDYNAMICTARGETVALUENODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1465F920)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPUSHDISABLEDYNAMICTARGETVALUENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1465F9E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPushDisableDynamicTargetValueNode_TypeDefinitionIndex = 48698;

	class LDPushDisableDynamicTargetValueNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUSHDISABLEDYNAMICTARGETVALUENODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* target, ::System::String* tag)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUSHDISABLEDYNAMICTARGETVALUENODE_INVOKE_OFFSET))(this, target, tag);
		}
	};
}
