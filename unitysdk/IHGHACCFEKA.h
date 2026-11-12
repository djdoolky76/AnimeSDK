#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDILEMALGNC.h"
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }

#define IHGHACCFEKA_CTOR_OFFSET UNITYSDK_OFFSET(0x173D2170)
#define IHGHACCFEKA_IDNNMILIDLN_OFFSET UNITYSDK_OFFSET(0x173D2400)
#define IHGHACCFEKA_KFOPKEFOHFE_OFFSET UNITYSDK_OFFSET(0x173D2490)
#define IHGHACCFEKA_NHEDINBLOIH_OFFSET UNITYSDK_OFFSET(0x173D22D0)
#define IHGHACCFEKA_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x173D25B0)

inline static constexpr unsigned int IHGHACCFEKA_TypeDefinitionIndex = 71584;

	class IHGHACCFEKA : public ::MDILEMALGNC
	{
	public:
		::Cinemachine::CinemachineVirtualCameraBase* OLGEJDKPMCD; // 0x38
		::System::Void _ctor(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + IHGHACCFEKA_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean NHEDINBLOIH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGHACCFEKA_NHEDINBLOIH_OFFSET))(this);
		}

		::System::Void KFOPKEFOHFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGHACCFEKA_KFOPKEFOHFE_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGHACCFEKA_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void IDNNMILIDLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGHACCFEKA_IDNNMILIDLN_OFFSET))(this);
		}

	};
