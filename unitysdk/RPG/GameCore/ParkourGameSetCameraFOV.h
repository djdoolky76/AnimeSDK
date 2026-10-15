#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ParkourGameSetCameraFOV; }

#define RPG_GAMECORE_PARKOURGAMESETCAMERAFOV_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8EECC0)
#define RPG_GAMECORE_PARKOURGAMESETCAMERAFOV_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8EECD0)
#define RPG_GAMECORE_PARKOURGAMESETCAMERAFOV_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8EEC90)

namespace RPG::GameCore
{
	class ParkourGameSetCameraFOV : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single FOV; // 0x18
		::System::Single BlendTime; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURGAMESETCAMERAFOV_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParkourGameSetCameraFOV* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParkourGameSetCameraFOV*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURGAMESETCAMERAFOV_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParkourGameSetCameraFOV* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParkourGameSetCameraFOV*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURGAMESETCAMERAFOV_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
