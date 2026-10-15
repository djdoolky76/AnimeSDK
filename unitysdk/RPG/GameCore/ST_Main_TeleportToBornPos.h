#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Main_TeleportToBornPos; }

#define RPG_GAMECORE_ST_MAIN_TELEPORTTOBORNPOS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA54020)
#define RPG_GAMECORE_ST_MAIN_TELEPORTTOBORNPOS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA54030)
#define RPG_GAMECORE_ST_MAIN_TELEPORTTOBORNPOS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA53F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_TeleportToBornPos_TypeDefinitionIndex = 20099;

	class ST_Main_TeleportToBornPos : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_TELEPORTTOBORNPOS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_TeleportToBornPos* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_TeleportToBornPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_TELEPORTTOBORNPOS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_TeleportToBornPos* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_TeleportToBornPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_TELEPORTTOBORNPOS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
