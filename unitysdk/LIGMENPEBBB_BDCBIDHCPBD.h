#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NBGELMBGLKD.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define LIGMENPEBBB_BDCBIDHCPBD_GOJBJADHANG_OFFSET UNITYSDK_OFFSET(0xD4305C0)
#define LIGMENPEBBB_BDCBIDHCPBD__CTOR_OFFSET UNITYSDK_OFFSET(0xD4305B0)

inline static constexpr unsigned int LIGMENPEBBB_BDCBIDHCPBD_TypeDefinitionIndex = 50627;

class LIGMENPEBBB_BDCBIDHCPBD : public ::System::Object
{
public:
	::System::Single EGCKEINKEPM; // 0x10
	::NBGELMBGLKD MOLDMBLKEHK; // 0x14
	::System::Single HKHIMAKFCGD; // 0x18
	::System::Single KMOAACMAOKO; // 0x1C
	::UnityEngine::LayerMask FBNGKPGLADH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGMENPEBBB_BDCBIDHCPBD__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* GOJBJADHANG()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGMENPEBBB_BDCBIDHCPBD_GOJBJADHANG_OFFSET))(this);
	}
};
