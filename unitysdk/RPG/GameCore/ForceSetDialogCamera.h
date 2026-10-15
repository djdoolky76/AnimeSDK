#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ForceSetDialogCamera; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_FORCESETDIALOGCAMERA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E9C20)
#define RPG_GAMECORE_FORCESETDIALOGCAMERA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6E9C30)
#define RPG_GAMECORE_FORCESETDIALOGCAMERA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E9BF0)

namespace RPG::GameCore
{
	class ForceSetDialogCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCESETDIALOGCAMERA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ForceSetDialogCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ForceSetDialogCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCESETDIALOGCAMERA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ForceSetDialogCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ForceSetDialogCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCESETDIALOGCAMERA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
