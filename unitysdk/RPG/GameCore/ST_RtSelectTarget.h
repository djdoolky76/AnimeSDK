#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtBattleSelectTargetStrategy.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_RtSelectTarget; }

#define RPG_GAMECORE_ST_RTSELECTTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA82390)
#define RPG_GAMECORE_ST_RTSELECTTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA823A0)
#define RPG_GAMECORE_ST_RTSELECTTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA82360)

namespace RPG::GameCore
{
	class ST_RtSelectTarget : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::RtBattleSelectTargetStrategy Strategy; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_RTSELECTTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_RtSelectTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_RtSelectTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_RTSELECTTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_RtSelectTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_RtSelectTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_RTSELECTTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
