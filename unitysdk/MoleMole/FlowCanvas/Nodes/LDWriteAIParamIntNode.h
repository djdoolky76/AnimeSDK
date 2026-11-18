#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDWRITEAIPARAMINTNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x11911E10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWRITEAIPARAMINTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x11912050)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWriteAIParamIntNode_TypeDefinitionIndex = 75625;

	class LDWriteAIParamIntNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWRITEAIPARAMINTNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::System::String* paramName, ::System::Int32 paramValue)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWRITEAIPARAMINTNODE_INVOKE_OFFSET))(this, entity, paramName, paramValue);
		}
	};
}
