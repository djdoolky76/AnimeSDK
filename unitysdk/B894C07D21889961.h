#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ABC::CustomRenderPipeline { class LensFlareABC; }

#define B894C07D21889961_FD792C24FE49920B_OFFSET UNITYSDK_OFFSET(0x278B360)
#define B894C07D21889961__CTOR_OFFSET UNITYSDK_OFFSET(0x278B3A0)

inline static constexpr unsigned int B894C07D21889961_TypeDefinitionIndex = 16577;

class B894C07D21889961 : public ::System::Object
{
public:
	::System::Boolean A57F80F3CC65A496; // 0x10

	::System::Void FD792C24FE49920B(::ABC::CustomRenderPipeline::LensFlareABC* A567F659199E4401)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::LensFlareABC*))((::PBYTE)hIl2Cpp + B894C07D21889961_FD792C24FE49920B_OFFSET))(this, A567F659199E4401);
	}

	::System::Void _ctor(::ABC::CustomRenderPipeline::LensFlareABC* A567F659199E4401)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::LensFlareABC*))((::PBYTE)hIl2Cpp + B894C07D21889961__CTOR_OFFSET))(this, A567F659199E4401);
	}
};
