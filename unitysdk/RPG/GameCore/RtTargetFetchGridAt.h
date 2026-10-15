#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class RtTargetFetchGridAt; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTTARGETFETCHGRIDAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA66420)
#define RPG_GAMECORE_RTTARGETFETCHGRIDAT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA665D0)
#define RPG_GAMECORE_RTTARGETFETCHGRIDAT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA665A0)
#define RPG_GAMECORE_RTTARGETFETCHGRIDAT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA66430)
#define RPG_GAMECORE_RTTARGETFETCHGRIDAT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA663F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetFetchGridAt_TypeDefinitionIndex = 24239;

	class RtTargetFetchGridAt : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetEvaluator* BasePos; // 0x10
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* x; // 0x18
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* y; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHGRIDAT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtTargetFetchGridAt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtTargetFetchGridAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHGRIDAT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtTargetFetchGridAt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtTargetFetchGridAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHGRIDAT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetFetchGridAt* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetFetchGridAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHGRIDAT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetFetchGridAt* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetFetchGridAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHGRIDAT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
