#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournModifyRoomPoolListConfig; }

#define RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLLISTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA13000)
#define RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLLISTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA12FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournModifyRoomPoolListConfig_TypeDefinitionIndex = 18012;

	class RogueTournModifyRoomPoolListConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLLISTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournModifyRoomPoolListConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournModifyRoomPoolListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLLISTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
