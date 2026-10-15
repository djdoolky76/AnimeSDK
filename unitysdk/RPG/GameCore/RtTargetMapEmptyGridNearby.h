#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class RtTargetMapEmptyGridNearby; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTTARGETMAPEMPTYGRIDNEARBY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA3B4E0)
#define RPG_GAMECORE_RTTARGETMAPEMPTYGRIDNEARBY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA3B880)
#define RPG_GAMECORE_RTTARGETMAPEMPTYGRIDNEARBY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA3B7D0)
#define RPG_GAMECORE_RTTARGETMAPEMPTYGRIDNEARBY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA3B570)
#define RPG_GAMECORE_RTTARGETMAPEMPTYGRIDNEARBY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA3B430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetMapEmptyGridNearby_TypeDefinitionIndex = 24255;

	class RtTargetMapEmptyGridNearby : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::TargetEvaluator* IgnoreGridCharacter; // 0x10
		::RPG::GameCore::PredicateConfig* GridFilter; // 0x18
		::RPG::GameCore::DynamicFloat* MaxDistance; // 0x20
		::RPG::GameCore::DynamicFloat* Count; // 0x28
		::System::Boolean ByRandom; // 0x30
		::System::Byte _padding0[0x7];
		::RPG::GameCore::ValueEvaluatorConfig* GridEvaluator; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPEMPTYGRIDNEARBY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtTargetMapEmptyGridNearby* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtTargetMapEmptyGridNearby*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPEMPTYGRIDNEARBY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtTargetMapEmptyGridNearby* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtTargetMapEmptyGridNearby*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPEMPTYGRIDNEARBY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapEmptyGridNearby* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapEmptyGridNearby*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPEMPTYGRIDNEARBY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapEmptyGridNearby* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapEmptyGridNearby*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPEMPTYGRIDNEARBY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
