#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }

#define FLOWCANVAS_NODES_UPDATEEVENT_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1EF4FB60)
#define FLOWCANVAS_NODES_UPDATEEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1EF4FB10)
#define FLOWCANVAS_NODES_UPDATEEVENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1EF4FB70)
#define FLOWCANVAS_NODES_UPDATEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF4FC70)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int UpdateEvent_TypeDefinitionIndex = 29368;

	class UpdateEvent : public ::FlowCanvas::Nodes::EventNode
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* updateInterval; // 0xA8
		::FlowCanvas::FlowOutput* update; // 0xB0
		::System::Single lastUpdatedTime; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UPDATEEVENT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UPDATEEVENT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UPDATEEVENT_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UPDATEEVENT_UPDATE_OFFSET))(this);
		}
	};
}
