#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MDLKEKANMHL;
namespace System { template <typename T> class Action_1; }

#define ENMNIAMCFOM___C_LMCEBKILLAE_OFFSET UNITYSDK_OFFSET(0x1237A9A0)
#define ENMNIAMCFOM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1237A950)
#define ENMNIAMCFOM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1237A990)

inline static constexpr unsigned int ENMNIAMCFOM___c_TypeDefinitionIndex = 49616;

class ENMNIAMCFOM___c : public ::System::Object
{
public:
	static ::System::Action_1<::MDLKEKANMHL*>** StaticGet___9__6_0()
	{
		return (::System::Action_1<::MDLKEKANMHL*>**)Il2CppClass::FromTypeDefinitionIndex(ENMNIAMCFOM___c_TypeDefinitionIndex)->GetStaticField(0x37690);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ENMNIAMCFOM___c_TypeDefinitionIndex)->GetStaticField(0x37698);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENMNIAMCFOM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENMNIAMCFOM___C__CTOR_OFFSET))(this);
	}

	::System::Void LMCEBKILLAE(::MDLKEKANMHL* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::MDLKEKANMHL*))((::PBYTE)hIl2Cpp + ENMNIAMCFOM___C_LMCEBKILLAE_OFFSET))(this, MNDIBLLFAJI);
	}
};
