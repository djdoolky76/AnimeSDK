#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { class ITaskSystem; }
namespace NodeCanvas::Framework::Internal { class TaskAgentParameter; }
namespace ParadoxNotion::Services { class EventRouter; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Coroutine; }

#define NODECANVAS_FRAMEWORK_TASK_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1EBB0560)
#define NODECANVAS_FRAMEWORK_TASK_DUPLICATE_OFFSET UNITYSDK_OFFSET(0x1EBB2B10)
#define NODECANVAS_FRAMEWORK_TASK_ERROR_OFFSET UNITYSDK_OFFSET(0x1EBB4440)
#define NODECANVAS_FRAMEWORK_TASK_GETHARDERROR_OFFSET UNITYSDK_OFFSET(0x1EBB2D20)
#define NODECANVAS_FRAMEWORK_TASK_GETWARNINGORERROR_OFFSET UNITYSDK_OFFSET(0x1EBB4CA0)
#define NODECANVAS_FRAMEWORK_TASK_GET_AGENTINFO_OFFSET UNITYSDK_OFFSET(0x1EBB36D0)
#define NODECANVAS_FRAMEWORK_TASK_GET_AGENTISOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1EBB36A0)
#define NODECANVAS_FRAMEWORK_TASK_GET_AGENTPARAMETERNAME_OFFSET UNITYSDK_OFFSET(0x1EBB3720)
#define NODECANVAS_FRAMEWORK_TASK_GET_AGENTTYPE_OFFSET UNITYSDK_OFFSET(0x1EBB36C0)
#define NODECANVAS_FRAMEWORK_TASK_GET_AGENT_OFFSET UNITYSDK_OFFSET(0x1EBB3A10)
#define NODECANVAS_FRAMEWORK_TASK_GET_BLACKBOARD_OFFSET UNITYSDK_OFFSET(0x1EBB3930)
#define NODECANVAS_FRAMEWORK_TASK_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1EBB34D0)
#define NODECANVAS_FRAMEWORK_TASK_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1EBB36B0)
#define NODECANVAS_FRAMEWORK_TASK_GET_ISUSERENABLED_OFFSET UNITYSDK_OFFSET(0x1EBB3330)
#define NODECANVAS_FRAMEWORK_TASK_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1EBB33E0)
#define NODECANVAS_FRAMEWORK_TASK_GET_OBSOLETE_OFFSET UNITYSDK_OFFSET(0x1EBB3350)
#define NODECANVAS_FRAMEWORK_TASK_GET_OWNERSYSTEMAGENT_OFFSET UNITYSDK_OFFSET(0x1EBB3090)
#define NODECANVAS_FRAMEWORK_TASK_GET_OWNERSYSTEMBLACKBOARD_OFFSET UNITYSDK_OFFSET(0x1EBB3170)
#define NODECANVAS_FRAMEWORK_TASK_GET_OWNERSYSTEMELAPSEDTIME_OFFSET UNITYSDK_OFFSET(0x1EBB3250)
#define NODECANVAS_FRAMEWORK_TASK_GET_OWNERSYSTEM_OFFSET UNITYSDK_OFFSET(0x1EBB3070)
#define NODECANVAS_FRAMEWORK_TASK_GET_ROUTER_OFFSET UNITYSDK_OFFSET(0x1EBB3D00)
#define NODECANVAS_FRAMEWORK_TASK_GET_SUMMARYINFO_OFFSET UNITYSDK_OFFSET(0x1EBB3560)
#define NODECANVAS_FRAMEWORK_TASK_INITIALIZEFIELDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1EBB4500)
#define NODECANVAS_FRAMEWORK_TASK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1EBB41B0)
#define NODECANVAS_FRAMEWORK_TASK_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1EBB5470)
#define NODECANVAS_FRAMEWORK_TASK_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1EBB54A0)
#define NODECANVAS_FRAMEWORK_TASK_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1EBB5490)
#define NODECANVAS_FRAMEWORK_TASK_ONINIT_OFFSET UNITYSDK_OFFSET(0x1EBB5460)
#define NODECANVAS_FRAMEWORK_TASK_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1EBB5480)
#define NODECANVAS_FRAMEWORK_TASK_SENDEVENT_OFFSET UNITYSDK_OFFSET(0x1EBB4BB0)
#define NODECANVAS_FRAMEWORK_TASK_SETOWNERSYSTEM_OFFSET UNITYSDK_OFFSET(0x1EBB0B30)
#define NODECANVAS_FRAMEWORK_TASK_SET_AGENTISOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1EBB3740)
#define NODECANVAS_FRAMEWORK_TASK_SET_ISUSERENABLED_OFFSET UNITYSDK_OFFSET(0x1EBB3340)
#define NODECANVAS_FRAMEWORK_TASK_SET_OFFSET UNITYSDK_OFFSET(0x1EBB3E60)
#define NODECANVAS_FRAMEWORK_TASK_SET_OWNERSYSTEM_OFFSET UNITYSDK_OFFSET(0x1EBB3080)
#define NODECANVAS_FRAMEWORK_TASK_STARTCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1EBB4B50)
#define NODECANVAS_FRAMEWORK_TASK_STOPCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1EBB4B80)
#define NODECANVAS_FRAMEWORK_TASK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EBB54B0)
#define NODECANVAS_FRAMEWORK_TASK_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EBB2AF0)
#define NODECANVAS_FRAMEWORK_TASK_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EBB2A40)
#define NODECANVAS_FRAMEWORK_TASK_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1EBB2580)
#define NODECANVAS_FRAMEWORK_TASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBB2B00)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int Task_TypeDefinitionIndex = 29320;

	class Task : public ::System::Object
	{
	public:
		::ParadoxNotion::Services::EventRouter* _eventRouter; // 0x10
		::UnityEngine::Component* _currentAgent; // 0x18
		::System::String* _obsoleteInfo; // 0x20
		::NodeCanvas::Framework::ITaskSystem* _ownerSystem; // 0x28
		::System::String* _taskName; // 0x30
		::System::String* _taskDescription; // 0x38
		::NodeCanvas::Framework::Internal::TaskAgentParameter* _agentParameter; // 0x40
		::System::Boolean _isInitSuccess; // 0x48
		::System::Boolean _isRuntimeActive; // 0x49
		::System::Boolean _isUserDisabled; // 0x4A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK__CTOR_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		static ::NodeCanvas::Framework::Task* Create_1(::System::Type* type, ::NodeCanvas::Framework::ITaskSystem* newOwnerSystem)
		{
			return ((::NodeCanvas::Framework::Task*(*)(::System::Type*, ::NodeCanvas::Framework::ITaskSystem*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_CREATE_1_OFFSET))(type, newOwnerSystem);
		}

		::NodeCanvas::Framework::Task* Duplicate(::NodeCanvas::Framework::ITaskSystem* newOwnerSystem)
		{
			return ((::NodeCanvas::Framework::Task*(*)(::PVOID, ::NodeCanvas::Framework::ITaskSystem*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_DUPLICATE_OFFSET))(this, newOwnerSystem);
		}

		::System::Void Validate(::NodeCanvas::Framework::ITaskSystem* ownerSystem)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::ITaskSystem*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_VALIDATE_OFFSET))(this, ownerSystem);
		}

		::System::Void SetOwnerSystem(::NodeCanvas::Framework::ITaskSystem* newOwnerSystem)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::ITaskSystem*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_SETOWNERSYSTEM_OFFSET))(this, newOwnerSystem);
		}

		::NodeCanvas::Framework::ITaskSystem* get_ownerSystem()
		{
			return ((::NodeCanvas::Framework::ITaskSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_GET_OWNERSYSTEM_OFFSET))(this);
		}

		::System::Void set_ownerSystem(::NodeCanvas::Framework::ITaskSystem* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::ITaskSystem*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_SET_OWNERSYSTEM_OFFSET))(this, value);
		}

		::UnityEngine::Component* get_ownerSystemAgent()
		{
			return ((::UnityEngine::Component*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_GET_OWNERSYSTEMAGENT_OFFSET))(this);
		}

		::NodeCanvas::Framework::IBlackboard* get_ownerSystemBlackboard()
		{
			return ((::NodeCanvas::Framework::IBlackboard*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_GET_OWNERSYSTEMBLACKBOARD_OFFSET))(this);
		}

		::System::Single get_ownerSystemElapsedTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_GET_OWNERSYSTEMELAPSEDTIME_OFFSET))(this);
		}

		::System::Boolean get_isUserEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_GET_ISUSERENABLED_OFFSET))(this);
		}

		::System::Void set_isUserEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_SET_ISUSERENABLED_OFFSET))(this, value);
		}

		::System::String* get_obsolete()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_GET_OBSOLETE_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_GET_NAME_OFFSET))(this);
		}

		::System::String* get_description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::String* get_summaryInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_GET_SUMMARYINFO_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_GET_INFO_OFFSET))(this);
		}

		::System::Type* get_agentType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_GET_AGENTTYPE_OFFSET))(this);
		}

		::System::String* get_agentInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_GET_AGENTINFO_OFFSET))(this);
		}

		::System::String* get_agentParameterName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_GET_AGENTPARAMETERNAME_OFFSET))(this);
		}

		::System::Boolean get_agentIsOverride()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_GET_AGENTISOVERRIDE_OFFSET))(this);
		}

		::System::Void set_agentIsOverride(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_SET_AGENTISOVERRIDE_OFFSET))(this, value);
		}

		::UnityEngine::Component* get_agent()
		{
			return ((::UnityEngine::Component*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_GET_AGENT_OFFSET))(this);
		}

		::NodeCanvas::Framework::IBlackboard* get_blackboard()
		{
			return ((::NodeCanvas::Framework::IBlackboard*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_GET_BLACKBOARD_OFFSET))(this);
		}

		::ParadoxNotion::Services::EventRouter* get_router()
		{
			return ((::ParadoxNotion::Services::EventRouter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_GET_ROUTER_OFFSET))(this);
		}

		::System::Boolean Set(::UnityEngine::Component* newAgent, ::NodeCanvas::Framework::IBlackboard* newBB)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_SET_OFFSET))(this, newAgent, newBB);
		}

		::System::Boolean Initialize(::UnityEngine::Component* newAgent)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_INITIALIZE_OFFSET))(this, newAgent);
		}

		::System::Boolean InitializeFieldAttributes(::UnityEngine::Component* newAgent)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_INITIALIZEFIELDATTRIBUTES_OFFSET))(this, newAgent);
		}

		::System::Boolean Error(::System::String* error, ::System::String* tag)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_ERROR_OFFSET))(this, error, tag);
		}

		::UnityEngine::Coroutine* StartCoroutine(::System::Collections::IEnumerator* routine)
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_STARTCOROUTINE_OFFSET))(this, routine);
		}

		::System::Void StopCoroutine(::UnityEngine::Coroutine* routine)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Coroutine*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_STOPCOROUTINE_OFFSET))(this, routine);
		}

		::System::Void SendEvent(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_SENDEVENT_OFFSET))(this, name);
		}

		::System::String* GetWarningOrError()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_GETWARNINGORERROR_OFFSET))(this);
		}

		::System::String* GetHardError()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_GETHARDERROR_OFFSET))(this);
		}

		::System::String* OnInit()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_ONINIT_OFFSET))(this);
		}

		::System::Void OnCreate(::NodeCanvas::Framework::ITaskSystem* ownerSystem)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::ITaskSystem*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_ONCREATE_OFFSET))(this, ownerSystem);
		}

		::System::Void OnValidate(::NodeCanvas::Framework::ITaskSystem* ownerSystem)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::ITaskSystem*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_ONVALIDATE_OFFSET))(this, ownerSystem);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_ONDRAWGIZMOS_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_TOSTRING_OFFSET))(this);
		}
	};
}
