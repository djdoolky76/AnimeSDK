#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDILEMALGNC.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/RPG/Client/CameraPushType.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KALJBBAFAHB;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define FHMPBHAPGKP_BENBDMEMLLC_OFFSET UNITYSDK_OFFSET(0x1578C2F0)
#define FHMPBHAPGKP_CAJHNHLLJDF_OFFSET UNITYSDK_OFFSET(0x1578D920)
#define FHMPBHAPGKP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1578FF90)
#define FHMPBHAPGKP_CMPJPADDNKJ_OFFSET UNITYSDK_OFFSET(0x1578BD60)
#define FHMPBHAPGKP_CNBIPKLFOLF_OFFSET UNITYSDK_OFFSET(0x1578FF30)
#define FHMPBHAPGKP_COPBLGMNMIK_OFFSET UNITYSDK_OFFSET(0x1578D600)
#define FHMPBHAPGKP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1578A100)
#define FHMPBHAPGKP_CTOR_OFFSET UNITYSDK_OFFSET(0x1578A040)
#define FHMPBHAPGKP_EDGFHFLLCEB_OFFSET UNITYSDK_OFFSET(0x1578CF90)
#define FHMPBHAPGKP_EDGPLMDBEAP_OFFSET UNITYSDK_OFFSET(0x1578BE50)
#define FHMPBHAPGKP_EMDHGDBLIAA_OFFSET UNITYSDK_OFFSET(0x1578D510)
#define FHMPBHAPGKP_EMNINOCOCAC_OFFSET UNITYSDK_OFFSET(0x1578B890)
#define FHMPBHAPGKP_FMLAODJELFJ_OFFSET UNITYSDK_OFFSET(0x1578A8D0)
#define FHMPBHAPGKP_GHKJFDLCIPO_OFFSET UNITYSDK_OFFSET(0x1578C6C0)
#define FHMPBHAPGKP_HGNJMKBOHBB_OFFSET UNITYSDK_OFFSET(0x1578BDF0)
#define FHMPBHAPGKP_HOEKHLJIIAH_OFFSET UNITYSDK_OFFSET(0x1578B9F0)
#define FHMPBHAPGKP_JDFPEHNLAMG_OFFSET UNITYSDK_OFFSET(0x1578C700)
#define FHMPBHAPGKP_KFOPKEFOHFE_OFFSET UNITYSDK_OFFSET(0x1578A920)
#define FHMPBHAPGKP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1578A310)
#define FHMPBHAPGKP_MKANDBBOJMP_OFFSET UNITYSDK_OFFSET(0x1578D900)
#define FHMPBHAPGKP_NHEDINBLOIH_OFFSET UNITYSDK_OFFSET(0x1578A430)
#define FHMPBHAPGKP_PDAGOMLBANA_OFFSET UNITYSDK_OFFSET(0x1578D580)
#define FHMPBHAPGKP_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1578A880)
#define FHMPBHAPGKP_PNNEABEMEMO_OFFSET UNITYSDK_OFFSET(0x1578B040)

inline static constexpr unsigned int FHMPBHAPGKP_TypeDefinitionIndex = 69639;

	class FHMPBHAPGKP : public ::MDILEMALGNC
	{
	public:
		::KALJBBAFAHB* PCFHEMBPDBH; // 0x38
		::Il2CppArray<::UnityEngine::Vector3>* BKGDNEEANID; // 0x40
		::Il2CppArray<::UnityEngine::RaycastHit>* LIEMGOHMCCD; // 0x48
		::Il2CppArray<::UnityEngine::Vector3>* DFFPGDLLGBJ; // 0x50
		::UnityEngine::Camera* COOFAPDHOPF; // 0x58
		::Il2CppArray<::UnityEngine::Vector3>* PAIMHFEBOEG; // 0x60
		::UnityEngine::Transform* OIGGFCOBKCG; // 0x68
		::Il2CppArray<::System::Boolean>* KBGOEFDMFJH; // 0x70
		::Il2CppArray<::System::Boolean>* NFAOIKFBDBO; // 0x78
		::System::Single IGLMOILFKLO; // 0x80
		::UnityEngine::RaycastHit EJJMPIIGOIL; // 0x84
		::System::Boolean PKDIPKOPICA; // 0xB4
		::System::Boolean MJKLAKBGHBN; // 0xB5
		::System::Byte _padding0[0x2];
		::System::Single NDMJOBHDNMP; // 0xB8
		::UnityEngine::Vector3 JLDKHHLGGDA; // 0xBC
		::UnityEngine::Vector3 BJCLDODCMMN; // 0xC8
		::UnityEngine::Ray PNGHABAEDBC; // 0xD4
		::System::Int32 GBFKGJFHEDM; // 0xEC
		::System::Single OLJLADEMNCE; // 0xF0
		::System::Single DCPEIOKIFKJ; // 0xF4
		::System::Single OKJMKNBGEOB; // 0xF8
		::System::Boolean AIFPKIKLCCM; // 0xFC
		::System::Boolean BKEAIGDGJEE; // 0xFD
		::System::Boolean BDKHLJGPKGE; // 0xFE
		::System::Byte _padding1[0x1];
		::RPG::Client::CameraPushType HHHODIJGLCA; // 0x100
		::System::Int32 KEEAAOEMJJP; // 0x104
		::System::Single BEOPKFBKFEG; // 0x108
		static ::RPG::Client::RPGProfilerMarker** StaticGet_ILOGJHPKIBK()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "FHMPBHAPGKP")->GetStaticField(0x6C820);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_EGGBCLDNKCO()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "FHMPBHAPGKP")->GetStaticField(0x6C828);
		}

		// static const ::System::Object IBNOBMFLILP; // 0x0
		// static const ::System::Object EHJBAMNLIPG; // 0x0
		// static const ::System::Object KEICLDNABIA; // 0x0
		// static const ::System::Object KJKMDDOMIDH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMPBHAPGKP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + FHMPBHAPGKP_CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHMPBHAPGKP_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + FHMPBHAPGKP_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean NHEDINBLOIH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMPBHAPGKP_NHEDINBLOIH_OFFSET))(this);
		}

		::System::Void FMLAODJELFJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMPBHAPGKP_FMLAODJELFJ_OFFSET))(this);
		}

		::System::Void KFOPKEFOHFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMPBHAPGKP_KFOPKEFOHFE_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMPBHAPGKP_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void HGNJMKBOHBB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FHMPBHAPGKP_HGNJMKBOHBB_OFFSET))(this, a1);
		}

		::System::Void EDGPLMDBEAP(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FHMPBHAPGKP_EDGPLMDBEAP_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean BENBDMEMLLC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FHMPBHAPGKP_BENBDMEMLLC_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void GHKJFDLCIPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMPBHAPGKP_GHKJFDLCIPO_OFFSET))(this);
		}

		::System::Void PNNEABEMEMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMPBHAPGKP_PNNEABEMEMO_OFFSET))(this);
		}

		::System::Void EMNINOCOCAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMPBHAPGKP_EMNINOCOCAC_OFFSET))(this);
		}

		::System::Void EMDHGDBLIAA(::RPG::Client::CameraPushType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraPushType))((::PBYTE)hIl2Cpp + FHMPBHAPGKP_EMDHGDBLIAA_OFFSET))(this, a1);
		}

		::System::Void HOEKHLJIIAH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FHMPBHAPGKP_HOEKHLJIIAH_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 PDAGOMLBANA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMPBHAPGKP_PDAGOMLBANA_OFFSET))(this);
		}

		::UnityEngine::Vector3 COPBLGMNMIK()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMPBHAPGKP_COPBLGMNMIK_OFFSET))(this);
		}

		::System::Void JDFPEHNLAMG(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Int32 a5, ::KALJBBAFAHB* a6, ::UnityEngine::Vector3 a7, ::UnityEngine::Vector3 a8, ::UnityEngine::Vector3 a9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::KALJBBAFAHB*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FHMPBHAPGKP_JDFPEHNLAMG_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Boolean CAJHNHLLJDF(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Single a6, ::System::Single a7, ::System::Single a8)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FHMPBHAPGKP_CAJHNHLLJDF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Boolean EDGFHFLLCEB(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3 a7)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FHMPBHAPGKP_EDGFHFLLCEB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Single CMPJPADDNKJ(::UnityEngine::Transform* a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FHMPBHAPGKP_CMPJPADDNKJ_OFFSET))(this, a1);
		}

		::System::Int32 CNBIPKLFOLF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMPBHAPGKP_CNBIPKLFOLF_OFFSET))(this);
		}

		::System::Boolean MKANDBBOJMP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMPBHAPGKP_MKANDBBOJMP_OFFSET))(this);
		}

	};
