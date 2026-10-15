#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsTriggeredBlockDamage; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISTRIGGEREDBLOCKDAMAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D528690)
#define RPG_GAMECORE_BYISTRIGGEREDBLOCKDAMAGE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D528850)
#define RPG_GAMECORE_BYISTRIGGEREDBLOCKDAMAGE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D528820)
#define RPG_GAMECORE_BYISTRIGGEREDBLOCKDAMAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5286A0)
#define RPG_GAMECORE_BYISTRIGGEREDBLOCKDAMAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D528660)

namespace RPG::GameCore
{
	class ByIsTriggeredBlockDamage : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTRIGGEREDBLOCKDAMAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsTriggeredBlockDamage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsTriggeredBlockDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTRIGGEREDBLOCKDAMAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsTriggeredBlockDamage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsTriggeredBlockDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTRIGGEREDBLOCKDAMAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTriggeredBlockDamage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTriggeredBlockDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTRIGGEREDBLOCKDAMAGE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTriggeredBlockDamage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTriggeredBlockDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTRIGGEREDBLOCKDAMAGE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
