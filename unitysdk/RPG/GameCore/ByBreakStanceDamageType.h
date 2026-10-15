#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByBreakStanceDamageType; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYBREAKSTANCEDAMAGETYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D488080)
#define RPG_GAMECORE_BYBREAKSTANCEDAMAGETYPE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D488290)
#define RPG_GAMECORE_BYBREAKSTANCEDAMAGETYPE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D488260)
#define RPG_GAMECORE_BYBREAKSTANCEDAMAGETYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D488090)
#define RPG_GAMECORE_BYBREAKSTANCEDAMAGETYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D488050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByBreakStanceDamageType_TypeDefinitionIndex = 23519;

	class ByBreakStanceDamageType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AttackDamageType DamageType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBREAKSTANCEDAMAGETYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByBreakStanceDamageType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByBreakStanceDamageType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBREAKSTANCEDAMAGETYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByBreakStanceDamageType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByBreakStanceDamageType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBREAKSTANCEDAMAGETYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByBreakStanceDamageType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByBreakStanceDamageType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBREAKSTANCEDAMAGETYPE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByBreakStanceDamageType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByBreakStanceDamageType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBREAKSTANCEDAMAGETYPE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
