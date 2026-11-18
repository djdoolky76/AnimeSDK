#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

class FHGHJDPHHEL;

#define GHEFDPOJMJF_OAPIBCMICPE_EFKKONJMGLF_OFFSET UNITYSDK_OFFSET(0x13D50B60)
#define GHEFDPOJMJF_OAPIBCMICPE__CTOR_OFFSET UNITYSDK_OFFSET(0x13D50B50)

inline static constexpr unsigned int GHEFDPOJMJF_OAPIBCMICPE_TypeDefinitionIndex = 89944;

class GHEFDPOJMJF_OAPIBCMICPE : public ::System::Object
{
public:
	::FHGHJDPHHEL* KHNALOKNMHF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHEFDPOJMJF_OAPIBCMICPE__CTOR_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData EFKKONJMGLF(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> AAOCANGHBDG)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + GHEFDPOJMJF_OAPIBCMICPE_EFKKONJMGLF_OFFSET))(this, AAOCANGHBDG);
	}
};
