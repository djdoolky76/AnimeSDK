#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera::SubModule { class OnCameraCollisionResolvedDelegate; }

namespace PipelineCamera::SubModule
{
	inline static constexpr unsigned int DefaultCollisionResolver_2_TypeDefinitionIndex = 36683;

	template <typename T1, typename T2>
	class DefaultCollisionResolver_2 : public ::System::Object
	{
	public:
		T1 _sightResolver; // 0x0
		T2 _volumeResolver; // 0x0
		::System::Int32 _priority; // 0x0
		::Foundation::Unreal::FName _debugName; // 0x0
		::PipelineCamera::WorldBasicCameraData _cachedOutput; // 0x0
		::PipelineCamera::SubModule::OnCameraCollisionResolvedDelegate* OnResolved; // 0x0
	};
}
