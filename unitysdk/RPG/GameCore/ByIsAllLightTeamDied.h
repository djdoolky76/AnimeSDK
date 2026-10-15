#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsAllLightTeamDied; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISALLLIGHTTEAMDIED_CTOR_OFFSET UNITYSDK_OFFSET(0x1D506E80)
#define RPG_GAMECORE_BYISALLLIGHTTEAMDIED_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D507040)
#define RPG_GAMECORE_BYISALLLIGHTTEAMDIED_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D507010)
#define RPG_GAMECORE_BYISALLLIGHTTEAMDIED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D506E90)
#define RPG_GAMECORE_BYISALLLIGHTTEAMDIED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D506E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsAllLightTeamDied_TypeDefinitionIndex = 23027;

	class ByIsAllLightTeamDied : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TurnState TurnState; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLLIGHTTEAMDIED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsAllLightTeamDied* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsAllLightTeamDied*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLLIGHTTEAMDIED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsAllLightTeamDied* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsAllLightTeamDied*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLLIGHTTEAMDIED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAllLightTeamDied* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAllLightTeamDied*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLLIGHTTEAMDIED_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAllLightTeamDied* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAllLightTeamDied*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLLIGHTTEAMDIED_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
