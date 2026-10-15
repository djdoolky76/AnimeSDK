#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/RogueMagicRangeType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareScepterMainUnitEffectTag; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESCEPTERMAINUNITEFFECTTAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D2120)
#define RPG_GAMECORE_BYCOMPARESCEPTERMAINUNITEFFECTTAG_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4D2330)
#define RPG_GAMECORE_BYCOMPARESCEPTERMAINUNITEFFECTTAG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4D2300)
#define RPG_GAMECORE_BYCOMPARESCEPTERMAINUNITEFFECTTAG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4D2130)
#define RPG_GAMECORE_BYCOMPARESCEPTERMAINUNITEFFECTTAG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4D20F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareScepterMainUnitEffectTag_TypeDefinitionIndex = 23109;

	class ByCompareScepterMainUnitEffectTag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::RogueMagicRangeType TargetTag; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCEPTERMAINUNITEFFECTTAG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareScepterMainUnitEffectTag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareScepterMainUnitEffectTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCEPTERMAINUNITEFFECTTAG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareScepterMainUnitEffectTag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareScepterMainUnitEffectTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCEPTERMAINUNITEFFECTTAG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareScepterMainUnitEffectTag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareScepterMainUnitEffectTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCEPTERMAINUNITEFFECTTAG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareScepterMainUnitEffectTag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareScepterMainUnitEffectTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCEPTERMAINUNITEFFECTTAG_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
