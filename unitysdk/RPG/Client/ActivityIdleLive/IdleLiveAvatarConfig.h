#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGDKJNOGJCA.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/System/Object.h"
class NGHCDGHFMKA;
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarConfig; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarPosTypeConfig; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarSkillConfig; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarTagConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0xCD8F320)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xCD9A910)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xCD9AB40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_AVATARNAME_OFFSET UNITYSDK_OFFSET(0xCD9AB80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_AVATARPOSTYPE_OFFSET UNITYSDK_OFFSET(0xCD9A9F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_DESCLIST_OFFSET UNITYSDK_OFFSET(0xCD9AAC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_FIGUREPATH_OFFSET UNITYSDK_OFFSET(0xCD9ABC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_GACHAAVATARTEXT_OFFSET UNITYSDK_OFFSET(0xCD9AB00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_GACHAAVATARVOICEEVENT_OFFSET UNITYSDK_OFFSET(0xCD9AB20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xCD9ABA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_MINIICONPATH_OFFSET UNITYSDK_OFFSET(0xCD9ABE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_POSTYPECONFIG_OFFSET UNITYSDK_OFFSET(0xCD9AA40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_PROPERTYCONFIGS_OFFSET UNITYSDK_OFFSET(0xCD9AAA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_RARITYCONFIG_OFFSET UNITYSDK_OFFSET(0xCD9AA80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xCD9AB60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0xCD9AC00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_SHOPICONPATH_OFFSET UNITYSDK_OFFSET(0xCD9AC20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_SKILLCONFIGS_OFFSET UNITYSDK_OFFSET(0xCD9AA60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_TAGCONFIGS_OFFSET UNITYSDK_OFFSET(0xCD9AAE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0xCD9AB50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_AVATARNAME_OFFSET UNITYSDK_OFFSET(0xCD9AB90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_DESCLIST_OFFSET UNITYSDK_OFFSET(0xCD9AAD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_FIGUREPATH_OFFSET UNITYSDK_OFFSET(0xCD9ABD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_GACHAAVATARTEXT_OFFSET UNITYSDK_OFFSET(0xCD9AB10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_GACHAAVATARVOICEEVENT_OFFSET UNITYSDK_OFFSET(0xCD9AB30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xCD9ABB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_MINIICONPATH_OFFSET UNITYSDK_OFFSET(0xCD9ABF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_POSTYPECONFIG_OFFSET UNITYSDK_OFFSET(0xCD9AA50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_PROPERTYCONFIGS_OFFSET UNITYSDK_OFFSET(0xCD9AAB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_RARITYCONFIG_OFFSET UNITYSDK_OFFSET(0xCD9AA90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_RARITY_OFFSET UNITYSDK_OFFSET(0xCD9AB70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0xCD9AC10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_SHOPICONPATH_OFFSET UNITYSDK_OFFSET(0xCD9AC30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_SKILLCONFIGS_OFFSET UNITYSDK_OFFSET(0xCD9AA70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_TAGCONFIGS_OFFSET UNITYSDK_OFFSET(0xCD9AAF0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveAvatarConfig_TypeDefinitionIndex = 77396;

	class IdleLiveAvatarConfig : public ::System::Object
	{
	public:
		::System::String* _RoundIconPath_k__BackingField; // 0x10
		::System::String* _IconPath_k__BackingField; // 0x18
		::System::String* _ShopIconPath_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IdleLiveAvatarPropertyType, ::HGDKJNOGJCA>* _PropertyConfigs_k__BackingField; // 0x28
		::NGHCDGHFMKA* _RarityConfig_k__BackingField; // 0x30
		::RPG::Client::ActivityIdleLive::IdleLiveAvatarPosTypeConfig* _PosTypeConfig_k__BackingField; // 0x38
		::System::String* _GachaAvatarVoiceEvent_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::TextID>* _DescList_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig*>* _TagConfigs_k__BackingField; // 0x50
		::System::String* _FigurePath_k__BackingField; // 0x58
		::System::String* _MiniIconPath_k__BackingField; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarSkillConfig*>* _SkillConfigs_k__BackingField; // 0x68
		::System::UInt32 _AvatarId_k__BackingField; // 0x70
		::System::UInt32 _Rarity_k__BackingField; // 0x74
		::RPG::Client::TextID _GachaAvatarText_k__BackingField; // 0x78
		::RPG::Client::TextID _AvatarName_k__BackingField; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_CREATE_OFFSET))(a1);
		}

		::RPG::GameCore::ILBattleCharacterLocation get_AvatarPosType()
		{
			return ((::RPG::GameCore::ILBattleCharacterLocation(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_AVATARPOSTYPE_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveAvatarPosTypeConfig* get_PosTypeConfig()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveAvatarPosTypeConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_POSTYPECONFIG_OFFSET))(this);
		}

		::System::Void set_PosTypeConfig(::RPG::Client::ActivityIdleLive::IdleLiveAvatarPosTypeConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarPosTypeConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_POSTYPECONFIG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarSkillConfig*>* get_SkillConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarSkillConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_SKILLCONFIGS_OFFSET))(this);
		}

		::System::Void set_SkillConfigs(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarSkillConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarSkillConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_SKILLCONFIGS_OFFSET))(this, a1);
		}

		::NGHCDGHFMKA* get_RarityConfig()
		{
			return ((::NGHCDGHFMKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_RARITYCONFIG_OFFSET))(this);
		}

		::System::Void set_RarityConfig(::NGHCDGHFMKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGHCDGHFMKA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_RARITYCONFIG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IdleLiveAvatarPropertyType, ::HGDKJNOGJCA>* get_PropertyConfigs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IdleLiveAvatarPropertyType, ::HGDKJNOGJCA>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_PROPERTYCONFIGS_OFFSET))(this);
		}

		::System::Void set_PropertyConfigs(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IdleLiveAvatarPropertyType, ::HGDKJNOGJCA>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IdleLiveAvatarPropertyType, ::HGDKJNOGJCA>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_PROPERTYCONFIGS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TextID>* get_DescList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_DESCLIST_OFFSET))(this);
		}

		::System::Void set_DescList(::System::Collections::Generic::List_1<::RPG::Client::TextID>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TextID>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_DESCLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig*>* get_TagConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_TAGCONFIGS_OFFSET))(this);
		}

		::System::Void set_TagConfigs(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_TAGCONFIGS_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_GachaAvatarText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_GACHAAVATARTEXT_OFFSET))(this);
		}

		::System::Void set_GachaAvatarText(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_GACHAAVATARTEXT_OFFSET))(this, a1);
		}

		::System::String* get_GachaAvatarVoiceEvent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_GACHAAVATARVOICEEVENT_OFFSET))(this);
		}

		::System::Void set_GachaAvatarVoiceEvent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_GACHAAVATARVOICEEVENT_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvatarId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_AVATARID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_RARITY_OFFSET))(this);
		}

		::System::Void set_Rarity(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_RARITY_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_AvatarName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_AVATARNAME_OFFSET))(this);
		}

		::System::Void set_AvatarName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_AVATARNAME_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_FigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_FIGUREPATH_OFFSET))(this);
		}

		::System::Void set_FigurePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_FIGUREPATH_OFFSET))(this, a1);
		}

		::System::String* get_MiniIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_MINIICONPATH_OFFSET))(this);
		}

		::System::Void set_MiniIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_MINIICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_RoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_ROUNDICONPATH_OFFSET))(this);
		}

		::System::Void set_RoundIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_ROUNDICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_ShopIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_SHOPICONPATH_OFFSET))(this);
		}

		::System::Void set_ShopIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_SHOPICONPATH_OFFSET))(this, a1);
		}

	};
}
