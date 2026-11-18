#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

#define FLOWCANVAS_NODES_FLOWNESTEDBT_ONAFTERUPDATECALL_OFFSET UNITYSDK_OFFSET(0x1EF4DC60)
#define FLOWCANVAS_NODES_FLOWNESTEDBT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1EF4DBD0)
#define FLOWCANVAS_NODES_FLOWNESTEDBT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF4DC90)
#define FLOWCANVAS_NODES_FLOWNESTEDBT__REGISTERPORTS_B__0_0_OFFSET UNITYSDK_OFFSET(0x1EF4DD20)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int FlowNestedBT_TypeDefinitionIndex = 30659;

	class FlowNestedBT
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOWNESTEDBT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOWNESTEDBT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnAfterUpdateCall()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOWNESTEDBT_ONAFTERUPDATECALL_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status _RegisterPorts_b__0_0()
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOWNESTEDBT__REGISTERPORTS_B__0_0_OFFSET))(this);
		}
	};
}
