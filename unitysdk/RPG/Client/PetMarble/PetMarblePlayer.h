#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MarbleBattleAffiliationType.h"
#include "unitysdk/System/Object.h"
class FMHEHLIFNGJ;
class LMLNNHKJEIP;
namespace RPG::Client { class LobbyMemberData; }
namespace RPG::Client { class PlayerPlatformInfo; }
namespace RPG::Client::ActivityMarble { class MarbleTeamSelection; }
namespace RPG::Client::PetMarble { class PetMarblePlayer; }
namespace System { class String; }

#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_CREATEENEMY_OFFSET UNITYSDK_OFFSET(0x18D54A90)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_CREATEFRIEND_OFFSET UNITYSDK_OFFSET(0x18D54860)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_CREATEPVPPLAYER_1_OFFSET UNITYSDK_OFFSET(0x18D55870)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_CREATEPVPPLAYER_OFFSET UNITYSDK_OFFSET(0x18D555E0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_CREATESELF_OFFSET UNITYSDK_OFFSET(0x18D545C0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_CTOR_OFFSET UNITYSDK_OFFSET(0x18D555D0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GETMARBLETEAM_OFFSET UNITYSDK_OFFSET(0x18D559D0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_AFFILIATIONTYPE_OFFSET UNITYSDK_OFFSET(0x18D56000)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x18D55FE0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_ID_OFFSET UNITYSDK_OFFSET(0x18D55FA0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_ISLOCALPLAYER_OFFSET UNITYSDK_OFFSET(0x18D56410)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_ISMATCHING_OFFSET UNITYSDK_OFFSET(0x18D56040)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_ISOWNMASTERTITLE_OFFSET UNITYSDK_OFFSET(0x18D560A0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_ISREADY_OFFSET UNITYSDK_OFFSET(0x18D56060)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_ISROOMOWNER_OFFSET UNITYSDK_OFFSET(0x18D56080)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x18D56020)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_PLAYERINDEX_OFFSET UNITYSDK_OFFSET(0x18D564C0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_PLAYERNAMESTR_OFFSET UNITYSDK_OFFSET(0x18D55FC0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_SETISREADY_OFFSET UNITYSDK_OFFSET(0x18D55E00)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_SETISROOMOWNER_OFFSET UNITYSDK_OFFSET(0x18D55DB0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_SET_AFFILIATIONTYPE_OFFSET UNITYSDK_OFFSET(0x18D56010)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x18D55FF0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_SET_ID_OFFSET UNITYSDK_OFFSET(0x18D55FB0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_SET_ISMATCHING_OFFSET UNITYSDK_OFFSET(0x18D56050)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_SET_ISREADY_OFFSET UNITYSDK_OFFSET(0x18D56070)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_SET_ISROOMOWNER_OFFSET UNITYSDK_OFFSET(0x18D56090)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_SET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x18D56030)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_SET_PLAYERNAMESTR_OFFSET UNITYSDK_OFFSET(0x18D55FD0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_UPDATE_OFFSET UNITYSDK_OFFSET(0x18D55CB0)

namespace RPG::Client::PetMarble
{
	inline static constexpr unsigned int PetMarblePlayer_TypeDefinitionIndex = 76847;

	class PetMarblePlayer : public ::System::Object
	{
	public:
		::RPG::Client::ActivityMarble::MarbleTeamSelection* _TeamSelection; // 0x10
		::System::String* _IconPath_k__BackingField; // 0x18
		::FMHEHLIFNGJ* _ExtInfo; // 0x20
		::RPG::Client::PlayerPlatformInfo* _PlatformInfo_k__BackingField; // 0x28
		::System::String* _PlayerNameStr_k__BackingField; // 0x30
		::RPG::Client::MarbleBattleAffiliationType _AffiliationType_k__BackingField; // 0x38
		::System::Boolean _IsRoomOwner_k__BackingField; // 0x3C
		::System::Boolean _IsMatching_k__BackingField; // 0x3D
		::System::Boolean _IsReady_k__BackingField; // 0x3E
		::System::Byte _padding0[0x1];
		::System::UInt32 _ID_k__BackingField; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PetMarble::PetMarblePlayer* CreateSelf(::System::Boolean a1)
		{
			return ((::RPG::Client::PetMarble::PetMarblePlayer*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_CREATESELF_OFFSET))(a1);
		}

		static ::RPG::Client::PetMarble::PetMarblePlayer* CreatePVPPlayer(::LMLNNHKJEIP* a1, ::RPG::Client::MarbleBattleAffiliationType a2)
		{
			return ((::RPG::Client::PetMarble::PetMarblePlayer*(*)(::LMLNNHKJEIP*, ::RPG::Client::MarbleBattleAffiliationType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_CREATEPVPPLAYER_OFFSET))(a1, a2);
		}

		static ::RPG::Client::PetMarble::PetMarblePlayer* CreatePVPPlayer_1(::RPG::Client::LobbyMemberData* a1, ::RPG::Client::MarbleBattleAffiliationType a2)
		{
			return ((::RPG::Client::PetMarble::PetMarblePlayer*(*)(::RPG::Client::LobbyMemberData*, ::RPG::Client::MarbleBattleAffiliationType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_CREATEPVPPLAYER_1_OFFSET))(a1, a2);
		}

		static ::RPG::Client::PetMarble::PetMarblePlayer* CreateFriend(::System::UInt32 a1)
		{
			return ((::RPG::Client::PetMarble::PetMarblePlayer*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_CREATEFRIEND_OFFSET))(a1);
		}

		static ::RPG::Client::PetMarble::PetMarblePlayer* CreateEnemy(::System::UInt32 a1)
		{
			return ((::RPG::Client::PetMarble::PetMarblePlayer*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_CREATEENEMY_OFFSET))(a1);
		}

		::System::Void Update(::RPG::Client::LobbyMemberData* a1, ::RPG::Client::MarbleBattleAffiliationType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyMemberData*, ::RPG::Client::MarbleBattleAffiliationType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_UPDATE_OFFSET))(this, a1, a2);
		}

		::System::Void SetIsReady(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_SETISREADY_OFFSET))(this, a1);
		}

		::System::Void SetIsRoomOwner(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_SETISROOMOWNER_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityMarble::MarbleTeamSelection* GetMarbleTeam()
		{
			return ((::RPG::Client::ActivityMarble::MarbleTeamSelection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GETMARBLETEAM_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_SET_ID_OFFSET))(this, a1);
		}

		::System::String* get_PlayerNameStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_PLAYERNAMESTR_OFFSET))(this);
		}

		::System::Void set_PlayerNameStr(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_SET_PLAYERNAMESTR_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_SET_ICONPATH_OFFSET))(this, a1);
		}

		::RPG::Client::MarbleBattleAffiliationType get_AffiliationType()
		{
			return ((::RPG::Client::MarbleBattleAffiliationType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_AFFILIATIONTYPE_OFFSET))(this);
		}

		::System::Void set_AffiliationType(::RPG::Client::MarbleBattleAffiliationType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MarbleBattleAffiliationType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_SET_AFFILIATIONTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::PlayerPlatformInfo* get_PlatformInfo()
		{
			return ((::RPG::Client::PlayerPlatformInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_PLATFORMINFO_OFFSET))(this);
		}

		::System::Void set_PlatformInfo(::RPG::Client::PlayerPlatformInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerPlatformInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_SET_PLATFORMINFO_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMatching()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_ISMATCHING_OFFSET))(this);
		}

		::System::Void set_IsMatching(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_SET_ISMATCHING_OFFSET))(this, a1);
		}

		::System::Boolean get_IsReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_ISREADY_OFFSET))(this);
		}

		::System::Void set_IsReady(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_SET_ISREADY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRoomOwner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_ISROOMOWNER_OFFSET))(this);
		}

		::System::Void set_IsRoomOwner(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_SET_ISROOMOWNER_OFFSET))(this, a1);
		}

		::System::Boolean get_IsOwnMasterTitle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_ISOWNMASTERTITLE_OFFSET))(this);
		}

		::System::Boolean get_IsLocalPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_ISLOCALPLAYER_OFFSET))(this);
		}

		::System::UInt32 get_PlayerIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER_GET_PLAYERINDEX_OFFSET))(this);
		}

	};
}
