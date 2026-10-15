#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class RtLifeBindingConfig; }
namespace RPG::GameCore { class RtTargetMapPosWithMaxTargetCount; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTTARGETMAPPOSWITHMAXTARGETCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA3D370)
#define RPG_GAMECORE_RTTARGETMAPPOSWITHMAXTARGETCOUNT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA3D620)
#define RPG_GAMECORE_RTTARGETMAPPOSWITHMAXTARGETCOUNT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA3D580)
#define RPG_GAMECORE_RTTARGETMAPPOSWITHMAXTARGETCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA3D3D0)
#define RPG_GAMECORE_RTTARGETMAPPOSWITHMAXTARGETCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA3D2D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetMapPosWithMaxTargetCount_TypeDefinitionIndex = 24258;

	class RtTargetMapPosWithMaxTargetCount : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::TargetEvaluator* MustIncludeTarget; // 0x10
		::RPG::GameCore::DynamicFloat* Radius; // 0x18
		::RPG::GameCore::DynamicFloat* Tolerance; // 0x20
		::RPG::GameCore::RtLifeBindingConfig* LifeBinding; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPPOSWITHMAXTARGETCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtTargetMapPosWithMaxTargetCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtTargetMapPosWithMaxTargetCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPPOSWITHMAXTARGETCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtTargetMapPosWithMaxTargetCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtTargetMapPosWithMaxTargetCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPPOSWITHMAXTARGETCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapPosWithMaxTargetCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapPosWithMaxTargetCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPPOSWITHMAXTARGETCOUNT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapPosWithMaxTargetCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapPosWithMaxTargetCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPPOSWITHMAXTARGETCOUNT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
