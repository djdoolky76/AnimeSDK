#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtBattleCameraMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtBattleSetCameraMode; }

#define RPG_GAMECORE_RTBATTLESETCAMERAMODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA20BB0)
#define RPG_GAMECORE_RTBATTLESETCAMERAMODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA20BC0)
#define RPG_GAMECORE_RTBATTLESETCAMERAMODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA20B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleSetCameraMode_TypeDefinitionIndex = 24093;

	class RtBattleSetCameraMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::RtBattleCameraMode CameraMode; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLESETCAMERAMODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtBattleSetCameraMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtBattleSetCameraMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLESETCAMERAMODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtBattleSetCameraMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtBattleSetCameraMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLESETCAMERAMODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
