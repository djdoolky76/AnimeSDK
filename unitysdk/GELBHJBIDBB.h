#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/Data/LookAtInCore_ByRotation.h"
#include "unitysdk/PipelineCamera/Data/LookAtInCore_ByRotationY.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AKKLGKMNNLL.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

class NOBPIMIECKH;
namespace Nap::NapECS { class EcsWorld; }

#define GELBHJBIDBB_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0x16CBE280)
#define GELBHJBIDBB_OBBFPDDKOBL_OFFSET UNITYSDK_OFFSET(0x795C40)
#define GELBHJBIDBB__CTOR_OFFSET UNITYSDK_OFFSET(0x795C30)

inline static constexpr unsigned int GELBHJBIDBB_TypeDefinitionIndex = 53109;

struct alignas(8) GELBHJBIDBB
{
	::NOBPIMIECKH* NDDNONCGABO; // 0x10
	::NOBPIMIECKH* HPEFMJFCIHN; // 0x18
	::Nap::NapECS::EcsWorld* NAEFJGAOJCB; // 0x20
	::PipelineCamera::Data::LookAtInCore_ByRotationY IDOFFDMEOLI; // 0x28
	::PipelineCamera::Data::LookAtInCore_ByRotation PDFCHAGANMA; // 0x9C
	::System::Boolean AKMCNLKINFH; // 0x104

	::System::Void _ctor(::AKKLGKMNNLL& DFMKILICPFB, ::PipelineCamera::FinalCameraData& GPBKDGGEBCF)
	{
		return ((::System::Void(*)(::PVOID, ::AKKLGKMNNLL&, ::PipelineCamera::FinalCameraData&))((::PBYTE)hIl2Cpp + GELBHJBIDBB__CTOR_OFFSET))(this, DFMKILICPFB, GPBKDGGEBCF);
	}

	::System::Nullable_1<::PipelineCamera::WorldBasicCameraData> OBBFPDDKOBL()
	{
		return ((::System::Nullable_1<::PipelineCamera::WorldBasicCameraData>(*)(::PVOID))((::PBYTE)hIl2Cpp + GELBHJBIDBB_OBBFPDDKOBL_OFFSET))(this);
	}

	static ::System::Void JMDEKPONKMF(::AKKLGKMNNLL& DFMKILICPFB, ::PipelineCamera::FinalCameraData& GPBKDGGEBCF, ::UnityEngine::Vector2& AIAMCOEGHLL)
	{
		return ((::System::Void(*)(::AKKLGKMNNLL&, ::PipelineCamera::FinalCameraData&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + GELBHJBIDBB_JMDEKPONKMF_OFFSET))(DFMKILICPFB, GPBKDGGEBCF, AIAMCOEGHLL);
	}
};
