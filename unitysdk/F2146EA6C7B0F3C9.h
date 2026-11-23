#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/E8984F4E44AE20E5.h"

namespace ABC::CustomRenderPipeline { class Bloom; }

#define F2146EA6C7B0F3C9_FD792C24FE49920B_OFFSET UNITYSDK_OFFSET(0x276B450)
#define F2146EA6C7B0F3C9__CTOR_OFFSET UNITYSDK_OFFSET(0x276B560)

inline static constexpr unsigned int F2146EA6C7B0F3C9_TypeDefinitionIndex = 16527;

class F2146EA6C7B0F3C9 : public ::System::Object
{
public:
	::System::Single B51A351BB86764FD; // 0x10
	::System::Single BF49F8189A3F4FD9; // 0x14
	::System::Single E88A77E57E375D87; // 0x18
	::System::Single ACF4238AC57D21A4; // 0x1C
	::UnityEngine::E8984F4E44AE20E5 A692287043E40458; // 0x20
	::UnityEngine::E8984F4E44AE20E5 A33C6903EA0FA382; // 0x30

	::System::Void _ctor(::ABC::CustomRenderPipeline::Bloom* A567F659199E4401)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::Bloom*))((::PBYTE)hIl2Cpp + F2146EA6C7B0F3C9__CTOR_OFFSET))(this, A567F659199E4401);
	}

	::System::Void FD792C24FE49920B(::ABC::CustomRenderPipeline::Bloom* A567F659199E4401)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::Bloom*))((::PBYTE)hIl2Cpp + F2146EA6C7B0F3C9_FD792C24FE49920B_OFFSET))(this, A567F659199E4401);
	}
};
