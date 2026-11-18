#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MDLKEKANMHL;
namespace System { template <typename T> class Action_1; }

#define JIIHIDJPNEA___C_LMCEBKILLAE_OFFSET UNITYSDK_OFFSET(0x17B27E60)
#define JIIHIDJPNEA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B27E10)
#define JIIHIDJPNEA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17B27E50)

inline static constexpr unsigned int JIIHIDJPNEA___c_TypeDefinitionIndex = 69156;

class JIIHIDJPNEA___c : public ::System::Object
{
public:
	static ::System::Action_1<::MDLKEKANMHL*>** StaticGet___9__6_0()
	{
		return (::System::Action_1<::MDLKEKANMHL*>**)Il2CppClass::FromTypeDefinitionIndex(JIIHIDJPNEA___c_TypeDefinitionIndex)->GetStaticField(0x32600);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JIIHIDJPNEA___c_TypeDefinitionIndex)->GetStaticField(0x32608);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIIHIDJPNEA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIIHIDJPNEA___C__CTOR_OFFSET))(this);
	}

	::System::Void LMCEBKILLAE(::MDLKEKANMHL* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::MDLKEKANMHL*))((::PBYTE)hIl2Cpp + JIIHIDJPNEA___C_LMCEBKILLAE_OFFSET))(this, MNDIBLLFAJI);
	}
};
