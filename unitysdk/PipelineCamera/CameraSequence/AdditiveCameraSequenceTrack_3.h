#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int AdditiveCameraSequenceTrack_3_TypeDefinitionIndex = 36531;

	template <typename T1, typename T2, typename T3>
	class AdditiveCameraSequenceTrack_3 : public ::System::Object
	{
	public:
		::System::Single startOffset; // 0x0
		::Il2CppArray<T1>* segments; // 0x0
	};
}
