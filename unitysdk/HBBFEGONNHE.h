#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KPACKGEBECC_BEPAIBEIBLH.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GEIHCPAOKKK;
class KCODNJFEMAM;
class KPACKGEBECC;
namespace MoleMole::Battle { class ColliderEventDispatcher; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define HBBFEGONNHE_AKDFIKHHHGK_OFFSET UNITYSDK_OFFSET(0x1492B610)
#define HBBFEGONNHE_AMPKNEAABDC_OFFSET UNITYSDK_OFFSET(0x149301B0)
#define HBBFEGONNHE_BCIKDAALNJL_OFFSET UNITYSDK_OFFSET(0x14928CE0)
#define HBBFEGONNHE_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x1492D010)
#define HBBFEGONNHE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x14926C60)
#define HBBFEGONNHE_DABFHJMOOBH_OFFSET UNITYSDK_OFFSET(0x1492E080)
#define HBBFEGONNHE_DABKJCGHBDJ_OFFSET UNITYSDK_OFFSET(0x1492F240)
#define HBBFEGONNHE_DENHOMILFDH_OFFSET UNITYSDK_OFFSET(0x1492CA20)
#define HBBFEGONNHE_EELJIPHJKOG_OFFSET UNITYSDK_OFFSET(0x1492EEA0)
#define HBBFEGONNHE_FBPHNBNADMD_OFFSET UNITYSDK_OFFSET(0x1492D0A0)
#define HBBFEGONNHE_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x14926E40)
#define HBBFEGONNHE_GBKDBNLHCAI_OFFSET UNITYSDK_OFFSET(0x14928EA0)
#define HBBFEGONNHE_GFHOBBMDCFC_OFFSET UNITYSDK_OFFSET(0x1492C1E0)
#define HBBFEGONNHE_GGGGOGPGALN_OFFSET UNITYSDK_OFFSET(0x1492F2B0)
#define HBBFEGONNHE_GMJFPJFIJGD_OFFSET UNITYSDK_OFFSET(0x14929980)
#define HBBFEGONNHE_HCEPBEKIPCL_OFFSET UNITYSDK_OFFSET(0x149288B0)
#define HBBFEGONNHE_HDIBIBIPJCG_OFFSET UNITYSDK_OFFSET(0x1492FCB0)
#define HBBFEGONNHE_HGBAJGBBDPN_OFFSET UNITYSDK_OFFSET(0x1492BB10)
#define HBBFEGONNHE_HMHNEHFICPM_OFFSET UNITYSDK_OFFSET(0x1492E450)
#define HBBFEGONNHE_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x1492B140)
#define HBBFEGONNHE_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x1492DFF0)
#define HBBFEGONNHE_ILDFPEANEJE_OFFSET UNITYSDK_OFFSET(0x14927F70)
#define HBBFEGONNHE_IMIGFHDKKMP_OFFSET UNITYSDK_OFFSET(0x1492C990)
#define HBBFEGONNHE_INCAANHGFFF_OFFSET UNITYSDK_OFFSET(0x149278F0)
#define HBBFEGONNHE_INEGOEGIOKM_OFFSET UNITYSDK_OFFSET(0x1492AE60)
#define HBBFEGONNHE_JPOLBPCHLHK_OFFSET UNITYSDK_OFFSET(0x1492EE50)
#define HBBFEGONNHE_KELDNCDNNBK_OFFSET UNITYSDK_OFFSET(0x1492E880)
#define HBBFEGONNHE_KGPCDFPGHHP_OFFSET UNITYSDK_OFFSET(0x1492FAF0)
#define HBBFEGONNHE_KLKJDOGIANH_OFFSET UNITYSDK_OFFSET(0x14928120)
#define HBBFEGONNHE_KLOENPCKCFI_OFFSET UNITYSDK_OFFSET(0x14927BE0)
#define HBBFEGONNHE_KNHBGGMFBNI_OFFSET UNITYSDK_OFFSET(0x1492AF80)
#define HBBFEGONNHE_KODMPELFMFE_OFFSET UNITYSDK_OFFSET(0x1492C670)
#define HBBFEGONNHE_LALKAHBHIOP_OFFSET UNITYSDK_OFFSET(0x1492F930)
#define HBBFEGONNHE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x14927230)
#define HBBFEGONNHE_LDHPAFFKHEH_OFFSET UNITYSDK_OFFSET(0x14928C30)
#define HBBFEGONNHE_LDIBNHJCNPF_OFFSET UNITYSDK_OFFSET(0x1492AEF0)
#define HBBFEGONNHE_LICEJHDJIFJ_OFFSET UNITYSDK_OFFSET(0x149274F0)
#define HBBFEGONNHE_MHBMGLNPPHC_OFFSET UNITYSDK_OFFSET(0x1492AAE0)
#define HBBFEGONNHE_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x1492E7F0)
#define HBBFEGONNHE_MNEJHDIKCGJ_OFFSET UNITYSDK_OFFSET(0x1492F8A0)
#define HBBFEGONNHE_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0x14927460)
#define HBBFEGONNHE_NOKDJPCOGOC_OFFSET UNITYSDK_OFFSET(0x14926EE0)
#define HBBFEGONNHE_ODLIMJJIKIM_OFFSET UNITYSDK_OFFSET(0x1492ACA0)
#define HBBFEGONNHE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14926C10)
#define HBBFEGONNHE_PGPGPEPKOPB_OFFSET UNITYSDK_OFFSET(0x1492B450)
#define HBBFEGONNHE_PJMKEPMEJDE_OFFSET UNITYSDK_OFFSET(0x1492E270)
#define HBBFEGONNHE_START_OFFSET UNITYSDK_OFFSET(0x14926BC0)
#define HBBFEGONNHE_UPDATE_OFFSET UNITYSDK_OFFSET(0x14927050)
#define HBBFEGONNHE__CTOR_OFFSET UNITYSDK_OFFSET(0x14927410)

inline static constexpr unsigned int HBBFEGONNHE_TypeDefinitionIndex = 71555;

class HBBFEGONNHE : public ::OAOOLPCNHKA
{
public:
	static ::HBBFEGONNHE** StaticGet_MNLNPOPDCBL()
	{
		return (::HBBFEGONNHE**)Il2CppClass::FromTypeDefinitionIndex(HBBFEGONNHE_TypeDefinitionIndex)->GetStaticField(0x441D0);
	}
	static ::System::Int32* StaticGet_PCDIBJCNGKA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HBBFEGONNHE_TypeDefinitionIndex)->GetStaticField(0xFCB0);
	}
	static ::System::Boolean* StaticGet_DJFHBJKJCPC()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HBBFEGONNHE_TypeDefinitionIndex)->GetStaticField(0xFCB4);
	}
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBBFEGONNHE__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBBFEGONNHE_START_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBBFEGONNHE_ONDESTROY_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + HBBFEGONNHE_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBBFEGONNHE_FIXEDUPDATE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBBFEGONNHE_UPDATE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBBFEGONNHE_LATEUPDATE_OFFSET))(this);
	}

	::System::Void NIGDIMFIAEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBBFEGONNHE_NIGDIMFIAEJ_OFFSET))(this);
	}

	static ::System::Void LICEJHDJIFJ(::KPACKGEBECC* EPFOEIJDMBM)
	{
		return ((::System::Void(*)(::KPACKGEBECC*))((::PBYTE)hIl2Cpp + HBBFEGONNHE_LICEJHDJIFJ_OFFSET))(EPFOEIJDMBM);
	}

	static ::System::Void INCAANHGFFF(::KPACKGEBECC* EPFOEIJDMBM)
	{
		return ((::System::Void(*)(::KPACKGEBECC*))((::PBYTE)hIl2Cpp + HBBFEGONNHE_INCAANHGFFF_OFFSET))(EPFOEIJDMBM);
	}

	static ::System::Void KLOENPCKCFI(::GEIHCPAOKKK* OHPJHPEOFLD, ::UnityEngine::Vector3 KJBFLKPKHCK, ::System::Boolean AFKHMEJPNIG)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + HBBFEGONNHE_KLOENPCKCFI_OFFSET))(OHPJHPEOFLD, KJBFLKPKHCK, AFKHMEJPNIG);
	}

	static ::System::Void ILDFPEANEJE(::KPACKGEBECC* EPFOEIJDMBM)
	{
		return ((::System::Void(*)(::KPACKGEBECC*))((::PBYTE)hIl2Cpp + HBBFEGONNHE_ILDFPEANEJE_OFFSET))(EPFOEIJDMBM);
	}

	static ::System::Void KLKJDOGIANH(::MoleMole::EntityHandle KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + HBBFEGONNHE_KLKJDOGIANH_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean LDHPAFFKHEH(::UnityEngine::Collider* LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + HBBFEGONNHE_LDHPAFFKHEH_OFFSET))(LIBPKNHDIGP);
	}

	static ::System::Void BCIKDAALNJL(::UnityEngine::Collider* LIBPKNHDIGP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HBBFEGONNHE_BCIKDAALNJL_OFFSET))(LIBPKNHDIGP, KECKGDFIALJ);
	}

	static ::System::Void GBKDBNLHCAI(::KPACKGEBECC* EPFOEIJDMBM)
	{
		return ((::System::Void(*)(::KPACKGEBECC*))((::PBYTE)hIl2Cpp + HBBFEGONNHE_GBKDBNLHCAI_OFFSET))(EPFOEIJDMBM);
	}

	static ::System::Void GMJFPJFIJGD(::KPACKGEBECC* EPFOEIJDMBM, ::System::Boolean MIKJGFIDAOP)
	{
		return ((::System::Void(*)(::KPACKGEBECC*, ::System::Boolean))((::PBYTE)hIl2Cpp + HBBFEGONNHE_GMJFPJFIJGD_OFFSET))(EPFOEIJDMBM, MIKJGFIDAOP);
	}

	static ::System::Void MHBMGLNPPHC(::UnityEngine::Collider* LIBPKNHDIGP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HBBFEGONNHE_MHBMGLNPPHC_OFFSET))(LIBPKNHDIGP, KECKGDFIALJ);
	}

	static ::System::Void ODLIMJJIKIM(::UnityEngine::Collider* LIBPKNHDIGP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HBBFEGONNHE_ODLIMJJIKIM_OFFSET))(LIBPKNHDIGP, KECKGDFIALJ);
	}

	::System::Void INEGOEGIOKM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBBFEGONNHE_INEGOEGIOKM_OFFSET))(this);
	}

	static ::System::Void LDIBNHJCNPF(::KPACKGEBECC* EPFOEIJDMBM)
	{
		return ((::System::Void(*)(::KPACKGEBECC*))((::PBYTE)hIl2Cpp + HBBFEGONNHE_LDIBNHJCNPF_OFFSET))(EPFOEIJDMBM);
	}

	static ::System::Void KNHBGGMFBNI(::MoleMole::EntityHandle KECKGDFIALJ, ::System::Int32 FHDKAGMGCMC)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Int32))((::PBYTE)hIl2Cpp + HBBFEGONNHE_KNHBGGMFBNI_OFFSET))(KECKGDFIALJ, FHDKAGMGCMC);
	}

	static ::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HBBFEGONNHE_HMLGKBFFNHI_OFFSET))(BKLGNCBNEGM);
	}

	static ::System::Void AKDFIKHHHGK(::MoleMole::EntityHandle KECKGDFIALJ, ::KPACKGEBECC* EPFOEIJDMBM)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::KPACKGEBECC*))((::PBYTE)hIl2Cpp + HBBFEGONNHE_AKDFIKHHHGK_OFFSET))(KECKGDFIALJ, EPFOEIJDMBM);
	}

	static ::System::Void PGPGPEPKOPB(::KPACKGEBECC* EPFOEIJDMBM)
	{
		return ((::System::Void(*)(::KPACKGEBECC*))((::PBYTE)hIl2Cpp + HBBFEGONNHE_PGPGPEPKOPB_OFFSET))(EPFOEIJDMBM);
	}

	static ::System::Void GFHOBBMDCFC(::KPACKGEBECC* EPFOEIJDMBM)
	{
		return ((::System::Void(*)(::KPACKGEBECC*))((::PBYTE)hIl2Cpp + HBBFEGONNHE_GFHOBBMDCFC_OFFSET))(EPFOEIJDMBM);
	}

	static ::System::Boolean IMIGFHDKKMP(::KCODNJFEMAM* CHPPFKKIKMA, ::UnityEngine::Vector3& LGPNKJJNNPO, ::UnityEngine::Quaternion& FEKPNBFOOII, ::UnityEngine::Vector3& NLCCIGKBMCM, ::UnityEngine::Quaternion& KHHONLNEPJP)
	{
		return ((::System::Boolean(*)(::KCODNJFEMAM*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + HBBFEGONNHE_IMIGFHDKKMP_OFFSET))(CHPPFKKIKMA, LGPNKJJNNPO, FEKPNBFOOII, NLCCIGKBMCM, KHHONLNEPJP);
	}

	static ::System::Void DENHOMILFDH(::MoleMole::EntityHandle KECKGDFIALJ, ::KPACKGEBECC* EPFOEIJDMBM, ::KPACKGEBECC_BEPAIBEIBLH HAKMIOIGCOH)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::KPACKGEBECC*, ::KPACKGEBECC_BEPAIBEIBLH))((::PBYTE)hIl2Cpp + HBBFEGONNHE_DENHOMILFDH_OFFSET))(KECKGDFIALJ, EPFOEIJDMBM, HAKMIOIGCOH);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBBFEGONNHE_CMFOMGGDPPA_OFFSET))(this);
	}

	static ::System::Void FBPHNBNADMD(::KPACKGEBECC* EPFOEIJDMBM, ::System::Boolean MIKJGFIDAOP)
	{
		return ((::System::Void(*)(::KPACKGEBECC*, ::System::Boolean))((::PBYTE)hIl2Cpp + HBBFEGONNHE_FBPHNBNADMD_OFFSET))(EPFOEIJDMBM, MIKJGFIDAOP);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBBFEGONNHE_IFHNMAGGFAE_OFFSET))(this);
	}

	static ::System::Void KODMPELFMFE(::MoleMole::EntityHandle KECKGDFIALJ, ::KPACKGEBECC* KKPFEIGFAKK)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::KPACKGEBECC*))((::PBYTE)hIl2Cpp + HBBFEGONNHE_KODMPELFMFE_OFFSET))(KECKGDFIALJ, KKPFEIGFAKK);
	}

	static ::System::Void DABFHJMOOBH(::MoleMole::EntityHandle KECKGDFIALJ, ::KPACKGEBECC* KKPFEIGFAKK, ::System::Boolean HIEDCLAPNMK)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::KPACKGEBECC*, ::System::Boolean))((::PBYTE)hIl2Cpp + HBBFEGONNHE_DABFHJMOOBH_OFFSET))(KECKGDFIALJ, KKPFEIGFAKK, HIEDCLAPNMK);
	}

	static ::System::Void PJMKEPMEJDE(::MoleMole::EntityHandle KECKGDFIALJ, ::KPACKGEBECC* KKPFEIGFAKK)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::KPACKGEBECC*))((::PBYTE)hIl2Cpp + HBBFEGONNHE_PJMKEPMEJDE_OFFSET))(KECKGDFIALJ, KKPFEIGFAKK);
	}

	static ::System::Void HMHNEHFICPM(::KPACKGEBECC* EPFOEIJDMBM)
	{
		return ((::System::Void(*)(::KPACKGEBECC*))((::PBYTE)hIl2Cpp + HBBFEGONNHE_HMHNEHFICPM_OFFSET))(EPFOEIJDMBM);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + HBBFEGONNHE_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void NOKDJPCOGOC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBBFEGONNHE_NOKDJPCOGOC_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 KELDNCDNNBK(::KPACKGEBECC* EPFOEIJDMBM, ::MoleMole::Battle::Entity* ELIJPNFENEN)
	{
		return ((::UnityEngine::Vector3(*)(::KPACKGEBECC*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HBBFEGONNHE_KELDNCDNNBK_OFFSET))(EPFOEIJDMBM, ELIJPNFENEN);
	}

	static ::System::Void JPOLBPCHLHK()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBBFEGONNHE_JPOLBPCHLHK_OFFSET))();
	}

	static ::System::Void EELJIPHJKOG(::KPACKGEBECC* EPFOEIJDMBM)
	{
		return ((::System::Void(*)(::KPACKGEBECC*))((::PBYTE)hIl2Cpp + HBBFEGONNHE_EELJIPHJKOG_OFFSET))(EPFOEIJDMBM);
	}

	static ::System::Void DABKJCGHBDJ(::KPACKGEBECC* EPFOEIJDMBM, ::System::Boolean MIKJGFIDAOP)
	{
		return ((::System::Void(*)(::KPACKGEBECC*, ::System::Boolean))((::PBYTE)hIl2Cpp + HBBFEGONNHE_DABKJCGHBDJ_OFFSET))(EPFOEIJDMBM, MIKJGFIDAOP);
	}

	static ::System::Void GGGGOGPGALN(::UnityEngine::Collider* LIBPKNHDIGP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HBBFEGONNHE_GGGGOGPGALN_OFFSET))(LIBPKNHDIGP, KECKGDFIALJ);
	}

	::System::Void MNEJHDIKCGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBBFEGONNHE_MNEJHDIKCGJ_OFFSET))(this);
	}

	static ::System::Void HGBAJGBBDPN(::MoleMole::EntityHandle KECKGDFIALJ, ::KPACKGEBECC* EPFOEIJDMBM, ::KPACKGEBECC_BEPAIBEIBLH HAKMIOIGCOH)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::KPACKGEBECC*, ::KPACKGEBECC_BEPAIBEIBLH))((::PBYTE)hIl2Cpp + HBBFEGONNHE_HGBAJGBBDPN_OFFSET))(KECKGDFIALJ, EPFOEIJDMBM, HAKMIOIGCOH);
	}

	static ::System::Void LALKAHBHIOP(::UnityEngine::Collider* LIBPKNHDIGP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HBBFEGONNHE_LALKAHBHIOP_OFFSET))(LIBPKNHDIGP, KECKGDFIALJ);
	}

	static ::System::Void KGPCDFPGHHP(::UnityEngine::Collider* LIBPKNHDIGP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HBBFEGONNHE_KGPCDFPGHHP_OFFSET))(LIBPKNHDIGP, KECKGDFIALJ);
	}

	static ::System::Void HDIBIBIPJCG(::UnityEngine::Collider* LIBPKNHDIGP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HBBFEGONNHE_HDIBIBIPJCG_OFFSET))(LIBPKNHDIGP, KECKGDFIALJ);
	}

	static ::System::Void AMPKNEAABDC(::UnityEngine::Collider* LIBPKNHDIGP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HBBFEGONNHE_AMPKNEAABDC_OFFSET))(LIBPKNHDIGP, KECKGDFIALJ);
	}

	static ::MoleMole::Battle::ColliderEventDispatcher* HCEPBEKIPCL(::MoleMole::EntityHandle KECKGDFIALJ, ::System::String* HIAIKHDFCLN)
	{
		return ((::MoleMole::Battle::ColliderEventDispatcher*(*)(::MoleMole::EntityHandle, ::System::String*))((::PBYTE)hIl2Cpp + HBBFEGONNHE_HCEPBEKIPCL_OFFSET))(KECKGDFIALJ, HIAIKHDFCLN);
	}
};
