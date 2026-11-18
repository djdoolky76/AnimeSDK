#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/System/Object.h"

class LJPIKIJOIPH;

#define LJPIKIJOIPH_NFLEHIIHLBN_HALEAMIHGIG_OFFSET UNITYSDK_OFFSET(0x16C5F210)
#define LJPIKIJOIPH_NFLEHIIHLBN__CTOR_OFFSET UNITYSDK_OFFSET(0x16C5F200)

inline static constexpr unsigned int LJPIKIJOIPH_NFLEHIIHLBN_TypeDefinitionIndex = 68836;

class LJPIKIJOIPH_NFLEHIIHLBN : public ::System::Object
{
public:
	::LGCNEDCMPKM LMOIOOHBDOF; // 0x10
	::LJPIKIJOIPH* KLHPEBKNIFB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPIKIJOIPH_NFLEHIIHLBN__CTOR_OFFSET))(this);
	}

	::System::Void HALEAMIHGIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPIKIJOIPH_NFLEHIIHLBN_HALEAMIHGIG_OFFSET))(this);
	}
};
