#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class RtCollision2DShapeConfig; }
namespace RPG::GameCore { class RtTargetFetchTargetInArea; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTTARGETFETCHTARGETINAREA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA39C70)
#define RPG_GAMECORE_RTTARGETFETCHTARGETINAREA_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA3A070)
#define RPG_GAMECORE_RTTARGETFETCHTARGETINAREA_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA39FF0)
#define RPG_GAMECORE_RTTARGETFETCHTARGETINAREA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA39CD0)
#define RPG_GAMECORE_RTTARGETFETCHTARGETINAREA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA39BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetFetchTargetInArea_TypeDefinitionIndex = 24240;

	class RtTargetFetchTargetInArea : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetEvaluator* BasePos; // 0x10
		::RPG::GameCore::TargetEvaluator* BaseDir; // 0x18
		::RPG::GameCore::RtCollision2DShapeConfig* Shape; // 0x20
		::RPG::GameCore::DynamicFloat* Tolerance; // 0x28
		::RPG::GameCore::ValueEvaluatorConfig* OffsetX; // 0x30
		::RPG::GameCore::ValueEvaluatorConfig* OffsetZ; // 0x38
		::RPG::GameCore::ValueEvaluatorConfig* YawAngle; // 0x40
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* Layers; // 0x48
		::RPG::GameCore::EntityTypeMask EntityTypeMask; // 0x50
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TeamTypeMask TeamTypeMask; // 0x58
		::System::Byte _padding1[0x4];
		::RPG::GameCore::PredicateConfig* Filter; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHTARGETINAREA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtTargetFetchTargetInArea* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtTargetFetchTargetInArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHTARGETINAREA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtTargetFetchTargetInArea* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtTargetFetchTargetInArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHTARGETINAREA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetFetchTargetInArea* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetFetchTargetInArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHTARGETINAREA_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetFetchTargetInArea* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetFetchTargetInArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHTARGETINAREA_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
