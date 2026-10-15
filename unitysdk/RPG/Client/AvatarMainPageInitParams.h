#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ITeamInfoProviderViewModel; }
namespace System { class Nullable; }

#define RPG_CLIENT_AVATARMAINPAGEINITPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0xC7008E0)
#define RPG_CLIENT_AVATARMAINPAGEINITPARAMS_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0xC700860)
#define RPG_CLIENT_AVATARMAINPAGEINITPARAMS_GET_ID_OFFSET UNITYSDK_OFFSET(0xC700800)
#define RPG_CLIENT_AVATARMAINPAGEINITPARAMS_GET_ISLOCATEAVATAR_OFFSET UNITYSDK_OFFSET(0xC700880)
#define RPG_CLIENT_AVATARMAINPAGEINITPARAMS_GET_SHOWLACKEQUIPMARK_OFFSET UNITYSDK_OFFSET(0xC7008C0)
#define RPG_CLIENT_AVATARMAINPAGEINITPARAMS_GET_SKINID_OFFSET UNITYSDK_OFFSET(0xC7008A0)
#define RPG_CLIENT_AVATARMAINPAGEINITPARAMS_GET_SUBMENUID_OFFSET UNITYSDK_OFFSET(0xC700820)
#define RPG_CLIENT_AVATARMAINPAGEINITPARAMS_GET_TEAMINFOPROVIDER_OFFSET UNITYSDK_OFFSET(0xC700840)
#define RPG_CLIENT_AVATARMAINPAGEINITPARAMS_SET_AVATAR_OFFSET UNITYSDK_OFFSET(0xC700870)
#define RPG_CLIENT_AVATARMAINPAGEINITPARAMS_SET_ID_OFFSET UNITYSDK_OFFSET(0xC700810)
#define RPG_CLIENT_AVATARMAINPAGEINITPARAMS_SET_ISLOCATEAVATAR_OFFSET UNITYSDK_OFFSET(0xC700890)
#define RPG_CLIENT_AVATARMAINPAGEINITPARAMS_SET_SHOWLACKEQUIPMARK_OFFSET UNITYSDK_OFFSET(0xC7008D0)
#define RPG_CLIENT_AVATARMAINPAGEINITPARAMS_SET_SKINID_OFFSET UNITYSDK_OFFSET(0xC7008B0)
#define RPG_CLIENT_AVATARMAINPAGEINITPARAMS_SET_SUBMENUID_OFFSET UNITYSDK_OFFSET(0xC700830)
#define RPG_CLIENT_AVATARMAINPAGEINITPARAMS_SET_TEAMINFOPROVIDER_OFFSET UNITYSDK_OFFSET(0xC700850)

namespace RPG::Client
{
	class AvatarMainPageInitParams : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* _Avatar_k__BackingField; // 0x10
		::RPG::Client::ITeamInfoProviderViewModel* _TeamInfoProvider_k__BackingField; // 0x18
		::System::Nullable* _SkinID_k__BackingField; // 0x20
		::System::Nullable* _ShowLackEquipMark_k__BackingField; // 0x28
		::System::Nullable* _IsLocateAvatar_k__BackingField; // 0x2A
		::System::Nullable* _ID_k__BackingField; // 0x2C
		::System::Nullable* _SubMenuID_k__BackingField; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMAINPAGEINITPARAMS_CTOR_OFFSET))(this);
		}

		::System::Nullable* get_ID()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMAINPAGEINITPARAMS_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::Nullable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMAINPAGEINITPARAMS_SET_ID_OFFSET))(this, a1);
		}

		::System::Nullable* get_SubMenuID()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMAINPAGEINITPARAMS_GET_SUBMENUID_OFFSET))(this);
		}

		::System::Void set_SubMenuID(::System::Nullable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMAINPAGEINITPARAMS_SET_SUBMENUID_OFFSET))(this, a1);
		}

		::RPG::Client::ITeamInfoProviderViewModel* get_TeamInfoProvider()
		{
			return ((::RPG::Client::ITeamInfoProviderViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMAINPAGEINITPARAMS_GET_TEAMINFOPROVIDER_OFFSET))(this);
		}

		::System::Void set_TeamInfoProvider(::RPG::Client::ITeamInfoProviderViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ITeamInfoProviderViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMAINPAGEINITPARAMS_SET_TEAMINFOPROVIDER_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* get_Avatar()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMAINPAGEINITPARAMS_GET_AVATAR_OFFSET))(this);
		}

		::System::Void set_Avatar(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMAINPAGEINITPARAMS_SET_AVATAR_OFFSET))(this, a1);
		}

		::System::Nullable* get_IsLocateAvatar()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMAINPAGEINITPARAMS_GET_ISLOCATEAVATAR_OFFSET))(this);
		}

		::System::Void set_IsLocateAvatar(::System::Nullable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMAINPAGEINITPARAMS_SET_ISLOCATEAVATAR_OFFSET))(this, a1);
		}

		::System::Nullable* get_SkinID()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMAINPAGEINITPARAMS_GET_SKINID_OFFSET))(this);
		}

		::System::Void set_SkinID(::System::Nullable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMAINPAGEINITPARAMS_SET_SKINID_OFFSET))(this, a1);
		}

		::System::Nullable* get_ShowLackEquipMark()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMAINPAGEINITPARAMS_GET_SHOWLACKEQUIPMARK_OFFSET))(this);
		}

		::System::Void set_ShowLackEquipMark(::System::Nullable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMAINPAGEINITPARAMS_SET_SHOWLACKEQUIPMARK_OFFSET))(this, a1);
		}

	};
}
