#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define BLJLHGGLLBJ___C_DGDGFILDLGG_OFFSET UNITYSDK_OFFSET(0x14EEAD10)
#define BLJLHGGLLBJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14EEACC0)
#define BLJLHGGLLBJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14EEAD00)

inline static constexpr unsigned int BLJLHGGLLBJ___c_TypeDefinitionIndex = 54360;

class BLJLHGGLLBJ___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__10_3()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(BLJLHGGLLBJ___c_TypeDefinitionIndex)->GetStaticField(0x30CB0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BLJLHGGLLBJ___c_TypeDefinitionIndex)->GetStaticField(0x30CB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLJLHGGLLBJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJLHGGLLBJ___C__CTOR_OFFSET))(this);
	}

	::System::Void DGDGFILDLGG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJLHGGLLBJ___C_DGDGFILDLGG_OFFSET))(this);
	}
};
