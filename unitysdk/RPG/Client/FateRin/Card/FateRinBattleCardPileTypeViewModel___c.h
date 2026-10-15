#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"
class COOONBGCCCM;
namespace RPG::Client::FateRin::Card { class IFateRinBattleCardPileSectionViewModel; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCEE3A00)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCEE3A40)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xCEE3A50)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL___C___CTOR_B__0_2_OFFSET UNITYSDK_OFFSET(0xCEE3A80)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinBattleCardPileTypeViewModel___c_TypeDefinitionIndex = 81121;

	class FateRinBattleCardPileTypeViewModel___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::FateRin::Card::IFateRinBattleCardPileSectionViewModel*>** StaticGet___9__0_2()
		{
			return (::System::Comparison_1<::RPG::Client::FateRin::Card::IFateRinBattleCardPileSectionViewModel*>**)UnitySDK::FromName("RPG.Client.FateRin.Card", "<>c")->GetStaticField(0x55550);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.FateRin.Card", "<>c")->GetStaticField(0x55558);
		}

		static ::System::Func_2<::COOONBGCCCM*, ::RPG::GameCore::FateRinHouguOwnerType>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::COOONBGCCCM*, ::RPG::GameCore::FateRinHouguOwnerType>**)UnitySDK::FromName("RPG.Client.FateRin.Card", "<>c")->GetStaticField(0x55560);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL___C_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FateRinHouguOwnerType __ctor_b__0_0(::COOONBGCCCM* a1)
		{
			return ((::RPG::GameCore::FateRinHouguOwnerType(*)(::PVOID, ::COOONBGCCCM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL___C___CTOR_B__0_0_OFFSET))(this, a1);
		}

		::System::Int32 __ctor_b__0_2(::RPG::Client::FateRin::Card::IFateRinBattleCardPileSectionViewModel* a1, ::RPG::Client::FateRin::Card::IFateRinBattleCardPileSectionViewModel* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinBattleCardPileSectionViewModel*, ::RPG::Client::FateRin::Card::IFateRinBattleCardPileSectionViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL___C___CTOR_B__0_2_OFFSET))(this, a1, a2);
		}

	};
}
