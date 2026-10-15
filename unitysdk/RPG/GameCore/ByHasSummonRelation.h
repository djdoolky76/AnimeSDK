#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByHasSummonRelation; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASSUMMONRELATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4CFE70)
#define RPG_GAMECORE_BYHASSUMMONRELATION_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4D00D0)
#define RPG_GAMECORE_BYHASSUMMONRELATION_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4D00A0)
#define RPG_GAMECORE_BYHASSUMMONRELATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4CFE80)
#define RPG_GAMECORE_BYHASSUMMONRELATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4CFE40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasSummonRelation_TypeDefinitionIndex = 22555;

	class ByHasSummonRelation : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SummonerType; // 0x20
		::RPG::GameCore::TargetEvaluator* ServantType; // 0x28
		::System::Boolean AllGeneration; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSUMMONRELATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHasSummonRelation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHasSummonRelation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSUMMONRELATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHasSummonRelation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHasSummonRelation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSUMMONRELATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSummonRelation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSummonRelation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSUMMONRELATION_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSummonRelation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSummonRelation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSUMMONRELATION_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
