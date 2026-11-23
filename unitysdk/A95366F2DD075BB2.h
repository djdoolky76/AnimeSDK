#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ABC::CustomRenderPipeline { class MotionBlur; }

#define A95366F2DD075BB2_FD792C24FE49920B_OFFSET UNITYSDK_OFFSET(0x27D7410)
#define A95366F2DD075BB2__CTOR_OFFSET UNITYSDK_OFFSET(0x27D74A0)

inline static constexpr unsigned int A95366F2DD075BB2_TypeDefinitionIndex = 16739;

class A95366F2DD075BB2 : public ::System::Object
{
public:
	::System::Boolean A57F80F3CC65A496; // 0x10
	::System::Byte _padding0[0x3];
	::System::Single FCB91636572348CF; // 0x14
	::System::Single F571FEBA25805789; // 0x18

	::System::Void FD792C24FE49920B(::ABC::CustomRenderPipeline::MotionBlur* A567F659199E4401)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::MotionBlur*))((::PBYTE)hIl2Cpp + A95366F2DD075BB2_FD792C24FE49920B_OFFSET))(this, A567F659199E4401);
	}

	::System::Void _ctor(::ABC::CustomRenderPipeline::MotionBlur* A567F659199E4401)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::MotionBlur*))((::PBYTE)hIl2Cpp + A95366F2DD075BB2__CTOR_OFFSET))(this, A567F659199E4401);
	}
};
