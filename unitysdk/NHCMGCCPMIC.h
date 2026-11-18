#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define NHCMGCCPMIC__CTOR_OFFSET UNITYSDK_OFFSET(0x12893C00)

inline static constexpr unsigned int NHCMGCCPMIC_TypeDefinitionIndex = 43803;

class NHCMGCCPMIC : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHCMGCCPMIC__CTOR_OFFSET))(this);
	}
};
