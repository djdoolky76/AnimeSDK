#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournModifyRoomPoolConfig; }

#define RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA40610)
#define RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA405D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournModifyRoomPoolConfig_TypeDefinitionIndex = 18011;

	class RogueTournModifyRoomPoolConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournModifyRoomPoolConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournModifyRoomPoolConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
