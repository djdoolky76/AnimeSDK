#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class FightFestPlayerInfo; }
namespace RPG::Client { class FightFestScorePhaseExtraData; }
namespace RPG::GameCore { class FightFestScorePhaseRow; }
namespace System { class String; }

#define RPG_CLIENT_FIGHTFESTSCOREPHASEEXTRADATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1B308400)
#define RPG_CLIENT_FIGHTFESTSCOREPHASEEXTRADATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B309380)
#define RPG_CLIENT_FIGHTFESTSCOREPHASEEXTRADATA_GET_PLAYERINFO_OFFSET UNITYSDK_OFFSET(0x1B309390)
#define RPG_CLIENT_FIGHTFESTSCOREPHASEEXTRADATA_GET_QUALIFYTIP_OFFSET UNITYSDK_OFFSET(0x1B308380)
#define RPG_CLIENT_FIGHTFESTSCOREPHASEEXTRADATA_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x1B307EB0)
#define RPG_CLIENT_FIGHTFESTSCOREPHASEEXTRADATA_GET_TARGETAVATARICON_OFFSET UNITYSDK_OFFSET(0x1B307FB0)
#define RPG_CLIENT_FIGHTFESTSCOREPHASEEXTRADATA_GET_TARGETAVATARMINIICON_OFFSET UNITYSDK_OFFSET(0x1B3080D0)
#define RPG_CLIENT_FIGHTFESTSCOREPHASEEXTRADATA_GET_TARGETAVATARNAME_OFFSET UNITYSDK_OFFSET(0x1B308220)
#define RPG_CLIENT_FIGHTFESTSCOREPHASEEXTRADATA_GET_TARGETSCORE_OFFSET UNITYSDK_OFFSET(0x1B307DF0)
#define RPG_CLIENT_FIGHTFESTSCOREPHASEEXTRADATA_SET_PLAYERINFO_OFFSET UNITYSDK_OFFSET(0x1B3093A0)

namespace RPG::Client
{
	inline static constexpr unsigned int FightFestScorePhaseExtraData_TypeDefinitionIndex = 65623;

	class FightFestScorePhaseExtraData : public ::System::Object
	{
	public:
		::RPG::Client::FightFestPlayerInfo* _PlayerInfo_k__BackingField; // 0x10
		::RPG::GameCore::FightFestScorePhaseRow* _ScoreRow; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCOREPHASEEXTRADATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::FightFestScorePhaseExtraData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::FightFestScorePhaseExtraData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCOREPHASEEXTRADATA_CREATE_OFFSET))(a1);
		}

		::RPG::Client::FightFestPlayerInfo* get_PlayerInfo()
		{
			return ((::RPG::Client::FightFestPlayerInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCOREPHASEEXTRADATA_GET_PLAYERINFO_OFFSET))(this);
		}

		::System::Void set_PlayerInfo(::RPG::Client::FightFestPlayerInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestPlayerInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCOREPHASEEXTRADATA_SET_PLAYERINFO_OFFSET))(this, a1);
		}

		::System::UInt32 get_TargetScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCOREPHASEEXTRADATA_GET_TARGETSCORE_OFFSET))(this);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCOREPHASEEXTRADATA_GET_REWARDID_OFFSET))(this);
		}

		::System::String* get_TargetAvatarIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCOREPHASEEXTRADATA_GET_TARGETAVATARICON_OFFSET))(this);
		}

		::System::String* get_TargetAvatarMiniIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCOREPHASEEXTRADATA_GET_TARGETAVATARMINIICON_OFFSET))(this);
		}

		::RPG::Client::TextID get_TargetAvatarName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCOREPHASEEXTRADATA_GET_TARGETAVATARNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_QualifyTip()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCOREPHASEEXTRADATA_GET_QUALIFYTIP_OFFSET))(this);
		}

	};
}
