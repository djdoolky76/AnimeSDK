#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define LDKNGMEBFPI___C_FJEDLKMKKKO_OFFSET UNITYSDK_OFFSET(0x15246A50)
#define LDKNGMEBFPI___C_OHBHMJACHKH_OFFSET UNITYSDK_OFFSET(0x15246A40)
#define LDKNGMEBFPI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x152469F0)
#define LDKNGMEBFPI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15246A30)

inline static constexpr unsigned int LDKNGMEBFPI___c_TypeDefinitionIndex = 90540;

class LDKNGMEBFPI___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__11_3()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LDKNGMEBFPI___c_TypeDefinitionIndex)->GetStaticField(0x3E630);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LDKNGMEBFPI___c_TypeDefinitionIndex)->GetStaticField(0x3E638);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__11_1()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LDKNGMEBFPI___c_TypeDefinitionIndex)->GetStaticField(0x3E640);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDKNGMEBFPI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDKNGMEBFPI___C__CTOR_OFFSET))(this);
	}

	::System::Boolean OHBHMJACHKH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDKNGMEBFPI___C_OHBHMJACHKH_OFFSET))(this);
	}

	::System::Boolean FJEDLKMKKKO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDKNGMEBFPI___C_FJEDLKMKKKO_OFFSET))(this);
	}
};
