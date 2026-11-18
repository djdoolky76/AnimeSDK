#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

class BLJCNKFKFGL;
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Cameras { class FixedCameraConfig; }
namespace PipelineCamera { class ICameraDataBlender; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define BLJCNKFKFGL_PGDPOPNBKKE_CBCIMCIDJBA_OFFSET UNITYSDK_OFFSET(0xFF8B440)
#define BLJCNKFKFGL_PGDPOPNBKKE_EJHICKGMKBO_OFFSET UNITYSDK_OFFSET(0xFF8B4E0)
#define BLJCNKFKFGL_PGDPOPNBKKE_HBJKOGCOPJG_OFFSET UNITYSDK_OFFSET(0xFF8B570)
#define BLJCNKFKFGL_PGDPOPNBKKE_NCOHDPLFCDL_OFFSET UNITYSDK_OFFSET(0xFF8B390)
#define BLJCNKFKFGL_PGDPOPNBKKE__CTOR_OFFSET UNITYSDK_OFFSET(0xFF8B380)

inline static constexpr unsigned int BLJCNKFKFGL_PGDPOPNBKKE_TypeDefinitionIndex = 79704;

class BLJCNKFKFGL_PGDPOPNBKKE : public ::System::Object
{
public:
	::MoleMole::Cameras::FixedCameraConfig* EJJNGFCGNAK; // 0x10
	::MoleMole::Cameras::CameraTrackBlending* HLLFPBDMHNJ; // 0x18
	::BLJCNKFKFGL* KLHPEBKNIFB; // 0x20
	::MoleMole::Cameras::CameraTrackBlending* CCAKMNAGMGD; // 0x28
	::System::Boolean DEIEDIPLLEK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJCNKFKFGL_PGDPOPNBKKE__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraDataBlender* NCOHDPLFCDL(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + BLJCNKFKFGL_PGDPOPNBKKE_NCOHDPLFCDL_OFFSET))(this, PIIPCLCCOIG);
	}

	::PipelineCamera::ICameraDataBlender* CBCIMCIDJBA(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + BLJCNKFKFGL_PGDPOPNBKKE_CBCIMCIDJBA_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void EJHICKGMKBO(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + BLJCNKFKFGL_PGDPOPNBKKE_EJHICKGMKBO_OFFSET))(this, FKMJKPGNCJI);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* HBJKOGCOPJG()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJCNKFKFGL_PGDPOPNBKKE_HBJKOGCOPJG_OFFSET))(this);
	}
};
