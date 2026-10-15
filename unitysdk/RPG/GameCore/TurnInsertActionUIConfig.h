#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActionBarUIConfig; }
namespace RPG::GameCore { class TurnInsertActionUIConfig; }

#define RPG_GAMECORE_TURNINSERTACTIONUICONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC65810)
#define RPG_GAMECORE_TURNINSERTACTIONUICONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC656F0)

namespace RPG::GameCore
{
	class TurnInsertActionUIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean ShowInActionBar; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::GameCore::ActionBarUIConfig* ActionBarUIConfig; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNINSERTACTIONUICONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TurnInsertActionUIConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TurnInsertActionUIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNINSERTACTIONUICONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
