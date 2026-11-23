#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ABC::CustomRenderPipeline { class AdditionalLightData; }
namespace UnityEngine { class Light; }

#define ED81E39DEC49FF11_E68A9C463DB790E0_OFFSET UNITYSDK_OFFSET(0x21A2B90)
#define ED81E39DEC49FF11_EAE8C7D72D4D2752_OFFSET UNITYSDK_OFFSET(0x184BDF0)
#define ED81E39DEC49FF11_F5A605CD4F6A0193_OFFSET UNITYSDK_OFFSET(0x19FB3C0)
#define ED81E39DEC49FF11_F70C09BFE49BC6E8_OFFSET UNITYSDK_OFFSET(0x2064C00)
#define ED81E39DEC49FF11__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAECF0)

inline static constexpr unsigned int ED81E39DEC49FF11_TypeDefinitionIndex = 16919;

struct alignas(8) ED81E39DEC49FF11
{
	::UnityEngine::Light* E3C1936A069DE583; // 0x10
	::ABC::CustomRenderPipeline::AdditionalLightData* A06C24B54C5624BB; // 0x18

	::UnityEngine::Light* EAE8C7D72D4D2752()
	{
		return ((::UnityEngine::Light*(*)(::PVOID))((::PBYTE)hIl2Cpp + ED81E39DEC49FF11_EAE8C7D72D4D2752_OFFSET))(this);
	}

	::System::Void F70C09BFE49BC6E8(::ABC::CustomRenderPipeline::AdditionalLightData* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::AdditionalLightData*))((::PBYTE)hIl2Cpp + ED81E39DEC49FF11_F70C09BFE49BC6E8_OFFSET))(this, E937D4885DAA1AE8);
	}

	::ABC::CustomRenderPipeline::AdditionalLightData* E68A9C463DB790E0()
	{
		return ((::ABC::CustomRenderPipeline::AdditionalLightData*(*)(::PVOID))((::PBYTE)hIl2Cpp + ED81E39DEC49FF11_E68A9C463DB790E0_OFFSET))(this);
	}

	::System::Void _ctor(::UnityEngine::Light* E3E2F56F92C29464, ::ABC::CustomRenderPipeline::AdditionalLightData* A6AFAF104AE440CA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Light*, ::ABC::CustomRenderPipeline::AdditionalLightData*))((::PBYTE)hIl2Cpp + ED81E39DEC49FF11__CTOR_OFFSET))(this, E3E2F56F92C29464, A6AFAF104AE440CA);
	}

	::System::Void F5A605CD4F6A0193(::UnityEngine::Light* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Light*))((::PBYTE)hIl2Cpp + ED81E39DEC49FF11_F5A605CD4F6A0193_OFFSET))(this, E937D4885DAA1AE8);
	}
};
