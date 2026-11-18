#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define PIPELINECAMERA_METHOD__SAMPLECIRCLE_D__38_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F646BD0)
#define PIPELINECAMERA_METHOD__SAMPLECIRCLE_D__38_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE__SYSTEM_SINGLESIN_SYSTEM_SINGLECOS___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F646F30)
#define PIPELINECAMERA_METHOD__SAMPLECIRCLE_D__38_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR__SYSTEM_SINGLESIN_SYSTEM_SINGLECOS___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F646E80)
#define PIPELINECAMERA_METHOD__SAMPLECIRCLE_D__38_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F646FB0)
#define PIPELINECAMERA_METHOD__SAMPLECIRCLE_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F646EE0)
#define PIPELINECAMERA_METHOD__SAMPLECIRCLE_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1F646E90)
#define PIPELINECAMERA_METHOD__SAMPLECIRCLE_D__38_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F646BC0)
#define PIPELINECAMERA_METHOD__SAMPLECIRCLE_D__38__CTOR_OFFSET UNITYSDK_OFFSET(0x1F646BA0)

namespace PipelineCamera
{
	inline static constexpr unsigned int Method__SampleCircle_d__38_TypeDefinitionIndex = 36157;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38>
	class Method__SampleCircle_d__38 : public ::System::Object
	{
	public:
		::System::Int32 __3__segmentHint; // 0x10
		::System::Int32 __l__initialThreadId; // 0x14
		::System::Int32 _angle_5__2; // 0x18
		::System::Int32 __1__state; // 0x1C
		::System::ValueTuple_2<::System::Single, ::System::Single> __2__current; // 0x20
		::System::Int32 segmentHint; // 0x28
		::System::Int32 _step_5__3; // 0x2C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD__SAMPLECIRCLE_D__38__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD__SAMPLECIRCLE_D__38_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD__SAMPLECIRCLE_D__38_MOVENEXT_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Single, ::System::Single> System_Collections_Generic_IEnumerator__System_Singlesin_System_Singlecos___get_Current()
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD__SAMPLECIRCLE_D__38_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR__SYSTEM_SINGLESIN_SYSTEM_SINGLECOS___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD__SAMPLECIRCLE_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD__SAMPLECIRCLE_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* System_Collections_Generic_IEnumerable__System_Singlesin_System_Singlecos___GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::Single, ::System::Single>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD__SAMPLECIRCLE_D__38_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE__SYSTEM_SINGLESIN_SYSTEM_SINGLECOS___GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD__SAMPLECIRCLE_D__38_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
