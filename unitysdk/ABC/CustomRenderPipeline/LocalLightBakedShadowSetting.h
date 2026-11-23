#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/E6E535EDFA14822E.h"

#define ABC_CUSTOMRENDERPIPELINE_LOCALLIGHTBAKEDSHADOWSETTING_CONDITIONALCOPY_OFFSET UNITYSDK_OFFSET(0x2832AC0)
#define ABC_CUSTOMRENDERPIPELINE_LOCALLIGHTBAKEDSHADOWSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x2832B70)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int LocalLightBakedShadowSetting_TypeDefinitionIndex = 16930;

	class LocalLightBakedShadowSetting : public ::B88870E9FB4B8C1A::E6E535EDFA14822E
	{
	public:
		::System::Int32 m_MaxPointLightShadowResolutionDesktop; // 0x18
		::System::Int32 m_MaxPointLightShadowResolutionMobile; // 0x1C
		::System::Int32 m_PointLightShadowLODLevel; // 0x20
		::System::Int32 m_MaxSpotLightShadowResolutionDesktop; // 0x24
		::System::Int32 m_MaxSpotLightShadowResolutionMobile; // 0x28
		::System::Int32 m_SpotLightShadowLODLevel; // 0x2C

		::System::Void ConditionalCopy(::B88870E9FB4B8C1A::E6E535EDFA14822E* B093D14BEB149AD9)
		{
			return ((::System::Void(*)(::PVOID, ::B88870E9FB4B8C1A::E6E535EDFA14822E*))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_LOCALLIGHTBAKEDSHADOWSETTING_CONDITIONALCOPY_OFFSET))(this, B093D14BEB149AD9);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_LOCALLIGHTBAKEDSHADOWSETTING__CTOR_OFFSET))(this);
		}
	};
}
