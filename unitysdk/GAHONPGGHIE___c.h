#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MDLKEKANMHL;
namespace System { template <typename T> class Action_1; }

#define GAHONPGGHIE___C_GCAHCNNLBNH_OFFSET UNITYSDK_OFFSET(0x10EDF390)
#define GAHONPGGHIE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10EDF340)
#define GAHONPGGHIE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10EDF380)

inline static constexpr unsigned int GAHONPGGHIE___c_TypeDefinitionIndex = 72093;

class GAHONPGGHIE___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GAHONPGGHIE___c_TypeDefinitionIndex)->GetStaticField(0x377A0);
	}
	static ::System::Action_1<::MDLKEKANMHL*>** StaticGet___9__9_0()
	{
		return (::System::Action_1<::MDLKEKANMHL*>**)Il2CppClass::FromTypeDefinitionIndex(GAHONPGGHIE___c_TypeDefinitionIndex)->GetStaticField(0x377A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAHONPGGHIE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAHONPGGHIE___C__CTOR_OFFSET))(this);
	}

	::System::Void GCAHCNNLBNH(::MDLKEKANMHL* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::MDLKEKANMHL*))((::PBYTE)hIl2Cpp + GAHONPGGHIE___C_GCAHCNNLBNH_OFFSET))(this, MNDIBLLFAJI);
	}
};
