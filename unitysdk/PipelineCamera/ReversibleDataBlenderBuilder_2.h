#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera { class ICameraDataBlender; }
namespace PipelineCamera { template <typename T> class CameraDataBlenderBuilder_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

namespace PipelineCamera
{
	inline static constexpr unsigned int ReversibleDataBlenderBuilder_2_TypeDefinitionIndex = 36243;

	template <typename T1, typename T2>
	class ReversibleDataBlenderBuilder_2
	{
	public:
		T1 ReverseKey; // 0x0
		::PipelineCamera::CameraDataBlenderBuilder_1<T2>* FallbackBuilder; // 0x0
		T2 Priority; // 0x0
		::System::Action_1<::PipelineCamera::ICameraDataBlender*>* OnConstructAction; // 0x0
		::System::String* DebugName; // 0x0
	};
}
