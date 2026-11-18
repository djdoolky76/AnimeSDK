#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define HEHNOEPLBEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1407FEC0)

inline static constexpr unsigned int HEHNOEPLBEM_TypeDefinitionIndex = 92103;

class HEHNOEPLBEM : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHNOEPLBEM__CTOR_OFFSET))(this);
	}
};
