#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsProjectileHitTarget; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISPROJECTILEHITTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D51DC50)
#define RPG_GAMECORE_BYISPROJECTILEHITTARGET_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D51DE10)
#define RPG_GAMECORE_BYISPROJECTILEHITTARGET_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D51DDE0)
#define RPG_GAMECORE_BYISPROJECTILEHITTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D51DC60)
#define RPG_GAMECORE_BYISPROJECTILEHITTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D51DC20)

namespace RPG::GameCore
{
	class ByIsProjectileHitTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROJECTILEHITTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsProjectileHitTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsProjectileHitTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROJECTILEHITTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsProjectileHitTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsProjectileHitTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROJECTILEHITTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsProjectileHitTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsProjectileHitTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROJECTILEHITTARGET_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsProjectileHitTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsProjectileHitTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROJECTILEHITTARGET_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
