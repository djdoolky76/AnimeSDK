#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoTriggerEventDispatcher; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_AIONEHCLAKD_OFFSET UNITYSDK_OFFSET(0x13F05EE0)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_AOHOOGPKJNL_OFFSET UNITYSDK_OFFSET(0x13F05080)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0x13F01B90)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_BMEPMFKNAJA_OFFSET UNITYSDK_OFFSET(0x13F02700)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_BPCHLCAIGKL_OFFSET UNITYSDK_OFFSET(0x13F05940)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_CCDFGAENEJP_OFFSET UNITYSDK_OFFSET(0x13F03930)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_CJOGCAAJHEP_OFFSET UNITYSDK_OFFSET(0x13F053E0)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_EMPTY_OFFSET UNITYSDK_OFFSET(0x13F04020)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_EOMOLCHCEOM_OFFSET UNITYSDK_OFFSET(0x13F04760)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_FDKKNCKPKPJ_OFFSET UNITYSDK_OFFSET(0x13F02C60)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x13F01EB0)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_FPDCHEIFEKG_OFFSET UNITYSDK_OFFSET(0x13F05690)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_FPMDCLDPJEA_OFFSET UNITYSDK_OFFSET(0x13F060E0)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_GNKIIGDKHDB_OFFSET UNITYSDK_OFFSET(0x13F05F80)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_IDKCCOCCOII_OFFSET UNITYSDK_OFFSET(0x13F04BA0)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_KCBDDLPDNFJ_OFFSET UNITYSDK_OFFSET(0x13F04F10)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_KOCHLMHNMDN_OFFSET UNITYSDK_OFFSET(0x13F01BE0)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_LBGKLPAHNAK_OFFSET UNITYSDK_OFFSET(0x13F028C0)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_MJPMJHHOKDA_OFFSET UNITYSDK_OFFSET(0x13F04E20)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_MPHMBAEKCPH_OFFSET UNITYSDK_OFFSET(0x13F051F0)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_NAKMOKELNIF_OFFSET UNITYSDK_OFFSET(0x13F05590)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_NBFPOJADFGA_OFFSET UNITYSDK_OFFSET(0x13F03E80)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_ODEEOBEHKIA_OFFSET UNITYSDK_OFFSET(0x13F04E90)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x13F04320)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x13F04130)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x13F03BC0)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_PBOEJICKEGC_OFFSET UNITYSDK_OFFSET(0x13F05DC0)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_PCEFEAMHHFL_OFFSET UNITYSDK_OFFSET(0x13F02630)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_PGJOBOBJCNP_OFFSET UNITYSDK_OFFSET(0x13F02290)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_PHOCDLPJMKP_OFFSET UNITYSDK_OFFSET(0x13F06000)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_PNJHMJMLFPL_OFFSET UNITYSDK_OFFSET(0x13F04B10)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_TRYGETMAINGAMEOBJECTSAFELY_OFFSET UNITYSDK_OFFSET(0x13F04400)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x13F04650)
#define MOLEMOLE_MONOTRIGGEREVENTSUBPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x13F04520)

namespace MoleMole
{
	inline static constexpr unsigned int MonoTriggerEventSubProxy_TypeDefinitionIndex = 48470;

	class MonoTriggerEventSubProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>** StaticGet_PODBCIOOGNO()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MonoTriggerEventSubProxy_TypeDefinitionIndex)->GetStaticField(0x3E8C0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_BBJHFGOEFJA()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MonoTriggerEventSubProxy_TypeDefinitionIndex)->GetStaticField(0x3E8C8);
		}
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_PGBJBIEOLAH()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(MonoTriggerEventSubProxy_TypeDefinitionIndex)->GetStaticField(0x3E8D0);
		}
		static ::System::Boolean* StaticGet_enableSweepTrigger()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoTriggerEventSubProxy_TypeDefinitionIndex)->GetStaticField(0xE530);
		}
		// static const ::System::Int32 FPKGHHFBKKM = 0x40; // 0x0
		// static const ::System::Single NPBGFHMJFHM; // 0x0
		// static const ::System::Int32 GOJHGCMDICG = 0x2; // 0x0
		::UnityEngine::GameObject* parentEntity; // 0x18
		::UnityEngine::LayerMask sweepLayerMask; // 0x20
		::System::Single minSweepDistance; // 0x24
		::System::Int32 sweepReenterCooldownFixedFrames; // 0x28
		::System::Byte _padding0[0x4];
		::UnityEngine::Transform* JHAFNIDMILC; // 0x30
		::UnityEngine::Collider* GAJPKCHGFPE; // 0x38
		::UnityEngine::Vector3 IALOKLAADEE; // 0x40
		::System::Boolean GOFNPFKODKD; // 0x4C
		::System::Byte _padding1[0x3];
		::Il2CppArray<::MoleMole::MonoTriggerEventDispatcher*>* GJCHIKCKCBJ; // 0x50
		::Il2CppArray<::UnityEngine::Collider*>* BHEILNFINOC; // 0x58
		::Il2CppArray<::System::Int32>* EGBBOGLHKOC; // 0x60
		::System::Int32 KPLCOODAKAH; // 0x68
		::System::Byte _padding2[0x4];
		::Il2CppArray<::System::Int32>* PHNEABIAEHH; // 0x70
		::Il2CppArray<::System::Int32>* KKHALGJKDCC; // 0x78
		::System::Int32 BIILFFIPFNH; // 0x80
		::System::Int32 KABPBJBNBDE; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_AWAKE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* LIBPKNHDIGP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_ONTRIGGEREXIT_OFFSET))(this, LIBPKNHDIGP);
		}

		static ::System::Void Empty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_EMPTY_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_ONDISABLE_OFFSET))(this);
		}

		static ::System::Boolean TryGetMainGameObjectSafely(::System::Int32 GKMALNABMDI, ::System::Int32& FAKEPLGFBJG)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_TRYGETMAINGAMEOBJECTSAFELY_OFFSET))(GKMALNABMDI, FAKEPLGFBJG);
		}

		static ::System::Void EOMOLCHCEOM(::UnityEngine::Transform* LCEHPOJIHFJ, ::UnityEngine::Vector3 FEKMOONKBFH, ::System::Single BCFJHEPLJDI, ::System::Single LLFIHLCEFOH, ::System::Int32 JBCNPOHMGPE, ::UnityEngine::Vector3& EMMOPBLKJNO, ::UnityEngine::Vector3& JBELLEJJOLM, ::System::Single& NCCDJLDKFGA)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Int32, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_EOMOLCHCEOM_OFFSET))(LCEHPOJIHFJ, FEKMOONKBFH, BCFJHEPLJDI, LLFIHLCEFOH, JBCNPOHMGPE, EMMOPBLKJNO, JBELLEJJOLM, NCCDJLDKFGA);
		}

		::System::Void NBFPOJADFGA(::System::Int32 FCGJDEFJOLO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_NBFPOJADFGA_OFFSET))(this, FCGJDEFJOLO);
		}

		static ::UnityEngine::Vector3 IDKCCOCCOII(::UnityEngine::Transform* PJHAKDHAHCM, ::System::Int32 JBCNPOHMGPE)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_IDKCCOCCOII_OFFSET))(PJHAKDHAHCM, JBCNPOHMGPE);
		}

		::System::Void AOHOOGPKJNL(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_AOHOOGPKJNL_OFFSET))(this, ABHBKFJKINO);
		}

		::System::Boolean MPHMBAEKCPH(::MoleMole::MonoTriggerEventDispatcher* ICILGJFKNDB, ::UnityEngine::Collider* NGDOPNIFOGE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoTriggerEventDispatcher*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_MPHMBAEKCPH_OFFSET))(this, ICILGJFKNDB, NGDOPNIFOGE);
		}

		::System::Void LBGKLPAHNAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_LBGKLPAHNAK_OFFSET))(this);
		}

		::System::Void BMEPMFKNAJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_BMEPMFKNAJA_OFFSET))(this);
		}

		::System::Boolean PBOEJICKEGC(::UnityEngine::Collider* GACDOMHGKFG)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_PBOEJICKEGC_OFFSET))(this, GACDOMHGKFG);
		}

		::System::Void NAKMOKELNIF(::System::Int32 ABHBKFJKINO, ::UnityEngine::Collider* NGDOPNIFOGE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_NAKMOKELNIF_OFFSET))(this, ABHBKFJKINO, NGDOPNIFOGE);
		}

		::System::Int32 KCBDDLPDNFJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_KCBDDLPDNFJ_OFFSET))(this);
		}

		static ::System::Boolean AIONEHCLAKD(::Il2CppArray<::System::Int32>* BMBAEDENFOG, ::System::Int32 JHFKDGBCOBA, ::System::Int32 FCGJDEFJOLO)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_AIONEHCLAKD_OFFSET))(BMBAEDENFOG, JHFKDGBCOBA, FCGJDEFJOLO);
		}

		::System::Int32 FDKKNCKPKPJ(::UnityEngine::Vector3 HBEKKMCBGBK, ::UnityEngine::Vector3 JBCNPOHMGPE, ::System::Single BDEDDEGJFKL)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_FDKKNCKPKPJ_OFFSET))(this, HBEKKMCBGBK, JBCNPOHMGPE, BDEDDEGJFKL);
		}

		::System::Boolean PHOCDLPJMKP(::System::Int32 FCGJDEFJOLO)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_PHOCDLPJMKP_OFFSET))(this, FCGJDEFJOLO);
		}

		::System::Void PGJOBOBJCNP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_PGJOBOBJCNP_OFFSET))(this);
		}

		::System::Boolean FPMDCLDPJEA(::UnityEngine::Collider* GACDOMHGKFG, ::System::Int32 MINEIHPHFBF, ::System::Int32& FCGJDEFJOLO)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_FPMDCLDPJEA_OFFSET))(this, GACDOMHGKFG, MINEIHPHFBF, FCGJDEFJOLO);
		}

		::System::Boolean BPCHLCAIGKL(::UnityEngine::Collider* LIBPKNHDIGP)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_BPCHLCAIGKL_OFFSET))(this, LIBPKNHDIGP);
		}

		static ::UnityEngine::Vector3 PNJHMJMLFPL(::UnityEngine::Vector3 CLMNLPKFBFA)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_PNJHMJMLFPL_OFFSET))(CLMNLPKFBFA);
		}

		::System::Int32 CJOGCAAJHEP(::System::Int32 FCGJDEFJOLO)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_CJOGCAAJHEP_OFFSET))(this, FCGJDEFJOLO);
		}

		static ::System::Single GNKIIGDKHDB(::UnityEngine::Vector3 CLMNLPKFBFA)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_GNKIIGDKHDB_OFFSET))(CLMNLPKFBFA);
		}

		::System::Void PCEFEAMHHFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_PCEFEAMHHFL_OFFSET))(this);
		}

		::System::Void CCDFGAENEJP(::System::Int32 OPIHEEFFDIP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_CCDFGAENEJP_OFFSET))(this, OPIHEEFFDIP);
		}

		static ::System::Single ODEEOBEHKIA(::UnityEngine::Vector3 CLMNLPKFBFA, ::System::Int32 JBCNPOHMGPE)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_ODEEOBEHKIA_OFFSET))(CLMNLPKFBFA, JBCNPOHMGPE);
		}

		::System::Void KOCHLMHNMDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_KOCHLMHNMDN_OFFSET))(this);
		}

		static ::System::Single MJPMJHHOKDA(::UnityEngine::Vector3 CLMNLPKFBFA, ::System::Int32 JBCNPOHMGPE)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_MJPMJHHOKDA_OFFSET))(CLMNLPKFBFA, JBCNPOHMGPE);
		}

		::System::Void FPDCHEIFEKG(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTSUBPROXY_FPDCHEIFEKG_OFFSET))(this, ABHBKFJKINO);
		}
	};
}
