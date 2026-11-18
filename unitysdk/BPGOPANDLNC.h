#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define BPGOPANDLNC__CTOR_OFFSET UNITYSDK_OFFSET(0x128BF1B0)

inline static constexpr unsigned int BPGOPANDLNC_TypeDefinitionIndex = 86829;

class BPGOPANDLNC : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGOPANDLNC__CTOR_OFFSET))(this);
	}
};
