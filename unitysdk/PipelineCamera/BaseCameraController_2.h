#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/ExternalValueTupleSlot.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T1, typename T2> class PriorityQueue_2; }
namespace PipelineCamera { class ICameraCommand; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

namespace PipelineCamera
{
	inline static constexpr unsigned int BaseCameraController_2_TypeDefinitionIndex = 36159;

	template <typename T1, typename T2>
	class BaseCameraController_2 : public ::System::Object
	{
	public:
		// static const ::System::UInt32 InstanceCounterMask = 0xFFFFFF; // 0x0
		// static const ::System::Int32 PostProcessing = -0x1; // 0x0
		::Foundation::PriorityQueue_2<::System::Object*, ::System::UInt32>* _activeInstances; // 0x0
		::System::Collections::Generic::HashSet_1<::System::UInt64>* _uniqueIds; // 0x0
		::System::Int32 _pipelineCount; // 0x0
		::Il2CppArray<::System::Int32>* _activeInstanceCounter; // 0x0
		::System::Nullable_1<::System::Object*> CurrentPipeline; // 0x0
		::System::UInt32 _instanceCounter; // 0x0
		::System::Collections::Concurrent::ConcurrentQueue_1<::PipelineCamera::ICameraCommand*>* _cameraCommandQueue; // 0x0
		::Il2CppArray<::PipelineCamera::ExternalValueTupleSlot>* _externalValueSlots; // 0x0
		::System::Int32 _externalValueTotalSize; // 0x0
		::System::Int32 _externalValueAlignment; // 0x0
		T1 PostProcessingPipeline; // 0x0
	};
}
