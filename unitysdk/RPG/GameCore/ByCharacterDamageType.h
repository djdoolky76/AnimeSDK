#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCharacterDamageType; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHARACTERDAMAGETYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D489AD0)
#define RPG_GAMECORE_BYCHARACTERDAMAGETYPE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D489CE0)
#define RPG_GAMECORE_BYCHARACTERDAMAGETYPE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D489CB0)
#define RPG_GAMECORE_BYCHARACTERDAMAGETYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D489AE0)
#define RPG_GAMECORE_BYCHARACTERDAMAGETYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D489AA0)

namespace RPG::GameCore
{
	class ByCharacterDamageType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AttackDamageType DamageType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHARACTERDAMAGETYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCharacterDamageType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCharacterDamageType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHARACTERDAMAGETYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCharacterDamageType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCharacterDamageType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHARACTERDAMAGETYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCharacterDamageType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCharacterDamageType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHARACTERDAMAGETYPE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCharacterDamageType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCharacterDamageType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHARACTERDAMAGETYPE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
