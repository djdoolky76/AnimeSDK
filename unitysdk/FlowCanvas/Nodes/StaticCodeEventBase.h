#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class EventInfo; }

#define FLOWCANVAS_NODES_STATICCODEEVENTBASE_GET_EVENTINFO_OFFSET UNITYSDK_OFFSET(0x1E3F4480)
#define FLOWCANVAS_NODES_STATICCODEEVENTBASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1E3F45B0)
#define FLOWCANVAS_NODES_STATICCODEEVENTBASE_SETEVENT_OFFSET UNITYSDK_OFFSET(0x1E3F4500)
#define FLOWCANVAS_NODES_STATICCODEEVENTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3F4700)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int StaticCodeEventBase_TypeDefinitionIndex = 30762;

	class StaticCodeEventBase : public ::FlowCanvas::Nodes::EventNode
	{
	public:
		::System::String* eventName; // 0xA8
		::System::Type* targetType; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_STATICCODEEVENTBASE__CTOR_OFFSET))(this);
		}

		::System::Reflection::EventInfo* get_eventInfo()
		{
			return ((::System::Reflection::EventInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_STATICCODEEVENTBASE_GET_EVENTINFO_OFFSET))(this);
		}

		::System::Void SetEvent(::System::Reflection::EventInfo* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::EventInfo*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_STATICCODEEVENTBASE_SETEVENT_OFFSET))(this, e);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_STATICCODEEVENTBASE_ONGRAPHSTARTED_OFFSET))(this);
		}
	};
}
