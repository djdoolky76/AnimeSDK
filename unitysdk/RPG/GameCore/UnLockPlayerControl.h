#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UnLockPlayerControl; }

#define RPG_GAMECORE_UNLOCKPLAYERCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC44E00)
#define RPG_GAMECORE_UNLOCKPLAYERCONTROL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC44E10)
#define RPG_GAMECORE_UNLOCKPLAYERCONTROL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC44DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnLockPlayerControl_TypeDefinitionIndex = 20298;

	class UnLockPlayerControl : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean UnLockCameraControl; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKPLAYERCONTROL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UnLockPlayerControl* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UnLockPlayerControl*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKPLAYERCONTROL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::UnLockPlayerControl* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UnLockPlayerControl*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKPLAYERCONTROL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
