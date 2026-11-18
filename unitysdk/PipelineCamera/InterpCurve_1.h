#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/Inline4List_1.h"
#include "unitysdk/PipelineCamera/InterpCurveMode.h"
#include "unitysdk/PipelineCamera/InterpCurvePoint_1.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera { template <typename T> class IMathOperation_1; }
namespace System { class Object; }

namespace PipelineCamera
{
	inline static constexpr unsigned int InterpCurve_1_TypeDefinitionIndex = 36346;

	template <typename T>
	struct alignas(8) InterpCurve_1
	{
		static ::Il2CppArray<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>>** StaticGet__indexBuffer()
		{
			return (::Il2CppArray<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(InterpCurve_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Object** StaticGet_PointComparer()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(InterpCurve_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::PipelineCamera::Inline4List_1<::PipelineCamera::InterpCurvePoint_1<T>> _points; // 0x0
		::System::Boolean _isLooped; // 0x0
		::System::Single _loopKeyOffset; // 0x0
		::PipelineCamera::IMathOperation_1<T>* _operation; // 0x0
		::PipelineCamera::InterpCurveMode _interpMode; // 0x0
	};
}
