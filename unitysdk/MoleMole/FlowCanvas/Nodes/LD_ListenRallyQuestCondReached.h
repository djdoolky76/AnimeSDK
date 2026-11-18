#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class EventArgs; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENRALLYQUESTCONDREACHED_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x12B3F840)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENRALLYQUESTCONDREACHED_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x12B3F9B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENRALLYQUESTCONDREACHED_ONMISSIONMODIFY_OFFSET UNITYSDK_OFFSET(0x12B3F570)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENRALLYQUESTCONDREACHED_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x12B3F4D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENRALLYQUESTCONDREACHED__CTOR_OFFSET UNITYSDK_OFFSET(0x12B3FB20)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENRALLYQUESTCONDREACHED___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x12B3FB60)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENRALLYQUESTCONDREACHED___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x12B3FB70)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_ListenRallyQuestCondReached_TypeDefinitionIndex = 45820;

	class LD_ListenRallyQuestCondReached : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Int32>* questID; // 0xA8
		::FlowCanvas::FlowOutput* _onQuestFinishOutput; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENRALLYQUESTCONDREACHED__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENRALLYQUESTCONDREACHED_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnMissionModify(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENRALLYQUESTCONDREACHED_ONMISSIONMODIFY_OFFSET))(this, args);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENRALLYQUESTCONDREACHED_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENRALLYQUESTCONDREACHED_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENRALLYQUESTCONDREACHED___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENRALLYQUESTCONDREACHED___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
