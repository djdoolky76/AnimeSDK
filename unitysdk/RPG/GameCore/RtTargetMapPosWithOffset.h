#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtPosOffsetCoordType.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtLifeBindingConfig; }
namespace RPG::GameCore { class RtTargetMapPosWithOffset; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class ValueEvaluatorVec3; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTTARGETMAPPOSWITHOFFSET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA6B310)
#define RPG_GAMECORE_RTTARGETMAPPOSWITHOFFSET_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA6B490)
#define RPG_GAMECORE_RTTARGETMAPPOSWITHOFFSET_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA6B460)
#define RPG_GAMECORE_RTTARGETMAPPOSWITHOFFSET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA6B320)
#define RPG_GAMECORE_RTTARGETMAPPOSWITHOFFSET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA6B2E0)

namespace RPG::GameCore
{
	class RtTargetMapPosWithOffset : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::RtPosOffsetCoordType OffsetCoord; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* ParamTarget; // 0x18
		::RPG::GameCore::ValueEvaluatorVec3* Offset; // 0x20
		::RPG::GameCore::RtLifeBindingConfig* LifeBinding; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPPOSWITHOFFSET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtTargetMapPosWithOffset* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtTargetMapPosWithOffset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPPOSWITHOFFSET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtTargetMapPosWithOffset* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtTargetMapPosWithOffset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPPOSWITHOFFSET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapPosWithOffset* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapPosWithOffset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPPOSWITHOFFSET_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapPosWithOffset* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapPosWithOffset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPPOSWITHOFFSET_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
