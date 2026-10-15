#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNJNHIAPNKD;

#define MNJNHIAPNKD___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBA0F170)
#define MNJNHIAPNKD___C__DISPLAYCLASS8_0___ONBATTLEGAMEPAGEONTURNAVATARCHANGEBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0xBA0FB30)

	class MNJNHIAPNKD___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::MNJNHIAPNKD* __4__this; // 0x10
		::System::UInt32 avatarID; // 0x18
		::System::UInt32 ultraSkillID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJNHIAPNKD___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::System::Void __OnBattleGamePageOnTurnAvatarChangeBegin_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJNHIAPNKD___C__DISPLAYCLASS8_0___ONBATTLEGAMEPAGEONTURNAVATARCHANGEBEGIN_B__0_OFFSET))(this);
		}

	};
