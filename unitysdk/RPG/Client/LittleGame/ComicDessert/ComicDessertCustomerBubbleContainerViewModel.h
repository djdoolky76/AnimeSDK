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

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_ADD_ONCOINBUBBLEADDED_OFFSET UNITYSDK_OFFSET(0x1E142D90)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_ADD_ONCOINBUBBLEREMOVED_OFFSET UNITYSDK_OFFSET(0x1E142E50)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_ADD_ONEMOJIBUBBLEADDED_OFFSET UNITYSDK_OFFSET(0x1E142A70)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_ADD_ONEMOJIBUBBLEREMOVED_OFFSET UNITYSDK_OFFSET(0x1E142B30)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_ADD_ONEMOTIONBUBBLEADDED_OFFSET UNITYSDK_OFFSET(0x1E142F10)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_ADD_ONEMOTIONBUBBLEREMOVED_OFFSET UNITYSDK_OFFSET(0x1E142FF0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_ADD_ONORDERBUBBLEADDED_OFFSET UNITYSDK_OFFSET(0x1E1428D0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_ADD_ONORDERBUBBLEREMOVED_OFFSET UNITYSDK_OFFSET(0x1E1429B0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_ADD_ONTALKBUBBLEADDED_OFFSET UNITYSDK_OFFSET(0x1E142BF0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_ADD_ONTALKBUBBLEREMOVED_OFFSET UNITYSDK_OFFSET(0x1E142CD0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_CLEARALLORDERBUBBLESELECTED_OFFSET UNITYSDK_OFFSET(0x1E145930)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E146160)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E146970)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_HIDECOINBUBBLE_OFFSET UNITYSDK_OFFSET(0x1E144B40)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_HIDEEMOJIBUBBLE_OFFSET UNITYSDK_OFFSET(0x1E143FE0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_HIDEEMOTIONBUBBLE_OFFSET UNITYSDK_OFFSET(0x1E145220)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_HIDETALKBUBBLE_1_OFFSET UNITYSDK_OFFSET(0x1E144600)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_HIDETALKBUBBLE_OFFSET UNITYSDK_OFFSET(0x1E144490)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_PULSEORDERBUBBLEWRONGSERVE_OFFSET UNITYSDK_OFFSET(0x1E1457B0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_REMOVE_ONCOINBUBBLEADDED_OFFSET UNITYSDK_OFFSET(0x1E142DF0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_REMOVE_ONCOINBUBBLEREMOVED_OFFSET UNITYSDK_OFFSET(0x1E142EB0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_REMOVE_ONEMOJIBUBBLEADDED_OFFSET UNITYSDK_OFFSET(0x1E142AD0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_REMOVE_ONEMOJIBUBBLEREMOVED_OFFSET UNITYSDK_OFFSET(0x1E142B90)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_REMOVE_ONEMOTIONBUBBLEADDED_OFFSET UNITYSDK_OFFSET(0x1E142F80)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_REMOVE_ONEMOTIONBUBBLEREMOVED_OFFSET UNITYSDK_OFFSET(0x1E143050)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_REMOVE_ONORDERBUBBLEADDED_OFFSET UNITYSDK_OFFSET(0x1E142940)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_REMOVE_ONORDERBUBBLEREMOVED_OFFSET UNITYSDK_OFFSET(0x1E142A10)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_REMOVE_ONTALKBUBBLEADDED_OFFSET UNITYSDK_OFFSET(0x1E142C60)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_REMOVE_ONTALKBUBBLEREMOVED_OFFSET UNITYSDK_OFFSET(0x1E142D30)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_REPLAYEXISTINGBUBBLES_OFFSET UNITYSDK_OFFSET(0x1E145B90)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_SETCOINTIPSLANDEDHANDLER_OFFSET UNITYSDK_OFFSET(0x1E144A70)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_SETORDERBUBBLESELECTED_OFFSET UNITYSDK_OFFSET(0x1E1455F0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_SETSERVEAREAQUERYHANDLER_OFFSET UNITYSDK_OFFSET(0x1E145AD0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_SETSERVEAREAQUERY_OFFSET UNITYSDK_OFFSET(0x1E145B20)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_SHOWCOINBUBBLE_OFFSET UNITYSDK_OFFSET(0x1E144710)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_SHOWEMOJIBUBBLE_OFFSET UNITYSDK_OFFSET(0x1E143D50)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_SHOWEMOTIONBUBBLE_OFFSET UNITYSDK_OFFSET(0x1E144D10)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_SHOWTALKBUBBLE_OFFSET UNITYSDK_OFFSET(0x1E144190)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL_SYNCCUSTOMERS_OFFSET UNITYSDK_OFFSET(0x1E1430B0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL__ONCOINTIPSLANDED_OFFSET UNITYSDK_OFFSET(0x1E144AC0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL__RECONCILELEFTCOINBUBBLES_OFFSET UNITYSDK_OFFSET(0x1E143B90)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCUSTOMERBUBBLECONTAINERVIEWMODEL__REMOVEACTIVEEMOTIONBUBBLE_OFFSET UNITYSDK_OFFSET(0x1E145110)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertCustomerBubbleContainerViewModel_TypeDefinitionIndex = 80109;

	class ComicDessertCustomerBubbleContainerViewModel : public ::System::Object
	{
	public:
		::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertEmotionBubbleViewModel*>* OnEmotionBubbleRemoved; // 0x10
		::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertCoinBubbleViewModel*>* OnCoinBubbleRemoved; // 0x18
		::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertOrderBubbleViewModel*>* OnOrderBubbleRemoved; // 0x20
		::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertEmojiBubbleViewModel*>* OnEmojiBubbleAdded; // 0x28
		::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertEmojiBubbleViewModel*>* OnEmojiBubbleRemoved; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* _RemoveDeadBuffer; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::LittleGame::ComicDessert::ComicDessertOrderBubbleViewModel*>* _OrderBubbles; // 0x40
		::System::Action_2<::System::Int32, ::System::UInt32>* _CoinTipsLandedHandler; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::LittleGame::ComicDessert::ComicDessertEmotionBubbleViewModel*>* _EmotionBubbles; // 0x50
		::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertTalkBubbleViewModel*>* OnTalkBubbleRemoved; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::LittleGame::ComicDessert::ComicDessertTalkBubbleViewModel*>* _TalkBubbles; // 0x60
		::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertOrderBubbleServeAreaQuery*>* _ServeAreaQueryHandler; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::LittleGame::ComicDessert::ComicDessertEmojiBubbleViewModel*>* _EmojiBubbles; // 0x70
		::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertCoinBubbleViewModel*>* OnCoinBubbleAdded; // 0x78
		::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertEmotionBubbleViewModel*>* OnEmotionBubbleAdded; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::LittleGame::ComicDessert::ComicDessertCoinBubbleViewModel*>* _CoinBubbles; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::CHKJLBNBPNI*>* _EmotionStates; // 0x90
		::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertOrderBubbleViewModel*>* OnOrderBubbleAdded; // 0x98
		::System::Action_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertTalkBubbleViewModel*>* OnTalkBubbleAdded; // 0xA0
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
