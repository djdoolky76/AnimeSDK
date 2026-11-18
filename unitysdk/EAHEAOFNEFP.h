#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define EAHEAOFNEFP__CTOR_OFFSET UNITYSDK_OFFSET(0x13494E90)

inline static constexpr unsigned int EAHEAOFNEFP_TypeDefinitionIndex = 53171;

class EAHEAOFNEFP : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAHEAOFNEFP__CTOR_OFFSET))(this);
	}
};
