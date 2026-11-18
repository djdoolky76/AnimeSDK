#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define LKOINHNFAKE___C_KLCNLFELDCO_OFFSET UNITYSDK_OFFSET(0x14DBE6D0)
#define LKOINHNFAKE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14DBE680)
#define LKOINHNFAKE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14DBE6C0)

inline static constexpr unsigned int LKOINHNFAKE___c_TypeDefinitionIndex = 59907;

class LKOINHNFAKE___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LKOINHNFAKE___c_TypeDefinitionIndex)->GetStaticField(0x447C0);
	}
	static ::System::Comparison_1<::System::Int32>** StaticGet___9__13_0()
	{
		return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LKOINHNFAKE___c_TypeDefinitionIndex)->GetStaticField(0x447C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKOINHNFAKE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKOINHNFAKE___C__CTOR_OFFSET))(this);
	}

	::System::Int32 KLCNLFELDCO(::System::Int32 EJCBEJMGFAJ, ::System::Int32 EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LKOINHNFAKE___C_KLCNLFELDCO_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
