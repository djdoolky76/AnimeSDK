#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIPEGPGHAJI.h"
#include "unitysdk/MNLDNFFGIFL.h"

#define CCOCLLNPPOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D68ED70)

inline static constexpr unsigned int CCOCLLNPPOL_TypeDefinitionIndex = 94219;

class CCOCLLNPPOL : public ::BIPEGPGHAJI
{
public:
	::System::UInt32 BKLGNCBNEGM; // 0x20
	::System::Byte _padding0[0x4];
	::System::UInt64 GFOJCEHPPBK; // 0x28
	::MNLDNFFGIFL AMMHOLEHJNE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOCLLNPPOL__CTOR_OFFSET))(this);
	}
};
