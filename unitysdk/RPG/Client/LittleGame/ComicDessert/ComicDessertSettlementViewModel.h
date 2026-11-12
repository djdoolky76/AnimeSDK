#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame::ComicDessert { class ComicDessertSettlementBubbleEntryViewModel; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xDE90060)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTVIEWMODEL_GET_BUBBLES_OFFSET UNITYSDK_OFFSET(0xDE90160)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTVIEWMODEL_GET_COMBO_OFFSET UNITYSDK_OFFSET(0xDE90170)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTVIEWMODEL_GET_CURRENTREMAINCOIN_OFFSET UNITYSDK_OFFSET(0xDE90100)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTVIEWMODEL_GET_EXTRALEVELRESULTTYPE_OFFSET UNITYSDK_OFFSET(0xDE90180)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTVIEWMODEL_GET_ISLONGTAIL_OFFSET UNITYSDK_OFFSET(0xDE90190)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTVIEWMODEL_GET_ISNEWRECORD_OFFSET UNITYSDK_OFFSET(0xDE901A0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTVIEWMODEL_GET_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0xDE90110)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTVIEWMODEL_GET_ISTARGETCOIN_OFFSET UNITYSDK_OFFSET(0xDE90150)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTVIEWMODEL_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0xDE900F0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTVIEWMODEL_GET_LONGTAILBESTCUSTOMERCOUNT_OFFSET UNITYSDK_OFFSET(0xDE901C0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTVIEWMODEL_GET_LONGTAILBUSINESSSECONDS_OFFSET UNITYSDK_OFFSET(0xDE901D0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTVIEWMODEL_GET_LONGTAILPLAYCOUNT_OFFSET UNITYSDK_OFFSET(0xDE901B0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTVIEWMODEL_GET_SERVEDCUSTOMERCOUNT_OFFSET UNITYSDK_OFFSET(0xDE90130)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTVIEWMODEL_GET_TARGETCOUNT_OFFSET UNITYSDK_OFFSET(0xDE90140)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTVIEWMODEL_GET_TOTALINCOME_OFFSET UNITYSDK_OFFSET(0xDE90120)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTVIEWMODEL_REQUESTBACKTOMAINPAGE_OFFSET UNITYSDK_OFFSET(0xDE902A0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTVIEWMODEL_REQUESTCONTINUE_OFFSET UNITYSDK_OFFSET(0xDE901E0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTVIEWMODEL_REQUESTRETRY_OFFSET UNITYSDK_OFFSET(0xDE90240)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertSettlementViewModel_TypeDefinitionIndex = 80133;

	class ComicDessertSettlementViewModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertSettlementBubbleEntryViewModel*>* _Bubbles_k__BackingField; // 0x10
		::System::Action* _BackToMainPageRequested; // 0x18
		::System::Action* _RetryRequested; // 0x20
		::System::Action* _ContinueRequested; // 0x28
		::System::UInt32 _ExtraLevelResultType_k__BackingField; // 0x30
		::System::UInt32 _LongTailBestCustomerCount_k__BackingField; // 0x34
		::System::UInt32 _Combo_k__BackingField; // 0x38
		::System::UInt32 _ServedCustomerCount_k__BackingField; // 0x3C
		::System::UInt32 _LevelID_k__BackingField; // 0x40
		::System::Boolean _IsLongTail_k__BackingField; // 0x44
		::System::Boolean _IsTargetCoin_k__BackingField; // 0x45
		::System::Boolean _IsSuccess_k__BackingField; // 0x46
		::System::Boolean _IsNewRecord_k__BackingField; // 0x47
		::System::UInt32 _CurrentRemainCoin_k__BackingField; // 0x48
		::System::UInt32 _TotalIncome_k__BackingField; // 0x4C
		::System::UInt32 _TargetCount_k__BackingField; // 0x50
		::System::UInt32 _LongTailPlayCount_k__BackingField; // 0x54
		::System::UInt32 _LongTailBusinessSeconds_k__BackingField; // 0x58
		::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6, ::System::Boolean a7, ::System::Action* a8, ::System::Action* a9, ::System::Action* a10, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertSettlementBubbleEntryViewModel*>* a11, ::System::UInt32 a12, ::System::UInt32 a13, ::System::Boolean a14, ::System::Boolean a15, ::System::UInt32 a16, ::System::UInt32 a17, ::System::UInt32 a18)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Action*, ::System::Action*, ::System::Action*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertSettlementBubbleEntryViewModel*>*, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
		}

		::System::UInt32 get_LevelID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTVIEWMODEL_GET_LEVELID_OFFSET))(this);
		}

		::System::UInt32 get_CurrentRemainCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTVIEWMODEL_GET_CURRENTREMAINCOIN_OFFSET))(this);
		}

		::System::Boolean get_IsSuccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTVIEWMODEL_GET_ISSUCCESS_OFFSET))(this);
		}

		::System::UInt32 get_TotalIncome()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTVIEWMODEL_GET_TOTALINCOME_OFFSET))(this);
		}

		::System::UInt32 get_ServedCustomerCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTVIEWMODEL_GET_SERVEDCUSTOMERCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_TargetCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTVIEWMODEL_GET_TARGETCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsTargetCoin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTVIEWMODEL_GET_ISTARGETCOIN_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertSettlementBubbleEntryViewModel*>* get_Bubbles()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LittleGame::ComicDessert::ComicDessertSettlementBubbleEntryViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTVIEWMODEL_GET_BUBBLES_OFFSET))(this);
		}

		::System::UInt32 get_Combo()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTVIEWMODEL_GET_COMBO_OFFSET))(this);
		}

		::System::UInt32 get_ExtraLevelResultType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTVIEWMODEL_GET_EXTRALEVELRESULTTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsLongTail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTVIEWMODEL_GET_ISLONGTAIL_OFFSET))(this);
		}

		::System::Boolean get_IsNewRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTVIEWMODEL_GET_ISNEWRECORD_OFFSET))(this);
		}

		::System::UInt32 get_LongTailPlayCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTVIEWMODEL_GET_LONGTAILPLAYCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_LongTailBestCustomerCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTVIEWMODEL_GET_LONGTAILBESTCUSTOMERCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_LongTailBusinessSeconds()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTVIEWMODEL_GET_LONGTAILBUSINESSSECONDS_OFFSET))(this);
		}

		::System::Void RequestContinue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTVIEWMODEL_REQUESTCONTINUE_OFFSET))(this);
		}

		::System::Void RequestRetry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTVIEWMODEL_REQUESTRETRY_OFFSET))(this);
		}

		::System::Void RequestBackToMainPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTVIEWMODEL_REQUESTBACKTOMAINPAGE_OFFSET))(this);
		}

	};
}
