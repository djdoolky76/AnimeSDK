#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByContainsRedStance; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCONTAINSREDSTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E90A0)
#define RPG_GAMECORE_BYCONTAINSREDSTANCE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4E9260)
#define RPG_GAMECORE_BYCONTAINSREDSTANCE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4E9230)
#define RPG_GAMECORE_BYCONTAINSREDSTANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4E90B0)
#define RPG_GAMECORE_BYCONTAINSREDSTANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4E9070)

namespace RPG::GameCore
{
	class ByContainsRedStance : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSREDSTANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByContainsRedStance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByContainsRedStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSREDSTANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByContainsRedStance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByContainsRedStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSREDSTANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainsRedStance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainsRedStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSREDSTANCE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainsRedStance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainsRedStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSREDSTANCE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
