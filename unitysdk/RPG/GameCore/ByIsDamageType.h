#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsDamageType; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISDAMAGETYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E2010)
#define RPG_GAMECORE_BYISDAMAGETYPE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4E2220)
#define RPG_GAMECORE_BYISDAMAGETYPE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4E21F0)
#define RPG_GAMECORE_BYISDAMAGETYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4E2020)
#define RPG_GAMECORE_BYISDAMAGETYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4E1FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsDamageType_TypeDefinitionIndex = 23517;

	class ByIsDamageType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* DamageTypeList; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGETYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsDamageType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsDamageType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGETYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsDamageType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsDamageType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGETYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDamageType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDamageType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGETYPE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDamageType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDamageType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGETYPE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
