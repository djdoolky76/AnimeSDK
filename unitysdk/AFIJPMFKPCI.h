#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define AFIJPMFKPCI__CTOR_OFFSET UNITYSDK_OFFSET(0x154EF3C0)

inline static constexpr unsigned int AFIJPMFKPCI_TypeDefinitionIndex = 65377;

class AFIJPMFKPCI : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFIJPMFKPCI__CTOR_OFFSET))(this);
	}
};
