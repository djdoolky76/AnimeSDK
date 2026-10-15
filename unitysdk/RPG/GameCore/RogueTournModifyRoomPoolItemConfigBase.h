#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournModifyRoomPoolItemConfigBase; }

#define RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLITEMCONFIGBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA40780)
#define RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLITEMCONFIGBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA40790)
#define RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLITEMCONFIGBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA40620)

namespace RPG::GameCore
{
	class RogueTournModifyRoomPoolItemConfigBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLITEMCONFIGBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournModifyRoomPoolItemConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournModifyRoomPoolItemConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLITEMCONFIGBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournModifyRoomPoolItemConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournModifyRoomPoolItemConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLITEMCONFIGBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
