#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KHMFJENDHML__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B8D9B0)

inline static constexpr unsigned int KHMFJENDHML_TypeDefinitionIndex = 78480;

class KHMFJENDHML : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_AJMDMOAODFJ()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(KHMFJENDHML_TypeDefinitionIndex)->GetStaticField(0x3E500);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHMFJENDHML__CCTOR_OFFSET))();
	}
};
