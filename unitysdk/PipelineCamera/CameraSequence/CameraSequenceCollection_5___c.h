#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceEvent; }
namespace PipelineCamera::CameraSequence { class CameraSequenceEventTrack; }
namespace PipelineCamera::CameraSequence { class CameraSequenceSection; }
namespace PipelineCamera::CameraSequence { class CameraSequenceSectionGraph; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceCollection_5___c_TypeDefinitionIndex = 36453;

	template <typename T1, typename T2, typename T3, typename T4, typename T5>
	class CameraSequenceCollection_5___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceCollection_5___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<T1, ::System::Collections::Generic::IEnumerable_1<T2>*>** StaticGet___9__20_0()
		{
			return (::System::Func_2<T1, ::System::Collections::Generic::IEnumerable_1<T2>*>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceCollection_5___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::PipelineCamera::CameraSequence::CameraSequenceEventTrack*, ::System::Collections::Generic::IEnumerable_1<::PipelineCamera::CameraSequence::CameraSequenceEvent*>*>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::PipelineCamera::CameraSequence::CameraSequenceEventTrack*, ::System::Collections::Generic::IEnumerable_1<::PipelineCamera::CameraSequence::CameraSequenceEvent*>*>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceCollection_5___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::PipelineCamera::CameraSequence::CameraSequenceSectionGraph*, ::System::UInt64>** StaticGet___9__30_0()
		{
			return (::System::Func_2<::PipelineCamera::CameraSequence::CameraSequenceSectionGraph*, ::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceCollection_5___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Comparison_1<::PipelineCamera::CameraSequence::CameraSequenceSection*>** StaticGet___9__31_0()
		{
			return (::System::Comparison_1<::PipelineCamera::CameraSequence::CameraSequenceSection*>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceCollection_5___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::PipelineCamera::CameraSequence::CameraSequenceSection*, ::System::UInt64>** StaticGet___9__35_0()
		{
			return (::System::Func_2<::PipelineCamera::CameraSequence::CameraSequenceSection*, ::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceCollection_5___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
