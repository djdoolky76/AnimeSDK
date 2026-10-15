#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonsterHPBarStyleColorConfig; }
namespace RPG::GameCore { class MonsterHPBarStyleColorSetting; }

#define RPG_GAMECORE_MONSTERHPBARSTYLECOLORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B6860)
#define RPG_GAMECORE_MONSTERHPBARSTYLECOLORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8B6780)

namespace RPG::GameCore
{
	class MonsterHPBarStyleColorConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::MonsterHPBarStyleColorSetting* Normal; // 0x10
		::RPG::GameCore::MonsterHPBarStyleColorSetting* SuperArmorBreak; // 0x18
		::RPG::GameCore::MonsterHPBarStyleColorSetting* StageInvasion; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERHPBARSTYLECOLORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonsterHPBarStyleColorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonsterHPBarStyleColorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERHPBARSTYLECOLORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
