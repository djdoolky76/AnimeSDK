#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define HEECJHJIOCA__CTOR_OFFSET UNITYSDK_OFFSET(0x16CEA630)

inline static constexpr unsigned int HEECJHJIOCA_TypeDefinitionIndex = 62725;

class HEECJHJIOCA : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEECJHJIOCA__CTOR_OFFSET))(this);
	}
};
