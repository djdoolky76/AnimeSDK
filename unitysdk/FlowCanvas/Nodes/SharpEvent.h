#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Nodes { class ReflectedDelegateEvent; }
namespace FlowCanvas::Nodes { class ReflectedDelegateEvent_DelegateEventCallback; }
namespace System::Reflection { class EventInfo; }

#define FLOWCANVAS_NODES_SHARPEVENT_CREATE_OFFSET UNITYSDK_OFFSET(0x1D5D2940)
#define FLOWCANVAS_NODES_SHARPEVENT_GET_EVENTINFO_OFFSET UNITYSDK_OFFSET(0x1D5D2920)
#define FLOWCANVAS_NODES_SHARPEVENT_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1D5D2900)
#define FLOWCANVAS_NODES_SHARPEVENT_SETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1D5D2B50)
#define FLOWCANVAS_NODES_SHARPEVENT_SET_EVENTINFO_OFFSET UNITYSDK_OFFSET(0x1D5D2930)
#define FLOWCANVAS_NODES_SHARPEVENT_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1D5D2910)
#define FLOWCANVAS_NODES_SHARPEVENT_STARTLISTENING_OFFSET UNITYSDK_OFFSET(0x1D5D2B60)
#define FLOWCANVAS_NODES_SHARPEVENT_STOPLISTENING_OFFSET UNITYSDK_OFFSET(0x1D5D2C20)
#define FLOWCANVAS_NODES_SHARPEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D2CE0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SharpEvent_TypeDefinitionIndex = 30246;

	class SharpEvent : public ::System::Object
	{
	public:
		::System::Object* _instance_k__BackingField; // 0x10
		::System::Reflection::EventInfo* _eventInfo_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SHARPEVENT__CTOR_OFFSET))(this);
		}

		::System::Object* get_instance()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SHARPEVENT_GET_INSTANCE_OFFSET))(this);
		}

		::System::Void set_instance(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SHARPEVENT_SET_INSTANCE_OFFSET))(this, value);
		}

		::System::Reflection::EventInfo* get_eventInfo()
		{
			return ((::System::Reflection::EventInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SHARPEVENT_GET_EVENTINFO_OFFSET))(this);
		}

		::System::Void set_eventInfo(::System::Reflection::EventInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::EventInfo*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SHARPEVENT_SET_EVENTINFO_OFFSET))(this, value);
		}

		static ::FlowCanvas::Nodes::SharpEvent* Create(::System::Reflection::EventInfo* eventInfo)
		{
			return ((::FlowCanvas::Nodes::SharpEvent*(*)(::System::Reflection::EventInfo*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SHARPEVENT_CREATE_OFFSET))(eventInfo);
		}

		::System::Void SetInstance(::System::Object* instance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SHARPEVENT_SETINSTANCE_OFFSET))(this, instance);
		}

		::System::Void StartListening(::FlowCanvas::Nodes::ReflectedDelegateEvent* reflectedEvent, ::FlowCanvas::Nodes::ReflectedDelegateEvent_DelegateEventCallback* callback)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Nodes::ReflectedDelegateEvent*, ::FlowCanvas::Nodes::ReflectedDelegateEvent_DelegateEventCallback*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SHARPEVENT_STARTLISTENING_OFFSET))(this, reflectedEvent, callback);
		}

		::System::Void StopListening(::FlowCanvas::Nodes::ReflectedDelegateEvent* reflectedEvent, ::FlowCanvas::Nodes::ReflectedDelegateEvent_DelegateEventCallback* callback)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Nodes::ReflectedDelegateEvent*, ::FlowCanvas::Nodes::ReflectedDelegateEvent_DelegateEventCallback*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SHARPEVENT_STOPLISTENING_OFFSET))(this, reflectedEvent, callback);
		}
	};
}
