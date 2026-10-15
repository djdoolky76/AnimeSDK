#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class RtTargetFetchPosWithMaxTargetCount; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTTARGETFETCHPOSWITHMAXTARGETCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA39510)
#define RPG_GAMECORE_RTTARGETFETCHPOSWITHMAXTARGETCOUNT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA397E0)
#define RPG_GAMECORE_RTTARGETFETCHPOSWITHMAXTARGETCOUNT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA39740)
#define RPG_GAMECORE_RTTARGETFETCHPOSWITHMAXTARGETCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA39570)
#define RPG_GAMECORE_RTTARGETFETCHPOSWITHMAXTARGETCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA39470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetFetchPosWithMaxTargetCount_TypeDefinitionIndex = 24242;

	class RtTargetFetchPosWithMaxTargetCount : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceTargetList; // 0x10
		::RPG::GameCore::TargetEvaluator* MustIncludeTarget; // 0x18
		::RPG::GameCore::DynamicFloat* Radius; // 0x20
		::RPG::GameCore::DynamicFloat* Tolerance; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHPOSWITHMAXTARGETCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtTargetFetchPosWithMaxTargetCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtTargetFetchPosWithMaxTargetCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHPOSWITHMAXTARGETCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtTargetFetchPosWithMaxTargetCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtTargetFetchPosWithMaxTargetCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHPOSWITHMAXTARGETCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetFetchPosWithMaxTargetCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetFetchPosWithMaxTargetCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHPOSWITHMAXTARGETCOUNT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetFetchPosWithMaxTargetCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetFetchPosWithMaxTargetCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHPOSWITHMAXTARGETCOUNT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
