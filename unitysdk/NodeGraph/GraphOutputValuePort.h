#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPKOIBEFPAO.h"
#include "unitysdk/NodeGraph/GraphPortDirection.h"
#include "unitysdk/NodeGraph/GraphValuePort.h"

namespace NodeGraph { class GraphNodeBase; }
namespace System { class Action; }
namespace System { class String; }

#define NODEGRAPH_GRAPHOUTPUTVALUEPORT_GETVALUE_OFFSET UNITYSDK_OFFSET(0x15F4ED80)
#define NODEGRAPH_GRAPHOUTPUTVALUEPORT_GET_BEFOREGETVALUE_OFFSET UNITYSDK_OFFSET(0x15F4ED50)
#define NODEGRAPH_GRAPHOUTPUTVALUEPORT_GET_PORTDIRECTION_OFFSET UNITYSDK_OFFSET(0x15F4ED40)
#define NODEGRAPH_GRAPHOUTPUTVALUEPORT_SETVALUE_OFFSET UNITYSDK_OFFSET(0x15F4ECC0)
#define NODEGRAPH_GRAPHOUTPUTVALUEPORT_SET_BEFOREGETVALUE_OFFSET UNITYSDK_OFFSET(0x15F4ED60)
#define NODEGRAPH_GRAPHOUTPUTVALUEPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x15F4ED70)

namespace NodeGraph
{
	inline static constexpr unsigned int GraphOutputValuePort_TypeDefinitionIndex = 76078;

	class GraphOutputValuePort : public ::NodeGraph::GraphValuePort
	{
	public:
		::System::Action* _BeforeGetValue_k__BackingField; // 0x20
		::DPKOIBEFPAO _value; // 0x28

		::System::Void _ctor(::NodeGraph::GraphNodeBase* node, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::GraphNodeBase*, ::System::String*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHOUTPUTVALUEPORT__CTOR_OFFSET))(this, node, name);
		}

		::NodeGraph::GraphPortDirection get_PortDirection()
		{
			return ((::NodeGraph::GraphPortDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHOUTPUTVALUEPORT_GET_PORTDIRECTION_OFFSET))(this);
		}

		::System::Action* get_BeforeGetValue()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHOUTPUTVALUEPORT_GET_BEFOREGETVALUE_OFFSET))(this);
		}

		::System::Void set_BeforeGetValue(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHOUTPUTVALUEPORT_SET_BEFOREGETVALUE_OFFSET))(this, value);
		}

		::System::Void SetValue(::DPKOIBEFPAO value)
		{
			return ((::System::Void(*)(::PVOID, ::DPKOIBEFPAO))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHOUTPUTVALUEPORT_SETVALUE_OFFSET))(this, value);
		}

		::DPKOIBEFPAO GetValue()
		{
			return ((::DPKOIBEFPAO(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHOUTPUTVALUEPORT_GETVALUE_OFFSET))(this);
		}
	};
}
