#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCCMPEIHJMN.h"

#define NFMGKAMKBLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x10D73590)

inline static constexpr unsigned int NFMGKAMKBLJ_TypeDefinitionIndex = 45158;

class NFMGKAMKBLJ : public ::BCCMPEIHJMN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMGKAMKBLJ__CTOR_OFFSET))(this);
	}
};
