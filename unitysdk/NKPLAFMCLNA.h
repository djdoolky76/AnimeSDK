#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/ValueType.h"

namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera::CameraSequence { template <typename T> class ICameraSequenceCollection_1; }

#define NKPLAFMCLNA__CTOR_OFFSET UNITYSDK_OFFSET(0x680380)

inline static constexpr unsigned int NKPLAFMCLNA_TypeDefinitionIndex = 54465;

struct alignas(8) NKPLAFMCLNA
{
	::System::UInt32 EIPCGGPOHDD; // 0x10
	::System::UInt32 GDHKMPJEFAM; // 0x14
	::Nap::NapECS::EcsWorld* FPGOIBHDCPA; // 0x18
	::PipelineCamera::CameraSequence::ICameraSequenceCollection_1<::PipelineCamera::WorldBasicCameraData>* KAFBAGPKKCE; // 0x20
	::System::Boolean KBKAOBILOHJ; // 0x28

	::System::Void _ctor(::System::UInt32 HDGIELLOOEF, ::System::UInt32 CNDGICIICKB, ::Nap::NapECS::EcsWorld* HNGJFALIMGN, ::PipelineCamera::CameraSequence::ICameraSequenceCollection_1<::PipelineCamera::WorldBasicCameraData>* HPGIJLNIIGP, ::System::Boolean GDNECMBHKND)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Nap::NapECS::EcsWorld*, ::PipelineCamera::CameraSequence::ICameraSequenceCollection_1<::PipelineCamera::WorldBasicCameraData>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NKPLAFMCLNA__CTOR_OFFSET))(this, HDGIELLOOEF, CNDGICIICKB, HNGJFALIMGN, HPGIJLNIIGP, GDNECMBHKND);
	}
};
