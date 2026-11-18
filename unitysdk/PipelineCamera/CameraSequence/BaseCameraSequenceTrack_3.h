#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int BaseCameraSequenceTrack_3_TypeDefinitionIndex = 36530;

	template <typename T1, typename T2, typename T3>
	class BaseCameraSequenceTrack_3 : public ::System::Object
	{
	public:
		::Il2CppArray<T1>* segments; // 0x0
	};
}
