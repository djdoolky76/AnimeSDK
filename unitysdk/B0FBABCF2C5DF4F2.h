#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B5164E11D250F6F0.h"

namespace ABC::CustomRenderPipeline { class SSRSettings; }

#define B0FBABCF2C5DF4F2_B910A10D2A258A28_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define B0FBABCF2C5DF4F2_E0969AE9F322D367_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define B0FBABCF2C5DF4F2__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B0FBABCF2C5DF4F2_TypeDefinitionIndex = 16681;

class B0FBABCF2C5DF4F2 : public ::B5164E11D250F6F0
{
public:
	::ABC::CustomRenderPipeline::SSRSettings* FB3235A74D806F38; // 0x18

	::System::Void E0969AE9F322D367(::ABC::CustomRenderPipeline::SSRSettings* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::SSRSettings*))((::PBYTE)hIl2Cpp + B0FBABCF2C5DF4F2_E0969AE9F322D367_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B0FBABCF2C5DF4F2__CTOR_OFFSET))(this);
	}

	::ABC::CustomRenderPipeline::SSRSettings* B910A10D2A258A28()
	{
		return ((::ABC::CustomRenderPipeline::SSRSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + B0FBABCF2C5DF4F2_B910A10D2A258A28_OFFSET))(this);
	}
};
