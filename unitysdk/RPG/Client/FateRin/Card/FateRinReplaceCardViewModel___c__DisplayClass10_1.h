#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::FateRin::Card { class IFateRinSystemCardViewModel; }

#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL___C__DISPLAYCLASS10_1_CTOR_OFFSET UNITYSDK_OFFSET(0xCEF50A0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL___C__DISPLAYCLASS10_1___FINDRECOMMENDEDCARD_B__1_OFFSET UNITYSDK_OFFSET(0xCEF5470)

namespace RPG::Client::FateRin::Card
{
	template <typename T>
	class FateRinReplaceCardViewModel___c__DisplayClass10_1 : public ::System::Object
	{
	public:
		::System::UInt32 defaultID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL___C__DISPLAYCLASS10_1_CTOR_OFFSET))(this);
		}

		::System::Boolean __FindRecommendedCard_b__1(::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL___C__DISPLAYCLASS10_1___FINDRECOMMENDEDCARD_B__1_OFFSET))(this, a1);
		}

	};
}
