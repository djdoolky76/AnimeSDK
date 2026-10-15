#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class Nullable; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSBUFFSELECTTEAMINFOVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xC93C940)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSBUFFSELECTTEAMINFOVIEWMODEL_GET_AVATARS_OFFSET UNITYSDK_OFFSET(0xC93C8E0)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSBUFFSELECTTEAMINFOVIEWMODEL_GET_CURRENTBUFFID_OFFSET UNITYSDK_OFFSET(0xC93C920)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSBUFFSELECTTEAMINFOVIEWMODEL_GET_TEAMINDEX_OFFSET UNITYSDK_OFFSET(0xC93C900)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSBUFFSELECTTEAMINFOVIEWMODEL_SET_AVATARS_OFFSET UNITYSDK_OFFSET(0xC93C8F0)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSBUFFSELECTTEAMINFOVIEWMODEL_SET_CURRENTBUFFID_OFFSET UNITYSDK_OFFSET(0xC93C930)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSBUFFSELECTTEAMINFOVIEWMODEL_SET_TEAMINDEX_OFFSET UNITYSDK_OFFSET(0xC93C910)

namespace RPG::Client::Challenge::Boss
{
	class ChallengeBossBuffSelectTeamInfoViewModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* _Avatars_k__BackingField; // 0x10
		::System::Nullable* _CurrentBuffID_k__BackingField; // 0x18
		::System::Int32 _TeamIndex_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSBUFFSELECTTEAMINFOVIEWMODEL_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* get_Avatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSBUFFSELECTTEAMINFOVIEWMODEL_GET_AVATARS_OFFSET))(this);
		}

		::System::Void set_Avatars(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSBUFFSELECTTEAMINFOVIEWMODEL_SET_AVATARS_OFFSET))(this, a1);
		}

		::System::Int32 get_TeamIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSBUFFSELECTTEAMINFOVIEWMODEL_GET_TEAMINDEX_OFFSET))(this);
		}

		::System::Void set_TeamIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSBUFFSELECTTEAMINFOVIEWMODEL_SET_TEAMINDEX_OFFSET))(this, a1);
		}

		::System::Nullable* get_CurrentBuffID()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSBUFFSELECTTEAMINFOVIEWMODEL_GET_CURRENTBUFFID_OFFSET))(this);
		}

		::System::Void set_CurrentBuffID(::System::Nullable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSBUFFSELECTTEAMINFOVIEWMODEL_SET_CURRENTBUFFID_OFFSET))(this, a1);
		}

	};
}
