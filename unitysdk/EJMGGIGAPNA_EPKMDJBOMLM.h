#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

class EJMGGIGAPNA;
namespace MoleMole::Config { class ConfigShootingGroundCamera; }
namespace PipelineCamera { class ICameraDataBlender; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define EJMGGIGAPNA_EPKMDJBOMLM_CBCIMCIDJBA_OFFSET UNITYSDK_OFFSET(0x106410F0)
#define EJMGGIGAPNA_EPKMDJBOMLM_EJHICKGMKBO_OFFSET UNITYSDK_OFFSET(0x10641170)
#define EJMGGIGAPNA_EPKMDJBOMLM_HBJKOGCOPJG_OFFSET UNITYSDK_OFFSET(0x10641020)
#define EJMGGIGAPNA_EPKMDJBOMLM_NCOHDPLFCDL_OFFSET UNITYSDK_OFFSET(0x10641210)
#define EJMGGIGAPNA_EPKMDJBOMLM__CTOR_OFFSET UNITYSDK_OFFSET(0x10641010)

inline static constexpr unsigned int EJMGGIGAPNA_EPKMDJBOMLM_TypeDefinitionIndex = 40695;

class EJMGGIGAPNA_EPKMDJBOMLM : public ::System::Object
{
public:
	::EJMGGIGAPNA* KLHPEBKNIFB; // 0x10
	::MoleMole::Config::ConfigShootingGroundCamera* EJJNGFCGNAK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMGGIGAPNA_EPKMDJBOMLM__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* HBJKOGCOPJG()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMGGIGAPNA_EPKMDJBOMLM_HBJKOGCOPJG_OFFSET))(this);
	}

	::PipelineCamera::ICameraDataBlender* CBCIMCIDJBA(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + EJMGGIGAPNA_EPKMDJBOMLM_CBCIMCIDJBA_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void EJHICKGMKBO(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + EJMGGIGAPNA_EPKMDJBOMLM_EJHICKGMKBO_OFFSET))(this, FKMJKPGNCJI);
	}

	::PipelineCamera::ICameraDataBlender* NCOHDPLFCDL(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + EJMGGIGAPNA_EPKMDJBOMLM_NCOHDPLFCDL_OFFSET))(this, PIIPCLCCOIG);
	}
};
