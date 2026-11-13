#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareTeamFormationRowIndex; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARETEAMFORMATIONROWINDEX_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE20A70)
#define RPG_GAMECORE_BYCOMPARETEAMFORMATIONROWINDEX_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1CE20D40)
#define RPG_GAMECORE_BYCOMPARETEAMFORMATIONROWINDEX_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1CE20D10)
#define RPG_GAMECORE_BYCOMPARETEAMFORMATIONROWINDEX_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE20A80)
#define RPG_GAMECORE_BYCOMPARETEAMFORMATIONROWINDEX_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE20A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareTeamFormationRowIndex_TypeDefinitionIndex = 23348;

	class ByCompareTeamFormationRowIndex : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30
		::System::Boolean ActiveRow; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMFORMATIONROWINDEX_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareTeamFormationRowIndex* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareTeamFormationRowIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMFORMATIONROWINDEX_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareTeamFormationRowIndex* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareTeamFormationRowIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMFORMATIONROWINDEX_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTeamFormationRowIndex* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTeamFormationRowIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMFORMATIONROWINDEX_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTeamFormationRowIndex* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTeamFormationRowIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMFORMATIONROWINDEX_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
