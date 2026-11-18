#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DBAHPGDJDFA.h"

#define EDMMIENABLC_IFOODOCDKCM_COMPARE_OFFSET UNITYSDK_OFFSET(0x7FE75E0)
#define EDMMIENABLC_IFOODOCDKCM__CTOR_OFFSET UNITYSDK_OFFSET(0x7FE7650)

inline static constexpr unsigned int EDMMIENABLC_IFOODOCDKCM_TypeDefinitionIndex = 53788;

class EDMMIENABLC_IFOODOCDKCM : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDMMIENABLC_IFOODOCDKCM__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::DBAHPGDJDFA HAAEBCOBKFF, ::DBAHPGDJDFA BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::DBAHPGDJDFA, ::DBAHPGDJDFA))((::PBYTE)hIl2Cpp + EDMMIENABLC_IFOODOCDKCM_COMPARE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
