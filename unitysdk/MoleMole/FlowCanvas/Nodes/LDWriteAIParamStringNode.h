#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDWRITEAIPARAMSTRINGNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x139DFC80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWRITEAIPARAMSTRINGNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x139DFEC0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWriteAIParamStringNode_TypeDefinitionIndex = 44733;

	class LDWriteAIParamStringNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWRITEAIPARAMSTRINGNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::System::String* paramName, ::System::String* paramValue)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWRITEAIPARAMSTRINGNODE_INVOKE_OFFSET))(this, entity, paramName, paramValue);
		}
	};
}
