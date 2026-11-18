#pragma once
#include "unitysdk/unitysdk.h"

class DIDGHINDDMI;

#define IFFAPCCJLJL_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x16A961C0)
#define IFFAPCCJLJL_ENAJFMAGAPL_OFFSET UNITYSDK_OFFSET(0x16A961D0)
#define IFFAPCCJLJL_IJAKBEAGHEI_OFFSET UNITYSDK_OFFSET(0x16A961B0)
#define IFFAPCCJLJL_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x16A96120)
#define IFFAPCCJLJL__CTOR_OFFSET UNITYSDK_OFFSET(0x16A96170)

inline static constexpr unsigned int IFFAPCCJLJL_TypeDefinitionIndex = 45303;

class IFFAPCCJLJL
{
public:
	::DIDGHINDDMI* _DKDFPDLAEJO_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFAPCCJLJL__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFAPCCJLJL_ONRECYCLE_OFFSET))(this);
	}

	::System::Void IJAKBEAGHEI(::DIDGHINDDMI* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::DIDGHINDDMI*))((::PBYTE)hIl2Cpp + IFFAPCCJLJL_IJAKBEAGHEI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFAPCCJLJL_ANEOCOIFDDJ_OFFSET))(this);
	}

	::DIDGHINDDMI* ENAJFMAGAPL()
	{
		return ((::DIDGHINDDMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFAPCCJLJL_ENAJFMAGAPL_OFFSET))(this);
	}
};
