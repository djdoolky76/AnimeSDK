#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

class BNFFAMKLBAI;
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Cameras { class TopViewCameraConfig; }
namespace PipelineCamera { class ICameraDataBlender; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define BNFFAMKLBAI_BJHAIENABHF_CBCIMCIDJBA_OFFSET UNITYSDK_OFFSET(0x1692E0E0)
#define BNFFAMKLBAI_BJHAIENABHF_EJHICKGMKBO_OFFSET UNITYSDK_OFFSET(0x1692E050)
#define BNFFAMKLBAI_BJHAIENABHF_HBJKOGCOPJG_OFFSET UNITYSDK_OFFSET(0x1692E180)
#define BNFFAMKLBAI_BJHAIENABHF_NCOHDPLFCDL_OFFSET UNITYSDK_OFFSET(0x1692E250)
#define BNFFAMKLBAI_BJHAIENABHF__CTOR_OFFSET UNITYSDK_OFFSET(0x1692E040)

inline static constexpr unsigned int BNFFAMKLBAI_BJHAIENABHF_TypeDefinitionIndex = 63482;

class BNFFAMKLBAI_BJHAIENABHF : public ::System::Object
{
public:
	::MoleMole::Cameras::CameraTrackBlending* HLLFPBDMHNJ; // 0x10
	::BNFFAMKLBAI* KLHPEBKNIFB; // 0x18
	::MoleMole::Cameras::TopViewCameraConfig* EJJNGFCGNAK; // 0x20
	::MoleMole::Cameras::CameraTrackBlending* CCAKMNAGMGD; // 0x28
	::System::Boolean DEIEDIPLLEK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFFAMKLBAI_BJHAIENABHF__CTOR_OFFSET))(this);
	}

	::System::Void EJHICKGMKBO(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + BNFFAMKLBAI_BJHAIENABHF_EJHICKGMKBO_OFFSET))(this, FKMJKPGNCJI);
	}

	::PipelineCamera::ICameraDataBlender* CBCIMCIDJBA(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + BNFFAMKLBAI_BJHAIENABHF_CBCIMCIDJBA_OFFSET))(this, PIIPCLCCOIG);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* HBJKOGCOPJG()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFFAMKLBAI_BJHAIENABHF_HBJKOGCOPJG_OFFSET))(this);
	}

	::PipelineCamera::ICameraDataBlender* NCOHDPLFCDL(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + BNFFAMKLBAI_BJHAIENABHF_NCOHDPLFCDL_OFFSET))(this, PIIPCLCCOIG);
	}
};
