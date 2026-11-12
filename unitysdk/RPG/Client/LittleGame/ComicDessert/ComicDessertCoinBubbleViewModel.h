#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertCustomerBubbleViewModelBase.h"
namespace RPG::Client::LittleGame::ComicDessert { class ComicDessertCoinBubbleViewModel; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOINBUBBLEVIEWMODEL_ADD_TIPSLANDED_OFFSET UNITYSDK_OFFSET(0xDE7AF90)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOINBUBBLEVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xDE7AF10)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOINBUBBLEVIEWMODEL_GET_ATTACHPOINTNAME_OFFSET UNITYSDK_OFFSET(0xDE7B1F0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOINBUBBLEVIEWMODEL_GET_COINAMOUNT_OFFSET UNITYSDK_OFFSET(0xDE7AF40)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOINBUBBLEVIEWMODEL_GET_HASTIPSLANDED_OFFSET UNITYSDK_OFFSET(0xDE7AF80)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOINBUBBLEVIEWMODEL_GET_ISLONGTAIL_OFFSET UNITYSDK_OFFSET(0xDE7AF60)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOINBUBBLEVIEWMODEL_NOTIFYTIPSLANDED_OFFSET UNITYSDK_OFFSET(0xDE7B180)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOINBUBBLEVIEWMODEL_REMOVE_TIPSLANDED_OFFSET UNITYSDK_OFFSET(0xDE7AFF0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOINBUBBLEVIEWMODEL_SET_COINAMOUNT_OFFSET UNITYSDK_OFFSET(0xDE7AF50)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOINBUBBLEVIEWMODEL_SET_ISLONGTAIL_OFFSET UNITYSDK_OFFSET(0xDE7AF70)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOINBUBBLEVIEWMODEL_SHOW_OFFSET UNITYSDK_OFFSET(0xDE7B050)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertCoinBubbleViewModel_TypeDefinitionIndex = 80108;

	class ComicDessertCoinBubbleViewModel : public ::RPG::Client::LittleGame::ComicDessert::ComicDessertCustomerBubbleViewModelBase
	{
	public:
		::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertCoinBubbleViewModel*>* TipsLanded; // 0x38
		::System::UInt32 _CoinAmount_k__BackingField; // 0x40
		::System::Boolean _IsLongTail_k__BackingField; // 0x44
		::System::Boolean _TipsLanded; // 0x45
		::System::Void _ctor(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOINBUBBLEVIEWMODEL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_CoinAmount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOINBUBBLEVIEWMODEL_GET_COINAMOUNT_OFFSET))(this);
		}

		::System::Void set_CoinAmount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOINBUBBLEVIEWMODEL_SET_COINAMOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLongTail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOINBUBBLEVIEWMODEL_GET_ISLONGTAIL_OFFSET))(this);
		}

		::System::Void set_IsLongTail(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOINBUBBLEVIEWMODEL_SET_ISLONGTAIL_OFFSET))(this, a1);
		}

		::System::Boolean get_HasTipsLanded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOINBUBBLEVIEWMODEL_GET_HASTIPSLANDED_OFFSET))(this);
		}

		::System::Void add_TipsLanded(::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertCoinBubbleViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertCoinBubbleViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOINBUBBLEVIEWMODEL_ADD_TIPSLANDED_OFFSET))(this, a1);
		}

		::System::Void remove_TipsLanded(::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertCoinBubbleViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertCoinBubbleViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOINBUBBLEVIEWMODEL_REMOVE_TIPSLANDED_OFFSET))(this, a1);
		}

		::System::Int32 Show(::System::UInt32 a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOINBUBBLEVIEWMODEL_SHOW_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NotifyTipsLanded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOINBUBBLEVIEWMODEL_NOTIFYTIPSLANDED_OFFSET))(this);
		}

		::System::String* get_AttachPointName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOINBUBBLEVIEWMODEL_GET_ATTACHPOINTNAME_OFFSET))(this);
		}

	};
}
