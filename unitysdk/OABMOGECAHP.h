#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BJCFIOLIACA.h"
#include "unitysdk/MDILEMALGNC.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/RPG/CustomRP/RPGDepthOfField_CoCMethod.h"
#include "unitysdk/RPG/GameCore/DOFCocMethodType.h"
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace RPG::Client { class UIMeta; }

#define OABMOGECAHP_CTOR_1_OFFSET UNITYSDK_OFFSET(0xBD1A1D0)
#define OABMOGECAHP_CTOR_OFFSET UNITYSDK_OFFSET(0xBD1A1C0)
#define OABMOGECAHP_FJMFKJEIOIO_OFFSET UNITYSDK_OFFSET(0xBD1B100)
#define OABMOGECAHP_HMIEEOLJFIN_OFFSET UNITYSDK_OFFSET(0xBD1AA70)
#define OABMOGECAHP_KFOPKEFOHFE_OFFSET UNITYSDK_OFFSET(0xBD1A4A0)
#define OABMOGECAHP_KNMDDJDHCPL_1_OFFSET UNITYSDK_OFFSET(0xBD1B180)
#define OABMOGECAHP_KNMDDJDHCPL_OFFSET UNITYSDK_OFFSET(0xBD1B060)
#define OABMOGECAHP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBD1A330)
#define OABMOGECAHP_MBOPMELMLKK_OFFSET UNITYSDK_OFFSET(0xBD1AE00)
#define OABMOGECAHP_NHEDINBLOIH_OFFSET UNITYSDK_OFFSET(0xBD1A3E0)
#define OABMOGECAHP_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xBD1A460)

	class OABMOGECAHP : public ::MDILEMALGNC
	{
	public:
		::RPG::Client::UIMeta* LHCIIAFFHCO; // 0x38
		::BJCFIOLIACA BDBOGJHLEIG; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OABMOGECAHP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + OABMOGECAHP_CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + OABMOGECAHP_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean NHEDINBLOIH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OABMOGECAHP_NHEDINBLOIH_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OABMOGECAHP_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void KFOPKEFOHFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OABMOGECAHP_KFOPKEFOHFE_OFFSET))(this);
		}

		::System::Boolean FJMFKJEIOIO(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OABMOGECAHP_FJMFKJEIOIO_OFFSET))(this, a1, a2);
		}

		::System::Void MBOPMELMLKK(::RPG::Client::CameraDataAndFlags* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + OABMOGECAHP_MBOPMELMLKK_OFFSET))(this, a1);
		}

		::System::Void HMIEEOLJFIN(::RPG::Client::CameraDataAndFlags* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + OABMOGECAHP_HMIEEOLJFIN_OFFSET))(this, a1);
		}

		::RPG::CustomRP::RPGDepthOfField_CoCMethod KNMDDJDHCPL(::RPG::GameCore::DOFCocMethodType a1)
		{
			return ((::RPG::CustomRP::RPGDepthOfField_CoCMethod(*)(::PVOID, ::RPG::GameCore::DOFCocMethodType))((::PBYTE)hIl2Cpp + OABMOGECAHP_KNMDDJDHCPL_OFFSET))(this, a1);
		}

		::RPG::GameCore::DOFCocMethodType KNMDDJDHCPL_1(::RPG::CustomRP::RPGDepthOfField_CoCMethod a1)
		{
			return ((::RPG::GameCore::DOFCocMethodType(*)(::PVOID, ::RPG::CustomRP::RPGDepthOfField_CoCMethod))((::PBYTE)hIl2Cpp + OABMOGECAHP_KNMDDJDHCPL_1_OFFSET))(this, a1);
		}

	};
