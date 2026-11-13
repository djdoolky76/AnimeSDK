#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATUIUSECOLORDICEPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5115C0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatUIUseColorDiceParam_TypeDefinitionIndex = 78358;

	class DiceCombatUIUseColorDiceParam : public ::System::Object
	{
	public:
		::System::String* DiceName; // 0x10
		::System::UInt32 DiceID; // 0x18
		::System::Boolean IsPlayer; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 ContentID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUIUSECOLORDICEPARAM_CTOR_OFFSET))(this);
		}

	};
}
