#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define KLDANCMLJDL__CTOR_OFFSET UNITYSDK_OFFSET(0x17664540)

inline static constexpr unsigned int KLDANCMLJDL_TypeDefinitionIndex = 77573;

class KLDANCMLJDL : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDANCMLJDL__CTOR_OFFSET))(this);
	}
};
