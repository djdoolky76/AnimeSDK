#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode.h"

namespace FlowCanvas { class FlowOutput; }

#define FLOWCANVAS_NODES_FIXEDUPDATEEVENT_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1EF87190)
#define FLOWCANVAS_NODES_FIXEDUPDATEEVENT_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1EF86FF0)
#define FLOWCANVAS_NODES_FIXEDUPDATEEVENT_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1EF870C0)
#define FLOWCANVAS_NODES_FIXEDUPDATEEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1EF86FA0)
#define FLOWCANVAS_NODES_FIXEDUPDATEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF871D0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int FixedUpdateEvent_TypeDefinitionIndex = 29738;

	class FixedUpdateEvent : public ::FlowCanvas::Nodes::EventNode
	{
	public:
		::FlowCanvas::FlowOutput* fixedUpdate; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FIXEDUPDATEEVENT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FIXEDUPDATEEVENT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FIXEDUPDATEEVENT_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FIXEDUPDATEEVENT_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FIXEDUPDATEEVENT_FIXEDUPDATE_OFFSET))(this);
		}
	};
}
