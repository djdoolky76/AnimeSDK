#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define GHEFDPOJMJF_BKCDNMMCBLF_GOJBJADHANG_OFFSET UNITYSDK_OFFSET(0x15B1CED0)
#define GHEFDPOJMJF_BKCDNMMCBLF__CTOR_OFFSET UNITYSDK_OFFSET(0x15B1CEC0)

inline static constexpr unsigned int GHEFDPOJMJF_BKCDNMMCBLF_TypeDefinitionIndex = 89947;

class GHEFDPOJMJF_BKCDNMMCBLF : public ::System::Object
{
public:
	::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>* PNPMMLNCDNK; // 0x10
	::System::Single HKHIMAKFCGD; // 0x18
	::UnityEngine::LayerMask FBNGKPGLADH; // 0x1C
	::System::Single EGCKEINKEPM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHEFDPOJMJF_BKCDNMMCBLF__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* GOJBJADHANG()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHEFDPOJMJF_BKCDNMMCBLF_GOJBJADHANG_OFFSET))(this);
	}
};
