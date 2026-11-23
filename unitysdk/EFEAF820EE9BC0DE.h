#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define EFEAF820EE9BC0DE_ACA61538B6018169_OFFSET UNITYSDK_OFFSET(0x28120E0)
#define EFEAF820EE9BC0DE_B126264F0556E8A0_OFFSET UNITYSDK_OFFSET(0x28120A0)
#define EFEAF820EE9BC0DE_E2108D7CE84D4997_OFFSET UNITYSDK_OFFSET(0x2811F00)
#define EFEAF820EE9BC0DE_EB3041BAA1A6B140_OFFSET UNITYSDK_OFFSET(0x2811E40)

inline static constexpr unsigned int EFEAF820EE9BC0DE_TypeDefinitionIndex = 16890;

class EFEAF820EE9BC0DE : public ::System::Object
{
public:
	static ::UnityEngine::Material** StaticGet_E7C04357ECF6E053()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EFEAF820EE9BC0DE_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::UnityEngine::Material** StaticGet_A7DAF5C5DB9DCA1F()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EFEAF820EE9BC0DE_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::UnityEngine::Material* ACA61538B6018169()
	{
		return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + EFEAF820EE9BC0DE_ACA61538B6018169_OFFSET))();
	}

	static ::UnityEngine::Material* B126264F0556E8A0()
	{
		return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + EFEAF820EE9BC0DE_B126264F0556E8A0_OFFSET))();
	}

	static ::System::Void E2108D7CE84D4997()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFEAF820EE9BC0DE_E2108D7CE84D4997_OFFSET))();
	}

	static ::System::Void EB3041BAA1A6B140()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFEAF820EE9BC0DE_EB3041BAA1A6B140_OFFSET))();
	}
};
