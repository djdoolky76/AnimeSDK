#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;
class GOMOBPHJHCO;
namespace System { template <typename T> class Comparison_1; }

#define IHHGELPJPEN___C_CANAPICFNGJ_OFFSET UNITYSDK_OFFSET(0x1A3A2150)
#define IHHGELPJPEN___C_IODFFMIGAAP_OFFSET UNITYSDK_OFFSET(0x1A3A20F0)
#define IHHGELPJPEN___C_JBCMKOPIMCC_OFFSET UNITYSDK_OFFSET(0x1A3A20D0)
#define IHHGELPJPEN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A3A2080)
#define IHHGELPJPEN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3A20C0)

inline static constexpr unsigned int IHHGELPJPEN___c_TypeDefinitionIndex = 57113;

class IHHGELPJPEN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IHHGELPJPEN___c_TypeDefinitionIndex)->GetStaticField(0x4BBC0);
	}
	static ::System::Comparison_1<::System::Int32>** StaticGet___9__68_0()
	{
		return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(IHHGELPJPEN___c_TypeDefinitionIndex)->GetStaticField(0x4BBC8);
	}
	static ::System::Comparison_1<::BPHGNMNLLHF*>** StaticGet___9__46_0()
	{
		return (::System::Comparison_1<::BPHGNMNLLHF*>**)Il2CppClass::FromTypeDefinitionIndex(IHHGELPJPEN___c_TypeDefinitionIndex)->GetStaticField(0x4BBD0);
	}
	static ::System::Comparison_1<::GOMOBPHJHCO*>** StaticGet___9__46_1()
	{
		return (::System::Comparison_1<::GOMOBPHJHCO*>**)Il2CppClass::FromTypeDefinitionIndex(IHHGELPJPEN___c_TypeDefinitionIndex)->GetStaticField(0x4BBD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHHGELPJPEN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHGELPJPEN___C__CTOR_OFFSET))(this);
	}

	::System::Int32 JBCMKOPIMCC(::System::Int32 EJCBEJMGFAJ, ::System::Int32 EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IHHGELPJPEN___C_JBCMKOPIMCC_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::Int32 IODFFMIGAAP(::BPHGNMNLLHF* EJCBEJMGFAJ, ::BPHGNMNLLHF* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::BPHGNMNLLHF*, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + IHHGELPJPEN___C_IODFFMIGAAP_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::Int32 CANAPICFNGJ(::GOMOBPHJHCO* EJCBEJMGFAJ, ::GOMOBPHJHCO* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::GOMOBPHJHCO*, ::GOMOBPHJHCO*))((::PBYTE)hIl2Cpp + IHHGELPJPEN___C_CANAPICFNGJ_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
