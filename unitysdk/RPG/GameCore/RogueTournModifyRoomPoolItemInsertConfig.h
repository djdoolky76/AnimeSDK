#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournModifyRoomPoolItemConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournModifyRoomPoolItemInsertConfig; }

#define RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLITEMINSERTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA12F00)
#define RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLITEMINSERTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA12F10)
#define RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLITEMINSERTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA12F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournModifyRoomPoolItemInsertConfig_TypeDefinitionIndex = 18009;

	class RogueTournModifyRoomPoolItemInsertConfig : public ::RPG::GameCore::RogueTournModifyRoomPoolItemConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLITEMINSERTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournModifyRoomPoolItemInsertConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournModifyRoomPoolItemInsertConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLITEMINSERTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournModifyRoomPoolItemInsertConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournModifyRoomPoolItemInsertConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLITEMINSERTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
