#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKGNBCLLHMK;
namespace System { template <typename T> class Comparison_1; }

#define COCIEFHOIOH___C_KKCMKOOEBJA_OFFSET UNITYSDK_OFFSET(0x19506540)
#define COCIEFHOIOH___C_OALPLLPBFJI_OFFSET UNITYSDK_OFFSET(0x195064F0)
#define COCIEFHOIOH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x195064A0)
#define COCIEFHOIOH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x195064E0)

inline static constexpr unsigned int COCIEFHOIOH___c_TypeDefinitionIndex = 16407;

class COCIEFHOIOH___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::CKGNBCLLHMK*>** StaticGet___9__10_0()
	{
		return (::System::Comparison_1<::CKGNBCLLHMK*>**)Il2CppClass::FromTypeDefinitionIndex(COCIEFHOIOH___c_TypeDefinitionIndex)->GetStaticField(0x7A10);
	}
	static ::System::Comparison_1<::CKGNBCLLHMK*>** StaticGet___9__22_0()
	{
		return (::System::Comparison_1<::CKGNBCLLHMK*>**)Il2CppClass::FromTypeDefinitionIndex(COCIEFHOIOH___c_TypeDefinitionIndex)->GetStaticField(0x7A18);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(COCIEFHOIOH___c_TypeDefinitionIndex)->GetStaticField(0x7A20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COCIEFHOIOH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COCIEFHOIOH___C__CTOR_OFFSET))(this);
	}

	::System::Int32 OALPLLPBFJI(::CKGNBCLLHMK* EJCBEJMGFAJ, ::CKGNBCLLHMK* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::CKGNBCLLHMK*, ::CKGNBCLLHMK*))((::PBYTE)hIl2Cpp + COCIEFHOIOH___C_OALPLLPBFJI_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::Int32 KKCMKOOEBJA(::CKGNBCLLHMK* EJCBEJMGFAJ, ::CKGNBCLLHMK* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::CKGNBCLLHMK*, ::CKGNBCLLHMK*))((::PBYTE)hIl2Cpp + COCIEFHOIOH___C_KKCMKOOEBJA_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
