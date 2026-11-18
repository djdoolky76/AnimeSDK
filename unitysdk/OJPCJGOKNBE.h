#pragma once
#include "unitysdk/unitysdk.h"

#define OJPCJGOKNBE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12936B60)
#define OJPCJGOKNBE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12936EB0)
#define OJPCJGOKNBE__CTOR_OFFSET UNITYSDK_OFFSET(0x12936D10)

inline static constexpr unsigned int OJPCJGOKNBE_TypeDefinitionIndex = 54943;

class OJPCJGOKNBE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJPCJGOKNBE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJPCJGOKNBE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJPCJGOKNBE_GDEOPIBNOIN_OFFSET))(this);
	}
};
