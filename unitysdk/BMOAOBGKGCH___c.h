#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define BMOAOBGKGCH___C_GOABINAKGLB_OFFSET UNITYSDK_OFFSET(0x1B993A00)
#define BMOAOBGKGCH___C_INPNJCKPNHM_OFFSET UNITYSDK_OFFSET(0x1B9939F0)
#define BMOAOBGKGCH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9939A0)
#define BMOAOBGKGCH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9939E0)

inline static constexpr unsigned int BMOAOBGKGCH___c_TypeDefinitionIndex = 9898;

class BMOAOBGKGCH___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::Int32>** StaticGet___9__21_0()
	{
		return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BMOAOBGKGCH___c_TypeDefinitionIndex)->GetStaticField(0x7990);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BMOAOBGKGCH___c_TypeDefinitionIndex)->GetStaticField(0x7998);
	}
	static ::System::Comparison_1<::System::Int32>** StaticGet___9__21_1()
	{
		return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BMOAOBGKGCH___c_TypeDefinitionIndex)->GetStaticField(0x79A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMOAOBGKGCH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOAOBGKGCH___C__CTOR_OFFSET))(this);
	}

	::System::Int32 INPNJCKPNHM(::System::Int32 EJCBEJMGFAJ, ::System::Int32 EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BMOAOBGKGCH___C_INPNJCKPNHM_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::Int32 GOABINAKGLB(::System::Int32 EJCBEJMGFAJ, ::System::Int32 EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BMOAOBGKGCH___C_GOABINAKGLB_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
