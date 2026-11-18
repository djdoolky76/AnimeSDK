#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FHJPJMKIHBG.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define LAOFMGLNGDD___C_BAFBHAFMMCM_OFFSET UNITYSDK_OFFSET(0x19977C80)
#define LAOFMGLNGDD___C_HMJIDKNFFDD_OFFSET UNITYSDK_OFFSET(0x19977B50)
#define LAOFMGLNGDD___C_IPNFNIMCLNP_OFFSET UNITYSDK_OFFSET(0x19977BE0)
#define LAOFMGLNGDD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19977B00)
#define LAOFMGLNGDD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19977B40)

inline static constexpr unsigned int LAOFMGLNGDD___c_TypeDefinitionIndex = 74232;

class LAOFMGLNGDD___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LAOFMGLNGDD___c_TypeDefinitionIndex)->GetStaticField(0x44660);
	}
	static ::System::Func_2<::FHJPJMKIHBG, ::System::String*>** StaticGet___9__17_0()
	{
		return (::System::Func_2<::FHJPJMKIHBG, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(LAOFMGLNGDD___c_TypeDefinitionIndex)->GetStaticField(0x44668);
	}
	static ::System::Func_2<::System::String*, ::System::Boolean>** StaticGet___9__42_0()
	{
		return (::System::Func_2<::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LAOFMGLNGDD___c_TypeDefinitionIndex)->GetStaticField(0x44670);
	}
	static ::System::Func_2<::FHJPJMKIHBG, ::System::String*>** StaticGet___9__17_1()
	{
		return (::System::Func_2<::FHJPJMKIHBG, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(LAOFMGLNGDD___c_TypeDefinitionIndex)->GetStaticField(0x44678);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAOFMGLNGDD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOFMGLNGDD___C__CTOR_OFFSET))(this);
	}

	::System::Boolean HMJIDKNFFDD(::System::String* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LAOFMGLNGDD___C_HMJIDKNFFDD_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::String* IPNFNIMCLNP(::FHJPJMKIHBG KEIOCKIIGBE)
	{
		return ((::System::String*(*)(::PVOID, ::FHJPJMKIHBG))((::PBYTE)hIl2Cpp + LAOFMGLNGDD___C_IPNFNIMCLNP_OFFSET))(this, KEIOCKIIGBE);
	}

	::System::String* BAFBHAFMMCM(::FHJPJMKIHBG KEIOCKIIGBE)
	{
		return ((::System::String*(*)(::PVOID, ::FHJPJMKIHBG))((::PBYTE)hIl2Cpp + LAOFMGLNGDD___C_BAFBHAFMMCM_OFFSET))(this, KEIOCKIIGBE);
	}
};
