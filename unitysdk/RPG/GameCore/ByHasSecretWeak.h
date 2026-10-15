#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByHasSecretWeak; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASSECRETWEAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4FA430)
#define RPG_GAMECORE_BYHASSECRETWEAK_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4FA650)
#define RPG_GAMECORE_BYHASSECRETWEAK_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4FA5F0)
#define RPG_GAMECORE_BYHASSECRETWEAK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4FA470)
#define RPG_GAMECORE_BYHASSECRETWEAK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4FA3D0)

namespace RPG::GameCore
{
	class ByHasSecretWeak : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSECRETWEAK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHasSecretWeak* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHasSecretWeak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSECRETWEAK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHasSecretWeak* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHasSecretWeak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSECRETWEAK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSecretWeak* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSecretWeak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSECRETWEAK_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSecretWeak* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSecretWeak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSECRETWEAK_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
