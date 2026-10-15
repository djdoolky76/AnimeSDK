#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDILEMALGNC.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class InitializeModuleConfig; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }

#define POOILPFJOHP_CTOR_1_OFFSET UNITYSDK_OFFSET(0xC3751C0)
#define POOILPFJOHP_CTOR_OFFSET UNITYSDK_OFFSET(0xC3751B0)
#define POOILPFJOHP_KFOPKEFOHFE_OFFSET UNITYSDK_OFFSET(0xC3756C0)
#define POOILPFJOHP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC375320)
#define POOILPFJOHP_MKLEJACHPIL_OFFSET UNITYSDK_OFFSET(0xC375CB0)
#define POOILPFJOHP_NHEDINBLOIH_OFFSET UNITYSDK_OFFSET(0xC375450)
#define POOILPFJOHP_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xC375D20)

	class POOILPFJOHP : public ::MDILEMALGNC
	{
	public:
		::RPG::Client::InitializeModuleConfig* JDECJBOHCGL; // 0x38
		::System::Single JBEMENDMECC; // 0x40
		::System::Single HPFGIPBAHCB; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POOILPFJOHP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + POOILPFJOHP_CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + POOILPFJOHP_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean NHEDINBLOIH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POOILPFJOHP_NHEDINBLOIH_OFFSET))(this);
		}

		::System::Void KFOPKEFOHFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POOILPFJOHP_KFOPKEFOHFE_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POOILPFJOHP_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Single MKLEJACHPIL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + POOILPFJOHP_MKLEJACHPIL_OFFSET))(this);
		}

	};
