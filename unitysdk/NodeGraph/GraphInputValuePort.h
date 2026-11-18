#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPKOIBEFPAO.h"
#include "unitysdk/NodeGraph/GraphPortDirection.h"
#include "unitysdk/NodeGraph/GraphValuePort.h"

namespace NodeGraph { class GraphNodeBase; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define NODEGRAPH_GRAPHINPUTVALUEPORT_GETVALUE_OFFSET UNITYSDK_OFFSET(0xEEB42C0)
#define NODEGRAPH_GRAPHINPUTVALUEPORT_GET_PORTDIRECTION_OFFSET UNITYSDK_OFFSET(0xEEB41B0)
#define NODEGRAPH_GRAPHINPUTVALUEPORT_GET_VALUEGETTER_OFFSET UNITYSDK_OFFSET(0xEEB41C0)
#define NODEGRAPH_GRAPHINPUTVALUEPORT_SETVALUE_OFFSET UNITYSDK_OFFSET(0xEEB41F0)
#define NODEGRAPH_GRAPHINPUTVALUEPORT_SET_VALUEGETTER_OFFSET UNITYSDK_OFFSET(0xEEB41D0)
#define NODEGRAPH_GRAPHINPUTVALUEPORT__CTOR_OFFSET UNITYSDK_OFFSET(0xEEB41E0)

namespace NodeGraph
{
	inline static constexpr unsigned int GraphInputValuePort_TypeDefinitionIndex = 77779;

	class GraphInputValuePort : public ::NodeGraph::GraphValuePort
	{
	public:
		::System::Func_1<::DPKOIBEFPAO>* _ValueGetter_k__BackingField; // 0x20

		::System::Void _ctor(::NodeGraph::GraphNodeBase* node, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::GraphNodeBase*, ::System::String*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHINPUTVALUEPORT__CTOR_OFFSET))(this, node, name);
		}

		::NodeGraph::GraphPortDirection get_PortDirection()
		{
			return ((::NodeGraph::GraphPortDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHINPUTVALUEPORT_GET_PORTDIRECTION_OFFSET))(this);
		}

		::System::Func_1<::DPKOIBEFPAO>* get_ValueGetter()
		{
			return ((::System::Func_1<::DPKOIBEFPAO>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHINPUTVALUEPORT_GET_VALUEGETTER_OFFSET))(this);
		}

		::System::Void set_ValueGetter(::System::Func_1<::DPKOIBEFPAO>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::DPKOIBEFPAO>*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHINPUTVALUEPORT_SET_VALUEGETTER_OFFSET))(this, value);
		}

		::System::Void SetValue(::DPKOIBEFPAO value)
		{
			return ((::System::Void(*)(::PVOID, ::DPKOIBEFPAO))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHINPUTVALUEPORT_SETVALUE_OFFSET))(this, value);
		}

		::DPKOIBEFPAO GetValue()
		{
			return ((::DPKOIBEFPAO(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHINPUTVALUEPORT_GETVALUE_OFFSET))(this);
		}
	};
}
