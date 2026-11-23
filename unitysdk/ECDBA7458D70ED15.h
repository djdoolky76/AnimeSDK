#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Texture2D; }

#define ECDBA7458D70ED15_E2108D7CE84D4997_OFFSET UNITYSDK_OFFSET(0x27F4C60)

inline static constexpr unsigned int ECDBA7458D70ED15_TypeDefinitionIndex = 16791;

class ECDBA7458D70ED15 : public ::System::Object
{
public:
	static ::UnityEngine::Texture2D** StaticGet_FEEABC6811EBD7FF()
	{
		return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(ECDBA7458D70ED15_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::UnityEngine::Texture2D** StaticGet_E7F41875F7F81126()
	{
		return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(ECDBA7458D70ED15_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::UnityEngine::Texture2D** StaticGet_BE23D0DD0E343F55()
	{
		return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(ECDBA7458D70ED15_TypeDefinitionIndex)->GetStaticField(0x10);
	}

	static ::System::Void E2108D7CE84D4997()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECDBA7458D70ED15_E2108D7CE84D4997_OFFSET))();
	}
};
