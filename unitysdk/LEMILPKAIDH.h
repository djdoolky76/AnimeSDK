#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NOLNCCBKMJD.h"

class IIKNLDKMGGB;

#define LEMILPKAIDH_NAIFLDEIPIN_OFFSET UNITYSDK_OFFSET(0x158D01E0)
#define LEMILPKAIDH_OABMBBANMCM_OFFSET UNITYSDK_OFFSET(0x158D0050)
#define LEMILPKAIDH__CTOR_OFFSET UNITYSDK_OFFSET(0x158D0040)

inline static constexpr unsigned int LEMILPKAIDH_TypeDefinitionIndex = 93121;

class LEMILPKAIDH : public ::NOLNCCBKMJD
{
public:
	::System::Void _ctor(::System::Int32 AICAJMMLFPH, ::IIKNLDKMGGB* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::IIKNLDKMGGB*))((::PBYTE)hIl2Cpp + LEMILPKAIDH__CTOR_OFFSET))(this, AICAJMMLFPH, AMNIHACKELI);
	}

	::System::Void OABMBBANMCM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMILPKAIDH_OABMBBANMCM_OFFSET))(this);
	}

	::System::Void NAIFLDEIPIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMILPKAIDH_NAIFLDEIPIN_OFFSET))(this);
	}
};
