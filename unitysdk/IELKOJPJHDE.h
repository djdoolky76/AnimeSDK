#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OEKHMAPHEJH;

#define IELKOJPJHDE_COMPARE_OFFSET UNITYSDK_OFFSET(0x153A2B50)
#define IELKOJPJHDE__CTOR_OFFSET UNITYSDK_OFFSET(0x153A2BD0)

inline static constexpr unsigned int IELKOJPJHDE_TypeDefinitionIndex = 92697;

class IELKOJPJHDE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IELKOJPJHDE__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::OEKHMAPHEJH* HAAEBCOBKFF, ::OEKHMAPHEJH* BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::OEKHMAPHEJH*, ::OEKHMAPHEJH*))((::PBYTE)hIl2Cpp + IELKOJPJHDE_COMPARE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
