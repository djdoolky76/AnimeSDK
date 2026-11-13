#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AxisType.h"
#include "unitysdk/RPG/GameCore/ProjectileMoveBehavior.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/KNLBAANACKF.h"
#include "unitysdk/UnityEngine/Vector3.h"
class GGJEMEHMBNL;
class NAOKFLDEDBJ;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NewProjectileConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define GGJEMEHMBNL_ALDEADLODCF_OFFSET UNITYSDK_OFFSET(0x1B4A78A0)
#define GGJEMEHMBNL_CALBAJJNBEA_OFFSET UNITYSDK_OFFSET(0x1B4A96A0)
#define GGJEMEHMBNL_CMGKENHAHGP_OFFSET UNITYSDK_OFFSET(0x1B4A60B0)
#define GGJEMEHMBNL_CTOR_OFFSET UNITYSDK_OFFSET(0x1B4A5F90)
#define GGJEMEHMBNL_DCOEEPNOEIC_OFFSET UNITYSDK_OFFSET(0x1B4A7EC0)
#define GGJEMEHMBNL_DFELPBIHFIM_OFFSET UNITYSDK_OFFSET(0x1B4A65D0)
#define GGJEMEHMBNL_DOPAKFIBOHP_OFFSET UNITYSDK_OFFSET(0x1B4A7C70)
#define GGJEMEHMBNL_EGFMFDJDDOA_OFFSET UNITYSDK_OFFSET(0x1B4A9240)
#define GGJEMEHMBNL_FDGDOPLLMHM_OFFSET UNITYSDK_OFFSET(0x1B4A8460)
#define GGJEMEHMBNL_FHEHILHGNNI_OFFSET UNITYSDK_OFFSET(0x1B4A64E0)
#define GGJEMEHMBNL_FIOGIHDLLEN_OFFSET UNITYSDK_OFFSET(0x1B4A7CC0)
#define GGJEMEHMBNL_IAJDHIPELPD_OFFSET UNITYSDK_OFFSET(0x1B4A6A30)
#define GGJEMEHMBNL_IBGNOONIIMA_OFFSET UNITYSDK_OFFSET(0x1B4A6050)
#define GGJEMEHMBNL_IDLJDKPJEBG_OFFSET UNITYSDK_OFFSET(0x1B4A7D10)
#define GGJEMEHMBNL_IFEFOBIIBNG_OFFSET UNITYSDK_OFFSET(0x1B4A8500)
#define GGJEMEHMBNL_INACFHKEMHL_OFFSET UNITYSDK_OFFSET(0x1B4A5AB0)
#define GGJEMEHMBNL_IPJFCPDILGO_OFFSET UNITYSDK_OFFSET(0x1B4A67C0)
#define GGJEMEHMBNL_JBAAEODGJIP_OFFSET UNITYSDK_OFFSET(0x1B4A7900)
#define GGJEMEHMBNL_JEDMJAICKIF_OFFSET UNITYSDK_OFFSET(0x1B4A8F60)
#define GGJEMEHMBNL_JKLHKEKFIAN_OFFSET UNITYSDK_OFFSET(0x1B4A6B50)
#define GGJEMEHMBNL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1B4A8040)
#define GGJEMEHMBNL_JNMKCFMJPHN_OFFSET UNITYSDK_OFFSET(0x1B4A92B0)
#define GGJEMEHMBNL_KFLNENIGDIN_OFFSET UNITYSDK_OFFSET(0x1B4A84C0)
#define GGJEMEHMBNL_KJHDKBJDJFC_OFFSET UNITYSDK_OFFSET(0x1B4A6BE0)
#define GGJEMEHMBNL_KKFMHGEPODK_OFFSET UNITYSDK_OFFSET(0x1B4A77F0)
#define GGJEMEHMBNL_KODBKFLJFKM_OFFSET UNITYSDK_OFFSET(0x1B4A7640)
#define GGJEMEHMBNL_KPEDKCFKFDG_OFFSET UNITYSDK_OFFSET(0x1B4A8720)
#define GGJEMEHMBNL_LHDIJEEEKEJ_OFFSET UNITYSDK_OFFSET(0x1B4A9980)
#define GGJEMEHMBNL_LKAMDIOKLOF_OFFSET UNITYSDK_OFFSET(0x1B4A9A00)
#define GGJEMEHMBNL_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0x1B4A8000)
#define GGJEMEHMBNL_MONBOOMKINM_OFFSET UNITYSDK_OFFSET(0x1B4A7C20)
#define GGJEMEHMBNL_NNALPNDFFIJ_OFFSET UNITYSDK_OFFSET(0x1B4A8870)
#define GGJEMEHMBNL_OJMLLDHCPKJ_OFFSET UNITYSDK_OFFSET(0x1B4A71E0)
#define GGJEMEHMBNL_PNHBOLMCIAH_OFFSET UNITYSDK_OFFSET(0x1B4A9CD0)

inline static constexpr unsigned int GGJEMEHMBNL_TypeDefinitionIndex = 55915;

	class GGJEMEHMBNL : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* OFHDAHHPNPJ; // 0x10
		::NAOKFLDEDBJ* FMJPMFEDIJL; // 0x18
		::RPG::GameCore::NewProjectileConfig* FJCAKOIDONG; // 0x20
		::RPG::GameCore::GameEntity* BBMMBAKDJBC; // 0x28
		::System::Single JJMLBGHNFJO; // 0x30
		::System::Boolean FKMIHGNFIPH; // 0x34
		::System::Boolean KICLHKKELNH; // 0x35
		::System::Boolean OIMPNKPFKIG; // 0x36
		::System::Byte _padding0[0x1];
		::System::Single KIPAGNCANAJ; // 0x38
		::System::Single DBNKLNLFEDA; // 0x3C
		::System::Single HKOANFBDPCK; // 0x40
		::System::Single EJOGNAEIIDM; // 0x44
		::System::Void _ctor(::NAOKFLDEDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAOKFLDEDBJ*))((::PBYTE)hIl2Cpp + GGJEMEHMBNL_CTOR_OFFSET))(this, a1);
		}

		static ::GGJEMEHMBNL* INACFHKEMHL(::NAOKFLDEDBJ* a1, ::RPG::GameCore::ProjectileMoveBehavior a2)
		{
			return ((::GGJEMEHMBNL*(*)(::NAOKFLDEDBJ*, ::RPG::GameCore::ProjectileMoveBehavior))((::PBYTE)hIl2Cpp + GGJEMEHMBNL_INACFHKEMHL_OFFSET))(a1, a2);
		}

		::System::Void CMGKENHAHGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJEMEHMBNL_CMGKENHAHGP_OFFSET))(this);
		}

		::System::Void DFELPBIHFIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJEMEHMBNL_DFELPBIHFIM_OFFSET))(this);
		}

		::System::Void IPJFCPDILGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJEMEHMBNL_IPJFCPDILGO_OFFSET))(this);
		}

		::System::Void IAJDHIPELPD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJEMEHMBNL_IAJDHIPELPD_OFFSET))(this);
		}

		::System::Void JKLHKEKFIAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJEMEHMBNL_JKLHKEKFIAN_OFFSET))(this);
		}

		::System::Void OJMLLDHCPKJ(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + GGJEMEHMBNL_OJMLLDHCPKJ_OFFSET))(this, a1);
		}

		::System::Void ALDEADLODCF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJEMEHMBNL_ALDEADLODCF_OFFSET))(this);
		}

		::System::Void JBAAEODGJIP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GGJEMEHMBNL_JBAAEODGJIP_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* KODBKFLJFKM()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJEMEHMBNL_KODBKFLJFKM_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* KKFMHGEPODK(::UnityEngine::Collider* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + GGJEMEHMBNL_KKFMHGEPODK_OFFSET))(this, a1);
		}

		::System::Single MONBOOMKINM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJEMEHMBNL_MONBOOMKINM_OFFSET))(this);
		}

		::System::Single DOPAKFIBOHP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJEMEHMBNL_DOPAKFIBOHP_OFFSET))(this);
		}

		::System::Boolean FIOGIHDLLEN(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + GGJEMEHMBNL_FIOGIHDLLEN_OFFSET))(this, a1);
		}

		::System::Void IDLJDKPJEBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJEMEHMBNL_IDLJDKPJEBG_OFFSET))(this);
		}

		::System::Void DCOEEPNOEIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJEMEHMBNL_DCOEEPNOEIC_OFFSET))(this);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJEMEHMBNL_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GGJEMEHMBNL_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Single FDGDOPLLMHM(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GGJEMEHMBNL_FDGDOPLLMHM_OFFSET))(this, a1);
		}

		::System::Void KFLNENIGDIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJEMEHMBNL_KFLNENIGDIN_OFFSET))(this);
		}

		::UnityEngine::Vector3 IFEFOBIIBNG(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + GGJEMEHMBNL_IFEFOBIIBNG_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* KPEDKCFKFDG()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJEMEHMBNL_KPEDKCFKFDG_OFFSET))(this);
		}

		::UnityEngine::Vector3 NNALPNDFFIJ()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJEMEHMBNL_NNALPNDFFIJ_OFFSET))(this);
		}

		::UnityEngine::Vector3 EGFMFDJDDOA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJEMEHMBNL_EGFMFDJDDOA_OFFSET))(this);
		}

		::UnityEngine::Vector3 JNMKCFMJPHN()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJEMEHMBNL_JNMKCFMJPHN_OFFSET))(this);
		}

		::System::Void KJHDKBJDJFC(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GGJEMEHMBNL_KJHDKBJDJFC_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 LHDIJEEEKEJ()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJEMEHMBNL_LHDIJEEEKEJ_OFFSET))(this);
		}

		::System::Boolean JEDMJAICKIF(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::KNLBAANACKF a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::KNLBAANACKF, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GGJEMEHMBNL_JEDMJAICKIF_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 FHEHILHGNNI(::System::String* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GGJEMEHMBNL_FHEHILHGNNI_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 CALBAJJNBEA(::System::String* a1, ::RPG::GameCore::AxisType a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::String*, ::RPG::GameCore::AxisType))((::PBYTE)hIl2Cpp + GGJEMEHMBNL_CALBAJJNBEA_OFFSET))(this, a1, a2);
		}

		::System::Single LKAMDIOKLOF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJEMEHMBNL_LKAMDIOKLOF_OFFSET))(this);
		}

		::System::Boolean PNHBOLMCIAH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJEMEHMBNL_PNHBOLMCIAH_OFFSET))(this);
		}

		::RPG::GameCore::TaskContext* IBGNOONIIMA()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJEMEHMBNL_IBGNOONIIMA_OFFSET))(this);
		}

	};
