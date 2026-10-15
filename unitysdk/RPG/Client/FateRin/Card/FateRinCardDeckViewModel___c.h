#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::FateRin::Card { class IFateRinSystemCardViewModel; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCEDF320)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCEDF360)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__GETLISTTRANSFEROBJECT_B__6_0_OFFSET UNITYSDK_OFFSET(0xCEDF370)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__GETLISTTRANSFEROBJECT_B__6_1_OFFSET UNITYSDK_OFFSET(0xCEDF480)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__GETLISTTRANSFEROBJECT_B__6_2_OFFSET UNITYSDK_OFFSET(0xCEDF590)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinCardDeckViewModel___c_TypeDefinitionIndex = 81133;

	class FateRinCardDeckViewModel___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::System::UInt32>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client.FateRin.Card", "<>c")->GetStaticField(0x546B0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.FateRin.Card", "<>c")->GetStaticField(0x546B8);
		}

		static ::System::Func_2<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::System::UInt32>** StaticGet___9__6_2()
		{
			return (::System::Func_2<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client.FateRin.Card", "<>c")->GetStaticField(0x546C0);
		}

		static ::System::Func_2<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::System::UInt32>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client.FateRin.Card", "<>c")->GetStaticField(0x546C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetListTransferObject_b__6_0(::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__GETLISTTRANSFEROBJECT_B__6_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetListTransferObject_b__6_1(::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__GETLISTTRANSFEROBJECT_B__6_1_OFFSET))(this, a1);
		}

		::System::UInt32 _GetListTransferObject_b__6_2(::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDDECKVIEWMODEL___C__GETLISTTRANSFEROBJECT_B__6_2_OFFSET))(this, a1);
		}

	};
}
