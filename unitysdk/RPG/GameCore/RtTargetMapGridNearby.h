#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class RtTargetMapGridNearby; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTTARGETMAPGRIDNEARBY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA69E10)
#define RPG_GAMECORE_RTTARGETMAPGRIDNEARBY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA6A1A0)
#define RPG_GAMECORE_RTTARGETMAPGRIDNEARBY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA6A0C0)
#define RPG_GAMECORE_RTTARGETMAPGRIDNEARBY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA69EA0)
#define RPG_GAMECORE_RTTARGETMAPGRIDNEARBY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA69D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetMapGridNearby_TypeDefinitionIndex = 24254;

	class RtTargetMapGridNearby : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::PredicateConfig* GridFilter; // 0x10
		::RPG::GameCore::DynamicFloat* MaxDistance; // 0x18
		::RPG::GameCore::DynamicFloat* Count; // 0x20
		::System::Boolean ByRandom; // 0x28
		::System::Byte _padding0[0x7];
		::RPG::GameCore::ValueEvaluatorConfig* GridEvaluator; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPGRIDNEARBY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtTargetMapGridNearby* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtTargetMapGridNearby*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPGRIDNEARBY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtTargetMapGridNearby* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtTargetMapGridNearby*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPGRIDNEARBY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapGridNearby* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapGridNearby*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPGRIDNEARBY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapGridNearby* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapGridNearby*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPGRIDNEARBY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
