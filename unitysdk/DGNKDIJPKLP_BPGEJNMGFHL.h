#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CGFLNMEGCGD.h"

#define DGNKDIJPKLP_BPGEJNMGFHL_COMPARE_OFFSET UNITYSDK_OFFSET(0x149A6320)
#define DGNKDIJPKLP_BPGEJNMGFHL__CTOR_OFFSET UNITYSDK_OFFSET(0x149A63A0)

inline static constexpr unsigned int DGNKDIJPKLP_BPGEJNMGFHL_TypeDefinitionIndex = 73392;

class DGNKDIJPKLP_BPGEJNMGFHL : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNKDIJPKLP_BPGEJNMGFHL__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::CGFLNMEGCGD HAAEBCOBKFF, ::CGFLNMEGCGD BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::CGFLNMEGCGD, ::CGFLNMEGCGD))((::PBYTE)hIl2Cpp + DGNKDIJPKLP_BPGEJNMGFHL_COMPARE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
