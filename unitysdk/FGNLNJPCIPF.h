#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define FGNLNJPCIPF__CTOR_OFFSET UNITYSDK_OFFSET(0x169D7C50)

inline static constexpr unsigned int FGNLNJPCIPF_TypeDefinitionIndex = 75361;

class FGNLNJPCIPF : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGNLNJPCIPF__CTOR_OFFSET))(this);
	}
};
