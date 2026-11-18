#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDWRITEAIPARAMBOOLEANNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x14666420)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWRITEAIPARAMBOOLEANNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x14666660)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWriteAIParamBooleanNode_TypeDefinitionIndex = 79646;

	class LDWriteAIParamBooleanNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWRITEAIPARAMBOOLEANNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::System::String* paramName, ::System::Boolean paramValue)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWRITEAIPARAMBOOLEANNODE_INVOKE_OFFSET))(this, entity, paramName, paramValue);
		}
	};
}
