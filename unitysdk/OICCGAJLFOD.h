#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDILEMALGNC.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
class ONGJAABPPCP;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }

#define OICCGAJLFOD_CTOR_1_OFFSET UNITYSDK_OFFSET(0xBE6EBC0)
#define OICCGAJLFOD_CTOR_OFFSET UNITYSDK_OFFSET(0xBE6EBB0)
#define OICCGAJLFOD_FPCNDONAFDO_OFFSET UNITYSDK_OFFSET(0xBE6F420)
#define OICCGAJLFOD_GCPIJEFJFKI_OFFSET UNITYSDK_OFFSET(0xBE6F250)
#define OICCGAJLFOD_GEKHDKEGOOE_OFFSET UNITYSDK_OFFSET(0xBE6F190)
#define OICCGAJLFOD_KFOPKEFOHFE_OFFSET UNITYSDK_OFFSET(0xBE6F2D0)
#define OICCGAJLFOD_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBE6ED20)
#define OICCGAJLFOD_NHEDINBLOIH_OFFSET UNITYSDK_OFFSET(0xBE6EDF0)
#define OICCGAJLFOD_OEHINGNBEHI_OFFSET UNITYSDK_OFFSET(0xBE6F000)
#define OICCGAJLFOD_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xBE6F3C0)

inline static constexpr unsigned int OICCGAJLFOD_TypeDefinitionIndex = 69612;

	class OICCGAJLFOD : public ::MDILEMALGNC
	{
	public:
		::ONGJAABPPCP* HPPFGAJLAFG; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OICCGAJLFOD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + OICCGAJLFOD_CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + OICCGAJLFOD_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean NHEDINBLOIH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OICCGAJLFOD_NHEDINBLOIH_OFFSET))(this);
		}

		::System::Void OEHINGNBEHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OICCGAJLFOD_OEHINGNBEHI_OFFSET))(this);
		}

		::System::Void KFOPKEFOHFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OICCGAJLFOD_KFOPKEFOHFE_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OICCGAJLFOD_PJPFIHFAHGO_OFFSET))(this);
		}

		::ONGJAABPPCP* FPCNDONAFDO()
		{
			return ((::ONGJAABPPCP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OICCGAJLFOD_FPCNDONAFDO_OFFSET))(this);
		}

		::System::Boolean GEKHDKEGOOE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OICCGAJLFOD_GEKHDKEGOOE_OFFSET))(this);
		}

		::ONGJAABPPCP* GCPIJEFJFKI()
		{
			return ((::ONGJAABPPCP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OICCGAJLFOD_GCPIJEFJFKI_OFFSET))(this);
		}

	};
