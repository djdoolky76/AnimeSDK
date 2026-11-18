#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OHLHBFHHNBI_LEHNCKOIIBK_COMPARE_OFFSET UNITYSDK_OFFSET(0x13A62450)
#define OHLHBFHHNBI_LEHNCKOIIBK__CTOR_OFFSET UNITYSDK_OFFSET(0x13A624B0)

inline static constexpr unsigned int OHLHBFHHNBI_LEHNCKOIIBK_TypeDefinitionIndex = 38596;

class OHLHBFHHNBI_LEHNCKOIIBK : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHLHBFHHNBI_LEHNCKOIIBK__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::System::Int32 HAAEBCOBKFF, ::System::Int32 BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OHLHBFHHNBI_LEHNCKOIIBK_COMPARE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
