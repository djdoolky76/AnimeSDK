#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityMarble/MarblePVPMatchContext.h"
#include "unitysdk/RPG/Client/ActivityMarble/MarblePVPMode.h"
#include "unitysdk/System/ValueTuple_2.h"
class GFHCKBHCNDF;
class LMLNNHKJEIP;
class PJMGBLIFDFP;
namespace RPG::Client { class LobbyMemberData; }
namespace RPG::Client { class MarbleBall; }
namespace RPG::Client::ActivityMarble { class IMarbleData; }
namespace RPG::Client::ActivityMarble { class IMarblePlayer; }
namespace RPG::Client::ActivityMarble { class MarblePVPManagerBase; }
namespace RPG::Client::PetMarble { class PetMarbleMatchContext; }
namespace RPG::Client::PetMarble { class PetMarblePlayer; }
namespace RPG::Client::PetMarble::Level { class IPetMarbleLevelMode; }
namespace RPG::Client::Promises { class Promise; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_CREATEBALL_1_OFFSET UNITYSDK_OFFSET(0xE533A70)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_CREATEBALL_OFFSET UNITYSDK_OFFSET(0xE5338C0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_CREATECOOPBOSSMATCH_OFFSET UNITYSDK_OFFSET(0xE532A70)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0xE532A20)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_GETLEVELMODE_OFFSET UNITYSDK_OFFSET(0xE533F50)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_GETMARBLEBALL_OFFSET UNITYSDK_OFFSET(0xE5336F0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_GET_COOPPLAYER_OFFSET UNITYSDK_OFFSET(0xE5346C0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_GET_ISMATCHED_OFFSET UNITYSDK_OFFSET(0xE5345C0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_GET_PVPMGR_OFFSET UNITYSDK_OFFSET(0xE534620)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_INITREADYPROMISE_OFFSET UNITYSDK_OFFSET(0xE533570)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_ONLOADLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0xE533990)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_ONROOMINIT_OFFSET UNITYSDK_OFFSET(0xE533E20)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_SETCOOPPLAYER_OFFSET UNITYSDK_OFFSET(0xE532B30)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_SETINITINFO_OFFSET UNITYSDK_OFFSET(0xE532D40)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_SETTEAMSELECTMEMBER_OFFSET UNITYSDK_OFFSET(0xE532B80)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_SET_COOPPLAYER_OFFSET UNITYSDK_OFFSET(0xE5346D0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_STARTBATTLE_OFFSET UNITYSDK_OFFSET(0xE533B30)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_UPDATEOTHERPLAYER_OFFSET UNITYSDK_OFFSET(0xE533CF0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_UPDATESELFPLAYER_OFFSET UNITYSDK_OFFSET(0xE533C00)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT__FILLCOOPPLAYERTEAMFROMFRIEND_OFFSET UNITYSDK_OFFSET(0xE5332E0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT__HASFINALBATTLEINITINFO_OFFSET UNITYSDK_OFFSET(0xE5334F0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT__UPDATEMEMBERS_OFFSET UNITYSDK_OFFSET(0xE533FA0)

namespace RPG::Client::PetMarble
{
	inline static constexpr unsigned int PetMarbleMatchContext_TypeDefinitionIndex = 76845;

	class PetMarbleMatchContext : public ::RPG::Client::ActivityMarble::MarblePVPMatchContext
	{
	public:
		::RPG::Client::PetMarble::Level::IPetMarbleLevelMode* _LevelMode; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MarbleBall*>* _BallInfoDict; // 0x90
		::RPG::Client::ActivityMarble::IMarblePlayer* _CoopPlayer_k__BackingField; // 0x98
		::RPG::Client::Promises::Promise* _InitReadyPromise; // 0xA0
		::System::Void _ctor(::RPG::Client::ActivityMarble::MarblePVPMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePVPMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::PetMarble::PetMarbleMatchContext* CreateCoopBossMatch(::RPG::Client::ActivityMarble::MarblePVPMode a1)
		{
			return ((::RPG::Client::PetMarble::PetMarbleMatchContext*(*)(::RPG::Client::ActivityMarble::MarblePVPMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_CREATECOOPBOSSMATCH_OFFSET))(a1);
		}

		::System::Void SetCoopPlayer(::RPG::Client::ActivityMarble::IMarblePlayer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::IMarblePlayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_SETCOOPPLAYER_OFFSET))(this, a1);
		}

		::System::Void SetTeamSelectMember(::RPG::Client::ActivityMarble::IMarbleData* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::IMarbleData*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_SETTEAMSELECTMEMBER_OFFSET))(this, a1, a2);
		}

		::System::Void SetInitInfo(::GFHCKBHCNDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFHCKBHCNDF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_SETINITINFO_OFFSET))(this, a1);
		}

		static ::System::Void _FillCoopPlayerTeamFromFriend(::RPG::Client::PetMarble::PetMarblePlayer* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::RPG::Client::PetMarble::PetMarblePlayer*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT__FILLCOOPPLAYERTEAMFROMFRIEND_OFFSET))(a1, a2);
		}

		::RPG::Client::Promises::Promise* InitReadyPromise()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_INITREADYPROMISE_OFFSET))(this);
		}

		::RPG::Client::MarbleBall* GetMarbleBall(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::MarbleBall*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_GETMARBLEBALL_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MarbleBall* CreateBall(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::MarbleBall*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_CREATEBALL_OFFSET))(this, a1, a2);
		}

		::System::Void OnLoadLevelConfig(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_ONLOADLEVELCONFIG_OFFSET))(this, a1);
		}

		::RPG::Client::MarbleBall* CreateBall_1(::System::UInt32 a1)
		{
			return ((::RPG::Client::MarbleBall*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_CREATEBALL_1_OFFSET))(this, a1);
		}

		::System::Void StartBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_STARTBATTLE_OFFSET))(this);
		}

		static ::System::Boolean _HasFinalBattleInitInfo(::GFHCKBHCNDF* a1)
		{
			return ((::System::Boolean(*)(::GFHCKBHCNDF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT__HASFINALBATTLEINITINFO_OFFSET))(a1);
		}

		::System::Void UpdateSelfPlayer(::RPG::Client::LobbyMemberData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_UPDATESELFPLAYER_OFFSET))(this, a1);
		}

		::System::Void UpdateOtherPlayer(::RPG::Client::LobbyMemberData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_UPDATEOTHERPLAYER_OFFSET))(this, a1);
		}

		::System::Void OnRoomInit(::PJMGBLIFDFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJMGBLIFDFP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_ONROOMINIT_OFFSET))(this, a1);
		}

		::RPG::Client::PetMarble::Level::IPetMarbleLevelMode* GetLevelMode()
		{
			return ((::RPG::Client::PetMarble::Level::IPetMarbleLevelMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_GETLEVELMODE_OFFSET))(this);
		}

		::System::Void _UpdateMembers(::System::Collections::Generic::IList_1<::LMLNNHKJEIP*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::LMLNNHKJEIP*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT__UPDATEMEMBERS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMatched()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_GET_ISMATCHED_OFFSET))(this);
		}

		::RPG::Client::ActivityMarble::MarblePVPManagerBase* get_PVPMgr()
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPManagerBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_GET_PVPMGR_OFFSET))(this);
		}

		::RPG::Client::ActivityMarble::IMarblePlayer* get_CoopPlayer()
		{
			return ((::RPG::Client::ActivityMarble::IMarblePlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_GET_COOPPLAYER_OFFSET))(this);
		}

		::System::Void set_CoopPlayer(::RPG::Client::ActivityMarble::IMarblePlayer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::IMarblePlayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_SET_COOPPLAYER_OFFSET))(this, a1);
		}

	};
}
