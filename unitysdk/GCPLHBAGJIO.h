#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define GCPLHBAGJIO__CTOR_OFFSET UNITYSDK_OFFSET(0x125C48B0)

inline static constexpr unsigned int GCPLHBAGJIO_TypeDefinitionIndex = 45907;

class GCPLHBAGJIO : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCPLHBAGJIO__CTOR_OFFSET))(this);
	}
};
