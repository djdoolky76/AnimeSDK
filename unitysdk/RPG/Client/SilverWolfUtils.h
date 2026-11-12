#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SilverWolfState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class QuestData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SILVERWOLFUTILS_GETACTIVITYSHOPID_OFFSET UNITYSDK_OFFSET(0xEB333C0)
#define RPG_CLIENT_SILVERWOLFUTILS_GETCOLLECTIONQUESTIDLIST_OFFSET UNITYSDK_OFFSET(0xEB303F0)
#define RPG_CLIENT_SILVERWOLFUTILS_GETCOMPANIONREWARDCURRENCYNUM_OFFSET UNITYSDK_OFFSET(0xEB33670)
#define RPG_CLIENT_SILVERWOLFUTILS_GETCURACTIVITYSTATE_OFFSET UNITYSDK_OFFSET(0xEB32E70)
#define RPG_CLIENT_SILVERWOLFUTILS_GETCURRENCYICON_OFFSET UNITYSDK_OFFSET(0xEB33560)
#define RPG_CLIENT_SILVERWOLFUTILS_GETCURRENCYID_OFFSET UNITYSDK_OFFSET(0xEB33460)
#define RPG_CLIENT_SILVERWOLFUTILS_GETGOTOCOMPANIONMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0xEB33A20)
#define RPG_CLIENT_SILVERWOLFUTILS_GETLIGHTCONEQUESTDATA_OFFSET UNITYSDK_OFFSET(0xEB332F0)
#define RPG_CLIENT_SILVERWOLFUTILS_GETPREMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0xEB31D60)
#define RPG_CLIENT_SILVERWOLFUTILS_GETTEXTIDBYENTRANCEID_OFFSET UNITYSDK_OFFSET(0xEB33960)
#define RPG_CLIENT_SILVERWOLFUTILS_GETUNLOCKMISSIONLIST_OFFSET UNITYSDK_OFFSET(0xEB330D0)
#define RPG_CLIENT_SILVERWOLFUTILS_ISDECALQUESTFINISH_OFFSET UNITYSDK_OFFSET(0xEB33210)
#define RPG_CLIENT_SILVERWOLFUTILS_ISGROUPFINISH_OFFSET UNITYSDK_OFFSET(0xEB33160)
#define RPG_CLIENT_SILVERWOLFUTILS_ISINONLYSHOPSCHEDULE_OFFSET UNITYSDK_OFFSET(0xEB338C0)
#define RPG_CLIENT_SILVERWOLFUTILS_ISUNLOCKMISSIONALLFINISHED_OFFSET UNITYSDK_OFFSET(0xEB32FA0)

namespace RPG::Client
{
	inline static constexpr unsigned int SilverWolfUtils_TypeDefinitionIndex = 69913;

	class SilverWolfUtils : public ::System::Object
	{
	public:
		static ::RPG::Client::SilverWolfState GetCurActivityState()
		{
			return ((::RPG::Client::SilverWolfState(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFUTILS_GETCURACTIVITYSTATE_OFFSET))();
		}

		static ::System::Boolean IsUnlockMissionAllFinished()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFUTILS_ISUNLOCKMISSIONALLFINISHED_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetUnlockMissionList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFUTILS_GETUNLOCKMISSIONLIST_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetPremissionIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFUTILS_GETPREMISSIONIDLIST_OFFSET))();
		}

		static ::System::Boolean IsGroupFinish(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFUTILS_ISGROUPFINISH_OFFSET))(a1);
		}

		static ::System::Boolean IsDecalQuestFinish(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFUTILS_ISDECALQUESTFINISH_OFFSET))(a1);
		}

		static ::RPG::Client::QuestData* GetLightConeQuestData(::System::UInt32 a1)
		{
			return ((::RPG::Client::QuestData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFUTILS_GETLIGHTCONEQUESTDATA_OFFSET))(a1);
		}

		static ::System::UInt32 GetActivityShopID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFUTILS_GETACTIVITYSHOPID_OFFSET))();
		}

		static ::System::UInt32 GetCurrencyID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFUTILS_GETCURRENCYID_OFFSET))();
		}

		static ::System::String* GetCurrencyIcon()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFUTILS_GETCURRENCYICON_OFFSET))();
		}

		static ::System::UInt32 GetCompanionRewardCurrencyNum()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFUTILS_GETCOMPANIONREWARDCURRENCYNUM_OFFSET))();
		}

		static ::System::Boolean IsInOnlyShopSchedule()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFUTILS_ISINONLYSHOPSCHEDULE_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetCollectionQuestIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFUTILS_GETCOLLECTIONQUESTIDLIST_OFFSET))();
		}

		static ::RPG::Client::TextID GetTextIDByEntranceID(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFUTILS_GETTEXTIDBYENTRANCEID_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetGotoCompanionMissionIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFUTILS_GETGOTOCOMPANIONMISSIONIDLIST_OFFSET))();
		}

	};
}
