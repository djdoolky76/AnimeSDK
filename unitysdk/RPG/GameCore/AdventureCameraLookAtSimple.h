#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureCameraLookAtSimple; }
namespace RPG::GameCore { class CameraLookAtScreenRangeConfig; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENTURECAMERALOOKATSIMPLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C3BF0)
#define RPG_GAMECORE_ADVENTURECAMERALOOKATSIMPLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3C3C00)
#define RPG_GAMECORE_ADVENTURECAMERALOOKATSIMPLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3C3BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureCameraLookAtSimple_TypeDefinitionIndex = 20508;

	class AdventureCameraLookAtSimple : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Reset; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::TargetEvaluator* LookAtTarget; // 0x20
		::RPG::GameCore::DynamicString* LookAtTargetAreaName; // 0x28
		::RPG::GameCore::DynamicString* LookAtTargetAnchorName; // 0x30
		::RPG::GameCore::DynamicFloat* LookAtGroupID; // 0x38
		::RPG::GameCore::DynamicFloat* LookAtID; // 0x40
		::System::Boolean CutIn; // 0x48
		::System::Boolean CutOut; // 0x49
		::System::Byte _padding1[0x2];
		::System::Single LookAtTransitionDuration; // 0x4C
		::System::Single LookAtTransitionAngleSpeed; // 0x50
		::System::Byte _padding2[0x4];
		::System::String* LookAtTransitionCurvePath; // 0x58
		::System::Boolean LockCameraZoom; // 0x60
		::System::Boolean LockCameraInput; // 0x61
		::System::Boolean UnlockCameraAfterRecover; // 0x62
		::System::Byte _padding3[0x1];
		::System::Single LookAtDuration; // 0x64
		::System::Single LookAtRecoverDuration; // 0x68
		::System::Byte _padding4[0x4];
		::System::String* LookAtRecoverCurvePath; // 0x70
		::System::Boolean EnableOverrideLookAtOffset; // 0x78
		::System::Byte _padding5[0x3];
		::RPG::MVector3 OverrideLookAtOffset; // 0x7C
		::System::Boolean FollowLookAtTarget; // 0x88
		::System::Boolean KeepInputForwardDirection; // 0x89
		::System::Byte _padding6[0x6];
		::RPG::GameCore::CameraLookAtScreenRangeConfig* ScreenRange; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECAMERALOOKATSIMPLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureCameraLookAtSimple* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureCameraLookAtSimple*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECAMERALOOKATSIMPLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureCameraLookAtSimple* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureCameraLookAtSimple*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECAMERALOOKATSIMPLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
