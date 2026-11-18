#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { class UnityAction; }

#define KKCONENFKCG___C_AMABEFBJFAA_OFFSET UNITYSDK_OFFSET(0x1995C9B0)
#define KKCONENFKCG___C_FDDINEKPHPJ_OFFSET UNITYSDK_OFFSET(0x1995C830)
#define KKCONENFKCG___C_IPCDDNMMKPF_OFFSET UNITYSDK_OFFSET(0x1995C7E0)
#define KKCONENFKCG___C_JHMPNJLFHKC_OFFSET UNITYSDK_OFFSET(0x1995C820)
#define KKCONENFKCG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1995C790)
#define KKCONENFKCG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1995C7D0)

inline static constexpr unsigned int KKCONENFKCG___c_TypeDefinitionIndex = 61973;

class KKCONENFKCG___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__1_1()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(KKCONENFKCG___c_TypeDefinitionIndex)->GetStaticField(0x445A0);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__1_3()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KKCONENFKCG___c_TypeDefinitionIndex)->GetStaticField(0x445A8);
	}
	static ::System::Func_1<::UnityEngine::Events::UnityAction*>** StaticGet___9__1_4()
	{
		return (::System::Func_1<::UnityEngine::Events::UnityAction*>**)Il2CppClass::FromTypeDefinitionIndex(KKCONENFKCG___c_TypeDefinitionIndex)->GetStaticField(0x445B0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KKCONENFKCG___c_TypeDefinitionIndex)->GetStaticField(0x445B8);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__1_9()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(KKCONENFKCG___c_TypeDefinitionIndex)->GetStaticField(0x445C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKCONENFKCG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCONENFKCG___C__CTOR_OFFSET))(this);
	}

	::System::String* IPCDDNMMKPF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCONENFKCG___C_IPCDDNMMKPF_OFFSET))(this);
	}

	::System::Boolean JHMPNJLFHKC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCONENFKCG___C_JHMPNJLFHKC_OFFSET))(this);
	}

	::System::Void FDDINEKPHPJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCONENFKCG___C_FDDINEKPHPJ_OFFSET))(this);
	}

	::UnityEngine::Events::UnityAction* AMABEFBJFAA()
	{
		return ((::UnityEngine::Events::UnityAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCONENFKCG___C_AMABEFBJFAA_OFFSET))(this);
	}
};
