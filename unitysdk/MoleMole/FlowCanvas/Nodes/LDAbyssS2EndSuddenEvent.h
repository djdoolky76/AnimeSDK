#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2ENDSUDDENEVENT_ENDSUDDENEVENT_OFFSET UNITYSDK_OFFSET(0x10403920)
#define MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2ENDSUDDENEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x10403810)
#define MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2ENDSUDDENEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x10403C30)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDAbyssS2EndSuddenEvent_TypeDefinitionIndex = 88205;

	class LDAbyssS2EndSuddenEvent : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Int32>* _suddenEventID; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Int32>* _resultKey; // 0xB0
		::FlowCanvas::FlowOutput* _out; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2ENDSUDDENEVENT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2ENDSUDDENEVENT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void EndSuddenEvent(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2ENDSUDDENEVENT_ENDSUDDENEVENT_OFFSET))(this, f);
		}
	};
}
