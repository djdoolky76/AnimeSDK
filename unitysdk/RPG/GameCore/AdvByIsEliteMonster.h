#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvByIsEliteMonster; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYISELITEMONSTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D368D00)
#define RPG_GAMECORE_ADVBYISELITEMONSTER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D368EC0)
#define RPG_GAMECORE_ADVBYISELITEMONSTER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D368E90)
#define RPG_GAMECORE_ADVBYISELITEMONSTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D368D10)
#define RPG_GAMECORE_ADVBYISELITEMONSTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D368CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByIsEliteMonster_TypeDefinitionIndex = 21816;

	class AdvByIsEliteMonster : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYISELITEMONSTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByIsEliteMonster* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByIsEliteMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYISELITEMONSTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByIsEliteMonster* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByIsEliteMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYISELITEMONSTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByIsEliteMonster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByIsEliteMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYISELITEMONSTER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByIsEliteMonster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByIsEliteMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYISELITEMONSTER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
