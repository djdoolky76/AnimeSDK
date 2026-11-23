#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define E575F2E717470F4A_A56FE18AA2A2C2B2_OFFSET UNITYSDK_OFFSET(0x40A0F50)
#define E575F2E717470F4A__CCTOR_OFFSET UNITYSDK_OFFSET(0x40A0F80)

inline static constexpr unsigned int E575F2E717470F4A_TypeDefinitionIndex = 18191;

class E575F2E717470F4A : public ::System::Object
{
public:
	static ::UnityEngine::Vector2* StaticGet_EE77E78C4CAC436C()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(E575F2E717470F4A_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::UnityEngine::Vector2* StaticGet_AE036D23F6BAB2FE()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(E575F2E717470F4A_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E575F2E717470F4A__CCTOR_OFFSET))();
	}

	static ::System::Boolean A56FE18AA2A2C2B2(::System::Single B35BBBE7E39341A2, ::System::Single AE40CAA6BBFEAD2C)
	{
		return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + E575F2E717470F4A_A56FE18AA2A2C2B2_OFFSET))(B35BBBE7E39341A2, AE40CAA6BBFEAD2C);
	}
};
