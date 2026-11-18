#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/Blender/DefaultBuilderCommon_2.h"
#include "unitysdk/PipelineCamera/InterpCurveMode.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

namespace PipelineCamera::Blender
{
	inline static constexpr unsigned int InterpCurveBlenderBuilder_2_TypeDefinitionIndex = 36651;

	template <typename T1, typename T2>
	class InterpCurveBlenderBuilder_2
	{
	public:
		::PipelineCamera::Blender::DefaultBuilderCommon_2<T1, T2> Common; // 0x0
		::PipelineCamera::InterpCurveMode CurveMode; // 0x0
		::System::Collections::Generic::IList_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* Keys; // 0x0
		::System::Nullable_1<::System::Single> Tension; // 0x0
	};
}
