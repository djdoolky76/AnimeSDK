#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class ELIEBFOEFNN;
namespace RPG::Client { class ChimeraDuelChallengeGameSession; }
namespace RPG::Client { class ChimeraDuelFriendChallengeTeamAdapter; }
namespace RPG::Client { class ChimeraDuelPvpTeamSnapshot; }
namespace RPG::Client { class PlayerPlatformInfo; }
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1DFEEE80)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFEA110)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_DOCHALLENGE_OFFSET UNITYSDK_OFFSET(0x1DFEE540)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_CHIMERAS_OFFSET UNITYSDK_OFFSET(0x1DFEEE20)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1DFEE8E0)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_FRIENDCHALLENGEMASTERICON_OFFSET UNITYSDK_OFFSET(0x1DFEECC0)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_HEADICON_OFFSET UNITYSDK_OFFSET(0x1DFEE840)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_MASTERFIGURE_OFFSET UNITYSDK_OFFSET(0x1DFEEB30)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_MASTERID_OFFSET UNITYSDK_OFFSET(0x1DFE8AD0)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1DFEE7F0)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x1DFEEAE0)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_RANKICON_OFFSET UNITYSDK_OFFSET(0x1DFEEDA0)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_RANKLEVEL_OFFSET UNITYSDK_OFFSET(0x1DFE8B30)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_RANKNAME_OFFSET UNITYSDK_OFFSET(0x1DFEEA20)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_UID_OFFSET UNITYSDK_OFFSET(0x1DFE8A60)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelFriendChallengeTeamAdapter_TypeDefinitionIndex = 64739;

	class ChimeraDuelFriendChallengeTeamAdapter : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraDuelChallengeGameSession* _Session; // 0x10
		::ELIEBFOEFNN* _FriendData; // 0x18
		::System::Void _ctor(::ELIEBFOEFNN* a1, ::RPG::Client::ChimeraDuelChallengeGameSession* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ELIEBFOEFNN*, ::RPG::Client::ChimeraDuelChallengeGameSession*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void DoChallenge(::RPG::Client::ChimeraDuelPvpTeamSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelPvpTeamSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_DOCHALLENGE_OFFSET))(this, a1);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_UID_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_NAME_OFFSET))(this);
		}

		::System::String* get_HeadIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_HEADICON_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::PlayerPlatformInfo* get_PlatformInfo()
		{
			return ((::RPG::Client::PlayerPlatformInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_PLATFORMINFO_OFFSET))(this);
		}

		::System::UInt32 get_MasterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_MASTERID_OFFSET))(this);
		}

		::System::String* get_MasterFigure()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_MASTERFIGURE_OFFSET))(this);
		}

		::System::String* get_FriendChallengeMasterIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_FRIENDCHALLENGEMASTERICON_OFFSET))(this);
		}

		::System::UInt32 get_RankLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_RANKLEVEL_OFFSET))(this);
		}

		::System::String* get_RankIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_RANKICON_OFFSET))(this);
		}

		::RPG::Client::TextID get_RankName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_RANKNAME_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* get_Chimeras()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_CHIMERAS_OFFSET))(this);
		}

		::System::Int32 CompareTo(::RPG::Client::ChimeraDuelFriendChallengeTeamAdapter* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChimeraDuelFriendChallengeTeamAdapter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_COMPARETO_OFFSET))(this, a1);
		}

	};
}
