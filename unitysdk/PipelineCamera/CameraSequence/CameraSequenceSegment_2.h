#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceTimeTransform.h"
#include "unitysdk/PipelineCamera/SerializableGuid.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class FieldInfo; }
namespace System::Threading { template <typename T> class ThreadLocal_1; }

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceSegment_2_TypeDefinitionIndex = 36527;

	template <typename T1, typename T2>
	class CameraSequenceSegment_2 : public ::System::Object
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet_disableSequenceName()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceSegment_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Reflection::FieldInfo** StaticGet_disableSequenceFieldInfo()
		{
			return (::System::Reflection::FieldInfo**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceSegment_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Threading::ThreadLocal_1<::Il2CppArray<::System::Object*>*>** StaticGet_IntervalBuffer()
		{
			return (::System::Threading::ThreadLocal_1<::Il2CppArray<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceSegment_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Threading::ThreadLocal_1<::Il2CppArray<::PipelineCamera::CameraSequence::CameraSequenceTimeTransform>*>** StaticGet_TimeTransformBuffer()
		{
			return (::System::Threading::ThreadLocal_1<::Il2CppArray<::PipelineCamera::CameraSequence::CameraSequenceTimeTransform>*>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceSegment_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		// static const ::System::Int32 MaxLoopIntervalCount = 0x10; // 0x0
		::System::Single startPos; // 0x0
		::System::Single startTime; // 0x0
		::System::Single endTime; // 0x0
		::System::Single playRate; // 0x0
		::System::Int32 loopingCount; // 0x0
		T1 cameraSequence; // 0x0
		::System::Boolean disableSequenceContextDependent; // 0x0
		::System::Boolean disableSequence; // 0x0
		::PipelineCamera::SerializableGuid segmentId; // 0x0
	};
}
