#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNMDEKMKEKH;
class HKAJMEMCBLC;

#define RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCEDE580)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__DISPLAYCLASS1_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0xCEDF6A0)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__DISPLAYCLASS1_0___CTOR_B__1_OFFSET UNITYSDK_OFFSET(0xCEDF710)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__DISPLAYCLASS1_0___CTOR_B__2_OFFSET UNITYSDK_OFFSET(0xCEDF780)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinCardDeckViewModel___c__DisplayClass1_0_TypeDefinitionIndex = 81134;

	class FateRinCardDeckViewModel___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::FNMDEKMKEKH* cardService; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::HKAJMEMCBLC* __ctor_b__0(::System::UInt32 a1)
		{
			return ((::HKAJMEMCBLC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__DISPLAYCLASS1_0___CTOR_B__0_OFFSET))(this, a1);
		}

		::HKAJMEMCBLC* __ctor_b__1(::System::UInt32 a1)
		{
			return ((::HKAJMEMCBLC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__DISPLAYCLASS1_0___CTOR_B__1_OFFSET))(this, a1);
		}

		::HKAJMEMCBLC* __ctor_b__2(::System::UInt32 a1)
		{
			return ((::HKAJMEMCBLC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__DISPLAYCLASS1_0___CTOR_B__2_OFFSET))(this, a1);
		}

	};
}
