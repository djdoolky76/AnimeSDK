#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDPOPDISABLEDYNAMICTARGETVALUENODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x12B3B0D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPOPDISABLEDYNAMICTARGETVALUENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x12B3B180)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPopDisableDynamicTargetValueNode_TypeDefinitionIndex = 69332;

	class LDPopDisableDynamicTargetValueNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPOPDISABLEDYNAMICTARGETVALUENODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* target, ::System::String* tag)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPOPDISABLEDYNAMICTARGETVALUENODE_INVOKE_OFFSET))(this, target, tag);
		}
	};
}
