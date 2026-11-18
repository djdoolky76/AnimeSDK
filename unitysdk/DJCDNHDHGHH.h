#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define DJCDNHDHGHH__CCTOR_OFFSET UNITYSDK_OFFSET(0x16BA2900)

inline static constexpr unsigned int DJCDNHDHGHH_TypeDefinitionIndex = 49318;

struct alignas(4) DJCDNHDHGHH
{
	static ::DJCDNHDHGHH* StaticGet_CGICCOBHACH()
	{
		return (::DJCDNHDHGHH*)Il2CppClass::FromTypeDefinitionIndex(DJCDNHDHGHH_TypeDefinitionIndex)->GetStaticField(0x14390);
	}
	::System::Single GPIOJBLKFAJ; // 0x10
	::System::Boolean IGFNELJHDNB; // 0x14

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJCDNHDHGHH__CCTOR_OFFSET))();
	}
};
