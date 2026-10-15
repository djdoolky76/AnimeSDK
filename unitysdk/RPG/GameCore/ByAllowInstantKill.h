#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByAllowInstantKill; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYALLOWINSTANTKILL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D481830)
#define RPG_GAMECORE_BYALLOWINSTANTKILL_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4819F0)
#define RPG_GAMECORE_BYALLOWINSTANTKILL_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4819C0)
#define RPG_GAMECORE_BYALLOWINSTANTKILL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D481840)
#define RPG_GAMECORE_BYALLOWINSTANTKILL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D481800)

namespace RPG::GameCore
{
	class ByAllowInstantKill : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYALLOWINSTANTKILL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByAllowInstantKill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByAllowInstantKill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYALLOWINSTANTKILL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByAllowInstantKill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByAllowInstantKill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYALLOWINSTANTKILL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAllowInstantKill* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAllowInstantKill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYALLOWINSTANTKILL_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAllowInstantKill* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAllowInstantKill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYALLOWINSTANTKILL_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
