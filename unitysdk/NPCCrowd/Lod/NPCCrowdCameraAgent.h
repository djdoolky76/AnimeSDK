#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NPCCROWD_LOD_NPCCROWDCAMERAAGENT_GETMOVEMENTMAG_OFFSET UNITYSDK_OFFSET(0x1364CA20)
#define NPCCROWD_LOD_NPCCROWDCAMERAAGENT_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x1364CB80)
#define NPCCROWD_LOD_NPCCROWDCAMERAAGENT_GET_NEEDREFRESHDATA_OFFSET UNITYSDK_OFFSET(0x1364D340)
#define NPCCROWD_LOD_NPCCROWDCAMERAAGENT_NEXTGENERATION_OFFSET UNITYSDK_OFFSET(0x1364D350)
#define NPCCROWD_LOD_NPCCROWDCAMERAAGENT_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0x1364CC40)
#define NPCCROWD_LOD_NPCCROWDCAMERAAGENT_TRYGETPOSE_OFFSET UNITYSDK_OFFSET(0x1364D2B0)
#define NPCCROWD_LOD_NPCCROWDCAMERAAGENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1364D3A0)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdCameraAgent_TypeDefinitionIndex = 81011;

	class NPCCrowdCameraAgent : public ::System::Object
	{
	public:
		::System::Int32 lastUpdateFrame; // 0x10
		::System::Boolean poseValid; // 0x14
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 lastPos; // 0x18
		::UnityEngine::Vector3 curForward; // 0x24
		::UnityEngine::Vector3 curPos; // 0x30
		::System::Int32 targetInstanceId; // 0x3C
		::System::Int32 targetGeneration; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDCAMERAAGENT__CTOR_OFFSET))(this);
		}

		::System::Single GetMovementMag()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDCAMERAAGENT_GETMOVEMENTMAG_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDCAMERAAGENT_GETPOSITION_OFFSET))(this);
		}

		::System::Boolean TryGetPose(::UnityEngine::Vector3& position, ::UnityEngine::Vector3& forward, ::System::Int32& generation)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDCAMERAAGENT_TRYGETPOSE_OFFSET))(this, position, forward, generation);
		}

		::System::Boolean get_NeedRefreshData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDCAMERAAGENT_GET_NEEDREFRESHDATA_OFFSET))(this);
		}

		::System::Void RefreshData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDCAMERAAGENT_REFRESHDATA_OFFSET))(this);
		}

		static ::System::Int32 NextGeneration(::System::Int32 generation)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDCAMERAAGENT_NEXTGENERATION_OFFSET))(generation);
		}
	};
}
