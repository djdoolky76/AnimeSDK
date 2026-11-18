#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceCollectionPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PIPELINECAMERA_ODINNEWINITIALIZER_INITODINNEW_OFFSET UNITYSDK_OFFSET(0x1F241EF0)
#define PIPELINECAMERA_ODINNEWINITIALIZER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2420A0)
#define PIPELINECAMERA_ODINNEWINITIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F242090)

inline static constexpr unsigned int PipelineCamera_OdinNewInitializer_TypeDefinitionIndex = 36136;

class PipelineCamera_OdinNewInitializer : public ::System::Object
{
public:
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceCollectionPath, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath>*>** StaticGet_CachedSerializer0()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceCollectionPath, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath>*>**)Il2CppClass::FromTypeDefinitionIndex(PipelineCamera_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x2B900);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_ODINNEWINITIALIZER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_ODINNEWINITIALIZER__CCTOR_OFFSET))();
	}

	static ::System::Void InitOdinNew()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_ODINNEWINITIALIZER_INITODINNEW_OFFSET))();
	}
};
