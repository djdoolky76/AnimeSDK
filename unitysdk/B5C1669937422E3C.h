#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/B9957DBBA55517C1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace ABC::CustomRenderPipeline { class Vignette; }

#define B5C1669937422E3C_FD792C24FE49920B_OFFSET UNITYSDK_OFFSET(0x277CC30)
#define B5C1669937422E3C__CTOR_OFFSET UNITYSDK_OFFSET(0x277CD50)

inline static constexpr unsigned int B5C1669937422E3C_TypeDefinitionIndex = 16506;

class B5C1669937422E3C : public ::System::Object
{
public:
	::B88870E9FB4B8C1A::B9957DBBA55517C1 F476B975A55CF366; // 0x10
	::UnityEngine::E46B881AA2636190 FD6BEC6563AC7110; // 0x14
	::UnityEngine::Vector2 BF7646B43BCFCBDC; // 0x24
	::System::Single ACF4238AC57D21A4; // 0x2C
	::System::Single E82BF6B86C423DAF; // 0x30
	::System::Boolean F3840FC22896C1C3; // 0x34

	::System::Void FD792C24FE49920B(::ABC::CustomRenderPipeline::Vignette* EBA813D3B1D4AC05)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::Vignette*))((::PBYTE)hIl2Cpp + B5C1669937422E3C_FD792C24FE49920B_OFFSET))(this, EBA813D3B1D4AC05);
	}

	::System::Void _ctor(::ABC::CustomRenderPipeline::Vignette* EBA813D3B1D4AC05)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::Vignette*))((::PBYTE)hIl2Cpp + B5C1669937422E3C__CTOR_OFFSET))(this, EBA813D3B1D4AC05);
	}
};
