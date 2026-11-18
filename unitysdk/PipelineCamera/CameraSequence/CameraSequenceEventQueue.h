#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEnvironmentPath.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEventOperation.h"

namespace PipelineCamera { template <typename T> class ReferenceDoubleBuffer_1; }
namespace PipelineCamera::CameraSequence { class CameraSequenceCollectionInstance; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace PipelineCamera::CameraSequence { class CameraSequenceEvent; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE_ADDNOTIFYTRIGGEREVENT_OFFSET UNITYSDK_OFFSET(0x1C789370)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE_ADDSTATEBEGINEVENT_OFFSET UNITYSDK_OFFSET(0x1C789230)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE_ADDSTATEENDEVENT_OFFSET UNITYSDK_OFFSET(0x1C7892D0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE_ADDSTATETICKEVENT_OFFSET UNITYSDK_OFFSET(0x1C789410)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE_CONSUMEACTIVESTATES_OFFSET UNITYSDK_OFFSET(0x1C786170)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE_HANDLEEXPIREOPERATION_OFFSET UNITYSDK_OFFSET(0x1C788D00)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE_HANDLETRIGGEROPERATION_OFFSET UNITYSDK_OFFSET(0x1C788E80)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C788A50)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C784740)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C788860)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceEventQueue_TypeDefinitionIndex = 36497;

	class CameraSequenceEventQueue : public ::System::Object
	{
	public:
		::PipelineCamera::ReferenceDoubleBuffer_1<::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath, ::PipelineCamera::CameraSequence::CameraSequenceEvent*>*>* _activeStateEvents; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* _buffer; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* _operation; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE__CTOR_OFFSET))(this);
		}

		::System::Void Update(::System::Collections::Generic::List_1<::PipelineCamera::CameraSequence::CameraSequenceEventOperation>* operations, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::PipelineCamera::CameraSequence::CameraSequenceEventOperation>*, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE_UPDATE_OFFSET))(this, operations, deltaTime);
		}

		::System::Void Invoke(::PipelineCamera::CameraSequence::CameraSequenceContext* context, ::PipelineCamera::CameraSequence::CameraSequenceCollectionInstance* instance)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*, ::PipelineCamera::CameraSequence::CameraSequenceCollectionInstance*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE_INVOKE_OFFSET))(this, context, instance);
		}

		::System::Action* ConsumeActiveStates(::PipelineCamera::CameraSequence::CameraSequenceContext* context, ::PipelineCamera::CameraSequence::CameraSequenceCollectionInstance* instance)
		{
			return ((::System::Action*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*, ::PipelineCamera::CameraSequence::CameraSequenceCollectionInstance*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE_CONSUMEACTIVESTATES_OFFSET))(this, context, instance);
		}

		::System::Void HandleExpireOperation(::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath workspace, ::PipelineCamera::CameraSequence::CameraSequenceEvent* sequenceEvent, ::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath, ::PipelineCamera::CameraSequence::CameraSequenceEvent*>* newActiveStates)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath, ::PipelineCamera::CameraSequence::CameraSequenceEvent*, ::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath, ::PipelineCamera::CameraSequence::CameraSequenceEvent*>*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE_HANDLEEXPIREOPERATION_OFFSET))(this, workspace, sequenceEvent, newActiveStates);
		}

		::System::Void HandleTriggerOperation(::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath workspace, ::PipelineCamera::CameraSequence::CameraSequenceEvent* evt, ::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath, ::PipelineCamera::CameraSequence::CameraSequenceEvent*>* activeStates, ::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath, ::PipelineCamera::CameraSequence::CameraSequenceEvent*>* newActiveStates)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath, ::PipelineCamera::CameraSequence::CameraSequenceEvent*, ::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath, ::PipelineCamera::CameraSequence::CameraSequenceEvent*>*, ::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath, ::PipelineCamera::CameraSequence::CameraSequenceEvent*>*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE_HANDLETRIGGEROPERATION_OFFSET))(this, workspace, evt, activeStates, newActiveStates);
		}

		static ::System::Void AddStateBeginEvent(::System::Collections::Generic::List_1<::System::Object*>* buffer, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath& workspace, ::PipelineCamera::CameraSequence::CameraSequenceEvent* stateEvent)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Object*>*, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath&, ::PipelineCamera::CameraSequence::CameraSequenceEvent*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE_ADDSTATEBEGINEVENT_OFFSET))(buffer, workspace, stateEvent);
		}

		static ::System::Void AddStateEndEvent(::System::Collections::Generic::List_1<::System::Object*>* buffer, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath& workspace, ::PipelineCamera::CameraSequence::CameraSequenceEvent* stateEvent)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Object*>*, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath&, ::PipelineCamera::CameraSequence::CameraSequenceEvent*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE_ADDSTATEENDEVENT_OFFSET))(buffer, workspace, stateEvent);
		}

		static ::System::Void AddNotifyTriggerEvent(::System::Collections::Generic::List_1<::System::Object*>* buffer, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath& workspace, ::PipelineCamera::CameraSequence::CameraSequenceEvent* notifyEvent)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Object*>*, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath&, ::PipelineCamera::CameraSequence::CameraSequenceEvent*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE_ADDNOTIFYTRIGGEREVENT_OFFSET))(buffer, workspace, notifyEvent);
		}

		static ::System::Void AddStateTickEvent(::System::Collections::Generic::List_1<::System::Object*>* buffer, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath& workspace, ::PipelineCamera::CameraSequence::CameraSequenceEvent* stateEvent, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Object*>*, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath&, ::PipelineCamera::CameraSequence::CameraSequenceEvent*, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE_ADDSTATETICKEVENT_OFFSET))(buffer, workspace, stateEvent, deltaTime);
		}
	};
}
