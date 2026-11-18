#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IPIDDNLDJDF;
namespace System { template <typename T1, typename T2> class Func_2; }

#define KAKKDJEMAAP___C_JABIBFFAKEN_OFFSET UNITYSDK_OFFSET(0x1B4FE890)
#define KAKKDJEMAAP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4FE840)
#define KAKKDJEMAAP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4FE880)

inline static constexpr unsigned int KAKKDJEMAAP___c_TypeDefinitionIndex = 14743;

class KAKKDJEMAAP___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KAKKDJEMAAP___c_TypeDefinitionIndex)->GetStaticField(0x7770);
	}
	static ::System::Func_2<::IPIDDNLDJDF*, ::System::Int32>** StaticGet___9__13_0()
	{
		return (::System::Func_2<::IPIDDNLDJDF*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(KAKKDJEMAAP___c_TypeDefinitionIndex)->GetStaticField(0x7778);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KAKKDJEMAAP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKKDJEMAAP___C__CTOR_OFFSET))(this);
	}

	::System::Int32 JABIBFFAKEN(::IPIDDNLDJDF* HAAEBCOBKFF)
	{
		return ((::System::Int32(*)(::PVOID, ::IPIDDNLDJDF*))((::PBYTE)hIl2Cpp + KAKKDJEMAAP___C_JABIBFFAKEN_OFFSET))(this, HAAEBCOBKFF);
	}
};
