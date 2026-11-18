#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class INCBBJCEHND;
namespace System { template <typename T> class Comparison_1; }

#define JEJGCLGPJLK___C_BNDEGAINPED_OFFSET UNITYSDK_OFFSET(0x198A2C90)
#define JEJGCLGPJLK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x198A2C40)
#define JEJGCLGPJLK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x198A2C80)

inline static constexpr unsigned int JEJGCLGPJLK___c_TypeDefinitionIndex = 82501;

class JEJGCLGPJLK___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JEJGCLGPJLK___c_TypeDefinitionIndex)->GetStaticField(0x481F0);
	}
	static ::System::Comparison_1<::INCBBJCEHND*>** StaticGet___9__4_0()
	{
		return (::System::Comparison_1<::INCBBJCEHND*>**)Il2CppClass::FromTypeDefinitionIndex(JEJGCLGPJLK___c_TypeDefinitionIndex)->GetStaticField(0x481F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEJGCLGPJLK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEJGCLGPJLK___C__CTOR_OFFSET))(this);
	}

	::System::Int32 BNDEGAINPED(::INCBBJCEHND* EJCBEJMGFAJ, ::INCBBJCEHND* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::INCBBJCEHND*, ::INCBBJCEHND*))((::PBYTE)hIl2Cpp + JEJGCLGPJLK___C_BNDEGAINPED_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
