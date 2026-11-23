#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define A728EEBD43B7DB81__CCTOR_OFFSET UNITYSDK_OFFSET(0x227D5E0)

inline static constexpr unsigned int A728EEBD43B7DB81_TypeDefinitionIndex = 6978;

class A728EEBD43B7DB81 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Char>** StaticGet_F8DD67925D7246D5()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(A728EEBD43B7DB81_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A728EEBD43B7DB81__CCTOR_OFFSET))();
	}
};
