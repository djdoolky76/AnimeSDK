#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define CHCOMFMNCDG__CTOR_OFFSET UNITYSDK_OFFSET(0x159D9B10)

inline static constexpr unsigned int CHCOMFMNCDG_TypeDefinitionIndex = 41078;

class CHCOMFMNCDG : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHCOMFMNCDG__CTOR_OFFSET))(this);
	}
};
