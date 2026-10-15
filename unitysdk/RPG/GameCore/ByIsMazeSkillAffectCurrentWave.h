#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsMazeSkillAffectCurrentWave; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISMAZESKILLAFFECTCURRENTWAVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D51D190)
#define RPG_GAMECORE_BYISMAZESKILLAFFECTCURRENTWAVE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D51D310)
#define RPG_GAMECORE_BYISMAZESKILLAFFECTCURRENTWAVE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D51D2E0)
#define RPG_GAMECORE_BYISMAZESKILLAFFECTCURRENTWAVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D51D1A0)
#define RPG_GAMECORE_BYISMAZESKILLAFFECTCURRENTWAVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D51D160)

namespace RPG::GameCore
{
	class ByIsMazeSkillAffectCurrentWave : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMAZESKILLAFFECTCURRENTWAVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMAZESKILLAFFECTCURRENTWAVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMAZESKILLAFFECTCURRENTWAVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMAZESKILLAFFECTCURRENTWAVE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMAZESKILLAFFECTCURRENTWAVE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
