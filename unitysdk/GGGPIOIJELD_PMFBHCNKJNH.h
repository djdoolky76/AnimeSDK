#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

class GGGPIOIJELD;
namespace MoleMole::Cameras { class VariableCameraConfig; }
namespace PipelineCamera { class ICameraDataBlender; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define GGGPIOIJELD_PMFBHCNKJNH_CBCIMCIDJBA_OFFSET UNITYSDK_OFFSET(0x11DA9740)
#define GGGPIOIJELD_PMFBHCNKJNH_EJHICKGMKBO_OFFSET UNITYSDK_OFFSET(0x11DA9690)
#define GGGPIOIJELD_PMFBHCNKJNH_HBJKOGCOPJG_OFFSET UNITYSDK_OFFSET(0x11DA95C0)
#define GGGPIOIJELD_PMFBHCNKJNH__CTOR_OFFSET UNITYSDK_OFFSET(0x11DA95B0)

inline static constexpr unsigned int GGGPIOIJELD_PMFBHCNKJNH_TypeDefinitionIndex = 92657;

class GGGPIOIJELD_PMFBHCNKJNH : public ::System::Object
{
public:
	::MoleMole::Cameras::VariableCameraConfig* EJJNGFCGNAK; // 0x10
	::GGGPIOIJELD* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGPIOIJELD_PMFBHCNKJNH__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* HBJKOGCOPJG()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGPIOIJELD_PMFBHCNKJNH_HBJKOGCOPJG_OFFSET))(this);
	}

	::System::Void EJHICKGMKBO(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + GGGPIOIJELD_PMFBHCNKJNH_EJHICKGMKBO_OFFSET))(this, FKMJKPGNCJI);
	}

	::PipelineCamera::ICameraDataBlender* CBCIMCIDJBA(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + GGGPIOIJELD_PMFBHCNKJNH_CBCIMCIDJBA_OFFSET))(this, PIIPCLCCOIG);
	}
};
