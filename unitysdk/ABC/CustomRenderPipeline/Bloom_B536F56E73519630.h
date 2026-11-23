#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/E8984F4E44AE20E5.h"

class BE1E11B808A636AE;

#define ABC_CUSTOMRENDERPIPELINE_BLOOM_B536F56E73519630__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int Bloom_B536F56E73519630_TypeDefinitionIndex = 16880;

	class Bloom_B536F56E73519630 : public ::System::Object
	{
	public:
		::BE1E11B808A636AE* BE5D9F4E7107AACB; // 0x10
		::BE1E11B808A636AE* A1F51D62639398BA; // 0x18
		::System::Int32 F5EF7E29767E03BF; // 0x20
		::System::Int32 F0961C93719F7B0D; // 0x24
		::UnityEngine::E8984F4E44AE20E5 B856F1DD25F702CF; // 0x28
		::System::Int32 B3859EEA986EDCCD; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_BLOOM_B536F56E73519630__CTOR_OFFSET))(this);
		}
	};
}
