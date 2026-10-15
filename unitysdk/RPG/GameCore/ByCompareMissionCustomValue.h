#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareMissionCustomValue; }
namespace RPG::GameCore { class MissionCustomValue; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREMISSIONCUSTOMVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4BDB20)
#define RPG_GAMECORE_BYCOMPAREMISSIONCUSTOMVALUE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4BDE10)
#define RPG_GAMECORE_BYCOMPAREMISSIONCUSTOMVALUE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4BDDD0)
#define RPG_GAMECORE_BYCOMPAREMISSIONCUSTOMVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4BDB30)
#define RPG_GAMECORE_BYCOMPAREMISSIONCUSTOMVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4BDAE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareMissionCustomValue_TypeDefinitionIndex = 20438;

	class ByCompareMissionCustomValue : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 MainMissionID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::MissionCustomValue* MissionCustomValue; // 0x28
		::RPG::GameCore::CompareType EquationType; // 0x30
		::System::Boolean ShowCompareValue; // 0x34
		::System::Byte _padding1[0x3];
		::System::UInt32 TargetValue; // 0x38
		::System::Byte _padding2[0x4];
		::RPG::GameCore::MissionCustomValue* MissionCustomValueCompare; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMISSIONCUSTOMVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareMissionCustomValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareMissionCustomValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMISSIONCUSTOMVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareMissionCustomValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareMissionCustomValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMISSIONCUSTOMVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMissionCustomValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMissionCustomValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMISSIONCUSTOMVALUE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMissionCustomValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMissionCustomValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMISSIONCUSTOMVALUE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
