#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/AIParamType.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDWRITEAIPARAMNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x11912070)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWRITEAIPARAMNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x119122D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWriteAIParamNode_TypeDefinitionIndex = 77946;

	class LDWriteAIParamNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWRITEAIPARAMNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::System::String* paramName, ::MoleMole::FlowCanvas::Nodes::AIParamType paramType, ::System::Object* paramValue)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::MoleMole::FlowCanvas::Nodes::AIParamType, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWRITEAIPARAMNODE_INVOKE_OFFSET))(this, entity, paramName, paramType, paramValue);
		}
	};
}
