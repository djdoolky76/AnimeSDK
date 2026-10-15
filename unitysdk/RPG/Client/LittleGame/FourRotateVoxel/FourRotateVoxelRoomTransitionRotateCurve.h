#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FouRotateVoxelSimpleCameraCurveBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BABNOKHOBCF;
class MNCOPNHONHO;
class PIJMKBDHLBH;
namespace System { class Action; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELROOMTRANSITIONROTATECURVE_CTOR_OFFSET UNITYSDK_OFFSET(0xD4635D0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELROOMTRANSITIONROTATECURVE_JMFPPJIMHEC_OFFSET UNITYSDK_OFFSET(0xD4632A0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELROOMTRANSITIONROTATECURVE_OBHAJMPIOIM_OFFSET UNITYSDK_OFFSET(0xD463240)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELROOMTRANSITIONROTATECURVE_OKGFNKAMINH_OFFSET UNITYSDK_OFFSET(0xD462F00)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELROOMTRANSITIONROTATECURVE_STARTCURVE_OFFSET UNITYSDK_OFFSET(0xD462A00)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelRoomTransitionRotateCurve_TypeDefinitionIndex = 76846;

	class FourRotateVoxelRoomTransitionRotateCurve : public ::RPG::Client::LittleGame::FourRotateVoxel::FouRotateVoxelSimpleCameraCurveBase
	{
	public:
		::System::Single RotateAngle; // 0x78
		::System::Boolean UseGlobalRotateDuration; // 0x7C
		::System::Byte _padding0[0x3];
		::System::Single LocalRotateDuration; // 0x80
		::System::Single GlobalRotateDurationScale; // 0x84
		::System::Boolean UseGlobalRotateCurve; // 0x88
		::System::Boolean PreRotateResetPlayerVisual; // 0x89
		::System::Boolean PreRotateApplyShadowRule; // 0x8A
		::System::Byte _padding1[0x1];
		::System::Single PreRotateSettleDelay; // 0x8C
		::System::Boolean PreRotateFixPlayerDepth; // 0x90
		::System::Byte _padding2[0x3];
		::System::Int32 PreRotateDepthToScreenOffset; // 0x94
		::System::Single ExitOpenMaskProgress; // 0x98
		::System::Single ExitFullMaskProgress; // 0x9C
		::System::Single ExitMaskFadeInDuration; // 0xA0
		::System::Single ExitOpenLeadTime; // 0xA4
		::System::Boolean RequireFullMaskBeforeTeleport; // 0xA8
		::System::Byte _padding3[0x3];
		::System::Single TeleportDelayAfterFullMask; // 0xAC
		::System::Single EnterCloseMaskProgress; // 0xB0
		::System::Single EnterMaskFadeOutDuration; // 0xB4
		::System::Single EnterCloseLeadTime; // 0xB8
		::System::Single CurveTimeoutSeconds; // 0xBC
		::System::Single CurveTimeoutBufferSeconds; // 0xC0
		::System::Boolean ForceCloseMaskOnAbort; // 0xC4
		::System::Byte _padding4[0x3];
		::System::Action* BJLJAHMLKIO; // 0xC8
		::UnityEngine::Vector3 OPJFANBFDEJ; // 0xD0
		::UnityEngine::Vector3 PLLHAANIOPC; // 0xDC
		::UnityEngine::Quaternion ABDCCPNENMK; // 0xE8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELROOMTRANSITIONROTATECURVE_CTOR_OFFSET))(this);
		}

		::System::Void StartCurve(::BABNOKHOBCF* a1, ::MNCOPNHONHO* a2, ::PIJMKBDHLBH* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::BABNOKHOBCF*, ::MNCOPNHONHO*, ::PIJMKBDHLBH*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELROOMTRANSITIONROTATECURVE_STARTCURVE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OBHAJMPIOIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELROOMTRANSITIONROTATECURVE_OBHAJMPIOIM_OFFSET))(this);
		}

		::System::Void JMFPPJIMHEC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELROOMTRANSITIONROTATECURVE_JMFPPJIMHEC_OFFSET))(this, a1);
		}

		::System::Void OKGFNKAMINH(::BABNOKHOBCF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BABNOKHOBCF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELROOMTRANSITIONROTATECURVE_OKGFNKAMINH_OFFSET))(this, a1);
		}

	};
}
