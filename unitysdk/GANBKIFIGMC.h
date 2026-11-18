#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define GANBKIFIGMC_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x13DABE10)
#define GANBKIFIGMC__CTOR_OFFSET UNITYSDK_OFFSET(0x13DABE00)

inline static constexpr unsigned int GANBKIFIGMC_TypeDefinitionIndex = 68981;

class GANBKIFIGMC : public ::System::Attribute
{
public:
	::System::Int32 _CLNDLFNBOFD_k__BackingField; // 0x10

	::System::Void _ctor(::System::Int32 OCALHHLFBAF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GANBKIFIGMC__CTOR_OFFSET))(this, OCALHHLFBAF);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GANBKIFIGMC_BKNKCFDBLGH_OFFSET))(this);
	}
};
