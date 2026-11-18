#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNPENJDMPPK.h"
#include "unitysdk/System/ValueType.h"

#define PHAMIJGADPD_EQUALS_OFFSET UNITYSDK_OFFSET(0x7E0940)
#define PHAMIJGADPD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7E09A0)

inline static constexpr unsigned int PHAMIJGADPD_TypeDefinitionIndex = 61081;

struct alignas(4) PHAMIJGADPD
{
	::System::Boolean Equals(::HNPENJDMPPK HAAEBCOBKFF, ::HNPENJDMPPK BFMMEICFNCD)
	{
		return ((::System::Boolean(*)(::PVOID, ::HNPENJDMPPK, ::HNPENJDMPPK))((::PBYTE)hIl2Cpp + PHAMIJGADPD_EQUALS_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}

	::System::Int32 GetHashCode(::HNPENJDMPPK EIFONLCJOPG)
	{
		return ((::System::Int32(*)(::PVOID, ::HNPENJDMPPK))((::PBYTE)hIl2Cpp + PHAMIJGADPD_GETHASHCODE_OFFSET))(this, EIFONLCJOPG);
	}
};
