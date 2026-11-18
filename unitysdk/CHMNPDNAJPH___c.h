#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JFDMHLOBDGB;
namespace System { template <typename T> class Action_1; }

#define CHMNPDNAJPH___C_NHALLILJMPC_OFFSET UNITYSDK_OFFSET(0x128FB2F0)
#define CHMNPDNAJPH___C_NODECALALLH_OFFSET UNITYSDK_OFFSET(0x128FB350)
#define CHMNPDNAJPH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x128FB2A0)
#define CHMNPDNAJPH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x128FB2E0)

inline static constexpr unsigned int CHMNPDNAJPH___c_TypeDefinitionIndex = 63597;

class CHMNPDNAJPH___c : public ::System::Object
{
public:
	static ::System::Action_1<::JFDMHLOBDGB*>** StaticGet___9__24_0()
	{
		return (::System::Action_1<::JFDMHLOBDGB*>**)Il2CppClass::FromTypeDefinitionIndex(CHMNPDNAJPH___c_TypeDefinitionIndex)->GetStaticField(0x3D630);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CHMNPDNAJPH___c_TypeDefinitionIndex)->GetStaticField(0x3D638);
	}
	static ::System::Action_1<::JFDMHLOBDGB*>** StaticGet___9__25_0()
	{
		return (::System::Action_1<::JFDMHLOBDGB*>**)Il2CppClass::FromTypeDefinitionIndex(CHMNPDNAJPH___c_TypeDefinitionIndex)->GetStaticField(0x3D640);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHMNPDNAJPH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMNPDNAJPH___C__CTOR_OFFSET))(this);
	}

	::System::Void NHALLILJMPC(::JFDMHLOBDGB* KGCHAPBODFH)
	{
		return ((::System::Void(*)(::PVOID, ::JFDMHLOBDGB*))((::PBYTE)hIl2Cpp + CHMNPDNAJPH___C_NHALLILJMPC_OFFSET))(this, KGCHAPBODFH);
	}

	::System::Void NODECALALLH(::JFDMHLOBDGB* KGCHAPBODFH)
	{
		return ((::System::Void(*)(::PVOID, ::JFDMHLOBDGB*))((::PBYTE)hIl2Cpp + CHMNPDNAJPH___C_NODECALALLH_OFFSET))(this, KGCHAPBODFH);
	}
};
