#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define EBDHPMBCICJ__CTOR_OFFSET UNITYSDK_OFFSET(0x10F1C3F0)

inline static constexpr unsigned int EBDHPMBCICJ_TypeDefinitionIndex = 88547;

class EBDHPMBCICJ : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBDHPMBCICJ__CTOR_OFFSET))(this);
	}
};
