#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define LFEBKBLPAOA_DKCKAPNPLFJ_GOJBJADHANG_OFFSET UNITYSDK_OFFSET(0x15DF3E90)
#define LFEBKBLPAOA_DKCKAPNPLFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15DF3E80)

inline static constexpr unsigned int LFEBKBLPAOA_DKCKAPNPLFJ_TypeDefinitionIndex = 48658;

class LFEBKBLPAOA_DKCKAPNPLFJ : public ::System::Object
{
public:
	::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>* PNPMMLNCDNK; // 0x10
	::UnityEngine::LayerMask FBNGKPGLADH; // 0x18
	::System::Single EGCKEINKEPM; // 0x1C
	::System::Single HKHIMAKFCGD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFEBKBLPAOA_DKCKAPNPLFJ__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* GOJBJADHANG()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFEBKBLPAOA_DKCKAPNPLFJ_GOJBJADHANG_OFFSET))(this);
	}
};
