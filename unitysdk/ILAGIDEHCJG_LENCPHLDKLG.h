#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigLevelResultPerforms_LevelFailedCameraSequenceConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

class ILAGIDEHCJG;
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace PipelineCamera::CameraSequence { class CoreDataBindingResolver; }
namespace PipelineCamera::CameraSequence { class CoreDataCollection; }
namespace System { class Action; }

#define ILAGIDEHCJG_LENCPHLDKLG_CBCIMCIDJBA_OFFSET UNITYSDK_OFFSET(0x15ED34C0)
#define ILAGIDEHCJG_LENCPHLDKLG_EJHICKGMKBO_OFFSET UNITYSDK_OFFSET(0x15ED32A0)
#define ILAGIDEHCJG_LENCPHLDKLG__CTOR_OFFSET UNITYSDK_OFFSET(0x15ED3290)

inline static constexpr unsigned int ILAGIDEHCJG_LENCPHLDKLG_TypeDefinitionIndex = 56510;

class ILAGIDEHCJG_LENCPHLDKLG : public ::System::Object
{
public:
	::PipelineCamera::CameraSequence::CoreDataBindingResolver* FLJOACIABKD; // 0x10
	::PipelineCamera::CameraSequence::CoreDataCollection* GCAOGFBGMMH; // 0x18
	::System::Action* FFMGICPLKFB; // 0x20
	::ILAGIDEHCJG* KLHPEBKNIFB; // 0x28
	::MoleMole::Config::ConfigLevelResultPerforms_LevelFailedCameraSequenceConfig KNFMCFAKPGA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_LENCPHLDKLG__CTOR_OFFSET))(this);
	}

	::System::Void EJHICKGMKBO(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_LENCPHLDKLG_EJHICKGMKBO_OFFSET))(this, FKMJKPGNCJI);
	}

	::System::Void CBCIMCIDJBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_LENCPHLDKLG_CBCIMCIDJBA_OFFSET))(this);
	}
};
