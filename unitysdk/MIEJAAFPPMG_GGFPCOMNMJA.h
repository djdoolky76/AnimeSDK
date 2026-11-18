#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLGHOFNBMLE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

class MIEJAAFPPMG;
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define MIEJAAFPPMG_GGFPCOMNMJA_GPPOIDCKMOG_OFFSET UNITYSDK_OFFSET(0x1318EE20)
#define MIEJAAFPPMG_GGFPCOMNMJA_PBBEDNLAJOP_OFFSET UNITYSDK_OFFSET(0x1318ECC0)
#define MIEJAAFPPMG_GGFPCOMNMJA__CTOR_OFFSET UNITYSDK_OFFSET(0x1318ECB0)

inline static constexpr unsigned int MIEJAAFPPMG_GGFPCOMNMJA_TypeDefinitionIndex = 67323;

class MIEJAAFPPMG_GGFPCOMNMJA : public ::System::Object
{
public:
	::MIEJAAFPPMG* KLHPEBKNIFB; // 0x10
	::HLGHOFNBMLE HPEMFJDOAKL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIEJAAFPPMG_GGFPCOMNMJA__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* PBBEDNLAJOP()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIEJAAFPPMG_GGFPCOMNMJA_PBBEDNLAJOP_OFFSET))(this);
	}

	::System::Void GPPOIDCKMOG(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + MIEJAAFPPMG_GGFPCOMNMJA_GPPOIDCKMOG_OFFSET))(this, FKMJKPGNCJI);
	}
};
