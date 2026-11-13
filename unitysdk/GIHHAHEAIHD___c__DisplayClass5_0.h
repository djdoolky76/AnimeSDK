#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIHHAHEAIHD;

#define GIHHAHEAIHD___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1A3DD2A0)
#define GIHHAHEAIHD___C__DISPLAYCLASS5_0___ONBATTLEGAMEPAGEONTURNAVATARCHANGEBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0x1A3DD830)

inline static constexpr unsigned int GIHHAHEAIHD___c__DisplayClass5_0_TypeDefinitionIndex = 74280;

	class GIHHAHEAIHD___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::GIHHAHEAIHD* __4__this; // 0x10
		::System::UInt32 avatarID; // 0x18
		::System::UInt32 ultraSkillID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIHHAHEAIHD___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Void __OnBattleGamePageOnTurnAvatarChangeBegin_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIHHAHEAIHD___C__DISPLAYCLASS5_0___ONBATTLEGAMEPAGEONTURNAVATARCHANGEBEGIN_B__0_OFFSET))(this);
		}

	};
