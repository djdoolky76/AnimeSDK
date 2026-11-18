#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define OLCNCKIDCLE___C_EFMLCCLOLEL_OFFSET UNITYSDK_OFFSET(0xFD8E800)
#define OLCNCKIDCLE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFD8E7B0)
#define OLCNCKIDCLE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFD8E7F0)

inline static constexpr unsigned int OLCNCKIDCLE___c_TypeDefinitionIndex = 92158;

class OLCNCKIDCLE___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OLCNCKIDCLE___c_TypeDefinitionIndex)->GetStaticField(0x360A0);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__9_10()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(OLCNCKIDCLE___c_TypeDefinitionIndex)->GetStaticField(0x360A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLCNCKIDCLE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLCNCKIDCLE___C__CTOR_OFFSET))(this);
	}

	::System::Boolean EFMLCCLOLEL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OLCNCKIDCLE___C_EFMLCCLOLEL_OFFSET))(this);
	}
};
