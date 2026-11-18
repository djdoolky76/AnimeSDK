#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeGraph { class GraphNodeBase; }
namespace System { class String; }

#define NODEGRAPH_IGRAPHPORT_GET_PORTNAME_OFFSET UNITYSDK_OFFSET(0xF165AF0)
#define NODEGRAPH_IGRAPHPORT__CTOR_OFFSET UNITYSDK_OFFSET(0xF165B00)

namespace NodeGraph
{
	inline static constexpr unsigned int IGraphPort_TypeDefinitionIndex = 47691;

	class IGraphPort : public ::System::Object
	{
	public:
		::System::String* _PortName_k__BackingField; // 0x10
		::NodeGraph::GraphNodeBase* _node; // 0x18

		::System::Void _ctor(::NodeGraph::GraphNodeBase* node, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::GraphNodeBase*, ::System::String*))((::PBYTE)hIl2Cpp + NODEGRAPH_IGRAPHPORT__CTOR_OFFSET))(this, node, name);
		}

		::System::String* get_PortName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_IGRAPHPORT_GET_PORTNAME_OFFSET))(this);
		}
	};
}
