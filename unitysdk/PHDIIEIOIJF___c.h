#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { class UnityAction; }

#define PHDIIEIOIJF___C_JMMFIHKBJGL_OFFSET UNITYSDK_OFFSET(0x194A05F0)
#define PHDIIEIOIJF___C_OGAMMDMNPLJ_OFFSET UNITYSDK_OFFSET(0x194A0680)
#define PHDIIEIOIJF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x194A05A0)
#define PHDIIEIOIJF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x194A05E0)

inline static constexpr unsigned int PHDIIEIOIJF___c_TypeDefinitionIndex = 48110;

class PHDIIEIOIJF___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PHDIIEIOIJF___c_TypeDefinitionIndex)->GetStaticField(0x39DF0);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__18_14()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PHDIIEIOIJF___c_TypeDefinitionIndex)->GetStaticField(0x39DF8);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__18_17()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(PHDIIEIOIJF___c_TypeDefinitionIndex)->GetStaticField(0x39E00);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHDIIEIOIJF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDIIEIOIJF___C__CTOR_OFFSET))(this);
	}

	::System::Void JMMFIHKBJGL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDIIEIOIJF___C_JMMFIHKBJGL_OFFSET))(this);
	}

	::System::Boolean OGAMMDMNPLJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDIIEIOIJF___C_OGAMMDMNPLJ_OFFSET))(this);
	}
};
