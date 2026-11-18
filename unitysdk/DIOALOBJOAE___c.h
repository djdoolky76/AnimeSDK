#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AEEEIEEIEDG_APIFMGPHIFG.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { class UnityAction; }

#define DIOALOBJOAE___C_BDLJKOJFDND_OFFSET UNITYSDK_OFFSET(0x16BA1F50)
#define DIOALOBJOAE___C_CLPCCILNFKF_OFFSET UNITYSDK_OFFSET(0x16BA1EB0)
#define DIOALOBJOAE___C_DHDJEJMKFDB_OFFSET UNITYSDK_OFFSET(0x16BA1E20)
#define DIOALOBJOAE___C_HAMEPGOJKIP_OFFSET UNITYSDK_OFFSET(0x16BA1E10)
#define DIOALOBJOAE___C_IADMKBPEAIE_OFFSET UNITYSDK_OFFSET(0x16BA1EC0)
#define DIOALOBJOAE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16BA1DC0)
#define DIOALOBJOAE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16BA1E00)

inline static constexpr unsigned int DIOALOBJOAE___c_TypeDefinitionIndex = 85979;

class DIOALOBJOAE___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DIOALOBJOAE___c_TypeDefinitionIndex)->GetStaticField(0x37310);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__58_1()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(DIOALOBJOAE___c_TypeDefinitionIndex)->GetStaticField(0x37318);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__58_0()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(DIOALOBJOAE___c_TypeDefinitionIndex)->GetStaticField(0x37320);
	}
	static ::System::Func_1<::System::Object*>** StaticGet___9__58_9()
	{
		return (::System::Func_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(DIOALOBJOAE___c_TypeDefinitionIndex)->GetStaticField(0x37328);
	}
	static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__58_12()
	{
		return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DIOALOBJOAE___c_TypeDefinitionIndex)->GetStaticField(0x37330);
	}
	static ::System::Func_1<::System::Object*>** StaticGet___9__58_18()
	{
		return (::System::Func_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(DIOALOBJOAE___c_TypeDefinitionIndex)->GetStaticField(0x37338);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIOALOBJOAE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOALOBJOAE___C__CTOR_OFFSET))(this);
	}

	::AEEEIEEIEDG_APIFMGPHIFG HAMEPGOJKIP()
	{
		return ((::AEEEIEEIEDG_APIFMGPHIFG(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOALOBJOAE___C_HAMEPGOJKIP_OFFSET))(this);
	}

	::System::Void DHDJEJMKFDB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOALOBJOAE___C_DHDJEJMKFDB_OFFSET))(this);
	}

	::AEEEIEEIEDG_APIFMGPHIFG CLPCCILNFKF()
	{
		return ((::AEEEIEEIEDG_APIFMGPHIFG(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOALOBJOAE___C_CLPCCILNFKF_OFFSET))(this);
	}

	::System::Void IADMKBPEAIE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOALOBJOAE___C_IADMKBPEAIE_OFFSET))(this);
	}

	::System::String* BDLJKOJFDND(::System::Int32 EOGLMAEPALE)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DIOALOBJOAE___C_BDLJKOJFDND_OFFSET))(this, EOGLMAEPALE);
	}
};
