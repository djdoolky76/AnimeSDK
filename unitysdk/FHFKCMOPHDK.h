#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDILEMALGNC.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/UnityEngine/Vector3.h"
class GNBHHBLMAIM;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }

#define FHFKCMOPHDK_BCAEFBDBHFM_OFFSET UNITYSDK_OFFSET(0x1577A620)
#define FHFKCMOPHDK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x15779DE0)
#define FHFKCMOPHDK_CTOR_OFFSET UNITYSDK_OFFSET(0x15779DD0)
#define FHFKCMOPHDK_EGIIODLJMLH_OFFSET UNITYSDK_OFFSET(0x1577A400)
#define FHFKCMOPHDK_EHIAOCBGKEN_OFFSET UNITYSDK_OFFSET(0x1577B200)
#define FHFKCMOPHDK_GMOJHJPEENB_OFFSET UNITYSDK_OFFSET(0x1577AF60)
#define FHFKCMOPHDK_HIKMGCJHEJP_OFFSET UNITYSDK_OFFSET(0x1577AA30)
#define FHFKCMOPHDK_KAHEEHHKFPB_OFFSET UNITYSDK_OFFSET(0x1577A480)
#define FHFKCMOPHDK_KFOPKEFOHFE_OFFSET UNITYSDK_OFFSET(0x1577A070)
#define FHFKCMOPHDK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15779F40)
#define FHFKCMOPHDK_LCEIODCMJAI_OFFSET UNITYSDK_OFFSET(0x1577A780)
#define FHFKCMOPHDK_LMNDFNJIMGD_OFFSET UNITYSDK_OFFSET(0x1577A550)
#define FHFKCMOPHDK_NHEDINBLOIH_OFFSET UNITYSDK_OFFSET(0x15779FF0)
#define FHFKCMOPHDK_NHPDOJFOPFA_OFFSET UNITYSDK_OFFSET(0x1577B160)
#define FHFKCMOPHDK_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1577A740)
#define FHFKCMOPHDK_PMPDIKAIJEE_OFFSET UNITYSDK_OFFSET(0x1577A380)

	class FHFKCMOPHDK : public ::MDILEMALGNC
	{
	public:
		::GNBHHBLMAIM* OEIDPJGNEJF; // 0x38
		::System::Single BBKHDGJLLLD; // 0x40
		::System::Single KMJEOOCGFNC; // 0x44
		::System::Single FNCIKODBHOG; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFKCMOPHDK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + FHFKCMOPHDK_CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + FHFKCMOPHDK_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean NHEDINBLOIH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFKCMOPHDK_NHEDINBLOIH_OFFSET))(this);
		}

		::System::Void KFOPKEFOHFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFKCMOPHDK_KFOPKEFOHFE_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFKCMOPHDK_PJPFIHFAHGO_OFFSET))(this);
		}

		::GNBHHBLMAIM* EGIIODLJMLH()
		{
			return ((::GNBHHBLMAIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFKCMOPHDK_EGIIODLJMLH_OFFSET))(this);
		}

		::System::Void PMPDIKAIJEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFKCMOPHDK_PMPDIKAIJEE_OFFSET))(this);
		}

		::System::Void BCAEFBDBHFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFKCMOPHDK_BCAEFBDBHFM_OFFSET))(this);
		}

		::System::Single KAHEEHHKFPB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFKCMOPHDK_KAHEEHHKFPB_OFFSET))(this);
		}

		::System::Single LMNDFNJIMGD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFKCMOPHDK_LMNDFNJIMGD_OFFSET))(this);
		}

		::UnityEngine::Vector3 HIKMGCJHEJP()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFKCMOPHDK_HIKMGCJHEJP_OFFSET))(this);
		}

		::UnityEngine::Vector3 GMOJHJPEENB()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFKCMOPHDK_GMOJHJPEENB_OFFSET))(this);
		}

		::UnityEngine::Vector3 NHPDOJFOPFA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFKCMOPHDK_NHPDOJFOPFA_OFFSET))(this);
		}

		::System::Void LCEIODCMJAI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FHFKCMOPHDK_LCEIODCMJAI_OFFSET))(this, a1);
		}

		::System::Void EHIAOCBGKEN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FHFKCMOPHDK_EHIAOCBGKEN_OFFSET))(this, a1);
		}

	};
