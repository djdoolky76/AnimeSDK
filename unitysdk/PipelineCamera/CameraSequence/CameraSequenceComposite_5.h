#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEventOperation.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceEventTrack; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { template <typename T> class ThreadLocal_1; }

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceComposite_5_TypeDefinitionIndex = 36465;

	template <typename T1, typename T2, typename T3, typename T4, typename T5>
	class CameraSequenceComposite_5
	{
	public:
		static ::System::Threading::ThreadLocal_1<::System::Collections::Generic::List_1<::PipelineCamera::CameraSequence::CameraSequenceEventOperation>*>** StaticGet_ThreadLocalEventOperationBuffer()
		{
			return (::System::Threading::ThreadLocal_1<::System::Collections::Generic::List_1<::PipelineCamera::CameraSequence::CameraSequenceEventOperation>*>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceComposite_5_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Single playRate; // 0x0
		::System::Boolean isLooping; // 0x0
		T1 baseTrack; // 0x0
		::System::Collections::Generic::List_1<T2>* additiveTracks; // 0x0
		::System::Collections::Generic::List_1<::PipelineCamera::CameraSequence::CameraSequenceEventTrack*>* eventTracks; // 0x0
		::System::Boolean makeContextDependent; // 0x0
	};
}
