#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/FD9648DC8AAA6896.h"
#include "unitysdk/System/Object.h"

namespace ABC::CustomRenderPipeline { class UIDownSampleBlur; }

#define E25A687B79C939DF_FD792C24FE49920B_OFFSET UNITYSDK_OFFSET(0x2797820)
#define E25A687B79C939DF__CTOR_OFFSET UNITYSDK_OFFSET(0x27978D0)

inline static constexpr unsigned int E25A687B79C939DF_TypeDefinitionIndex = 16538;

class E25A687B79C939DF : public ::System::Object
{
public:
	::B88870E9FB4B8C1A::FD9648DC8AAA6896 F476B975A55CF366; // 0x10
	::System::Int32 E71794C9B34C045E; // 0x14
	::System::Int32 A18C83CD3E943627; // 0x18
	::System::Boolean A29B925F119FFEB5; // 0x1C

	::System::Void FD792C24FE49920B(::ABC::CustomRenderPipeline::UIDownSampleBlur* A567F659199E4401)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::UIDownSampleBlur*))((::PBYTE)hIl2Cpp + E25A687B79C939DF_FD792C24FE49920B_OFFSET))(this, A567F659199E4401);
	}

	::System::Void _ctor(::ABC::CustomRenderPipeline::UIDownSampleBlur* A567F659199E4401)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::UIDownSampleBlur*))((::PBYTE)hIl2Cpp + E25A687B79C939DF__CTOR_OFFSET))(this, A567F659199E4401);
	}
};
