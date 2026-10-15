#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDILEMALGNC.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/RPG/Client/VCameraChangeDataState.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
class OMJJNKHHKPG;
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }

#define FEPBIEDAGJP_CTOR_OFFSET UNITYSDK_OFFSET(0x1572DA10)
#define FEPBIEDAGJP_GEBOAKHIBEB_OFFSET UNITYSDK_OFFSET(0x1572EAE0)
#define FEPBIEDAGJP_GGOHBJAEPNI_OFFSET UNITYSDK_OFFSET(0x1572E840)
#define FEPBIEDAGJP_KDOLFINHMOA_OFFSET UNITYSDK_OFFSET(0x1572EC20)
#define FEPBIEDAGJP_KFOPKEFOHFE_OFFSET UNITYSDK_OFFSET(0x1572DCC0)
#define FEPBIEDAGJP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1572DB70)
#define FEPBIEDAGJP_MBHEIIKNABL_OFFSET UNITYSDK_OFFSET(0x1572E770)
#define FEPBIEDAGJP_NHEDINBLOIH_OFFSET UNITYSDK_OFFSET(0x1572DC50)
#define FEPBIEDAGJP_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1572EA30)

inline static constexpr unsigned int FEPBIEDAGJP_TypeDefinitionIndex = 69635;

	class FEPBIEDAGJP : public ::MDILEMALGNC
	{
	public:
		::RPG::Client::CameraBlendCurve* DGFHHPMPAHI; // 0x38
		::RPG::Client::CameraBlendCurve* KJJOCBMBEHE; // 0x40
		::OMJJNKHHKPG* KGIIAFKDLPD; // 0x48
		::System::Single KKHBNPPDKKL; // 0x50
		::RPG::Client::VCameraChangeDataState DNKMCBJLAGG; // 0x54
		::UnityEngine::Matrix4x4 GNGGKLEECHC; // 0x58
		::System::Single EKCHCNIINGF; // 0x98
		::System::Single NLMAMDMLOGM; // 0x9C
		::UnityEngine::Matrix4x4 OPMOGGALLPG; // 0xA0
		::System::Single BALGFJDINGK; // 0xE0
		::System::Boolean EGKIAEIAMGM; // 0xE4
		::System::Boolean BNFBHGLKPLP; // 0xE5
		::System::Byte _padding0[0x2];
		::System::Single GHABAAOGBNO; // 0xE8
		::System::Single DBPIIKMFPEB; // 0xEC
		::System::Single GBPLPJPGMDG; // 0xF0
		::System::Single JFKGPGHOCIP; // 0xF4
		::System::Single DEHHNEPJBBK; // 0xF8
		::System::Single PGMIOKKLHIE; // 0xFC
		::RPG::Client::VCameraChangeDataState CFIKPOFNONJ; // 0x100
		::System::Void _ctor(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + FEPBIEDAGJP_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + FEPBIEDAGJP_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean NHEDINBLOIH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FEPBIEDAGJP_NHEDINBLOIH_OFFSET))(this);
		}

		::System::Void KFOPKEFOHFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEPBIEDAGJP_KFOPKEFOHFE_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEPBIEDAGJP_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void GEBOAKHIBEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEPBIEDAGJP_GEBOAKHIBEB_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 KDOLFINHMOA(::System::Single a1, ::System::Single a2)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FEPBIEDAGJP_KDOLFINHMOA_OFFSET))(this, a1, a2);
		}

		::System::Void MBHEIIKNABL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEPBIEDAGJP_MBHEIIKNABL_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 GGOHBJAEPNI(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Matrix4x4 a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FEPBIEDAGJP_GGOHBJAEPNI_OFFSET))(this, a1, a2, a3, a4);
		}

	};
