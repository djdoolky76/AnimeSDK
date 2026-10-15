#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByAttackType; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYATTACKTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D458BA0)
#define RPG_GAMECORE_BYATTACKTYPE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D458E10)
#define RPG_GAMECORE_BYATTACKTYPE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D458DB0)
#define RPG_GAMECORE_BYATTACKTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D458BE0)
#define RPG_GAMECORE_BYATTACKTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D458B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByAttackType_TypeDefinitionIndex = 23509;

	class ByAttackType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::RPG::GameCore::AttackType>* AttackTypes; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYATTACKTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByAttackType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByAttackType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYATTACKTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByAttackType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByAttackType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYATTACKTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAttackType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAttackType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYATTACKTYPE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAttackType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAttackType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYATTACKTYPE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
