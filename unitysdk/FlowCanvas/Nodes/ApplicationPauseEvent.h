#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode.h"

namespace FlowCanvas { class FlowOutput; }

#define FLOWCANVAS_NODES_APPLICATIONPAUSEEVENT_APPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x1D475470)
#define FLOWCANVAS_NODES_APPLICATIONPAUSEEVENT_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1D4752D0)
#define FLOWCANVAS_NODES_APPLICATIONPAUSEEVENT_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1D4753A0)
#define FLOWCANVAS_NODES_APPLICATIONPAUSEEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1D4754C0)
#define FLOWCANVAS_NODES_APPLICATIONPAUSEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D475550)
#define FLOWCANVAS_NODES_APPLICATIONPAUSEEVENT__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x1D475590)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ApplicationPauseEvent_TypeDefinitionIndex = 30919;

	class ApplicationPauseEvent : public ::FlowCanvas::Nodes::EventNode
	{
	public:
		::FlowCanvas::FlowOutput* pause; // 0xA8
		::System::Boolean isPause; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_APPLICATIONPAUSEEVENT__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_APPLICATIONPAUSEEVENT_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_APPLICATIONPAUSEEVENT_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void ApplicationPause(::System::Boolean isPause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_APPLICATIONPAUSEEVENT_APPLICATIONPAUSE_OFFSET))(this, isPause);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_APPLICATIONPAUSEEVENT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Boolean _RegisterPorts_b__5_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_APPLICATIONPAUSEEVENT__REGISTERPORTS_B__5_0_OFFSET))(this);
		}
	};
}
