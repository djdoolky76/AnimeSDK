#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NBGELMBGLKD.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

class LIGMENPEBBB;
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define LIGMENPEBBB_NAKOFPLHOKG_CGMHNMPFKKB_OFFSET UNITYSDK_OFFSET(0x16371D00)
#define LIGMENPEBBB_NAKOFPLHOKG_PGHEOCLFPMC_OFFSET UNITYSDK_OFFSET(0x16371DC0)
#define LIGMENPEBBB_NAKOFPLHOKG__CTOR_OFFSET UNITYSDK_OFFSET(0x16371CF0)

inline static constexpr unsigned int LIGMENPEBBB_NAKOFPLHOKG_TypeDefinitionIndex = 50624;

class LIGMENPEBBB_NAKOFPLHOKG : public ::System::Object
{
public:
	::LIGMENPEBBB* KLHPEBKNIFB; // 0x10
	::NBGELMBGLKD GEELJKAAGLD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGMENPEBBB_NAKOFPLHOKG__CTOR_OFFSET))(this);
	}

	::System::Void CGMHNMPFKKB(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + LIGMENPEBBB_NAKOFPLHOKG_CGMHNMPFKKB_OFFSET))(this, FKMJKPGNCJI);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* PGHEOCLFPMC()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGMENPEBBB_NAKOFPLHOKG_PGHEOCLFPMC_OFFSET))(this);
	}
};
