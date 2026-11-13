#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareStanceRatio; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESTANCERATIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE1A670)
#define RPG_GAMECORE_BYCOMPARESTANCERATIO_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1CE1A940)
#define RPG_GAMECORE_BYCOMPARESTANCERATIO_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1CE1A910)
#define RPG_GAMECORE_BYCOMPARESTANCERATIO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE1A680)
#define RPG_GAMECORE_BYCOMPARESTANCERATIO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE1A640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareStanceRatio_TypeDefinitionIndex = 23424;

	class ByCompareStanceRatio : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30
		::System::Boolean IncludeRedStance; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTANCERATIO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareStanceRatio* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareStanceRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTANCERATIO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareStanceRatio* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareStanceRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTANCERATIO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStanceRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStanceRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTANCERATIO_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStanceRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStanceRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTANCERATIO_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
