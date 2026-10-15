#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByTargetAliveState; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTARGETALIVESTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D538290)
#define RPG_GAMECORE_BYTARGETALIVESTATE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D5384A0)
#define RPG_GAMECORE_BYTARGETALIVESTATE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D538470)
#define RPG_GAMECORE_BYTARGETALIVESTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5382A0)
#define RPG_GAMECORE_BYTARGETALIVESTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D538260)

namespace RPG::GameCore
{
	class ByTargetAliveState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AliveStateMask AliveStateMask; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETALIVESTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTargetAliveState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTargetAliveState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETALIVESTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTargetAliveState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTargetAliveState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETALIVESTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetAliveState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetAliveState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETALIVESTATE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetAliveState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetAliveState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETALIVESTATE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
