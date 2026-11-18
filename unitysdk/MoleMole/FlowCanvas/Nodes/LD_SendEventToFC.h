#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BINGPDLFKIK_NIEPMBKBFDK.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SENDEVENTTOFC_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x11916850)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SENDEVENTTOFC__CTOR_OFFSET UNITYSDK_OFFSET(0x11916940)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SENDEVENTTOFC__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x11916990)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SendEventToFC_TypeDefinitionIndex = 59653;

	class LD_SendEventToFC : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::String*>* eventName; // 0xA8
		::FlowCanvas::FlowOutput* _output; // 0xB0
		::BINGPDLFKIK_NIEPMBKBFDK SendTarget; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SENDEVENTTOFC__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SENDEVENTTOFC_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__3_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SENDEVENTTOFC__REGISTERPORTS_B__3_0_OFFSET))(this, flow);
		}
	};
}
