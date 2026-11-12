#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BySaveModelWhenDead; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYSAVEMODELWHENDEAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E746B90)
#define RPG_GAMECORE_BYSAVEMODELWHENDEAD_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E746DB0)
#define RPG_GAMECORE_BYSAVEMODELWHENDEAD_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E746D50)
#define RPG_GAMECORE_BYSAVEMODELWHENDEAD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E746BD0)
#define RPG_GAMECORE_BYSAVEMODELWHENDEAD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E746B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BySaveModelWhenDead_TypeDefinitionIndex = 23565;

	class BySaveModelWhenDead : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSAVEMODELWHENDEAD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BySaveModelWhenDead* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BySaveModelWhenDead*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSAVEMODELWHENDEAD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BySaveModelWhenDead* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BySaveModelWhenDead*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSAVEMODELWHENDEAD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySaveModelWhenDead* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySaveModelWhenDead*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSAVEMODELWHENDEAD_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySaveModelWhenDead* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySaveModelWhenDead*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSAVEMODELWHENDEAD_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
