#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsCharacterWeaknessActivated; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISCHARACTERWEAKNESSACTIVATED_CTOR_OFFSET UNITYSDK_OFFSET(0x1D50B950)
#define RPG_GAMECORE_BYISCHARACTERWEAKNESSACTIVATED_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D50BB60)
#define RPG_GAMECORE_BYISCHARACTERWEAKNESSACTIVATED_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D50BB30)
#define RPG_GAMECORE_BYISCHARACTERWEAKNESSACTIVATED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D50B960)
#define RPG_GAMECORE_BYISCHARACTERWEAKNESSACTIVATED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D50B920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsCharacterWeaknessActivated_TypeDefinitionIndex = 23544;

	class ByIsCharacterWeaknessActivated : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* DamageTypeList; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERWEAKNESSACTIVATED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsCharacterWeaknessActivated* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsCharacterWeaknessActivated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERWEAKNESSACTIVATED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsCharacterWeaknessActivated* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsCharacterWeaknessActivated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERWEAKNESSACTIVATED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCharacterWeaknessActivated* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCharacterWeaknessActivated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERWEAKNESSACTIVATED_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCharacterWeaknessActivated* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCharacterWeaknessActivated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERWEAKNESSACTIVATED_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
