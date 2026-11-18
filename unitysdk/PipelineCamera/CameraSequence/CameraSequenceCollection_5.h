#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceCollectionPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEventOperation.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceBlendSetting; }
namespace PipelineCamera::CameraSequence { class CameraSequenceEventTrack; }
namespace PipelineCamera::CameraSequence { class CameraSequenceSection; }
namespace PipelineCamera::CameraSequence { class CameraSequenceSectionGraph; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceCollection_5_TypeDefinitionIndex = 36444;

	template <typename T1, typename T2, typename T3, typename T4, typename T5>
	class CameraSequenceCollection_5 : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		static ::System::Comparison_1<::PipelineCamera::CameraSequence::CameraSequenceEventOperation>** StaticGet_EventComparison()
		{
			return (::System::Comparison_1<::PipelineCamera::CameraSequence::CameraSequenceEventOperation>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceCollection_5_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		T1 baseTrack; // 0x0
		::System::Collections::Generic::List_1<T2>* additiveTracks; // 0x0
		::System::Collections::Generic::List_1<::PipelineCamera::CameraSequence::CameraSequenceEventTrack*>* eventTracks; // 0x0
		::System::Collections::Generic::List_1<::PipelineCamera::CameraSequence::CameraSequenceSection*>* sections; // 0x0
		::System::Collections::Generic::List_1<::PipelineCamera::CameraSequence::CameraSequenceSectionGraph*>* overriddenGraph; // 0x0
		::System::Single rateScale; // 0x0
		::PipelineCamera::CameraSequence::CameraSequenceBlendSetting* blendIn; // 0x0
		::PipelineCamera::CameraSequence::CameraSequenceBlendSetting* blendOut; // 0x0
		::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceCollectionPath, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath>* externalBinding; // 0x0
		::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceCollectionPath, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath>* dependentBinding; // 0x0
	};
}
