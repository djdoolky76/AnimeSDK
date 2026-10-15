#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetPlayerMotionSync; }

#define RPG_GAMECORE_SETPLAYERMOTIONSYNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA91670)
#define RPG_GAMECORE_SETPLAYERMOTIONSYNC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA91680)
#define RPG_GAMECORE_SETPLAYERMOTIONSYNC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA91640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetPlayerMotionSync_TypeDefinitionIndex = 20516;

	class SetPlayerMotionSync : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPLAYERMOTIONSYNC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetPlayerMotionSync* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetPlayerMotionSync*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPLAYERMOTIONSYNC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetPlayerMotionSync* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetPlayerMotionSync*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPLAYERMOTIONSYNC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
