#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IBENDELLLAO;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { class UnityAction; }

#define APBCGGNKBPO___C_BFFBJGCMKME_OFFSET UNITYSDK_OFFSET(0xF77D1F0)
#define APBCGGNKBPO___C_FJEDLKMKKKO_OFFSET UNITYSDK_OFFSET(0xF77D2C0)
#define APBCGGNKBPO___C_LFNGDHFHLNM_OFFSET UNITYSDK_OFFSET(0xF77D110)
#define APBCGGNKBPO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF77D0C0)
#define APBCGGNKBPO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF77D100)

inline static constexpr unsigned int APBCGGNKBPO___c_TypeDefinitionIndex = 75827;

class APBCGGNKBPO___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__11_1()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(APBCGGNKBPO___c_TypeDefinitionIndex)->GetStaticField(0x36CD0);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__11_0()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(APBCGGNKBPO___c_TypeDefinitionIndex)->GetStaticField(0x36CD8);
	}
	static ::System::Func_2<::System::Int32, ::IBENDELLLAO*>** StaticGet___9__11_4()
	{
		return (::System::Func_2<::System::Int32, ::IBENDELLLAO*>**)Il2CppClass::FromTypeDefinitionIndex(APBCGGNKBPO___c_TypeDefinitionIndex)->GetStaticField(0x36CE0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(APBCGGNKBPO___c_TypeDefinitionIndex)->GetStaticField(0x36CE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APBCGGNKBPO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APBCGGNKBPO___C__CTOR_OFFSET))(this);
	}

	::IBENDELLLAO* LFNGDHFHLNM(::System::Int32 EOGLMAEPALE)
	{
		return ((::IBENDELLLAO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + APBCGGNKBPO___C_LFNGDHFHLNM_OFFSET))(this, EOGLMAEPALE);
	}

	::System::Void BFFBJGCMKME()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APBCGGNKBPO___C_BFFBJGCMKME_OFFSET))(this);
	}

	::System::Boolean FJEDLKMKKKO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APBCGGNKBPO___C_FJEDLKMKKKO_OFFSET))(this);
	}
};
