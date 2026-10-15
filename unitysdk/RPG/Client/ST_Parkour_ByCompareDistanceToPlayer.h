#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIValueCompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class ST_Parkour_ByCompareDistanceToPlayer; }
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_ST_PARKOUR_BYCOMPAREDISTANCETOPLAYER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D333D70)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPAREDISTANCETOPLAYER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D333F80)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPAREDISTANCETOPLAYER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D333F50)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPAREDISTANCETOPLAYER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D333D80)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPAREDISTANCETOPLAYER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D333D40)

namespace RPG::Client
{
	class ST_Parkour_ByCompareDistanceToPlayer : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ComplexSkillAIValueCompareType CompareType; // 0x20
		::System::Single CompareValue; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPAREDISTANCETOPLAYER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::ST_Parkour_ByCompareDistanceToPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::ST_Parkour_ByCompareDistanceToPlayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPAREDISTANCETOPLAYER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::ST_Parkour_ByCompareDistanceToPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::ST_Parkour_ByCompareDistanceToPlayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPAREDISTANCETOPLAYER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareDistanceToPlayer* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareDistanceToPlayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPAREDISTANCETOPLAYER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareDistanceToPlayer* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareDistanceToPlayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPAREDISTANCETOPLAYER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
