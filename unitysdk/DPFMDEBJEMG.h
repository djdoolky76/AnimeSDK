#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FPKIFHKCBEK.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DPFMDEBJEMG__CTOR_OFFSET UNITYSDK_OFFSET(0x106132F0)

inline static constexpr unsigned int DPFMDEBJEMG_TypeDefinitionIndex = 54741;

class DPFMDEBJEMG : public ::FPKIFHKCBEK
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* CLKFLCGNKMA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* GGAHJNLHFJA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFMDEBJEMG__CTOR_OFFSET))(this);
	}
};
