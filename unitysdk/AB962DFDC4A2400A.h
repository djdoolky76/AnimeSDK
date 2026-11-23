#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B5164E11D250F6F0.h"

namespace ABC::CustomRenderPipeline { class WaterSSRSettings; }

#define AB962DFDC4A2400A_B910A10D2A258A28_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define AB962DFDC4A2400A_E0969AE9F322D367_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define AB962DFDC4A2400A__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AB962DFDC4A2400A_TypeDefinitionIndex = 16483;

class AB962DFDC4A2400A : public ::B5164E11D250F6F0
{
public:
	::ABC::CustomRenderPipeline::WaterSSRSettings* FB3235A74D806F38; // 0x18

	::ABC::CustomRenderPipeline::WaterSSRSettings* B910A10D2A258A28()
	{
		return ((::ABC::CustomRenderPipeline::WaterSSRSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AB962DFDC4A2400A_B910A10D2A258A28_OFFSET))(this);
	}

	::System::Void E0969AE9F322D367(::ABC::CustomRenderPipeline::WaterSSRSettings* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::WaterSSRSettings*))((::PBYTE)hIl2Cpp + AB962DFDC4A2400A_E0969AE9F322D367_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AB962DFDC4A2400A__CTOR_OFFSET))(this);
	}
};
