#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class IslandStateConditionSet; }
namespace RPG::GameCore { class IslandStateConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ISLANDSTATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D78D950)
#define RPG_GAMECORE_ISLANDSTATECONFIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D78D960)
#define RPG_GAMECORE_ISLANDSTATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D78D820)

namespace RPG::GameCore
{
	class IslandStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 StateID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::IslandStateConditionSet* Condition; // 0x18
		::RPG::GameCore::HoyoTagContainer* Tag; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ISLANDSTATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::IslandStateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IslandStateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ISLANDSTATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::IslandStateConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::IslandStateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ISLANDSTATECONFIG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
