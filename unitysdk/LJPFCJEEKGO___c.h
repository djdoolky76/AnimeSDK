#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJPFCJEEKGO_FOGEOLJIHKO.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }

#define LJPFCJEEKGO___C_BEJPNIBIHLA_OFFSET UNITYSDK_OFFSET(0x163755F0)
#define LJPFCJEEKGO___C_GPAGOIEMMMD_OFFSET UNITYSDK_OFFSET(0x16375600)
#define LJPFCJEEKGO___C_IFGHEJAMAGF_OFFSET UNITYSDK_OFFSET(0x16375610)
#define LJPFCJEEKGO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x163755A0)
#define LJPFCJEEKGO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x163755E0)

inline static constexpr unsigned int LJPFCJEEKGO___c_TypeDefinitionIndex = 44570;

class LJPFCJEEKGO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LJPFCJEEKGO___c_TypeDefinitionIndex)->GetStaticField(0x46990);
	}
	static ::System::Predicate_1<::System::Object*>** StaticGet___9__22_0()
	{
		return (::System::Predicate_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(LJPFCJEEKGO___c_TypeDefinitionIndex)->GetStaticField(0x46998);
	}
	static ::System::Predicate_1<::System::Object*>** StaticGet___9__22_1()
	{
		return (::System::Predicate_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(LJPFCJEEKGO___c_TypeDefinitionIndex)->GetStaticField(0x469A0);
	}
	static ::System::Predicate_1<::System::Object*>** StaticGet___9__22_2()
	{
		return (::System::Predicate_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(LJPFCJEEKGO___c_TypeDefinitionIndex)->GetStaticField(0x469A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJPFCJEEKGO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPFCJEEKGO___C__CTOR_OFFSET))(this);
	}

	::System::Boolean BEJPNIBIHLA(::LJPFCJEEKGO_FOGEOLJIHKO HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LJPFCJEEKGO_FOGEOLJIHKO))((::PBYTE)hIl2Cpp + LJPFCJEEKGO___C_BEJPNIBIHLA_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Boolean GPAGOIEMMMD(::LJPFCJEEKGO_FOGEOLJIHKO HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LJPFCJEEKGO_FOGEOLJIHKO))((::PBYTE)hIl2Cpp + LJPFCJEEKGO___C_GPAGOIEMMMD_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Boolean IFGHEJAMAGF(::LJPFCJEEKGO_FOGEOLJIHKO HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LJPFCJEEKGO_FOGEOLJIHKO))((::PBYTE)hIl2Cpp + LJPFCJEEKGO___C_IFGHEJAMAGF_OFFSET))(this, HAAEBCOBKFF);
	}
};
