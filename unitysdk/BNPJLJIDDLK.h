#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJOJHKKKLCC.h"
#include "unitysdk/System/ValueType.h"

#define BNPJLJIDDLK_EQUALS_OFFSET UNITYSDK_OFFSET(0x6E9E00)
#define BNPJLJIDDLK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x6E9E60)

inline static constexpr unsigned int BNPJLJIDDLK_TypeDefinitionIndex = 65793;

struct alignas(4) BNPJLJIDDLK
{
	::System::Boolean Equals(::FJOJHKKKLCC HAAEBCOBKFF, ::FJOJHKKKLCC BFMMEICFNCD)
	{
		return ((::System::Boolean(*)(::PVOID, ::FJOJHKKKLCC, ::FJOJHKKKLCC))((::PBYTE)hIl2Cpp + BNPJLJIDDLK_EQUALS_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}

	::System::Int32 GetHashCode(::FJOJHKKKLCC EIFONLCJOPG)
	{
		return ((::System::Int32(*)(::PVOID, ::FJOJHKKKLCC))((::PBYTE)hIl2Cpp + BNPJLJIDDLK_GETHASHCODE_OFFSET))(this, EIFONLCJOPG);
	}
};
