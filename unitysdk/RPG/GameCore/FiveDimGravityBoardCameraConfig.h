#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseCameraConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimGravityBoardCameraConfig; }

#define RPG_GAMECORE_FIVEDIMGRAVITYBOARDCAMERACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B1260)
#define RPG_GAMECORE_FIVEDIMGRAVITYBOARDCAMERACONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B1290)
#define RPG_GAMECORE_FIVEDIMGRAVITYBOARDCAMERACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C1D30)

namespace RPG::GameCore
{
	class FiveDimGravityBoardCameraConfig : public ::RPG::GameCore::FiveDimBaseCameraConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRAVITYBOARDCAMERACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimGravityBoardCameraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimGravityBoardCameraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRAVITYBOARDCAMERACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimGravityBoardCameraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimGravityBoardCameraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRAVITYBOARDCAMERACONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
