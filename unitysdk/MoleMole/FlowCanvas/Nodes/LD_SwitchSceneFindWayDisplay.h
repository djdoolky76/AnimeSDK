#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SWITCHSCENEFINDWAYDISPLAY_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x10D1D040)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SWITCHSCENEFINDWAYDISPLAY_START_INTERACT_OFFSET UNITYSDK_OFFSET(0x10D1D170)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SWITCHSCENEFINDWAYDISPLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x10D1D540)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SWITCHSCENEFINDWAYDISPLAY__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x10D1D580)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SwitchSceneFindWayDisplay_TypeDefinitionIndex = 62386;

	class LD_SwitchSceneFindWayDisplay : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Int32>* wayID; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Boolean>* isOpen; // 0xB0
		::FlowCanvas::FlowOutput* output; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Single>* duration; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SWITCHSCENEFINDWAYDISPLAY__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SWITCHSCENEFINDWAYDISPLAY_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start_Interact(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SWITCHSCENEFINDWAYDISPLAY_START_INTERACT_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__4_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SWITCHSCENEFINDWAYDISPLAY__REGISTERPORTS_B__4_0_OFFSET))(this, f);
		}
	};
}
