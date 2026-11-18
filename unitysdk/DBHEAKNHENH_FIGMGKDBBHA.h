#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

class DBHEAKNHENH;
namespace MoleMole::Cameras { class TelescopeCameraConfig; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define DBHEAKNHENH_FIGMGKDBBHA_EJHICKGMKBO_OFFSET UNITYSDK_OFFSET(0x1A1CE730)
#define DBHEAKNHENH_FIGMGKDBBHA_HBJKOGCOPJG_OFFSET UNITYSDK_OFFSET(0x1A1CE630)
#define DBHEAKNHENH_FIGMGKDBBHA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1CE620)

inline static constexpr unsigned int DBHEAKNHENH_FIGMGKDBBHA_TypeDefinitionIndex = 56093;

class DBHEAKNHENH_FIGMGKDBBHA : public ::System::Object
{
public:
	::DBHEAKNHENH* KLHPEBKNIFB; // 0x10
	::MoleMole::Cameras::TelescopeCameraConfig* EJJNGFCGNAK; // 0x18
	::UnityEngine::Vector3 LHDHLAEPFBH; // 0x20
	::UnityEngine::Quaternion BFBELMDIAHI; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBHEAKNHENH_FIGMGKDBBHA__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* HBJKOGCOPJG()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBHEAKNHENH_FIGMGKDBBHA_HBJKOGCOPJG_OFFSET))(this);
	}

	::System::Void EJHICKGMKBO(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + DBHEAKNHENH_FIGMGKDBBHA_EJHICKGMKBO_OFFSET))(this, FKMJKPGNCJI);
	}
};
