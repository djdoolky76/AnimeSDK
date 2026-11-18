#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENT_CLEAR_OFFSET UNITYSDK_OFFSET(0x1EB4E010)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB4E0B0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceEnvironment_TypeDefinitionIndex = 36607;

	class CameraSequenceEnvironment : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Object*>* _data; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENT__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENT_CLEAR_OFFSET))(this);
		}
	};
}
