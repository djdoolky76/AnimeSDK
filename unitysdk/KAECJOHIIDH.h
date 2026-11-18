#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KAECJOHIIDH__CCTOR_OFFSET UNITYSDK_OFFSET(0x14FC8F70)

inline static constexpr unsigned int KAECJOHIIDH_TypeDefinitionIndex = 40714;

class KAECJOHIIDH : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_KINKGKBOEFP()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(KAECJOHIIDH_TypeDefinitionIndex)->GetStaticField(0x3B720);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KAECJOHIIDH__CCTOR_OFFSET))();
	}
};
