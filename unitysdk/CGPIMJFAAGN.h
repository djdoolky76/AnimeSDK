#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define CGPIMJFAAGN__CTOR_OFFSET UNITYSDK_OFFSET(0x19A018F0)

inline static constexpr unsigned int CGPIMJFAAGN_TypeDefinitionIndex = 89663;

class CGPIMJFAAGN : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGPIMJFAAGN__CTOR_OFFSET))(this);
	}
};
