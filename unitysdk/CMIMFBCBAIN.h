#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CMIMFBCBAIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x145D7770)

inline static constexpr unsigned int CMIMFBCBAIN_TypeDefinitionIndex = 84862;

class CMIMFBCBAIN : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_MIBPEBHDHOA()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CMIMFBCBAIN_TypeDefinitionIndex)->GetStaticField(0x403D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMIMFBCBAIN__CCTOR_OFFSET))();
	}
};
