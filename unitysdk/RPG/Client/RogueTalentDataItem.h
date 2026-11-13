#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FKDLIONEFCI;
class OKPIPFKONMG;
namespace RPG::Client { class RogueTalentDataItem; }
namespace RPG::Client { class RogueTalentUnlockData; }
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class RogueNousTalentRow; }
namespace RPG::GameCore { class RogueTalentRow; }
namespace RPG::GameCore { class RogueTournPermanentTalentRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETALENTDATAITEM_ACTIVETALENT_OFFSET UNITYSDK_OFFSET(0x1C85A2F0)
#define RPG_CLIENT_ROGUETALENTDATAITEM_CANACTIVE_OFFSET UNITYSDK_OFFSET(0x1C859E10)
#define RPG_CLIENT_ROGUETALENTDATAITEM_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1C859B70)
#define RPG_CLIENT_ROGUETALENTDATAITEM_CREATE_2_OFFSET UNITYSDK_OFFSET(0x1C859C00)
#define RPG_CLIENT_ROGUETALENTDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x1C859510)
#define RPG_CLIENT_ROGUETALENTDATAITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C859970)
#define RPG_CLIENT_ROGUETALENTDATAITEM_GETACTIVECOST_OFFSET UNITYSDK_OFFSET(0x1C859FF0)
#define RPG_CLIENT_ROGUETALENTDATAITEM_GETEFFECTDESCPARAMLIST_OFFSET UNITYSDK_OFFSET(0x1C85A290)
#define RPG_CLIENT_ROGUETALENTDATAITEM_GETEFFECTDESC_OFFSET UNITYSDK_OFFSET(0x1C85A210)
#define RPG_CLIENT_ROGUETALENTDATAITEM_GETEFFECTTAG_OFFSET UNITYSDK_OFFSET(0x1C85A110)
#define RPG_CLIENT_ROGUETALENTDATAITEM_GETEFFECTTITLE_OFFSET UNITYSDK_OFFSET(0x1C85A190)
#define RPG_CLIENT_ROGUETALENTDATAITEM_GETICONPATH_OFFSET UNITYSDK_OFFSET(0x1C85A050)
#define RPG_CLIENT_ROGUETALENTDATAITEM_GETUNLOCKDATALIST_OFFSET UNITYSDK_OFFSET(0x1C85A500)
#define RPG_CLIENT_ROGUETALENTDATAITEM_GET_TALENTID_OFFSET UNITYSDK_OFFSET(0x1C8598E0)
#define RPG_CLIENT_ROGUETALENTDATAITEM_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0x1C859DB0)
#define RPG_CLIENT_ROGUETALENTDATAITEM_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x1C859CF0)
#define RPG_CLIENT_ROGUETALENTDATAITEM_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1C859D50)
#define RPG_CLIENT_ROGUETALENTDATAITEM_NEXTTALENTIDS_OFFSET UNITYSDK_OFFSET(0x1C85A0B0)
#define RPG_CLIENT_ROGUETALENTDATAITEM_UPDATESRVDATA_OFFSET UNITYSDK_OFFSET(0x1C8596F0)
#define RPG_CLIENT_ROGUETALENTDATAITEM__INITUNLOCKDATALIST_OFFSET UNITYSDK_OFFSET(0x1C8599B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTalentDataItem_TypeDefinitionIndex = 69416;

	class RogueTalentDataItem : public ::System::Object
	{
	public:
		::OKPIPFKONMG* _Proto; // 0x10
		::FKDLIONEFCI* _Meta; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::RogueTalentUnlockData*>* _UnlockDataList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueTalentDataItem* Create(::RPG::GameCore::RogueTalentRow* a1)
		{
			return ((::RPG::Client::RogueTalentDataItem*(*)(::RPG::GameCore::RogueTalentRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTalentDataItem* Create_1(::RPG::GameCore::RogueNousTalentRow* a1)
		{
			return ((::RPG::Client::RogueTalentDataItem*(*)(::RPG::GameCore::RogueNousTalentRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_CREATE_1_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTalentDataItem* Create_2(::RPG::GameCore::RogueTournPermanentTalentRow* a1)
		{
			return ((::RPG::Client::RogueTalentDataItem*(*)(::RPG::GameCore::RogueTournPermanentTalentRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_CREATE_2_OFFSET))(a1);
		}

		::System::UInt32 get_TalentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_GET_TALENTID_OFFSET))(this);
		}

		::System::Void UpdateSrvData(::OKPIPFKONMG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKPIPFKONMG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_UPDATESRVDATA_OFFSET))(this, a1);
		}

		::System::Boolean IsLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_ISLOCKED_OFFSET))(this);
		}

		::System::Boolean IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_ISUNLOCKED_OFFSET))(this);
		}

		::System::Boolean IsActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_ISACTIVATED_OFFSET))(this);
		}

		::System::Boolean CanActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_CANACTIVE_OFFSET))(this);
		}

		::System::String* GetIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_GETICONPATH_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* NextTalentIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_NEXTTALENTIDS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ItemConfig*>* GetActiveCost()
		{
			return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_GETACTIVECOST_OFFSET))(this);
		}

		::RPG::Client::TextID GetEffectTag()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_GETEFFECTTAG_OFFSET))(this);
		}

		::RPG::Client::TextID GetEffectTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_GETEFFECTTITLE_OFFSET))(this);
		}

		::RPG::Client::TextID GetEffectDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_GETEFFECTDESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* GetEffectDescParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_GETEFFECTDESCPARAMLIST_OFFSET))(this);
		}

		::System::Void ActiveTalent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_ACTIVETALENT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTalentUnlockData*>* GetUnlockDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTalentUnlockData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_GETUNLOCKDATALIST_OFFSET))(this);
		}

		::System::Void _InitUnlockDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM__INITUNLOCKDATALIST_OFFSET))(this);
		}

	};
}
