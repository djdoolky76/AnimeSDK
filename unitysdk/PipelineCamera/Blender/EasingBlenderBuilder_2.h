#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/Blender/DefaultBuilderCommon_2.h"
#include "unitysdk/PipelineCamera/EasingFunc.h"
#include "unitysdk/System/Nullable_1.h"

namespace PipelineCamera::Blender
{
	inline static constexpr unsigned int EasingBlenderBuilder_2_TypeDefinitionIndex = 36650;

	template <typename T1, typename T2>
	class EasingBlenderBuilder_2
	{
	public:
		::PipelineCamera::Blender::DefaultBuilderCommon_2<T1, T2> Common; // 0x0
		::PipelineCamera::EasingFunc EasingType; // 0x0
		::System::Nullable_1<::System::Single> MetaParam; // 0x0
	};
}
