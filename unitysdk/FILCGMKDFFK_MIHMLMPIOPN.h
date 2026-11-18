#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

class FILCGMKDFFK;
namespace MoleMole::Battle { class Entity; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define FILCGMKDFFK_MIHMLMPIOPN_EJHICKGMKBO_OFFSET UNITYSDK_OFFSET(0x14AD6B80)
#define FILCGMKDFFK_MIHMLMPIOPN_HBJKOGCOPJG_OFFSET UNITYSDK_OFFSET(0x14AD6C10)
#define FILCGMKDFFK_MIHMLMPIOPN__CTOR_OFFSET UNITYSDK_OFFSET(0x14AD6B70)

inline static constexpr unsigned int FILCGMKDFFK_MIHMLMPIOPN_TypeDefinitionIndex = 66442;

class FILCGMKDFFK_MIHMLMPIOPN : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* LDLICIEFBLM; // 0x10
	::FILCGMKDFFK* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILCGMKDFFK_MIHMLMPIOPN__CTOR_OFFSET))(this);
	}

	::System::Void EJHICKGMKBO(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + FILCGMKDFFK_MIHMLMPIOPN_EJHICKGMKBO_OFFSET))(this, FKMJKPGNCJI);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* HBJKOGCOPJG()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FILCGMKDFFK_MIHMLMPIOPN_HBJKOGCOPJG_OFFSET))(this);
	}
};
