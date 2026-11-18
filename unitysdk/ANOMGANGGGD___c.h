#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BattleGameWeatherAndTime.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define ANOMGANGGGD___C_IIHMGKJGLCJ_OFFSET UNITYSDK_OFFSET(0x12D0EA40)
#define ANOMGANGGGD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12D0E9F0)
#define ANOMGANGGGD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12D0EA30)

inline static constexpr unsigned int ANOMGANGGGD___c_TypeDefinitionIndex = 68166;

class ANOMGANGGGD___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ANOMGANGGGD___c_TypeDefinitionIndex)->GetStaticField(0x45C20);
	}
	static ::System::Comparison_1<::MoleMole::BattleGameWeatherAndTime>** StaticGet___9__68_0()
	{
		return (::System::Comparison_1<::MoleMole::BattleGameWeatherAndTime>**)Il2CppClass::FromTypeDefinitionIndex(ANOMGANGGGD___c_TypeDefinitionIndex)->GetStaticField(0x45C28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANOMGANGGGD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOMGANGGGD___C__CTOR_OFFSET))(this);
	}

	::System::Int32 IIHMGKJGLCJ(::MoleMole::BattleGameWeatherAndTime DPGFPHIMDEL, ::MoleMole::BattleGameWeatherAndTime DLJPLHKELCO)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::BattleGameWeatherAndTime, ::MoleMole::BattleGameWeatherAndTime))((::PBYTE)hIl2Cpp + ANOMGANGGGD___C_IIHMGKJGLCJ_OFFSET))(this, DPGFPHIMDEL, DLJPLHKELCO);
	}
};
