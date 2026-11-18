#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDWRITEAIPARAMFLOATNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x13EDB2E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWRITEAIPARAMFLOATNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x13EDB520)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWriteAIParamFloatNode_TypeDefinitionIndex = 84412;

	class LDWriteAIParamFloatNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWRITEAIPARAMFLOATNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::System::String* paramName, ::System::Single paramValue)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWRITEAIPARAMFLOATNODE_INVOKE_OFFSET))(this, entity, paramName, paramValue);
		}
	};
}
