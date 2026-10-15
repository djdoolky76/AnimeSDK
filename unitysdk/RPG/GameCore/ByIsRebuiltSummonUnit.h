#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsRebuiltSummonUnit; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISREBUILTSUMMONUNIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D51F5D0)
#define RPG_GAMECORE_BYISREBUILTSUMMONUNIT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D51F790)
#define RPG_GAMECORE_BYISREBUILTSUMMONUNIT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D51F760)
#define RPG_GAMECORE_BYISREBUILTSUMMONUNIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D51F5E0)
#define RPG_GAMECORE_BYISREBUILTSUMMONUNIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D51F5A0)

namespace RPG::GameCore
{
	class ByIsRebuiltSummonUnit : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SummonUnit; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISREBUILTSUMMONUNIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsRebuiltSummonUnit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsRebuiltSummonUnit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISREBUILTSUMMONUNIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsRebuiltSummonUnit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsRebuiltSummonUnit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISREBUILTSUMMONUNIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRebuiltSummonUnit* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRebuiltSummonUnit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISREBUILTSUMMONUNIT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRebuiltSummonUnit* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRebuiltSummonUnit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISREBUILTSUMMONUNIT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
