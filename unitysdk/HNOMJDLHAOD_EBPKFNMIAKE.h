#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

class HNOMJDLHAOD_JMGLPDKBIGL;

#define HNOMJDLHAOD_EBPKFNMIAKE_AOMPNJCLLDN_OFFSET UNITYSDK_OFFSET(0xE9FFE70)
#define HNOMJDLHAOD_EBPKFNMIAKE_JJOLDDLBAFF_OFFSET UNITYSDK_OFFSET(0xE9FFD60)
#define HNOMJDLHAOD_EBPKFNMIAKE__CTOR_OFFSET UNITYSDK_OFFSET(0xE9FFD50)

inline static constexpr unsigned int HNOMJDLHAOD_EBPKFNMIAKE_TypeDefinitionIndex = 48156;

class HNOMJDLHAOD_EBPKFNMIAKE : public ::System::Object
{
public:
	::HNOMJDLHAOD_JMGLPDKBIGL* FGBNBFHOKAA; // 0x10
	::UnityEngine::Vector3 IKENCOBKLFJ; // 0x18
	::UnityEngine::Quaternion ODPAIGICCHE; // 0x24
	::System::Boolean OAADOHGJOMI; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOMJDLHAOD_EBPKFNMIAKE__CTOR_OFFSET))(this);
	}

	::System::Void JJOLDDLBAFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOMJDLHAOD_EBPKFNMIAKE_JJOLDDLBAFF_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData AOMPNJCLLDN(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> PIIPCLCCOIG)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + HNOMJDLHAOD_EBPKFNMIAKE_AOMPNJCLLDN_OFFSET))(this, PIIPCLCCOIG);
	}
};
