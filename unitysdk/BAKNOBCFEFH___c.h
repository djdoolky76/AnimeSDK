#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define BAKNOBCFEFH___C_MBKDMEEFHMA_OFFSET UNITYSDK_OFFSET(0x113CBE30)
#define BAKNOBCFEFH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x113CBDE0)
#define BAKNOBCFEFH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x113CBE20)

inline static constexpr unsigned int BAKNOBCFEFH___c_TypeDefinitionIndex = 62564;

class BAKNOBCFEFH___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BAKNOBCFEFH___c_TypeDefinitionIndex)->GetStaticField(0x3A390);
	}
	static ::System::Comparison_1<::System::Boolean>** StaticGet___9__26_0()
	{
		return (::System::Comparison_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BAKNOBCFEFH___c_TypeDefinitionIndex)->GetStaticField(0x3A398);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAKNOBCFEFH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKNOBCFEFH___C__CTOR_OFFSET))(this);
	}

	::System::Int32 MBKDMEEFHMA(::System::Boolean EJCBEJMGFAJ, ::System::Boolean EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BAKNOBCFEFH___C_MBKDMEEFHMA_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
