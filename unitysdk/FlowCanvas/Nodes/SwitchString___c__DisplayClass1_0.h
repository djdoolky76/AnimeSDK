#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Nodes { class SwitchString; }
namespace System { class String; }

#define FLOWCANVAS_NODES_SWITCHSTRING___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF60DD0)
#define FLOWCANVAS_NODES_SWITCHSTRING___C__DISPLAYCLASS1_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1EF60DE0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SwitchString___c__DisplayClass1_0_TypeDefinitionIndex = 30743;

	class SwitchString___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::FlowCanvas::ValueInput_1<::System::String*>* selector; // 0x10
		::Il2CppArray<::FlowCanvas::FlowOutput*>* cases; // 0x18
		::FlowCanvas::FlowOutput* defaultCase; // 0x20
		::FlowCanvas::Nodes::SwitchString* __4__this; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHSTRING___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHSTRING___C__DISPLAYCLASS1_0__REGISTERPORTS_B__0_OFFSET))(this, f);
		}
	};
}
