#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define PAEBCEMNGIF__CTOR_OFFSET UNITYSDK_OFFSET(0x172ED520)

inline static constexpr unsigned int PAEBCEMNGIF_TypeDefinitionIndex = 78357;

class PAEBCEMNGIF : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAEBCEMNGIF__CTOR_OFFSET))(this);
	}
};
