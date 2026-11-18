#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NGPNDFPEABI;
namespace System { template <typename T1, typename T2> class Func_2; }

#define FLBAEFPLHOF___C_EBJKFPDBMAO_OFFSET UNITYSDK_OFFSET(0x15E6B970)
#define FLBAEFPLHOF___C_IPDBPOKPLGI_OFFSET UNITYSDK_OFFSET(0x15E6B9B0)
#define FLBAEFPLHOF___C_JJDIPFIBHKC_OFFSET UNITYSDK_OFFSET(0x15E6B990)
#define FLBAEFPLHOF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E6B920)
#define FLBAEFPLHOF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15E6B960)

inline static constexpr unsigned int FLBAEFPLHOF___c_TypeDefinitionIndex = 49082;

class FLBAEFPLHOF___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FLBAEFPLHOF___c_TypeDefinitionIndex)->GetStaticField(0x43520);
	}
	static ::System::Func_2<::NGPNDFPEABI*, ::System::Int64>** StaticGet___9__26_1()
	{
		return (::System::Func_2<::NGPNDFPEABI*, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(FLBAEFPLHOF___c_TypeDefinitionIndex)->GetStaticField(0x43528);
	}
	static ::System::Func_2<::NGPNDFPEABI*, ::System::Int64>** StaticGet___9__26_2()
	{
		return (::System::Func_2<::NGPNDFPEABI*, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(FLBAEFPLHOF___c_TypeDefinitionIndex)->GetStaticField(0x43530);
	}
	static ::System::Func_2<::NGPNDFPEABI*, ::System::Int64>** StaticGet___9__26_0()
	{
		return (::System::Func_2<::NGPNDFPEABI*, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(FLBAEFPLHOF___c_TypeDefinitionIndex)->GetStaticField(0x43538);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLBAEFPLHOF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLBAEFPLHOF___C__CTOR_OFFSET))(this);
	}

	::System::Int64 EBJKFPDBMAO(::NGPNDFPEABI* DLJPLHKELCO)
	{
		return ((::System::Int64(*)(::PVOID, ::NGPNDFPEABI*))((::PBYTE)hIl2Cpp + FLBAEFPLHOF___C_EBJKFPDBMAO_OFFSET))(this, DLJPLHKELCO);
	}

	::System::Int64 JJDIPFIBHKC(::NGPNDFPEABI* DLJPLHKELCO)
	{
		return ((::System::Int64(*)(::PVOID, ::NGPNDFPEABI*))((::PBYTE)hIl2Cpp + FLBAEFPLHOF___C_JJDIPFIBHKC_OFFSET))(this, DLJPLHKELCO);
	}

	::System::Int64 IPDBPOKPLGI(::NGPNDFPEABI* DLJPLHKELCO)
	{
		return ((::System::Int64(*)(::PVOID, ::NGPNDFPEABI*))((::PBYTE)hIl2Cpp + FLBAEFPLHOF___C_IPDBPOKPLGI_OFFSET))(this, DLJPLHKELCO);
	}
};
