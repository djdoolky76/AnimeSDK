#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EHJCFOHDKDM.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDataDeltaFlag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class PGLHDHNFKIP;
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Cameras { class TacticalCombatCameraConfig; }
namespace PipelineCamera { class ICameraDataBlender; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define PGLHDHNFKIP_DHNLMNJBDJP_CBCIMCIDJBA_OFFSET UNITYSDK_OFFSET(0x150C8940)
#define PGLHDHNFKIP_DHNLMNJBDJP_EJHICKGMKBO_OFFSET UNITYSDK_OFFSET(0x150C89A0)
#define PGLHDHNFKIP_DHNLMNJBDJP_HBJKOGCOPJG_OFFSET UNITYSDK_OFFSET(0x150C8CC0)
#define PGLHDHNFKIP_DHNLMNJBDJP_LFHMGIDENEG_OFFSET UNITYSDK_OFFSET(0x150C8A40)
#define PGLHDHNFKIP_DHNLMNJBDJP_NCOHDPLFCDL_OFFSET UNITYSDK_OFFSET(0x150C8E10)
#define PGLHDHNFKIP_DHNLMNJBDJP__CTOR_OFFSET UNITYSDK_OFFSET(0x150C8930)

inline static constexpr unsigned int PGLHDHNFKIP_DHNLMNJBDJP_TypeDefinitionIndex = 80744;

class PGLHDHNFKIP_DHNLMNJBDJP : public ::System::Object
{
public:
	::System::Func_5<::System::Single, ::System::Single, ::UnityEngine::Vector2, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::EHJCFOHDKDM>* EBJOFMCAMCM; // 0x10
	::System::Func_2<::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>, ::PipelineCamera::WorldBasicCameraData>* AEPKIFBFCOD; // 0x18
	::MoleMole::Cameras::CameraTrackBlending* CCAKMNAGMGD; // 0x20
	::MoleMole::Cameras::TacticalCombatCameraConfig* DFMKILICPFB; // 0x28
	::PGLHDHNFKIP* KLHPEBKNIFB; // 0x30
	::MoleMole::Cameras::CameraTrackBlending* HLLFPBDMHNJ; // 0x38
	::PipelineCamera::WorldBasicCameraDataDeltaFlag GHNAFBPJNKB; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLHDHNFKIP_DHNLMNJBDJP__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraDataBlender* CBCIMCIDJBA(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + PGLHDHNFKIP_DHNLMNJBDJP_CBCIMCIDJBA_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void EJHICKGMKBO(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + PGLHDHNFKIP_DHNLMNJBDJP_EJHICKGMKBO_OFFSET))(this, FKMJKPGNCJI);
	}

	::PipelineCamera::WorldBasicCameraData LFHMGIDENEG(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> AAOCANGHBDG)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + PGLHDHNFKIP_DHNLMNJBDJP_LFHMGIDENEG_OFFSET))(this, AAOCANGHBDG);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* HBJKOGCOPJG()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLHDHNFKIP_DHNLMNJBDJP_HBJKOGCOPJG_OFFSET))(this);
	}

	::PipelineCamera::ICameraDataBlender* NCOHDPLFCDL(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + PGLHDHNFKIP_DHNLMNJBDJP_NCOHDPLFCDL_OFFSET))(this, PIIPCLCCOIG);
	}
};
