#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OHAPDILPEAO.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/EquipUiData.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class AKACCHPPLPG;
class CBNNMKNBLDI;
class HIAHLINDEHP;
class NLHMKCIIACD;
namespace RPG::Client::ActivityIdleLive { class SpecialEquip; }
namespace RPG::GameCore { class IdleLiveSpEquipRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_CREATEFROMSERVER_OFFSET UNITYSDK_OFFSET(0xC510480)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_CREATE_OFFSET UNITYSDK_OFFSET(0xC518410)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_CTOR_OFFSET UNITYSDK_OFFSET(0xC5184D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GETEQUIPUIDATA_OFFSET UNITYSDK_OFFSET(0xC517FC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GETEXTRAPOWER_OFFSET UNITYSDK_OFFSET(0xC518770)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GETPOWERFACTOR_OFFSET UNITYSDK_OFFSET(0xC4F9520)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GETRARITYICON_OFFSET UNITYSDK_OFFSET(0xC518380)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GETSPECIALEQUIPSKILL_OFFSET UNITYSDK_OFFSET(0xC5183C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GET_AFFIXES_OFFSET UNITYSDK_OFFSET(0xC517F80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GET_ID_OFFSET UNITYSDK_OFFSET(0xC5104E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC517F70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xC517F20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xC517F60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP__INITAFFIXES_OFFSET UNITYSDK_OFFSET(0xC518900)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP__INITSPECIALSKILL_OFFSET UNITYSDK_OFFSET(0xC518BE0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int SpecialEquip_TypeDefinitionIndex = 75245;

	class SpecialEquip : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::HIAHLINDEHP*>* _Affixes; // 0x10
		::OHAPDILPEAO _RarityData; // 0x18
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal _LevelExtraPower; // 0x78
		::NLHMKCIIACD* _SpecialEquipSkill; // 0x90
		::System::String* IconPath; // 0x98
		::System::UInt32 _Id; // 0xA0
		::System::UInt32 _Level_k__BackingField; // 0xA4
		::RPG::Client::TextID _PosText; // 0xA8
		::RPG::Client::TextID _Title_k__BackingField; // 0xB8
		::System::Void _ctor(::RPG::GameCore::IdleLiveSpEquipRow* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveSpEquipRow*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 get_Id()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GET_RARITY_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GET_TITLE_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GET_LEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::HIAHLINDEHP*>* get_Affixes()
		{
			return ((::System::Collections::Generic::List_1<::HIAHLINDEHP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GET_AFFIXES_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::EquipUiData GetEquipUiData()
		{
			return ((::RPG::Client::ActivityIdleLive::EquipUiData(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GETEQUIPUIDATA_OFFSET))(this);
		}

		::System::String* GetRarityIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GETRARITYICON_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetPowerFactor()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GETPOWERFACTOR_OFFSET))(this);
		}

		::NLHMKCIIACD* GetSpecialEquipSkill()
		{
			return ((::NLHMKCIIACD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GETSPECIALEQUIPSKILL_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::SpecialEquip* CreateFromServer(::CBNNMKNBLDI* a1)
		{
			return ((::RPG::Client::ActivityIdleLive::SpecialEquip*(*)(::CBNNMKNBLDI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_CREATEFROMSERVER_OFFSET))(a1);
		}

		static ::RPG::Client::ActivityIdleLive::SpecialEquip* Create(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::ActivityIdleLive::SpecialEquip*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_CREATE_OFFSET))(a1, a2, a3);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal GetExtraPower()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP_GETEXTRAPOWER_OFFSET))(this);
		}

		::System::Void _InitAffixes(::AKACCHPPLPG* a1, ::AKACCHPPLPG* a2, ::AKACCHPPLPG* a3)
		{
			return ((::System::Void(*)(::PVOID, ::AKACCHPPLPG*, ::AKACCHPPLPG*, ::AKACCHPPLPG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP__INITAFFIXES_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _InitSpecialSkill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPECIALEQUIP__INITSPECIALSKILL_OFFSET))(this);
		}

	};
}
