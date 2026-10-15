#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::FateRin::Card { class IFateRinBattleCardViewModel; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCEDA490)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCEDA4D0)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL___C___CTOR_B__1_1_OFFSET UNITYSDK_OFFSET(0xCEDA4E0)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinBattleCardPileSectionViewModel___c_TypeDefinitionIndex = 81115;

	class FateRinBattleCardPileSectionViewModel___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel*>** StaticGet___9__1_1()
		{
			return (::System::Comparison_1<::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel*>**)UnitySDK::FromName("RPG.Client.FateRin.Card", "<>c")->GetStaticField(0x544D0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.FateRin.Card", "<>c")->GetStaticField(0x544D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __ctor_b__1_1(::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel* a1, ::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel*, ::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL___C___CTOR_B__1_1_OFFSET))(this, a1, a2);
		}

	};
}
