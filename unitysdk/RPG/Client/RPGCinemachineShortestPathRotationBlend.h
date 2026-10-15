#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/Cinemachine/CinemachineExtension.h"
#include "unitysdk/Cinemachine/CameraState.h"
namespace Cinemachine { class CinemachineVirtualCameraBase; }

#define RPG_CLIENT_RPGCINEMACHINESHORTESTPATHROTATIONBLEND_CTOR_OFFSET UNITYSDK_OFFSET(0xDE18F80)
#define RPG_CLIENT_RPGCINEMACHINESHORTESTPATHROTATIONBLEND_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0xDE18F10)

namespace RPG::Client
{
	class RPGCinemachineShortestPathRotationBlend : public ::Cinemachine::CinemachineExtension
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINESHORTESTPATHROTATIONBLEND_CTOR_OFFSET))(this);
		}

		::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* a1, ::Cinemachine::CinemachineCore_Stage a2, ::Cinemachine::CameraState a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore_Stage, ::Cinemachine::CameraState, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINESHORTESTPATHROTATIONBLEND_POSTPIPELINESTAGECALLBACK_OFFSET))(this, a1, a2, a3, a4);
		}

	};
}
