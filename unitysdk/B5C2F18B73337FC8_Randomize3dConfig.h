#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B5C2F18B73337FC8_AB0F686022094D03.h"
#include "unitysdk/System/ValueType.h"

#define B5C2F18B73337FC8_RANDOMIZE3DCONFIG_CLEARCALCPARAMS_OFFSET UNITYSDK_OFFSET(0x2AB2FE0)
#define B5C2F18B73337FC8_RANDOMIZE3DCONFIG_GET_CALCULATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1E8F280)
#define B5C2F18B73337FC8_RANDOMIZE3DCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x2AB3020)

inline static constexpr unsigned int B5C2F18B73337FC8_Randomize3dConfig_TypeDefinitionIndex = 19108;

struct alignas(8) B5C2F18B73337FC8_Randomize3dConfig
{
	::System::Boolean followsOriginalSource; // 0x10
	::System::Byte _padding0[0x3];
	::B5C2F18B73337FC8_AB0F686022094D03 calculationType; // 0x14
	::Il2CppArray<::System::Single>* calculationParameters; // 0x18

	::B5C2F18B73337FC8_AB0F686022094D03 get_CalculationType()
	{
		return ((::B5C2F18B73337FC8_AB0F686022094D03(*)(::PVOID))((::PBYTE)hIl2Cpp + B5C2F18B73337FC8_RANDOMIZE3DCONFIG_GET_CALCULATIONTYPE_OFFSET))(this);
	}

	::System::Void _ctor(::System::Int32 A6E7746985B415AC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + B5C2F18B73337FC8_RANDOMIZE3DCONFIG__CTOR_OFFSET))(this, A6E7746985B415AC);
	}

	::System::Void ClearCalcParams(::System::Single FE85DFE45D049A58)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + B5C2F18B73337FC8_RANDOMIZE3DCONFIG_CLEARCALCPARAMS_OFFSET))(this, FE85DFE45D049A58);
	}
};
