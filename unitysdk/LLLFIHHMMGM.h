#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define LLLFIHHMMGM__CTOR_OFFSET UNITYSDK_OFFSET(0x16C640E0)

inline static constexpr unsigned int LLLFIHHMMGM_TypeDefinitionIndex = 39216;

class LLLFIHHMMGM : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLFIHHMMGM__CTOR_OFFSET))(this);
	}
};
