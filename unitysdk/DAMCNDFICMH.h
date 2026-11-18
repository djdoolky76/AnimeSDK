#pragma once
#include "unitysdk/unitysdk.h"

#define DAMCNDFICMH_AIMAIGLGDBE_OFFSET UNITYSDK_OFFSET(0x1D9F1FE0)
#define DAMCNDFICMH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9F2030)

inline static constexpr unsigned int DAMCNDFICMH_TypeDefinitionIndex = 94138;

class DAMCNDFICMH
{
public:
	::System::Single BDEDDEGJFKL; // 0x28
	::System::UInt32 BKLGNCBNEGM; // 0x2C
	::System::Int32 EBKDOFEBHGJ; // 0x30
	::System::Single IAKPGBCAAKM; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMCNDFICMH__CTOR_OFFSET))(this);
	}

	::System::Void AIMAIGLGDBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMCNDFICMH_AIMAIGLGDBE_OFFSET))(this);
	}
};
