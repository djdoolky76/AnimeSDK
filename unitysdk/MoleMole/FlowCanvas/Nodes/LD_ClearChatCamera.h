#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_CLEARCHATCAMERA_DOCLEARCHATCAMERA_OFFSET UNITYSDK_OFFSET(0x1245D9A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CLEARCHATCAMERA_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1245D8B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CLEARCHATCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1245DB40)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CLEARCHATCAMERA__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x1245DB80)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_ClearChatCamera_TypeDefinitionIndex = 92208;

	class LD_ClearChatCamera : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Boolean>* _cutCamera; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Boolean>* _useChatSequence; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CLEARCHATCAMERA__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CLEARCHATCAMERA_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void DoClearChatCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CLEARCHATCAMERA_DOCLEARCHATCAMERA_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__2_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CLEARCHATCAMERA__REGISTERPORTS_B__2_0_OFFSET))(this, f);
		}
	};
}
