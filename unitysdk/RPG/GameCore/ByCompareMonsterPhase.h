#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareMonsterPhase; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREMONSTERPHASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4C0E70)
#define RPG_GAMECORE_BYCOMPAREMONSTERPHASE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4C1140)
#define RPG_GAMECORE_BYCOMPAREMONSTERPHASE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4C10E0)
#define RPG_GAMECORE_BYCOMPAREMONSTERPHASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4C0EB0)
#define RPG_GAMECORE_BYCOMPAREMONSTERPHASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4C0E10)

namespace RPG::GameCore
{
	class ByCompareMonsterPhase : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERPHASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareMonsterPhase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareMonsterPhase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERPHASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareMonsterPhase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareMonsterPhase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERPHASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterPhase* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterPhase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERPHASE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterPhase* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterPhase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERPHASE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
