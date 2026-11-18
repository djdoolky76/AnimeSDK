#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIHPBFHEOOA.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define LEDGAFNOJLL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3EF7C0)

inline static constexpr unsigned int LEDGAFNOJLL_TypeDefinitionIndex = 94213;

class LEDGAFNOJLL : public ::BIHPBFHEOOA
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* MAGMPAPMPNB; // 0x10
	::System::UInt32 AMHFLBPBKLL; // 0x18
	::System::UInt32 BKLGNCBNEGM; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEDGAFNOJLL__CTOR_OFFSET))(this);
	}
};
