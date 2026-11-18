#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWOPTIONPOPWINDOW_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1356E600)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWOPTIONPOPWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1356E740)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWOPTIONPOPWINDOW__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x1356E780)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWOPTIONPOPWINDOW__REGISTERPORTS_B__5_1_OFFSET UNITYSDK_OFFSET(0x1356F080)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWOPTIONPOPWINDOW__REGISTERPORTS_B__5_2_OFFSET UNITYSDK_OFFSET(0x1356EF10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWOPTIONPOPWINDOW__REGISTERPORTS_B__5_3_OFFSET UNITYSDK_OFFSET(0x1356F040)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShowOptionPopWindow_TypeDefinitionIndex = 75853;

	class LDShowOptionPopWindow : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Int32>* specialPopID; // 0xA8
		::FlowCanvas::FlowOutput* notOpen; // 0xB0
		::FlowCanvas::FlowOutput* output; // 0xB8
		::FlowCanvas::FlowOutput* onClosed; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Boolean>* isServerOnce; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWOPTIONPOPWINDOW__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWOPTIONPOPWINDOW_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__5_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWOPTIONPOPWINDOW__REGISTERPORTS_B__5_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__5_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWOPTIONPOPWINDOW__REGISTERPORTS_B__5_2_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__5_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWOPTIONPOPWINDOW__REGISTERPORTS_B__5_3_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__5_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWOPTIONPOPWINDOW__REGISTERPORTS_B__5_1_OFFSET))(this);
		}
	};
}
