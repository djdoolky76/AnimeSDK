#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HideEntityForCurrentCamera; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_HIDEENTITYFORCURRENTCAMERA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D768370)
#define RPG_GAMECORE_HIDEENTITYFORCURRENTCAMERA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D768380)
#define RPG_GAMECORE_HIDEENTITYFORCURRENTCAMERA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D768340)

namespace RPG::GameCore
{
	class HideEntityForCurrentCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEENTITYFORCURRENTCAMERA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HideEntityForCurrentCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HideEntityForCurrentCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEENTITYFORCURRENTCAMERA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HideEntityForCurrentCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HideEntityForCurrentCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEENTITYFORCURRENTCAMERA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
