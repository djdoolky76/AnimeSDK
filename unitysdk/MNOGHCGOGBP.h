#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIJKDAKGODG.h"

#define MNOGHCGOGBP_CNBNGAOAJHB_OFFSET UNITYSDK_OFFSET(0x12743D10)
#define MNOGHCGOGBP_GAOLFIHBDAL_OFFSET UNITYSDK_OFFSET(0x12743F90)
#define MNOGHCGOGBP__CTOR_OFFSET UNITYSDK_OFFSET(0x12743F80)

inline static constexpr unsigned int MNOGHCGOGBP_TypeDefinitionIndex = 59600;

class MNOGHCGOGBP : public ::BIJKDAKGODG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNOGHCGOGBP__CTOR_OFFSET))(this);
	}

	::System::Void CNBNGAOAJHB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNOGHCGOGBP_CNBNGAOAJHB_OFFSET))(this);
	}

	::System::Void GAOLFIHBDAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNOGHCGOGBP_GAOLFIHBDAL_OFFSET))(this);
	}
};
