#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { class UnityAction; }

#define HEMJCFNNLDD___C_EFILPMJMAIJ_OFFSET UNITYSDK_OFFSET(0x19E0A3B0)
#define HEMJCFNNLDD___C_EIFKGHALIGB_OFFSET UNITYSDK_OFFSET(0x19E0A410)
#define HEMJCFNNLDD___C_OIMLMKEIHIK_OFFSET UNITYSDK_OFFSET(0x19E0A5D0)
#define HEMJCFNNLDD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E0A360)
#define HEMJCFNNLDD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19E0A3A0)

inline static constexpr unsigned int HEMJCFNNLDD___c_TypeDefinitionIndex = 42456;

class HEMJCFNNLDD___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__33_28()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HEMJCFNNLDD___c_TypeDefinitionIndex)->GetStaticField(0x4BAA0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HEMJCFNNLDD___c_TypeDefinitionIndex)->GetStaticField(0x4BAA8);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__33_5()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(HEMJCFNNLDD___c_TypeDefinitionIndex)->GetStaticField(0x4BAB0);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__33_1()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HEMJCFNNLDD___c_TypeDefinitionIndex)->GetStaticField(0x4BAB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEMJCFNNLDD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEMJCFNNLDD___C__CTOR_OFFSET))(this);
	}

	::System::String* EFILPMJMAIJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEMJCFNNLDD___C_EFILPMJMAIJ_OFFSET))(this);
	}

	::System::String* EIFKGHALIGB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEMJCFNNLDD___C_EIFKGHALIGB_OFFSET))(this);
	}

	::System::Void OIMLMKEIHIK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEMJCFNNLDD___C_OIMLMKEIHIK_OFFSET))(this);
	}
};
