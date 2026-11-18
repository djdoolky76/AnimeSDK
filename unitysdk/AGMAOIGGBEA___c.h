#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FGMCNOOCOBM;
namespace System { template <typename T> class Action_1; }

#define AGMAOIGGBEA___C_PLACCFJJGGK_OFFSET UNITYSDK_OFFSET(0x134C5880)
#define AGMAOIGGBEA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x134C5830)
#define AGMAOIGGBEA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x134C5870)

inline static constexpr unsigned int AGMAOIGGBEA___c_TypeDefinitionIndex = 69756;

class AGMAOIGGBEA___c : public ::System::Object
{
public:
	static ::System::Action_1<::FGMCNOOCOBM*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::FGMCNOOCOBM*>**)Il2CppClass::FromTypeDefinitionIndex(AGMAOIGGBEA___c_TypeDefinitionIndex)->GetStaticField(0x36B20);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AGMAOIGGBEA___c_TypeDefinitionIndex)->GetStaticField(0x36B28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGMAOIGGBEA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGMAOIGGBEA___C__CTOR_OFFSET))(this);
	}

	::System::Void PLACCFJJGGK(::FGMCNOOCOBM* EBOJBDAJMOF)
	{
		return ((::System::Void(*)(::PVOID, ::FGMCNOOCOBM*))((::PBYTE)hIl2Cpp + AGMAOIGGBEA___C_PLACCFJJGGK_OFFSET))(this, EBOJBDAJMOF);
	}
};
