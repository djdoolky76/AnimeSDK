#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define FBOEIPAKKDL___C_MKNJCDNIDNN_OFFSET UNITYSDK_OFFSET(0x10F5A1F0)
#define FBOEIPAKKDL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10F5A1A0)
#define FBOEIPAKKDL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10F5A1E0)

inline static constexpr unsigned int FBOEIPAKKDL___c_TypeDefinitionIndex = 89144;

class FBOEIPAKKDL___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__8_2()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(FBOEIPAKKDL___c_TypeDefinitionIndex)->GetStaticField(0x3DB20);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FBOEIPAKKDL___c_TypeDefinitionIndex)->GetStaticField(0x3DB28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBOEIPAKKDL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOEIPAKKDL___C__CTOR_OFFSET))(this);
	}

	::System::Void MKNJCDNIDNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOEIPAKKDL___C_MKNJCDNIDNN_OFFSET))(this);
	}
};
