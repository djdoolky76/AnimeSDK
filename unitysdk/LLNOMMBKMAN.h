#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define LLNOMMBKMAN__CTOR_OFFSET UNITYSDK_OFFSET(0x15665C40)

inline static constexpr unsigned int LLNOMMBKMAN_TypeDefinitionIndex = 49691;

class LLNOMMBKMAN : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNOMMBKMAN__CTOR_OFFSET))(this);
	}
};
