#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define EAIOHODECAO___C_DDEFNEBFCAL_OFFSET UNITYSDK_OFFSET(0x1CD941E0)
#define EAIOHODECAO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD94190)
#define EAIOHODECAO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD941D0)

inline static constexpr unsigned int EAIOHODECAO___c_TypeDefinitionIndex = 29101;

class EAIOHODECAO___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::UInt32, ::System::Int64>** StaticGet___9__22_0()
	{
		return (::System::Func_2<::System::UInt32, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(EAIOHODECAO___c_TypeDefinitionIndex)->GetStaticField(0x25BD0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EAIOHODECAO___c_TypeDefinitionIndex)->GetStaticField(0x25BD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAIOHODECAO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAIOHODECAO___C__CTOR_OFFSET))(this);
	}

	::System::Int64 DDEFNEBFCAL(::System::UInt32 HAAEBCOBKFF)
	{
		return ((::System::Int64(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EAIOHODECAO___C_DDEFNEBFCAL_OFFSET))(this, HAAEBCOBKFF);
	}
};
