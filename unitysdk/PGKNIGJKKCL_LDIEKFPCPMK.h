#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraDataBlender; }
namespace UnityEngine { class AnimationCurve; }

#define PGKNIGJKKCL_LDIEKFPCPMK_GLNKIABIMFP_OFFSET UNITYSDK_OFFSET(0x1197A780)
#define PGKNIGJKKCL_LDIEKFPCPMK_JEHPGFHMFPN_OFFSET UNITYSDK_OFFSET(0x1197A770)
#define PGKNIGJKKCL_LDIEKFPCPMK__CTOR_OFFSET UNITYSDK_OFFSET(0x1197A760)

inline static constexpr unsigned int PGKNIGJKKCL_LDIEKFPCPMK_TypeDefinitionIndex = 75332;

class PGKNIGJKKCL_LDIEKFPCPMK : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* FAJHPKBELMF; // 0x10
	::System::Single MDPPNMIPDMP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGKNIGJKKCL_LDIEKFPCPMK__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraDataBlender* JEHPGFHMFPN(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + PGKNIGJKKCL_LDIEKFPCPMK_JEHPGFHMFPN_OFFSET))(this, PIIPCLCCOIG);
	}

	::PipelineCamera::ICameraDataBlender* GLNKIABIMFP(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + PGKNIGJKKCL_LDIEKFPCPMK_GLNKIABIMFP_OFFSET))(this, PIIPCLCCOIG);
	}
};
