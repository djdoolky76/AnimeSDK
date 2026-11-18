#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BNENHEDNODF;

#define BNENHEDNODF_LLKEIHAGEKC_COMPARE_OFFSET UNITYSDK_OFFSET(0x1D7250E0)
#define BNENHEDNODF_LLKEIHAGEKC__CTOR_OFFSET UNITYSDK_OFFSET(0x1D725160)

inline static constexpr unsigned int BNENHEDNODF_LLKEIHAGEKC_TypeDefinitionIndex = 7931;

class BNENHEDNODF_LLKEIHAGEKC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNENHEDNODF_LLKEIHAGEKC__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::BNENHEDNODF* HAAEBCOBKFF, ::BNENHEDNODF* BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::BNENHEDNODF*, ::BNENHEDNODF*))((::PBYTE)hIl2Cpp + BNENHEDNODF_LLKEIHAGEKC_COMPARE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
