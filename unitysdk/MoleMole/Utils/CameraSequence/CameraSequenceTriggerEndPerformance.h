#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceNotifyStateEvent.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCETRIGGERENDPERFORMANCE_BUILDDATAPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x1286F620)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCETRIGGERENDPERFORMANCE_COLLECTVARIABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1286F670)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCETRIGGERENDPERFORMANCE_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x1286F5E0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCETRIGGERENDPERFORMANCE_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1286F660)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCETRIGGERENDPERFORMANCE_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0x1286F6E0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCETRIGGERENDPERFORMANCE_RECEIVENOTIFYEND_OFFSET UNITYSDK_OFFSET(0x1286F910)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCETRIGGERENDPERFORMANCE_RECEIVENOTIFYTICK_OFFSET UNITYSDK_OFFSET(0x1286F8B0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCETRIGGERENDPERFORMANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1286F960)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceTriggerEndPerformance_TypeDefinitionIndex = 86854;

	class CameraSequenceTriggerEndPerformance : public ::PipelineCamera::CameraSequence::CameraSequenceNotifyStateEvent
	{
	public:
		::System::Boolean IsDisable; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCETRIGGERENDPERFORMANCE__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCETRIGGERENDPERFORMANCE_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Void BuildDataPathInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCETRIGGERENDPERFORMANCE_BUILDDATAPATHINTERNAL_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCETRIGGERENDPERFORMANCE_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void CollectVariableInternal(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCETRIGGERENDPERFORMANCE_COLLECTVARIABLEINTERNAL_OFFSET))(this, collector);
		}

		::System::Void ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCETRIGGERENDPERFORMANCE_RECEIVENOTIFYBEGIN_OFFSET))(this, context);
		}

		::System::Void ReceiveNotifyTick(::PipelineCamera::CameraSequence::CameraSequenceContext*& context, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCETRIGGERENDPERFORMANCE_RECEIVENOTIFYTICK_OFFSET))(this, context, deltaTime);
		}

		::System::Void ReceiveNotifyEnd(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCETRIGGERENDPERFORMANCE_RECEIVENOTIFYEND_OFFSET))(this, context);
		}
	};
}
