#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { class UnityAction; }

#define ICCLBIBIBKL___C_HPPLBNIKOLN_OFFSET UNITYSDK_OFFSET(0x1609B0C0)
#define ICCLBIBIBKL___C_IPCDDNMMKPF_OFFSET UNITYSDK_OFFSET(0x1609AC20)
#define ICCLBIBIBKL___C_LOPABKBANAN_OFFSET UNITYSDK_OFFSET(0x1609B6C0)
#define ICCLBIBIBKL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1609ABD0)
#define ICCLBIBIBKL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1609AC10)

inline static constexpr unsigned int ICCLBIBIBKL___c_TypeDefinitionIndex = 60554;

class ICCLBIBIBKL___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ICCLBIBIBKL___c_TypeDefinitionIndex)->GetStaticField(0x46520);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__1_3()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(ICCLBIBIBKL___c_TypeDefinitionIndex)->GetStaticField(0x46528);
	}
	static ::System::Func_1<::MoleMole::UIControllerContextBase*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::MoleMole::UIControllerContextBase*>**)Il2CppClass::FromTypeDefinitionIndex(ICCLBIBIBKL___c_TypeDefinitionIndex)->GetStaticField(0x46530);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__1_2()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ICCLBIBIBKL___c_TypeDefinitionIndex)->GetStaticField(0x46538);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICCLBIBIBKL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCLBIBIBKL___C__CTOR_OFFSET))(this);
	}

	::System::Void IPCDDNMMKPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCLBIBIBKL___C_IPCDDNMMKPF_OFFSET))(this);
	}

	::MoleMole::UIControllerContextBase* HPPLBNIKOLN()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCLBIBIBKL___C_HPPLBNIKOLN_OFFSET))(this);
	}

	::System::String* LOPABKBANAN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCLBIBIBKL___C_LOPABKBANAN_OFFSET))(this);
	}
};
