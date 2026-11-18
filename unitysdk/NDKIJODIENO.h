#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NDKIJODIENO__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B66A00)

inline static constexpr unsigned int NDKIJODIENO_TypeDefinitionIndex = 74564;

class NDKIJODIENO : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_FMDKJADILHL()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NDKIJODIENO_TypeDefinitionIndex)->GetStaticField(0x3C8C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDKIJODIENO__CCTOR_OFFSET))();
	}
};
