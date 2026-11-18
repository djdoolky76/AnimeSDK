#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDeltaData.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OCLPKBONCJJ.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Nullable_1.h"

namespace PipelineCamera { class TimeBasedAlphaGenerator; }
namespace System { template <typename T> class Func_1; }

#define BBKFAFEDEPF_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x14C2A430)
#define BBKFAFEDEPF_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x7479B0)
#define BBKFAFEDEPF__CTOR_OFFSET UNITYSDK_OFFSET(0x747970)

inline static constexpr unsigned int BBKFAFEDEPF_TypeDefinitionIndex = 59018;

struct alignas(8) BBKFAFEDEPF
{
	::PipelineCamera::WorldBasicCameraDeltaData JAEOMCDKCOB; // 0x10
	::PipelineCamera::TimeBasedAlphaGenerator* CAHNMPOGHII; // 0x48
	::System::Boolean MEMEINPDGMG; // 0x50
	::System::Byte _padding0[0x7];
	::System::Func_1<::System::Single>* CCDNFNCMJGE; // 0x58
	::System::Single BJMBOABGKOK; // 0x60

	::System::Void _ctor(::PipelineCamera::WorldBasicCameraDeltaData& PIPPFKDHEAF, ::System::Func_1<::System::Single>* CAOPDAMCNCN, ::PipelineCamera::TimeBasedAlphaGenerator* GADJOENDAGM)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraDeltaData&, ::System::Func_1<::System::Single>*, ::PipelineCamera::TimeBasedAlphaGenerator*))((::PBYTE)hIl2Cpp + BBKFAFEDEPF__CTOR_OFFSET))(this, PIPPFKDHEAF, CAOPDAMCNCN, GADJOENDAGM);
	}

	/*
	static ::System::Nullable_1<::BBKFAFEDEPF> COKNIICCODC(::System::Single BFPDDMILKBF, ::OCLPKBONCJJ& FCEIKAIDHPM, ::System::Nullable_1<::PipelineCamera::WorldBasicCameraData>& PNEICHGCHGI, ::PipelineCamera::WorldBasicCameraData& ELKGOHFIOEH)
	{
		return ((::System::Nullable_1<::BBKFAFEDEPF>(*)(::System::Single, ::OCLPKBONCJJ&, ::System::Nullable_1<::PipelineCamera::WorldBasicCameraData>&, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + BBKFAFEDEPF_COKNIICCODC_OFFSET))(BFPDDMILKBF, FCEIKAIDHPM, PNEICHGCHGI, ELKGOHFIOEH);
	}
	*/

	/*
	::System::Nullable_1<::BBKFAFEDEPF> OKJCHFGIKBH(::System::Single PMNLNNGEIFM, ::PipelineCamera::WorldBasicCameraData& HLFFCMIFFIB, ::PipelineCamera::WorldBasicCameraData& AJMCCOEAIFE)
	{
		return ((::System::Nullable_1<::BBKFAFEDEPF>(*)(::PVOID, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + BBKFAFEDEPF_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM, HLFFCMIFFIB, AJMCCOEAIFE);
	}
	*/
};
