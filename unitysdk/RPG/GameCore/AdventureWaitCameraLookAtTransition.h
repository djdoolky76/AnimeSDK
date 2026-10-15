#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureWaitCameraLookAtTransition; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ADVENTUREWAITCAMERALOOKATTRANSITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D0DE0)
#define RPG_GAMECORE_ADVENTUREWAITCAMERALOOKATTRANSITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3D0E40)
#define RPG_GAMECORE_ADVENTUREWAITCAMERALOOKATTRANSITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3D0D60)

namespace RPG::GameCore
{
	class AdventureWaitCameraLookAtTransition : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* WaitPercentage; // 0x18
		::RPG::GameCore::DynamicFloat* WaitDegreeSpeed; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREWAITCAMERALOOKATTRANSITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureWaitCameraLookAtTransition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureWaitCameraLookAtTransition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREWAITCAMERALOOKATTRANSITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureWaitCameraLookAtTransition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureWaitCameraLookAtTransition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREWAITCAMERALOOKATTRANSITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
