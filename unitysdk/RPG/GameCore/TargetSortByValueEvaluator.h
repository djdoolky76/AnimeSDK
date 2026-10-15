#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetSortByValueEvaluator; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTBYVALUEEVALUATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB45970)
#define RPG_GAMECORE_TARGETSORTBYVALUEEVALUATOR_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB45AB0)
#define RPG_GAMECORE_TARGETSORTBYVALUEEVALUATOR_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB45A80)
#define RPG_GAMECORE_TARGETSORTBYVALUEEVALUATOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB45980)
#define RPG_GAMECORE_TARGETSORTBYVALUEEVALUATOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB45940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByValueEvaluator_TypeDefinitionIndex = 23979;

	class TargetSortByValueEvaluator : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean HighestFirst; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::GameCore::ValueEvaluatorConfig* Evaluator; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYVALUEEVALUATOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSortByValueEvaluator* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSortByValueEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYVALUEEVALUATOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSortByValueEvaluator* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSortByValueEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYVALUEEVALUATOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByValueEvaluator* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByValueEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYVALUEEVALUATOR_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByValueEvaluator* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByValueEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYVALUEEVALUATOR_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
