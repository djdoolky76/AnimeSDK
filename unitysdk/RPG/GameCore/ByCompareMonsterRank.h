#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareMonsterRank; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREMONSTERRANK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4C1770)
#define RPG_GAMECORE_BYCOMPAREMONSTERRANK_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4C1A20)
#define RPG_GAMECORE_BYCOMPAREMONSTERRANK_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4C19E0)
#define RPG_GAMECORE_BYCOMPAREMONSTERRANK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4C1780)
#define RPG_GAMECORE_BYCOMPAREMONSTERRANK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4C1730)

namespace RPG::GameCore
{
	class ByCompareMonsterRank : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::System::UInt32 CompareValue; // 0x2C
		::System::Boolean ResultWhenNotMonster; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERRANK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareMonsterRank* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareMonsterRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERRANK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareMonsterRank* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareMonsterRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERRANK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterRank* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERRANK_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterRank* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERRANK_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
