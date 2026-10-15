#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIValueCompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class ST_Parkour_ByCompareRank; }
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_ST_PARKOUR_BYCOMPARERANK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3081D0)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPARERANK_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D308450)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPARERANK_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D308420)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPARERANK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3081E0)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPARERANK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3081A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ST_Parkour_ByCompareRank_TypeDefinitionIndex = 10264;

	class ST_Parkour_ByCompareRank : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean CompareToPlayer; // 0x20
		::System::Byte _padding0[0x3];
		::RPG::GameCore::ComplexSkillAIValueCompareType CompareType; // 0x24
		::System::Int32 CompareValue; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPARERANK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::ST_Parkour_ByCompareRank* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::ST_Parkour_ByCompareRank*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPARERANK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::ST_Parkour_ByCompareRank* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::ST_Parkour_ByCompareRank*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPARERANK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareRank* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareRank*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPARERANK_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareRank* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareRank*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPARERANK_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
