#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDILEMALGNC.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KEGNPEGPLPM;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace System { class Nullable; }

#define AAPEGECOOEM_BLFCJKPHCKL_OFFSET UNITYSDK_OFFSET(0xB0E1A30)
#define AAPEGECOOEM_CTOR_1_OFFSET UNITYSDK_OFFSET(0xB0E0FF0)
#define AAPEGECOOEM_CTOR_OFFSET UNITYSDK_OFFSET(0xB0E0FE0)
#define AAPEGECOOEM_KFOPKEFOHFE_OFFSET UNITYSDK_OFFSET(0xB0E1440)
#define AAPEGECOOEM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB0E1150)
#define AAPEGECOOEM_NHEDINBLOIH_OFFSET UNITYSDK_OFFSET(0xB0E1280)
#define AAPEGECOOEM_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xB0E1230)

inline static constexpr unsigned int AAPEGECOOEM_TypeDefinitionIndex = 69642;

	class AAPEGECOOEM : public ::MDILEMALGNC
	{
	public:
		::KEGNPEGPLPM* BPNHAOHCGBE; // 0x38
		::System::Nullable* OFABLKBBNHC; // 0x40
		::UnityEngine::Vector3 LOMMNBIANJO; // 0x48
		::System::Nullable* DLFPFLOAGGG; // 0x54
		::UnityEngine::Vector3 JHLJODHMEMP; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPEGECOOEM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + AAPEGECOOEM_CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + AAPEGECOOEM_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPEGECOOEM_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Boolean NHEDINBLOIH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPEGECOOEM_NHEDINBLOIH_OFFSET))(this);
		}

		::System::Void KFOPKEFOHFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPEGECOOEM_KFOPKEFOHFE_OFFSET))(this);
		}

		::System::Void BLFCJKPHCKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPEGECOOEM_BLFCJKPHCKL_OFFSET))(this);
		}

	};
