#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define INBJHNBNEGL__CTOR_OFFSET UNITYSDK_OFFSET(0x1988A4B0)

inline static constexpr unsigned int INBJHNBNEGL_TypeDefinitionIndex = 81052;

class INBJHNBNEGL : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INBJHNBNEGL__CTOR_OFFSET))(this);
	}
};
