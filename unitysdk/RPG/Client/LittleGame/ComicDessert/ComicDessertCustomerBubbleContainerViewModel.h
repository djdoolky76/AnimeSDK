#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComicDessertTalkBubbleType.h"
#include "unitysdk/System/Object.h"
class CHKJLBNBPNI;
class DFJCLNAMIBO;
class EJJDGONFDOC;
class FBBOOMNPADI;
class LPHINGPIEAJ;
namespace RPG::Client::LittleGame::ComicDessert { class ComicDessertCoinBubbleViewModel; }
namespace RPG::Client::LittleGame::ComicDessert { class ComicDessertEmojiBubbleViewModel; }
namespace RPG::Client::LittleGame::ComicDessert { class ComicDessertEmotionBubbleViewModel; }
namespace RPG::Client::LittleGame::ComicDessert { class ComicDessertOrderBubbleServeAreaQuery; }
namespace RPG::Client::LittleGame::ComicDessert { class ComicDessertOrderBubbleViewModel; }
namespace RPG::Client::LittleGame::ComicDessert { class ComicDessertTalkBubbleViewModel; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_ADD_ONCOINBUBBLEADDED_OFFSET UNITYSDK_OFFSET(0xDE7E020)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_ADD_ONCOINBUBBLEREMOVED_OFFSET UNITYSDK_OFFSET(0xDE7E0E0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_ADD_ONEMOJIBUBBLEADDED_OFFSET UNITYSDK_OFFSET(0xDE7DD00)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_ADD_ONEMOJIBUBBLEREMOVED_OFFSET UNITYSDK_OFFSET(0xDE7DDC0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_ADD_ONEMOTIONBUBBLEADDED_OFFSET UNITYSDK_OFFSET(0xDE7E1A0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_ADD_ONEMOTIONBUBBLEREMOVED_OFFSET UNITYSDK_OFFSET(0xDE7E280)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_ADD_ONORDERBUBBLEADDED_OFFSET UNITYSDK_OFFSET(0xDE7DB60)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_ADD_ONORDERBUBBLEREMOVED_OFFSET UNITYSDK_OFFSET(0xDE7DC20)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_ADD_ONTALKBUBBLEADDED_OFFSET UNITYSDK_OFFSET(0xDE7DEA0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_ADD_ONTALKBUBBLEREMOVED_OFFSET UNITYSDK_OFFSET(0xDE7DF60)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_CLEARALLORDERBUBBLESELECTED_OFFSET UNITYSDK_OFFSET(0xDE80B80)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_CLEAR_OFFSET UNITYSDK_OFFSET(0xDE813A0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xDE81BA0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_HIDECOINBUBBLE_OFFSET UNITYSDK_OFFSET(0xDE7FDB0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_HIDEEMOJIBUBBLE_OFFSET UNITYSDK_OFFSET(0xDE7F260)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_HIDEEMOTIONBUBBLE_OFFSET UNITYSDK_OFFSET(0xDE80470)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_HIDETALKBUBBLE_1_OFFSET UNITYSDK_OFFSET(0xDE7F880)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_HIDETALKBUBBLE_OFFSET UNITYSDK_OFFSET(0xDE7F710)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_PULSEORDERBUBBLEWRONGSERVE_OFFSET UNITYSDK_OFFSET(0xDE80A00)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_REMOVE_ONCOINBUBBLEADDED_OFFSET UNITYSDK_OFFSET(0xDE7E080)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_REMOVE_ONCOINBUBBLEREMOVED_OFFSET UNITYSDK_OFFSET(0xDE7E140)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_REMOVE_ONEMOJIBUBBLEADDED_OFFSET UNITYSDK_OFFSET(0xDE7DD60)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_REMOVE_ONEMOJIBUBBLEREMOVED_OFFSET UNITYSDK_OFFSET(0xDE7DE30)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_REMOVE_ONEMOTIONBUBBLEADDED_OFFSET UNITYSDK_OFFSET(0xDE7E210)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_REMOVE_ONEMOTIONBUBBLEREMOVED_OFFSET UNITYSDK_OFFSET(0xDE7E2E0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_REMOVE_ONORDERBUBBLEADDED_OFFSET UNITYSDK_OFFSET(0xDE7DBC0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_REMOVE_ONORDERBUBBLEREMOVED_OFFSET UNITYSDK_OFFSET(0xDE7DC90)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_REMOVE_ONTALKBUBBLEADDED_OFFSET UNITYSDK_OFFSET(0xDE7DF00)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_REMOVE_ONTALKBUBBLEREMOVED_OFFSET UNITYSDK_OFFSET(0xDE7DFC0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_REPLAYEXISTINGBUBBLES_OFFSET UNITYSDK_OFFSET(0xDE80DE0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_SETCOINTIPSLANDEDHANDLER_OFFSET UNITYSDK_OFFSET(0xDE7FCE0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_SETORDERBUBBLESELECTED_OFFSET UNITYSDK_OFFSET(0xDE80840)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_SETSERVEAREAQUERYHANDLER_OFFSET UNITYSDK_OFFSET(0xDE80D20)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_SETSERVEAREAQUERY_OFFSET UNITYSDK_OFFSET(0xDE80D70)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_SHOWCOINBUBBLE_OFFSET UNITYSDK_OFFSET(0xDE7F990)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_SHOWEMOJIBUBBLE_OFFSET UNITYSDK_OFFSET(0xDE7EFD0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_SHOWEMOTIONBUBBLE_OFFSET UNITYSDK_OFFSET(0xDE7FF70)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_SHOWTALKBUBBLE_OFFSET UNITYSDK_OFFSET(0xDE7F410)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_SYNCCUSTOMERS_OFFSET UNITYSDK_OFFSET(0xDE7E340)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL__ONCOINTIPSLANDED_OFFSET UNITYSDK_OFFSET(0xDE7FD30)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL__RECONCILELEFTCOINBUBBLES_OFFSET UNITYSDK_OFFSET(0xDE7EE20)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL__REMOVEACTIVEEMOTIONBUBBLE_OFFSET UNITYSDK_OFFSET(0xDE80360)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertCustomerBubbleContainerViewModel_TypeDefinitionIndex = 80110;

	class ComicDessertCustomerBubbleContainerViewModel : public ::System::Object
	{
	public:
		::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertTalkBubbleViewModel*>* OnTalkBubbleRemoved; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* _RemoveDeadBuffer; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::LittleGame::ComicDessert::ComicDessertTalkBubbleViewModel*>* _TalkBubbles; // 0x20
		::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertEmotionBubbleViewModel*>* OnEmotionBubbleRemoved; // 0x28
		::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertTalkBubbleViewModel*>* OnTalkBubbleAdded; // 0x30
		::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertOrderBubbleViewModel*>* OnOrderBubbleAdded; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::LittleGame::ComicDessert::ComicDessertEmojiBubbleViewModel*>* _EmojiBubbles; // 0x40
		::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertCoinBubbleViewModel*>* OnCoinBubbleAdded; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::CHKJLBNBPNI*>* _EmotionStates; // 0x50
		::System::Action_2<::System::Int32, ::System::UInt32>* _CoinTipsLandedHandler; // 0x58
		::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertCoinBubbleViewModel*>* OnCoinBubbleRemoved; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::LittleGame::ComicDessert::ComicDessertCoinBubbleViewModel*>* _CoinBubbles; // 0x68
		::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertOrderBubbleServeAreaQuery*>* _ServeAreaQueryHandler; // 0x70
		::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertEmojiBubbleViewModel*>* OnEmojiBubbleAdded; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::LittleGame::ComicDessert::ComicDessertEmotionBubbleViewModel*>* _EmotionBubbles; // 0x80
		::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertEmojiBubbleViewModel*>* OnEmojiBubbleRemoved; // 0x88
		::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertOrderBubbleViewModel*>* OnOrderBubbleRemoved; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::LittleGame::ComicDessert::ComicDessertOrderBubbleViewModel*>* _OrderBubbles; // 0x98
		::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertEmotionBubbleViewModel*>* OnEmotionBubbleAdded; // 0xA0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_CTOR_OFFSET))(this);
		}

		::System::Void add_OnOrderBubbleAdded(::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertOrderBubbleViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertOrderBubbleViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_ADD_ONORDERBUBBLEADDED_OFFSET))(this, a1);
		}

		::System::Void remove_OnOrderBubbleAdded(::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertOrderBubbleViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertOrderBubbleViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_REMOVE_ONORDERBUBBLEADDED_OFFSET))(this, a1);
		}

		::System::Void add_OnOrderBubbleRemoved(::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertOrderBubbleViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertOrderBubbleViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_ADD_ONORDERBUBBLEREMOVED_OFFSET))(this, a1);
		}

		::System::Void remove_OnOrderBubbleRemoved(::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertOrderBubbleViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertOrderBubbleViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_REMOVE_ONORDERBUBBLEREMOVED_OFFSET))(this, a1);
		}

		::System::Void add_OnEmojiBubbleAdded(::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertEmojiBubbleViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertEmojiBubbleViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_ADD_ONEMOJIBUBBLEADDED_OFFSET))(this, a1);
		}

		::System::Void remove_OnEmojiBubbleAdded(::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertEmojiBubbleViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertEmojiBubbleViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_REMOVE_ONEMOJIBUBBLEADDED_OFFSET))(this, a1);
		}

		::System::Void add_OnEmojiBubbleRemoved(::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertEmojiBubbleViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertEmojiBubbleViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_ADD_ONEMOJIBUBBLEREMOVED_OFFSET))(this, a1);
		}

		::System::Void remove_OnEmojiBubbleRemoved(::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertEmojiBubbleViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertEmojiBubbleViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_REMOVE_ONEMOJIBUBBLEREMOVED_OFFSET))(this, a1);
		}

		::System::Void add_OnTalkBubbleAdded(::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertTalkBubbleViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertTalkBubbleViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_ADD_ONTALKBUBBLEADDED_OFFSET))(this, a1);
		}

		::System::Void remove_OnTalkBubbleAdded(::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertTalkBubbleViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertTalkBubbleViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_REMOVE_ONTALKBUBBLEADDED_OFFSET))(this, a1);
		}

		::System::Void add_OnTalkBubbleRemoved(::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertTalkBubbleViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertTalkBubbleViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_ADD_ONTALKBUBBLEREMOVED_OFFSET))(this, a1);
		}

		::System::Void remove_OnTalkBubbleRemoved(::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertTalkBubbleViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertTalkBubbleViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_REMOVE_ONTALKBUBBLEREMOVED_OFFSET))(this, a1);
		}

		::System::Void add_OnCoinBubbleAdded(::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertCoinBubbleViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertCoinBubbleViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_ADD_ONCOINBUBBLEADDED_OFFSET))(this, a1);
		}

		::System::Void remove_OnCoinBubbleAdded(::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertCoinBubbleViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertCoinBubbleViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_REMOVE_ONCOINBUBBLEADDED_OFFSET))(this, a1);
		}

		::System::Void add_OnCoinBubbleRemoved(::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertCoinBubbleViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertCoinBubbleViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_ADD_ONCOINBUBBLEREMOVED_OFFSET))(this, a1);
		}

		::System::Void remove_OnCoinBubbleRemoved(::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertCoinBubbleViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertCoinBubbleViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_REMOVE_ONCOINBUBBLEREMOVED_OFFSET))(this, a1);
		}

		::System::Void add_OnEmotionBubbleAdded(::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertEmotionBubbleViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertEmotionBubbleViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_ADD_ONEMOTIONBUBBLEADDED_OFFSET))(this, a1);
		}

		::System::Void remove_OnEmotionBubbleAdded(::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertEmotionBubbleViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertEmotionBubbleViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_REMOVE_ONEMOTIONBUBBLEADDED_OFFSET))(this, a1);
		}

		::System::Void add_OnEmotionBubbleRemoved(::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertEmotionBubbleViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertEmotionBubbleViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_ADD_ONEMOTIONBUBBLEREMOVED_OFFSET))(this, a1);
		}

		::System::Void remove_OnEmotionBubbleRemoved(::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertEmotionBubbleViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertEmotionBubbleViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_REMOVE_ONEMOTIONBUBBLEREMOVED_OFFSET))(this, a1);
		}

		::System::Void SyncCustomers(::Il2CppArray<::LPHINGPIEAJ*>* a1, ::EJJDGONFDOC* a2, ::FBBOOMNPADI* a3, ::DFJCLNAMIBO* a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::LPHINGPIEAJ*>*, ::EJJDGONFDOC*, ::FBBOOMNPADI*, ::DFJCLNAMIBO*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_SYNCCUSTOMERS_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 ShowEmojiBubble(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_SHOWEMOJIBUBBLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HideEmojiBubble(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_HIDEEMOJIBUBBLE_OFFSET))(this, a1, a2);
		}

		::System::Int32 ShowTalkBubble(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3, ::RPG::GameCore::ComicDessertTalkBubbleType a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*, ::System::String*, ::RPG::GameCore::ComicDessertTalkBubbleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_SHOWTALKBUBBLE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HideTalkBubble(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_HIDETALKBUBBLE_OFFSET))(this, a1, a2);
		}

		::System::Void HideTalkBubble_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_HIDETALKBUBBLE_1_OFFSET))(this, a1);
		}

		::System::Int32 ShowCoinBubble(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2, ::System::UInt32 a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_SHOWCOINBUBBLE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SetCoinTipsLandedHandler(::System::Action_2<::System::Int32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_SETCOINTIPSLANDEDHANDLER_OFFSET))(this, a1);
		}

		::System::Void _OnCoinTipsLanded(::RPG::Client::LittleGame::ComicDessert::ComicDessertCoinBubbleViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertCoinBubbleViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL__ONCOINTIPSLANDED_OFFSET))(this, a1);
		}

		::System::Void _ReconcileLeftCoinBubbles(::System::Collections::Generic::HashSet_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL__RECONCILELEFTCOINBUBBLES_OFFSET))(this, a1);
		}

		::System::Void HideCoinBubble(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_HIDECOINBUBBLE_OFFSET))(this, a1, a2);
		}

		::System::Int32 ShowEmotionBubble(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_SHOWEMOTIONBUBBLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HideEmotionBubble(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_HIDEEMOTIONBUBBLE_OFFSET))(this, a1, a2);
		}

		::System::Void SetOrderBubbleSelected(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_SETORDERBUBBLESELECTED_OFFSET))(this, a1, a2);
		}

		::System::Void PulseOrderBubbleWrongServe(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_PULSEORDERBUBBLEWRONGSERVE_OFFSET))(this, a1);
		}

		::System::Void ClearAllOrderBubbleSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_CLEARALLORDERBUBBLESELECTED_OFFSET))(this);
		}

		::System::Void SetServeAreaQueryHandler(::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertOrderBubbleServeAreaQuery*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertOrderBubbleServeAreaQuery*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_SETSERVEAREAQUERYHANDLER_OFFSET))(this, a1);
		}

		::System::Void SetServeAreaQuery(::RPG::Client::LittleGame::ComicDessert::ComicDessertOrderBubbleServeAreaQuery* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertOrderBubbleServeAreaQuery*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_SETSERVEAREAQUERY_OFFSET))(this, a1);
		}

		::System::Void ReplayExistingBubbles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_REPLAYEXISTINGBUBBLES_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_CLEAR_OFFSET))(this);
		}

		::System::Void _RemoveActiveEmotionBubble(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL__REMOVEACTIVEEMOTIONBUBBLE_OFFSET))(this, a1);
		}

	};
}
