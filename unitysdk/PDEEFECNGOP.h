#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIPEGPGHAJI.h"

#define PDEEFECNGOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9CB730)

inline static constexpr unsigned int PDEEFECNGOP_TypeDefinitionIndex = 94258;

class PDEEFECNGOP : public ::BIPEGPGHAJI
{
public:
	::System::UInt64 EFJNBAPPLFB; // 0x20
	::System::Int32 DKGIDBNBECK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDEEFECNGOP__CTOR_OFFSET))(this);
	}
};
