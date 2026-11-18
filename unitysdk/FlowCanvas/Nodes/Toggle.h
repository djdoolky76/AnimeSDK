#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace System { class String; }

#define FLOWCANVAS_NODES_TOGGLE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1EDC5400)
#define FLOWCANVAS_NODES_TOGGLE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1EDC5460)
#define FLOWCANVAS_NODES_TOGGLE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1EDC5470)
#define FLOWCANVAS_NODES_TOGGLE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1EDC5480)
#define FLOWCANVAS_NODES_TOGGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDC5610)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Toggle_TypeDefinitionIndex = 29519;

	class Toggle : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Boolean original; // 0xA8
		::System::Boolean open; // 0xA9

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TOGGLE__CTOR_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TOGGLE_GET_NAME_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TOGGLE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TOGGLE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TOGGLE_REGISTERPORTS_OFFSET))(this);
		}
	};
}
