#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/AssetPathInSRP.h"

namespace UnityEngine { class GameObject; }

#define MEIJEFGPNCG_FMCFJAPHHKD_OFFSET UNITYSDK_OFFSET(0x10742570)
#define MEIJEFGPNCG_GGGIJCMPLPL_OFFSET UNITYSDK_OFFSET(0x10742620)
#define MEIJEFGPNCG_IBAMJCAMEFB_OFFSET UNITYSDK_OFFSET(0x10742680)
#define MEIJEFGPNCG_JJAOLINHGKF_OFFSET UNITYSDK_OFFSET(0x10742730)
#define MEIJEFGPNCG__CTOR_OFFSET UNITYSDK_OFFSET(0x10742560)

inline static constexpr unsigned int MEIJEFGPNCG_TypeDefinitionIndex = 53823;

class MEIJEFGPNCG : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIJEFGPNCG__CTOR_OFFSET))(this);
	}

	static ::System::Void FMCFJAPHHKD(::UnityEngine::NAPRenderPipeline0::AssetPathInSRP CJBJONJDOLI, ::UnityEngine::GameObject* NJOAJLDJCCJ)
	{
		return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::AssetPathInSRP, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MEIJEFGPNCG_FMCFJAPHHKD_OFFSET))(CJBJONJDOLI, NJOAJLDJCCJ);
	}

	::UnityEngine::GameObject* GGGIJCMPLPL(::UnityEngine::NAPRenderPipeline0::AssetPathInSRP CJBJONJDOLI)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::AssetPathInSRP))((::PBYTE)hIl2Cpp + MEIJEFGPNCG_GGGIJCMPLPL_OFFSET))(this, CJBJONJDOLI);
	}

	::System::Void JJAOLINHGKF(::UnityEngine::NAPRenderPipeline0::AssetPathInSRP CJBJONJDOLI, ::UnityEngine::GameObject* NJOAJLDJCCJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::AssetPathInSRP, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MEIJEFGPNCG_JJAOLINHGKF_OFFSET))(this, CJBJONJDOLI, NJOAJLDJCCJ);
	}

	static ::UnityEngine::GameObject* IBAMJCAMEFB(::UnityEngine::NAPRenderPipeline0::AssetPathInSRP CJBJONJDOLI)
	{
		return ((::UnityEngine::GameObject*(*)(::UnityEngine::NAPRenderPipeline0::AssetPathInSRP))((::PBYTE)hIl2Cpp + MEIJEFGPNCG_IBAMJCAMEFB_OFFSET))(CJBJONJDOLI);
	}
};
