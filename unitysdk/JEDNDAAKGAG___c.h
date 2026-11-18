#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define JEDNDAAKGAG___C_CDMPLLBBBKI_OFFSET UNITYSDK_OFFSET(0x130717D0)
#define JEDNDAAKGAG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13071780)
#define JEDNDAAKGAG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x130717C0)

inline static constexpr unsigned int JEDNDAAKGAG___c_TypeDefinitionIndex = 41333;

class JEDNDAAKGAG___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JEDNDAAKGAG___c_TypeDefinitionIndex)->GetStaticField(0x38020);
	}
	static ::System::Func_2<::System::UInt32, ::System::Int32>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(JEDNDAAKGAG___c_TypeDefinitionIndex)->GetStaticField(0x38028);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEDNDAAKGAG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEDNDAAKGAG___C__CTOR_OFFSET))(this);
	}

	::System::Int32 CDMPLLBBBKI(::System::UInt32 HBJOLKHGGDD)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JEDNDAAKGAG___C_CDMPLLBBBKI_OFFSET))(this, HBJOLKHGGDD);
	}
};
