#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

class GAHFPBIIKPP;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTTIMELIMITTASK_CLOSE_OFFSET UNITYSDK_OFFSET(0x1623B2B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTTIMELIMITTASK_ONTIMELINEFINISH_OFFSET UNITYSDK_OFFSET(0x1623B3A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTTIMELIMITTASK_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1623ADB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTTIMELIMITTASK_START_OFFSET UNITYSDK_OFFSET(0x1623AF50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTTIMELIMITTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1623B4F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDStartShootTimeLimitTask_TypeDefinitionIndex = 73520;

	class LDStartShootTimeLimitTask : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _success; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Int32>* _totalTarget; // 0xB0
		::FlowCanvas::FlowOutput* _out; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Single>* _totalTime; // 0xC0
		::FlowCanvas::FlowOutput* _fail; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Int32>* _rewardScore; // 0xD0
		::GAHFPBIIKPP* _task; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTTIMELIMITTASK__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTTIMELIMITTASK_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTTIMELIMITTASK_START_OFFSET))(this, flow);
		}

		::System::Void Close(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTTIMELIMITTASK_CLOSE_OFFSET))(this, flow);
		}

		::System::Void OnTimeLineFinish(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTTIMELIMITTASK_ONTIMELINEFINISH_OFFSET))(this, success);
		}
	};
}
