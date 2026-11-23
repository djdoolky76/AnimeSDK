#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define A122A509301F25D7_F12D2E54E091BBAF_OFFSET UNITYSDK_OFFSET(0x3E32F40)
#define A122A509301F25D7__CCTOR_OFFSET UNITYSDK_OFFSET(0x3E33070)

inline static constexpr unsigned int A122A509301F25D7_TypeDefinitionIndex = 15311;

class A122A509301F25D7 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Char>** StaticGet_F081EF1E2F840E9C()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(A122A509301F25D7_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Boolean F12D2E54E091BBAF(::System::String* B9328F10E0BEB500)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + A122A509301F25D7_F12D2E54E091BBAF_OFFSET))(B9328F10E0BEB500);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A122A509301F25D7__CCTOR_OFFSET))();
	}
};
