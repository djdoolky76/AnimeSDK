#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BGKCEMEMPMO;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { class UnityAction; }

#define HCJPJFBDHPL___C_FFMGLDJFDHN_OFFSET UNITYSDK_OFFSET(0x1493BE40)
#define HCJPJFBDHPL___C_GHDBGOMLDKJ_OFFSET UNITYSDK_OFFSET(0x1493BE30)
#define HCJPJFBDHPL___C_HOJHPMDMPPM_OFFSET UNITYSDK_OFFSET(0x1493BE80)
#define HCJPJFBDHPL___C_LCBJCJCIPJP_OFFSET UNITYSDK_OFFSET(0x1493BE90)
#define HCJPJFBDHPL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1493BDE0)
#define HCJPJFBDHPL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1493BE20)

inline static constexpr unsigned int HCJPJFBDHPL___c_TypeDefinitionIndex = 40916;

class HCJPJFBDHPL___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::UInt32, ::System::Int32>** StaticGet___9__41_9()
	{
		return (::System::Func_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HCJPJFBDHPL___c_TypeDefinitionIndex)->GetStaticField(0x442C0);
	}
	static ::System::Action_1<::BGKCEMEMPMO*>** StaticGet___9__42_23()
	{
		return (::System::Action_1<::BGKCEMEMPMO*>**)Il2CppClass::FromTypeDefinitionIndex(HCJPJFBDHPL___c_TypeDefinitionIndex)->GetStaticField(0x442C8);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__42_14()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HCJPJFBDHPL___c_TypeDefinitionIndex)->GetStaticField(0x442D0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HCJPJFBDHPL___c_TypeDefinitionIndex)->GetStaticField(0x442D8);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__42_17()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(HCJPJFBDHPL___c_TypeDefinitionIndex)->GetStaticField(0x442E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCJPJFBDHPL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCJPJFBDHPL___C__CTOR_OFFSET))(this);
	}

	::System::Int32 GHDBGOMLDKJ(::System::UInt32 HAAEBCOBKFF)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HCJPJFBDHPL___C_GHDBGOMLDKJ_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::String* FFMGLDJFDHN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCJPJFBDHPL___C_FFMGLDJFDHN_OFFSET))(this);
	}

	::System::Void HOJHPMDMPPM(::BGKCEMEMPMO* JMFEPDAHBED)
	{
		return ((::System::Void(*)(::PVOID, ::BGKCEMEMPMO*))((::PBYTE)hIl2Cpp + HCJPJFBDHPL___C_HOJHPMDMPPM_OFFSET))(this, JMFEPDAHBED);
	}

	::System::Void LCBJCJCIPJP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCJPJFBDHPL___C_LCBJCJCIPJP_OFFSET))(this);
	}
};
