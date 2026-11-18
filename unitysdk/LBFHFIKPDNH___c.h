#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::Events { class UnityAction; }

#define LBFHFIKPDNH___C_FDNIFJAGMBC_OFFSET UNITYSDK_OFFSET(0x129B5120)
#define LBFHFIKPDNH___C_KAPCGLMBHOP_OFFSET UNITYSDK_OFFSET(0x129B5140)
#define LBFHFIKPDNH___C_PGPJBAGHELD_OFFSET UNITYSDK_OFFSET(0x129B50F0)
#define LBFHFIKPDNH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x129B50A0)
#define LBFHFIKPDNH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x129B50E0)

inline static constexpr unsigned int LBFHFIKPDNH___c_TypeDefinitionIndex = 90516;

class LBFHFIKPDNH___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__7_2()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(LBFHFIKPDNH___c_TypeDefinitionIndex)->GetStaticField(0x32A40);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__7_1()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(LBFHFIKPDNH___c_TypeDefinitionIndex)->GetStaticField(0x32A48);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LBFHFIKPDNH___c_TypeDefinitionIndex)->GetStaticField(0x32A50);
	}
	static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__7_5()
	{
		return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LBFHFIKPDNH___c_TypeDefinitionIndex)->GetStaticField(0x32A58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBFHFIKPDNH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBFHFIKPDNH___C__CTOR_OFFSET))(this);
	}

	::System::Void PGPJBAGHELD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBFHFIKPDNH___C_PGPJBAGHELD_OFFSET))(this);
	}

	::System::Boolean FDNIFJAGMBC(::System::Int32 EOGLMAEPALE)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LBFHFIKPDNH___C_FDNIFJAGMBC_OFFSET))(this, EOGLMAEPALE);
	}

	::System::Void KAPCGLMBHOP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBFHFIKPDNH___C_KAPCGLMBHOP_OFFSET))(this);
	}
};
