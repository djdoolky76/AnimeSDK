#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/E144B4B2E5372A90.h"
#include "unitysdk/System/Object.h"

namespace ABC::CustomRenderPipeline { class RadialBlur; }

#define A2F1E9B14148CC50_FD792C24FE49920B_OFFSET UNITYSDK_OFFSET(0x27C5000)
#define A2F1E9B14148CC50__CTOR_OFFSET UNITYSDK_OFFSET(0x27C5230)

inline static constexpr unsigned int A2F1E9B14148CC50_TypeDefinitionIndex = 16666;

class A2F1E9B14148CC50 : public ::System::Object
{
public:
	::B88870E9FB4B8C1A::E144B4B2E5372A90 F476B975A55CF366; // 0x10
	::System::Single EF6E4460EA14B776; // 0x14
	::System::Single F43FF36F16CAFBE7; // 0x18
	::System::Single E23B8A555A917725; // 0x1C
	::System::Int32 B70568DDFDAA9EF2; // 0x20
	::System::Single EBFF1172996943DE; // 0x24
	::System::Single A7E6E590589BCC22; // 0x28
	::System::Boolean F37BA890FD6B59A0; // 0x2C
	::System::Boolean A542BAB20F36055B; // 0x2D
	::System::Byte _padding0[0x2];
	::System::Int32 E9909F51F073C605; // 0x30
	::System::Single BE8D560162373B5E; // 0x34
	::System::Single BF1E14C44725B888; // 0x38
	::System::Single FD3019CB19605E66; // 0x3C
	::System::Single BDA451E4AC221F29; // 0x40

	::System::Void _ctor(::ABC::CustomRenderPipeline::RadialBlur* BFEA7B8B588F827E)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::RadialBlur*))((::PBYTE)hIl2Cpp + A2F1E9B14148CC50__CTOR_OFFSET))(this, BFEA7B8B588F827E);
	}

	::System::Void FD792C24FE49920B(::ABC::CustomRenderPipeline::RadialBlur* BFEA7B8B588F827E)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::RadialBlur*))((::PBYTE)hIl2Cpp + A2F1E9B14148CC50_FD792C24FE49920B_OFFSET))(this, BFEA7B8B588F827E);
	}
};
