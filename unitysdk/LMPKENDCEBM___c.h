#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define LMPKENDCEBM___C_IIOCKKMLBIM_OFFSET UNITYSDK_OFFSET(0x151AC4B0)
#define LMPKENDCEBM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x151AC460)
#define LMPKENDCEBM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x151AC4A0)

inline static constexpr unsigned int LMPKENDCEBM___c_TypeDefinitionIndex = 80692;

class LMPKENDCEBM___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__2_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LMPKENDCEBM___c_TypeDefinitionIndex)->GetStaticField(0x48490);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LMPKENDCEBM___c_TypeDefinitionIndex)->GetStaticField(0x48498);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMPKENDCEBM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMPKENDCEBM___C__CTOR_OFFSET))(this);
	}

	::System::Void IIOCKKMLBIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMPKENDCEBM___C_IIOCKKMLBIM_OFFSET))(this);
	}
};
