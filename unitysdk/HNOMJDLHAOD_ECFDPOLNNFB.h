#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

class HNOMJDLHAOD_DGIMEJFAIPO;

#define HNOMJDLHAOD_ECFDPOLNNFB_PIPLEJHMBPN_OFFSET UNITYSDK_OFFSET(0x15B6F500)
#define HNOMJDLHAOD_ECFDPOLNNFB__CTOR_OFFSET UNITYSDK_OFFSET(0x15B6F4F0)

inline static constexpr unsigned int HNOMJDLHAOD_ECFDPOLNNFB_TypeDefinitionIndex = 48154;

class HNOMJDLHAOD_ECFDPOLNNFB : public ::System::Object
{
public:
	::HNOMJDLHAOD_DGIMEJFAIPO* FGBNBFHOKAA; // 0x10
	::UnityEngine::Quaternion ODPAIGICCHE; // 0x18
	::UnityEngine::Vector3 IKENCOBKLFJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOMJDLHAOD_ECFDPOLNNFB__CTOR_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData PIPLEJHMBPN(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> PIIPCLCCOIG)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + HNOMJDLHAOD_ECFDPOLNNFB_PIPLEJHMBPN_OFFSET))(this, PIIPCLCCOIG);
	}
};
