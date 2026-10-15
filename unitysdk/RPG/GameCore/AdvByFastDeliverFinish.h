#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvByFastDeliverFinish; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYFASTDELIVERFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3671F0)
#define RPG_GAMECORE_ADVBYFASTDELIVERFINISH_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D3673F0)
#define RPG_GAMECORE_ADVBYFASTDELIVERFINISH_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D3673A0)
#define RPG_GAMECORE_ADVBYFASTDELIVERFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D367220)
#define RPG_GAMECORE_ADVBYFASTDELIVERFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3671A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByFastDeliverFinish_TypeDefinitionIndex = 22160;

	class AdvByFastDeliverFinish : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetRoute; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYFASTDELIVERFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByFastDeliverFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByFastDeliverFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYFASTDELIVERFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByFastDeliverFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByFastDeliverFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYFASTDELIVERFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByFastDeliverFinish* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByFastDeliverFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYFASTDELIVERFINISH_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByFastDeliverFinish* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByFastDeliverFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYFASTDELIVERFINISH_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
