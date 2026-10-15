#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvByFastDeliverHasMultiRoute; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYFASTDELIVERHASMULTIROUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D367830)
#define RPG_GAMECORE_ADVBYFASTDELIVERHASMULTIROUTE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D367A30)
#define RPG_GAMECORE_ADVBYFASTDELIVERHASMULTIROUTE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D3679E0)
#define RPG_GAMECORE_ADVBYFASTDELIVERHASMULTIROUTE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D367860)
#define RPG_GAMECORE_ADVBYFASTDELIVERHASMULTIROUTE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3677E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByFastDeliverHasMultiRoute_TypeDefinitionIndex = 22161;

	class AdvByFastDeliverHasMultiRoute : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYFASTDELIVERHASMULTIROUTE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByFastDeliverHasMultiRoute* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByFastDeliverHasMultiRoute*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYFASTDELIVERHASMULTIROUTE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByFastDeliverHasMultiRoute* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByFastDeliverHasMultiRoute*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYFASTDELIVERHASMULTIROUTE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByFastDeliverHasMultiRoute* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByFastDeliverHasMultiRoute*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYFASTDELIVERHASMULTIROUTE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByFastDeliverHasMultiRoute* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByFastDeliverHasMultiRoute*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYFASTDELIVERHASMULTIROUTE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
