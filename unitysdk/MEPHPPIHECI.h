#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define MEPHPPIHECI__CTOR_OFFSET UNITYSDK_OFFSET(0x177B9090)

inline static constexpr unsigned int MEPHPPIHECI_TypeDefinitionIndex = 56001;

class MEPHPPIHECI : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPHPPIHECI__CTOR_OFFSET))(this);
	}
};
