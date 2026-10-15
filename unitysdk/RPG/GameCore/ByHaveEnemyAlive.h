#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByHaveEnemyAlive; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHAVEENEMYALIVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4FF290)
#define RPG_GAMECORE_BYHAVEENEMYALIVE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4FF510)
#define RPG_GAMECORE_BYHAVEENEMYALIVE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4FF4E0)
#define RPG_GAMECORE_BYHAVEENEMYALIVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4FF2A0)
#define RPG_GAMECORE_BYHAVEENEMYALIVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4FF260)

namespace RPG::GameCore
{
	class ByHaveEnemyAlive : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean IncludeUnselectable; // 0x28
		::System::Boolean IncludePuppet; // 0x29
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEENEMYALIVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHaveEnemyAlive* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHaveEnemyAlive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEENEMYALIVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHaveEnemyAlive* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHaveEnemyAlive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEENEMYALIVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveEnemyAlive* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveEnemyAlive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEENEMYALIVE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveEnemyAlive* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveEnemyAlive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEENEMYALIVE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
