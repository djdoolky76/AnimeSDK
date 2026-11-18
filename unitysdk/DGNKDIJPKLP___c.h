#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBAHPGDJDFA.h"
#include "unitysdk/FHPEOALHKDM.h"
#include "unitysdk/NMILKOJNFFF.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define DGNKDIJPKLP___C_HOHBBPKJBAO_OFFSET UNITYSDK_OFFSET(0x12BB1E80)
#define DGNKDIJPKLP___C_JKLONIHKEPC_OFFSET UNITYSDK_OFFSET(0x12BB1E60)
#define DGNKDIJPKLP___C_KJGOFNDCBNA_OFFSET UNITYSDK_OFFSET(0x12BB1E40)
#define DGNKDIJPKLP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12BB1DF0)
#define DGNKDIJPKLP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12BB1E30)

inline static constexpr unsigned int DGNKDIJPKLP___c_TypeDefinitionIndex = 73388;

class DGNKDIJPKLP___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::NMILKOJNFFF>** StaticGet___9__12_2()
	{
		return (::System::Func_2<::System::Int32, ::NMILKOJNFFF>**)Il2CppClass::FromTypeDefinitionIndex(DGNKDIJPKLP___c_TypeDefinitionIndex)->GetStaticField(0x45E40);
	}
	static ::System::Func_2<::System::Int32, ::FHPEOALHKDM>** StaticGet___9__12_0()
	{
		return (::System::Func_2<::System::Int32, ::FHPEOALHKDM>**)Il2CppClass::FromTypeDefinitionIndex(DGNKDIJPKLP___c_TypeDefinitionIndex)->GetStaticField(0x45E48);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DGNKDIJPKLP___c_TypeDefinitionIndex)->GetStaticField(0x45E50);
	}
	static ::System::Func_2<::System::Int32, ::DBAHPGDJDFA>** StaticGet___9__12_1()
	{
		return (::System::Func_2<::System::Int32, ::DBAHPGDJDFA>**)Il2CppClass::FromTypeDefinitionIndex(DGNKDIJPKLP___c_TypeDefinitionIndex)->GetStaticField(0x45E58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGNKDIJPKLP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNKDIJPKLP___C__CTOR_OFFSET))(this);
	}

	::DBAHPGDJDFA KJGOFNDCBNA(::System::Int32 JFCIBNANGHP)
	{
		return ((::DBAHPGDJDFA(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DGNKDIJPKLP___C_KJGOFNDCBNA_OFFSET))(this, JFCIBNANGHP);
	}

	::FHPEOALHKDM JKLONIHKEPC(::System::Int32 JFCIBNANGHP)
	{
		return ((::FHPEOALHKDM(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DGNKDIJPKLP___C_JKLONIHKEPC_OFFSET))(this, JFCIBNANGHP);
	}

	::NMILKOJNFFF HOHBBPKJBAO(::System::Int32 JFCIBNANGHP)
	{
		return ((::NMILKOJNFFF(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DGNKDIJPKLP___C_HOHBBPKJBAO_OFFSET))(this, JFCIBNANGHP);
	}
};
