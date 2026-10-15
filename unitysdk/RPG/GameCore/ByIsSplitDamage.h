#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsSplitDamage; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISSPLITDAMAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F4F20)
#define RPG_GAMECORE_BYISSPLITDAMAGE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4F50E0)
#define RPG_GAMECORE_BYISSPLITDAMAGE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4F50B0)
#define RPG_GAMECORE_BYISSPLITDAMAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4F4F30)
#define RPG_GAMECORE_BYISSPLITDAMAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4F4EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsSplitDamage_TypeDefinitionIndex = 23008;

	class ByIsSplitDamage : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSPLITDAMAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsSplitDamage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsSplitDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSPLITDAMAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsSplitDamage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsSplitDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSPLITDAMAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSplitDamage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSplitDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSPLITDAMAGE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSplitDamage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSplitDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSPLITDAMAGE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
