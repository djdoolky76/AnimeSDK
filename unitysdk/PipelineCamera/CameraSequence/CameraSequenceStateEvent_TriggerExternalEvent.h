#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceNotifyStateEvent.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_TRIGGEREXTERNALEVENT_BUILDDATAPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x1F23E2A0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_TRIGGEREXTERNALEVENT_COLLECTVARIABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1F23E310)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_TRIGGEREXTERNALEVENT_FETCH_ONNOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0x1F23E470)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_TRIGGEREXTERNALEVENT_FETCH_ONNOTIFYEND_OFFSET UNITYSDK_OFFSET(0x1F23E5D0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_TRIGGEREXTERNALEVENT_FETCH_ONNOTIFYTICK_OFFSET UNITYSDK_OFFSET(0x1F23E520)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_TRIGGEREXTERNALEVENT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x1F23DEF0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_TRIGGEREXTERNALEVENT_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1F23DF30)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_TRIGGEREXTERNALEVENT_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0x1F23DF40)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_TRIGGEREXTERNALEVENT_RECEIVENOTIFYEND_OFFSET UNITYSDK_OFFSET(0x1F23E1A0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_TRIGGEREXTERNALEVENT_RECEIVENOTIFYTICK_OFFSET UNITYSDK_OFFSET(0x1F23E040)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_TRIGGEREXTERNALEVENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F23E6D0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_TRIGGEREXTERNALEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F23E680)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceStateEvent_TriggerExternalEvent_TypeDefinitionIndex = 36551;

	class CameraSequenceStateEvent_TriggerExternalEvent : public ::PipelineCamera::CameraSequence::CameraSequenceNotifyStateEvent
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_OnNotifyBegin()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceStateEvent_TriggerExternalEvent_TypeDefinitionIndex)->GetStaticField(0x90F0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_OnNotifyEnd()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceStateEvent_TriggerExternalEvent_TypeDefinitionIndex)->GetStaticField(0x90F8);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_OnNotifyTick()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceStateEvent_TriggerExternalEvent_TypeDefinitionIndex)->GetStaticField(0x9100);
		}
		::System::Action* OnNotifyBegin; // 0x50
		::System::Action_1<::System::Single>* OnNotifyTick; // 0x58
		::System::Action* OnNotifyEnd; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_TRIGGEREXTERNALEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_TRIGGEREXTERNALEVENT__CCTOR_OFFSET))();
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_TRIGGEREXTERNALEVENT_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_TRIGGEREXTERNALEVENT_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_TRIGGEREXTERNALEVENT_RECEIVENOTIFYBEGIN_OFFSET))(this, context);
		}

		::System::Void ReceiveNotifyTick(::PipelineCamera::CameraSequence::CameraSequenceContext*& context, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_TRIGGEREXTERNALEVENT_RECEIVENOTIFYTICK_OFFSET))(this, context, deltaTime);
		}

		::System::Void ReceiveNotifyEnd(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_TRIGGEREXTERNALEVENT_RECEIVENOTIFYEND_OFFSET))(this, context);
		}

		::System::Void BuildDataPathInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_TRIGGEREXTERNALEVENT_BUILDDATAPATHINTERNAL_OFFSET))(this);
		}

		::System::Void CollectVariableInternal(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_TRIGGEREXTERNALEVENT_COLLECTVARIABLEINTERNAL_OFFSET))(this, collector);
		}

		::System::Action* fetch_OnNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Action*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_TRIGGEREXTERNALEVENT_FETCH_ONNOTIFYBEGIN_OFFSET))(this, context);
		}

		::System::Action_1<::System::Single>* fetch_OnNotifyTick(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Action_1<::System::Single>*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_TRIGGEREXTERNALEVENT_FETCH_ONNOTIFYTICK_OFFSET))(this, context);
		}

		::System::Action* fetch_OnNotifyEnd(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Action*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_TRIGGEREXTERNALEVENT_FETCH_ONNOTIFYEND_OFFSET))(this, context);
		}
	};
}
