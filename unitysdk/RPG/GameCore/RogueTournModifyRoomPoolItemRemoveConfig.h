#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournModifyRoomPoolItemConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournModifyRoomPoolItemRemoveConfig; }

#define RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLITEMREMOVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA12F20)
#define RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLITEMREMOVECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA12F30)
#define RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLITEMREMOVECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA12F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournModifyRoomPoolItemRemoveConfig_TypeDefinitionIndex = 18010;

	class RogueTournModifyRoomPoolItemRemoveConfig : public ::RPG::GameCore::RogueTournModifyRoomPoolItemConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLITEMREMOVECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournModifyRoomPoolItemRemoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournModifyRoomPoolItemRemoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLITEMREMOVECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournModifyRoomPoolItemRemoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournModifyRoomPoolItemRemoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLITEMREMOVECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
