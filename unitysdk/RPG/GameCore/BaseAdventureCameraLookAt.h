#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseAdventureCameraLookAt; }
namespace RPG::GameCore { class CameraLookAtScreenRangeConfig; }
namespace RPG::GameCore { class VCameraFreelook3rdConfig; }
namespace System { class String; }

#define RPG_GAMECORE_BASEADVENTURECAMERALOOKAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D438CA0)
#define RPG_GAMECORE_BASEADVENTURECAMERALOOKAT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D438CB0)
#define RPG_GAMECORE_BASEADVENTURECAMERALOOKAT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D438B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseAdventureCameraLookAt_TypeDefinitionIndex = 23730;

	class BaseAdventureCameraLookAt : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean PlayerTurnTo; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::MVector2 AxisOffset; // 0x1C
		::System::Single LookAtTransitionDuration; // 0x24
		::System::Single LookAtTransitionAngleSpeed; // 0x28
		::System::Byte _padding1[0x4];
		::System::String* LookAtTransitionCurvePath; // 0x30
		::System::Boolean LockCameraZoom; // 0x38
		::System::Boolean LockCameraInput; // 0x39
		::System::Boolean UnlockCameraAfterRecover; // 0x3A
		::System::Byte _padding2[0x1];
		::System::Single LookAtDuration; // 0x3C
		::System::Single MaxAngle; // 0x40
		::System::Boolean CutIn; // 0x44
		::System::Boolean CutOut; // 0x45
		::System::Byte _padding3[0x2];
		::RPG::GameCore::VCameraFreelook3rdConfig* ExtraFreelook3rdConfig; // 0x48
		::System::Boolean FollowLookAtTarget; // 0x50
		::System::Boolean KeepInputForwardDirection; // 0x51
		::System::Byte _padding4[0x6];
		::RPG::GameCore::CameraLookAtScreenRangeConfig* ScreenRange; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEADVENTURECAMERALOOKAT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseAdventureCameraLookAt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseAdventureCameraLookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEADVENTURECAMERALOOKAT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseAdventureCameraLookAt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseAdventureCameraLookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEADVENTURECAMERALOOKAT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
