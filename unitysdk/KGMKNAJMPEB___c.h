#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define KGMKNAJMPEB___C_MEKGJHLCPOK_OFFSET UNITYSDK_OFFSET(0x1770C2C0)
#define KGMKNAJMPEB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1770C270)
#define KGMKNAJMPEB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1770C2B0)

inline static constexpr unsigned int KGMKNAJMPEB___c_TypeDefinitionIndex = 70387;

class KGMKNAJMPEB___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::System::Int32>** StaticGet___9__30_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(KGMKNAJMPEB___c_TypeDefinitionIndex)->GetStaticField(0x38220);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KGMKNAJMPEB___c_TypeDefinitionIndex)->GetStaticField(0x38228);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGMKNAJMPEB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMKNAJMPEB___C__CTOR_OFFSET))(this);
	}

	::System::Int32 MEKGJHLCPOK(::System::Int32 IPMMCGDMODG)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KGMKNAJMPEB___C_MEKGJHLCPOK_OFFSET))(this, IPMMCGDMODG);
	}
};
