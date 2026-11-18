#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define GEMBDPHIPBN__CTOR_OFFSET UNITYSDK_OFFSET(0x15F16CB0)

inline static constexpr unsigned int GEMBDPHIPBN_TypeDefinitionIndex = 46964;

class GEMBDPHIPBN : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMBDPHIPBN__CTOR_OFFSET))(this);
	}
};
