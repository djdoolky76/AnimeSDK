#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define FBJEMLAFILA_HIMNNIJKNHM_GOJBJADHANG_OFFSET UNITYSDK_OFFSET(0x161743D0)
#define FBJEMLAFILA_HIMNNIJKNHM__CTOR_OFFSET UNITYSDK_OFFSET(0x161743C0)

inline static constexpr unsigned int FBJEMLAFILA_HIMNNIJKNHM_TypeDefinitionIndex = 65180;

class FBJEMLAFILA_HIMNNIJKNHM : public ::System::Object
{
public:
	::UnityEngine::LayerMask FBNGKPGLADH; // 0x10
	::System::Single HKHIMAKFCGD; // 0x14
	::System::Single EGCKEINKEPM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBJEMLAFILA_HIMNNIJKNHM__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* GOJBJADHANG()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBJEMLAFILA_HIMNNIJKNHM_GOJBJADHANG_OFFSET))(this);
	}
};
