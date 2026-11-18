#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

class AEJLJONCNNJ;
namespace MoleMole::Cameras { class FirstPersonCameraConfig; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define AEJLJONCNNJ_JHHHCNPNDHH_EJHICKGMKBO_OFFSET UNITYSDK_OFFSET(0x154E8D00)
#define AEJLJONCNNJ_JHHHCNPNDHH_HBJKOGCOPJG_OFFSET UNITYSDK_OFFSET(0x154E8C20)
#define AEJLJONCNNJ_JHHHCNPNDHH__CTOR_OFFSET UNITYSDK_OFFSET(0x154E8C10)

inline static constexpr unsigned int AEJLJONCNNJ_JHHHCNPNDHH_TypeDefinitionIndex = 76680;

class AEJLJONCNNJ_JHHHCNPNDHH : public ::System::Object
{
public:
	::MoleMole::Cameras::FirstPersonCameraConfig* EJJNGFCGNAK; // 0x10
	::AEJLJONCNNJ* KLHPEBKNIFB; // 0x18
	::System::UInt32 BKLGNCBNEGM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJLJONCNNJ_JHHHCNPNDHH__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* HBJKOGCOPJG()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJLJONCNNJ_JHHHCNPNDHH_HBJKOGCOPJG_OFFSET))(this);
	}

	::System::Void EJHICKGMKBO(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + AEJLJONCNNJ_JHHHCNPNDHH_EJHICKGMKBO_OFFSET))(this, FKMJKPGNCJI);
	}
};
