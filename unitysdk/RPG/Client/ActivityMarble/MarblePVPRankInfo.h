#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MultiPlayerGameMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client::ActivityMarble { class MarblePVPRankInfo; }
namespace RPG::GameCore { class MarblePVPRankConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xCE8C060)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xCE83F50)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GETRANKUPPROGRESS_OFFSET UNITYSDK_OFFSET(0xCE8C360)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_BIGRANKICON_OFFSET UNITYSDK_OFFSET(0xCE8C740)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_CURSCORE_OFFSET UNITYSDK_OFFSET(0xCE8C800)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_HASRANKCONFIG_OFFSET UNITYSDK_OFFSET(0xCE8C510)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0xCE8C560)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_ISRANKMAX_OFFSET UNITYSDK_OFFSET(0xCE8C7B0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_MAXSCORE_OFFSET UNITYSDK_OFFSET(0xCE8BFF0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_MINSCORE_OFFSET UNITYSDK_OFFSET(0xCE8C2F0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCE8C600)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_RANKICON_OFFSET UNITYSDK_OFFSET(0xCE8C660)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_RANK_OFFSET UNITYSDK_OFFSET(0xCE8C5B0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_SMALLRANKICON_OFFSET UNITYSDK_OFFSET(0xCE8C6D0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_INIT_OFFSET UNITYSDK_OFFSET(0xCE83F60)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_REFRESHSCORE_OFFSET UNITYSDK_OFFSET(0xCE8C0D0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_SET_CURSCORE_OFFSET UNITYSDK_OFFSET(0xCE8C810)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarblePVPRankInfo_TypeDefinitionIndex = 78345;

	class MarblePVPRankInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::MarblePVPRankConfigRow* _CurRankConfig; // 0x10
		::RPG::GameCore::MarblePVPRankConfigRow* _NextRankConfg; // 0x18
		::RPG::GameCore::MultiPlayerGameMode _GameMode; // 0x20
		::System::UInt32 _CurScore_k__BackingField; // 0x24
		::System::Void _ctor(::RPG::GameCore::MultiPlayerGameMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MultiPlayerGameMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_CTOR_OFFSET))(this, a1);
		}

		::System::Void Init(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_INIT_OFFSET))(this, a1);
		}

		static ::RPG::Client::ActivityMarble::MarblePVPRankInfo* Create(::RPG::GameCore::MultiPlayerGameMode a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPRankInfo*(*)(::RPG::GameCore::MultiPlayerGameMode, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_CREATE_OFFSET))(a1, a2);
		}

		::System::Void RefreshScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_REFRESHSCORE_OFFSET))(this, a1);
		}

		::System::Single GetRankUpProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GETRANKUPPROGRESS_OFFSET))(this);
		}

		::System::Boolean get_HasRankConfig()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_HASRANKCONFIG_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_RANK_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_NAME_OFFSET))(this);
		}

		::System::String* get_RankIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_RANKICON_OFFSET))(this);
		}

		::System::String* get_SmallRankIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_SMALLRANKICON_OFFSET))(this);
		}

		::System::String* get_BigRankIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_BIGRANKICON_OFFSET))(this);
		}

		::System::UInt32 get_MinScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_MINSCORE_OFFSET))(this);
		}

		::System::UInt32 get_MaxScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_MAXSCORE_OFFSET))(this);
		}

		::System::Boolean get_IsRankMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_ISRANKMAX_OFFSET))(this);
		}

		::System::UInt32 get_CurScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_CURSCORE_OFFSET))(this);
		}

		::System::Void set_CurScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_SET_CURSCORE_OFFSET))(this, a1);
		}

	};
}
