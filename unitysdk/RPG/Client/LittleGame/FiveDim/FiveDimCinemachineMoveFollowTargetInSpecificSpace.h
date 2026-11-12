#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/Cinemachine/CinemachineExtension.h"
#include "unitysdk/KLNKLOMDIIC.h"
#include "unitysdk/Cinemachine/CameraState.h"
class HIOEAKHGILF;
namespace Cinemachine { class CinemachineVirtualCameraBase; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCINEMACHINEMOVEFOLLOWTARGETINSPECIFICSPACE_CTOR_OFFSET UNITYSDK_OFFSET(0xDE9C230)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCINEMACHINEMOVEFOLLOWTARGETINSPECIFICSPACE_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0xDE9BFA0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCINEMACHINEMOVEFOLLOWTARGETINSPECIFICSPACE_PREPIPELINEMUTATECAMERASTATECALLBACK_OFFSET UNITYSDK_OFFSET(0xDE9BA20)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCINEMACHINEMOVEFOLLOWTARGETINSPECIFICSPACE_SETDAMPTARGETSPACE_OFFSET UNITYSDK_OFFSET(0xDE9B8D0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCINEMACHINEMOVEFOLLOWTARGETINSPECIFICSPACE_SETFOLLOWDAMPENTITYMOVE_OFFSET UNITYSDK_OFFSET(0xDE9B980)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimCinemachineMoveFollowTargetInSpecificSpace_TypeDefinitionIndex = 79196;

	class FiveDimCinemachineMoveFollowTargetInSpecificSpace : public ::Cinemachine::CinemachineExtension
	{
	public:
		::System::Boolean BIONPINEFAL; // 0x28
		::System::Byte _padding0[0x7];
		::HIOEAKHGILF* KHDOEMCMAEF; // 0x30
		::KLNKLOMDIIC POMDAPNLEAF; // 0x38
		::KLNKLOMDIIC OGOLNNFJJEI; // 0xA0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCINEMACHINEMOVEFOLLOWTARGETINSPECIFICSPACE_CTOR_OFFSET))(this);
		}

		::System::Void SetDampTargetSpace(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCINEMACHINEMOVEFOLLOWTARGETINSPECIFICSPACE_SETDAMPTARGETSPACE_OFFSET))(this, a1);
		}

		::System::Void SetFollowDampEntityMove(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCINEMACHINEMOVEFOLLOWTARGETINSPECIFICSPACE_SETFOLLOWDAMPENTITYMOVE_OFFSET))(this, a1);
		}

		::System::Void PrePipelineMutateCameraStateCallback(::Cinemachine::CinemachineVirtualCameraBase* a1, ::Cinemachine::CameraState a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CameraState, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCINEMACHINEMOVEFOLLOWTARGETINSPECIFICSPACE_PREPIPELINEMUTATECAMERASTATECALLBACK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* a1, ::Cinemachine::CinemachineCore_Stage a2, ::Cinemachine::CameraState a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore_Stage, ::Cinemachine::CameraState, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCINEMACHINEMOVEFOLLOWTARGETINSPECIFICSPACE_POSTPIPELINESTAGECALLBACK_OFFSET))(this, a1, a2, a3, a4);
		}

	};
}
