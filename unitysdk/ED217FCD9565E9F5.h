#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ABC::CustomRenderPipeline { class LightShaft; }

#define ED217FCD9565E9F5_FD792C24FE49920B_OFFSET UNITYSDK_OFFSET(0x278B360)
#define ED217FCD9565E9F5__CTOR_OFFSET UNITYSDK_OFFSET(0x278B3A0)

inline static constexpr unsigned int ED217FCD9565E9F5_TypeDefinitionIndex = 16800;

class ED217FCD9565E9F5 : public ::System::Object
{
public:
	::System::Boolean A57F80F3CC65A496; // 0x10

	::System::Void FD792C24FE49920B(::ABC::CustomRenderPipeline::LightShaft* A567F659199E4401)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::LightShaft*))((::PBYTE)hIl2Cpp + ED217FCD9565E9F5_FD792C24FE49920B_OFFSET))(this, A567F659199E4401);
	}

	::System::Void _ctor(::ABC::CustomRenderPipeline::LightShaft* A567F659199E4401)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::LightShaft*))((::PBYTE)hIl2Cpp + ED217FCD9565E9F5__CTOR_OFFSET))(this, A567F659199E4401);
	}
};
