#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace UnityEngine::Events { class UnityAction; }

#define NAMHHOMEMKC_LMKOMPAINPE___C_ELLKAOMGHAA_OFFSET UNITYSDK_OFFSET(0x18C49430)
#define NAMHHOMEMKC_LMKOMPAINPE___C_LDMNMKPLBEK_OFFSET UNITYSDK_OFFSET(0x18C49420)
#define NAMHHOMEMKC_LMKOMPAINPE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C493D0)
#define NAMHHOMEMKC_LMKOMPAINPE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18C49410)

inline static constexpr unsigned int NAMHHOMEMKC_LMKOMPAINPE___c_TypeDefinitionIndex = 52387;

class NAMHHOMEMKC_LMKOMPAINPE___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__15_2()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(NAMHHOMEMKC_LMKOMPAINPE___c_TypeDefinitionIndex)->GetStaticField(0x48E80);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__15_1()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(NAMHHOMEMKC_LMKOMPAINPE___c_TypeDefinitionIndex)->GetStaticField(0x48E88);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NAMHHOMEMKC_LMKOMPAINPE___c_TypeDefinitionIndex)->GetStaticField(0x48E90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAMHHOMEMKC_LMKOMPAINPE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMHHOMEMKC_LMKOMPAINPE___C__CTOR_OFFSET))(this);
	}

	::System::Void LDMNMKPLBEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMHHOMEMKC_LMKOMPAINPE___C_LDMNMKPLBEK_OFFSET))(this);
	}

	::System::Void ELLKAOMGHAA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMHHOMEMKC_LMKOMPAINPE___C_ELLKAOMGHAA_OFFSET))(this);
	}
};
