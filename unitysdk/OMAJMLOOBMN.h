#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIPEGPGHAJI.h"

#define OMAJMLOOBMN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D685A40)

inline static constexpr unsigned int OMAJMLOOBMN_TypeDefinitionIndex = 93519;

class OMAJMLOOBMN : public ::BIPEGPGHAJI
{
public:
	::System::Int64 CKELOFDFEEM; // 0x20
	::System::UInt64 EFJNBAPPLFB; // 0x28
	::System::Single IAKPGBCAAKM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAJMLOOBMN__CTOR_OFFSET))(this);
	}
};
