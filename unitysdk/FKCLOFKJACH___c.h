#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FKCLOFKJACH_IHPCNKAHDME.h"

namespace System { template <typename T> class Comparison_1; }

#define FKCLOFKJACH___C_KDFIPIMHIMF_OFFSET UNITYSDK_OFFSET(0x1429CCF0)
#define FKCLOFKJACH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1429CCA0)
#define FKCLOFKJACH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1429CCE0)

inline static constexpr unsigned int FKCLOFKJACH___c_TypeDefinitionIndex = 39461;

class FKCLOFKJACH___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FKCLOFKJACH___c_TypeDefinitionIndex)->GetStaticField(0x3ACC0);
	}
	static ::System::Comparison_1<::System::Object*>** StaticGet___9__11_0()
	{
		return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(FKCLOFKJACH___c_TypeDefinitionIndex)->GetStaticField(0x3ACC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKCLOFKJACH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCLOFKJACH___C__CTOR_OFFSET))(this);
	}

	::System::Int32 KDFIPIMHIMF(::FKCLOFKJACH_IHPCNKAHDME EJCBEJMGFAJ, ::FKCLOFKJACH_IHPCNKAHDME EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::FKCLOFKJACH_IHPCNKAHDME, ::FKCLOFKJACH_IHPCNKAHDME))((::PBYTE)hIl2Cpp + FKCLOFKJACH___C_KDFIPIMHIMF_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
