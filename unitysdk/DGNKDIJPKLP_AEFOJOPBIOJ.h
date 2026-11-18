#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DBAHPGDJDFA.h"

#define DGNKDIJPKLP_AEFOJOPBIOJ_COMPARE_OFFSET UNITYSDK_OFFSET(0x149A62A0)
#define DGNKDIJPKLP_AEFOJOPBIOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x149A6310)

inline static constexpr unsigned int DGNKDIJPKLP_AEFOJOPBIOJ_TypeDefinitionIndex = 73385;

class DGNKDIJPKLP_AEFOJOPBIOJ : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNKDIJPKLP_AEFOJOPBIOJ__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::DBAHPGDJDFA HAAEBCOBKFF, ::DBAHPGDJDFA BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::DBAHPGDJDFA, ::DBAHPGDJDFA))((::PBYTE)hIl2Cpp + DGNKDIJPKLP_AEFOJOPBIOJ_COMPARE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
