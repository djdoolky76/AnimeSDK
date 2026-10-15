#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournModifyRoomPoolItemConfigBase; }

#define RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLITEMCONFIGBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA12EE0)
#define RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLITEMCONFIGBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA12EF0)
#define RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLITEMCONFIGBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA12D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournModifyRoomPoolItemConfigBase_TypeDefinitionIndex = 18008;

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
