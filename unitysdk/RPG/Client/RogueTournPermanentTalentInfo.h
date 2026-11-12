#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MDLPIFCHFPJ;
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class RogueTalentDataItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xEA72090)
#define RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEA72B70)
#define RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_GETALLTALENTDATA_OFFSET UNITYSDK_OFFSET(0xEA7D0D0)
#define RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_GETALLTALENTIDS_OFFSET UNITYSDK_OFFSET(0xEA7CBF0)
#define RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_GET_TALENTCOINICONPATH_OFFSET UNITYSDK_OFFSET(0xEA7D4A0)
#define RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_GET_TALENTDATAITEMS_OFFSET UNITYSDK_OFFSET(0xEA7D300)
#define RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_GET__TALENTCOINITEMDATA_OFFSET UNITYSDK_OFFSET(0xEA7D410)
#define RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_GET__TALENTCOINITEMID_OFFSET UNITYSDK_OFFSET(0xEA7D320)
#define RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_INIT_OFFSET UNITYSDK_OFFSET(0xEA72280)
#define RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0xEA7D000)
#define RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xEA7CF40)
#define RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_SETALLTALENTSSEEN_OFFSET UNITYSDK_OFFSET(0xEA751A0)
#define RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_SETTALENTSEEN_OFFSET UNITYSDK_OFFSET(0xEA7CDE0)
#define RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_SET_TALENTDATAITEMS_OFFSET UNITYSDK_OFFSET(0xEA7D310)
#define RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xEA79CC0)
#define RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO__GETTALENTDATAITEM_OFFSET UNITYSDK_OFFSET(0xEA7C860)
#define RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO__UPDATEAVAILABLETALENTINFO_OFFSET UNITYSDK_OFFSET(0xEA7C9C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPermanentTalentInfo_TypeDefinitionIndex = 69800;

	class RogueTournPermanentTalentInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _AvailableTalentIDs; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTalentDataItem*>* _TalentDataItems_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::MDLPIFCHFPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDLPIFCHFPJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAllTalentIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_GETALLTALENTIDS_OFFSET))(this);
		}

		::System::Void SetTalentSeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_SETTALENTSEEN_OFFSET))(this, a1);
		}

		::System::Void SetAllTalentsSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_SETALLTALENTSSEEN_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_ISSHOWNORMALREDDOT_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNewRedDot(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_ISSHOWNEWREDDOT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTalentDataItem*>* GetAllTalentData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTalentDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_GETALLTALENTDATA_OFFSET))(this);
		}

		::RPG::Client::RogueTalentDataItem* _GetTalentDataItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTalentDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO__GETTALENTDATAITEM_OFFSET))(this, a1);
		}

		::System::Void _UpdateAvailableTalentInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO__UPDATEAVAILABLETALENTINFO_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTalentDataItem*>* get_TalentDataItems()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTalentDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_GET_TALENTDATAITEMS_OFFSET))(this);
		}

		::System::Void set_TalentDataItems(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTalentDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTalentDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_SET_TALENTDATAITEMS_OFFSET))(this, a1);
		}

		static ::System::UInt32 get__TalentCoinItemID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_GET__TALENTCOINITEMID_OFFSET))();
		}

		static ::RPG::Client::ItemData* get__TalentCoinItemData()
		{
			return ((::RPG::Client::ItemData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_GET__TALENTCOINITEMDATA_OFFSET))();
		}

		static ::System::String* get_TalentCoinIconPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO_GET_TALENTCOINICONPATH_OFFSET))();
		}

	};
}
