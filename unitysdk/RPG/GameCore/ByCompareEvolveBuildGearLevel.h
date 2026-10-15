#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareEvolveBuildGearLevel; }
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREEVOLVEBUILDGEARLEVEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A9720)
#define RPG_GAMECORE_BYCOMPAREEVOLVEBUILDGEARLEVEL_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4A99F0)
#define RPG_GAMECORE_BYCOMPAREEVOLVEBUILDGEARLEVEL_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4A99C0)
#define RPG_GAMECORE_BYCOMPAREEVOLVEBUILDGEARLEVEL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4A9730)
#define RPG_GAMECORE_BYCOMPAREEVOLVEBUILDGEARLEVEL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4A96F0)

namespace RPG::GameCore
{
	class ByCompareEvolveBuildGearLevel : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 TargetGearID; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x24
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x28
		::System::Boolean CompareToMax; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREEVOLVEBUILDGEARLEVEL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareEvolveBuildGearLevel* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareEvolveBuildGearLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREEVOLVEBUILDGEARLEVEL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareEvolveBuildGearLevel* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareEvolveBuildGearLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREEVOLVEBUILDGEARLEVEL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEvolveBuildGearLevel* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEvolveBuildGearLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREEVOLVEBUILDGEARLEVEL_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEvolveBuildGearLevel* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEvolveBuildGearLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREEVOLVEBUILDGEARLEVEL_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
