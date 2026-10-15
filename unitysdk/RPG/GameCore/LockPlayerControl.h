#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LockPlayerControl; }

#define RPG_GAMECORE_LOCKPLAYERCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F1770)
#define RPG_GAMECORE_LOCKPLAYERCONTROL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7F1780)
#define RPG_GAMECORE_LOCKPLAYERCONTROL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7F1730)

namespace RPG::GameCore
{
	class LockPlayerControl : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean LockCameraControl; // 0x18
		::System::Boolean LockInteractSelect; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKPLAYERCONTROL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LockPlayerControl* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LockPlayerControl*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKPLAYERCONTROL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LockPlayerControl* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LockPlayerControl*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKPLAYERCONTROL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
