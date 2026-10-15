#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareTargetCount; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARETARGETCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4DE160)
#define RPG_GAMECORE_BYCOMPARETARGETCOUNT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4DE980)
#define RPG_GAMECORE_BYCOMPARETARGETCOUNT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4DE6A0)
#define RPG_GAMECORE_BYCOMPARETARGETCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4DE170)
#define RPG_GAMECORE_BYCOMPARETARGETCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4DE010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareTargetCount_TypeDefinitionIndex = 23529;

	class ByCompareTargetCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean AliveOnly; // 0x28
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DynamicFloat* Number; // 0x30
		::RPG::GameCore::CompareType CompareType; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareTargetCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareTargetCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareTargetCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareTargetCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTargetCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTargetCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETCOUNT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTargetCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTargetCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETCOUNT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
