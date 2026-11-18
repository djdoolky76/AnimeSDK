#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define PBDPCMOEMAL__CTOR_OFFSET UNITYSDK_OFFSET(0x15529140)

inline static constexpr unsigned int PBDPCMOEMAL_TypeDefinitionIndex = 61041;

class PBDPCMOEMAL : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDPCMOEMAL__CTOR_OFFSET))(this);
	}
};
