#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvByHasMoveSinceLastTeleport; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYHASMOVESINCELASTTELEPORT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D395920)
#define RPG_GAMECORE_ADVBYHASMOVESINCELASTTELEPORT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D395AE0)
#define RPG_GAMECORE_ADVBYHASMOVESINCELASTTELEPORT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D395AB0)
#define RPG_GAMECORE_ADVBYHASMOVESINCELASTTELEPORT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D395930)
#define RPG_GAMECORE_ADVBYHASMOVESINCELASTTELEPORT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3958F0)

namespace RPG::GameCore
{
	class AdvByHasMoveSinceLastTeleport : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYHASMOVESINCELASTTELEPORT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByHasMoveSinceLastTeleport* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByHasMoveSinceLastTeleport*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYHASMOVESINCELASTTELEPORT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByHasMoveSinceLastTeleport* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByHasMoveSinceLastTeleport*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYHASMOVESINCELASTTELEPORT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByHasMoveSinceLastTeleport* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByHasMoveSinceLastTeleport*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYHASMOVESINCELASTTELEPORT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByHasMoveSinceLastTeleport* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByHasMoveSinceLastTeleport*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYHASMOVESINCELASTTELEPORT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
