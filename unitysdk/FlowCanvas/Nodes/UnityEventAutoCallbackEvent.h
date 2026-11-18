#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { class ValueInput; }
namespace FlowCanvas::Nodes { class ReflectedUnityEvent; }
namespace ParadoxNotion::Serialization { class ISerializedReflectedInfo; }
namespace ParadoxNotion::Serialization { class SerializedUnityEventInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class PropertyInfo; }
namespace UnityEngine::Events { class UnityEventBase; }

#define FLOWCANVAS_NODES_UNITYEVENTAUTOCALLBACKEVENT_GET_EVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1F2FA250)
#define FLOWCANVAS_NODES_UNITYEVENTAUTOCALLBACKEVENT_GET_FIELD_OFFSET UNITYSDK_OFFSET(0x1F2FA2D0)
#define FLOWCANVAS_NODES_UNITYEVENTAUTOCALLBACKEVENT_GET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0x1F2FA230)
#define FLOWCANVAS_NODES_UNITYEVENTAUTOCALLBACKEVENT_GET_MEMBER_OFFSET UNITYSDK_OFFSET(0x1F2FA210)
#define FLOWCANVAS_NODES_UNITYEVENTAUTOCALLBACKEVENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1F2FA370)
#define FLOWCANVAS_NODES_UNITYEVENTAUTOCALLBACKEVENT_GET_PROP_OFFSET UNITYSDK_OFFSET(0x1F2FA320)
#define FLOWCANVAS_NODES_UNITYEVENTAUTOCALLBACKEVENT_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET UNITYSDK_OFFSET(0x1F2FA6A0)
#define FLOWCANVAS_NODES_UNITYEVENTAUTOCALLBACKEVENT_ONEVENTRAISED_OFFSET UNITYSDK_OFFSET(0x1F2FAF40)
#define FLOWCANVAS_NODES_UNITYEVENTAUTOCALLBACKEVENT_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1F2FAB30)
#define FLOWCANVAS_NODES_UNITYEVENTAUTOCALLBACKEVENT_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1F2FAEB0)
#define FLOWCANVAS_NODES_UNITYEVENTAUTOCALLBACKEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1F2FA710)
#define FLOWCANVAS_NODES_UNITYEVENTAUTOCALLBACKEVENT_SETEVENT_OFFSET UNITYSDK_OFFSET(0x1F2FA6B0)
#define FLOWCANVAS_NODES_UNITYEVENTAUTOCALLBACKEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2FAF90)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int UnityEventAutoCallbackEvent_TypeDefinitionIndex = 29730;

	class UnityEventAutoCallbackEvent : public ::FlowCanvas::Nodes::EventNode
	{
	public:
		::UnityEngine::Events::UnityEventBase* unityEvent; // 0xA8
		::ParadoxNotion::Serialization::SerializedUnityEventInfo* _eventMember; // 0xB0
		::Il2CppArray<::System::Object*>* args; // 0xB8
		::FlowCanvas::ValueInput* instancePort; // 0xC0
		::FlowCanvas::FlowOutput* callback; // 0xC8
		::FlowCanvas::Nodes::ReflectedUnityEvent* reflectedEvent; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UNITYEVENTAUTOCALLBACKEVENT__CTOR_OFFSET))(this);
		}

		::System::Reflection::MemberInfo* get_member()
		{
			return ((::System::Reflection::MemberInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UNITYEVENTAUTOCALLBACKEVENT_GET_MEMBER_OFFSET))(this);
		}

		::System::Boolean get_isStatic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UNITYEVENTAUTOCALLBACKEVENT_GET_ISSTATIC_OFFSET))(this);
		}

		::System::Type* get_eventType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UNITYEVENTAUTOCALLBACKEVENT_GET_EVENTTYPE_OFFSET))(this);
		}

		::System::Reflection::FieldInfo* get_field()
		{
			return ((::System::Reflection::FieldInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UNITYEVENTAUTOCALLBACKEVENT_GET_FIELD_OFFSET))(this);
		}

		::System::Reflection::PropertyInfo* get_prop()
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UNITYEVENTAUTOCALLBACKEVENT_GET_PROP_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UNITYEVENTAUTOCALLBACKEVENT_GET_NAME_OFFSET))(this);
		}

		::ParadoxNotion::Serialization::ISerializedReflectedInfo* NodeCanvas_Framework_IReflectedWrapper_GetSerializedInfo()
		{
			return ((::ParadoxNotion::Serialization::ISerializedReflectedInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UNITYEVENTAUTOCALLBACKEVENT_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET))(this);
		}

		::System::Void SetEvent(::System::Reflection::MemberInfo* newMember, ::System::Object* instance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MemberInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UNITYEVENTAUTOCALLBACKEVENT_SETEVENT_OFFSET))(this, newMember, instance);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UNITYEVENTAUTOCALLBACKEVENT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UNITYEVENTAUTOCALLBACKEVENT_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UNITYEVENTAUTOCALLBACKEVENT_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void OnEventRaised(::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UNITYEVENTAUTOCALLBACKEVENT_ONEVENTRAISED_OFFSET))(this, args);
		}
	};
}
