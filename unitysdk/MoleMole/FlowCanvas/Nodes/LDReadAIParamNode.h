#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDREADAIPARAMNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x139DD1A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREADAIPARAMNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x139DD3F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDReadAIParamNode_TypeDefinitionIndex = 88307;

	class LDReadAIParamNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADAIPARAMNODE__CTOR_OFFSET))(this);
		}

		::System::Object* Invoke(::MoleMole::Battle::Entity* entity, ::System::String* paramName)
		{
			return ((::System::Object*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADAIPARAMNODE_INVOKE_OFFSET))(this, entity, paramName);
		}
	};
}
