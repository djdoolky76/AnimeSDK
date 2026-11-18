#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PostProcess/MKGlow/ComputeShaderVariants_KeywordState.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define POSTPROCESS_MKGLOW_COMPUTESHADERVARIANTS_GETVARIANTNUMBER_OFFSET UNITYSDK_OFFSET(0x1E35BC70)
#define POSTPROCESS_MKGLOW_COMPUTESHADERVARIANTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E35BD40)

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int ComputeShaderVariants_TypeDefinitionIndex = 26803;

	class ComputeShaderVariants : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Int32>* variants; // 0x10

		::System::Void _ctor(::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_COMPUTESHADERVARIANTS__CTOR_OFFSET))(this, offset);
		}

		::System::Void GetVariantNumber(::PostProcess::MKGlow::ComputeShaderVariants_KeywordState features, ::System::Int32& index)
		{
			return ((::System::Void(*)(::PVOID, ::PostProcess::MKGlow::ComputeShaderVariants_KeywordState, ::System::Int32&))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_COMPUTESHADERVARIANTS_GETVARIANTNUMBER_OFFSET))(this, features, index);
		}
	};
}
