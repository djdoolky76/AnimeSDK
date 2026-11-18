#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define KNKIONDMAFH__CTOR_OFFSET UNITYSDK_OFFSET(0x17671E70)

inline static constexpr unsigned int KNKIONDMAFH_TypeDefinitionIndex = 81728;

class KNKIONDMAFH : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKIONDMAFH__CTOR_OFFSET))(this);
	}
};
