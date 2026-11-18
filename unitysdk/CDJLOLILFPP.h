#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBGABOFHFHL.h"
#include "unitysdk/FFINLFNBLBG.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/ODNEHMBABEO.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CAIJEDEPIGG;
class CFAADMFEGHP;
class GJCILIHCKDG;
class OACAIEEIMEB;
namespace MoleMole { class MonoConfigurableCollider; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define CDJLOLILFPP_AJPJEMABBID_OFFSET UNITYSDK_OFFSET(0x1531EE50)
#define CDJLOLILFPP_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x153163E0)
#define CDJLOLILFPP_DECKLOCPKJP_OFFSET UNITYSDK_OFFSET(0x153173F0)
#define CDJLOLILFPP_DMLPEJMPJLB_OFFSET UNITYSDK_OFFSET(0x1531A6D0)
#define CDJLOLILFPP_EFMBJFGHIMF_OFFSET UNITYSDK_OFFSET(0x15319BF0)
#define CDJLOLILFPP_EHENDDHLENB_OFFSET UNITYSDK_OFFSET(0x1531F3A0)
#define CDJLOLILFPP_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x153166D0)
#define CDJLOLILFPP_GEKJEPKLJCJ_OFFSET UNITYSDK_OFFSET(0x15319920)
#define CDJLOLILFPP_GHIOMNIFBHD_OFFSET UNITYSDK_OFFSET(0x1531BD60)
#define CDJLOLILFPP_IBODJHEIGBH_OFFSET UNITYSDK_OFFSET(0x15318F80)
#define CDJLOLILFPP_INEGOEGIOKM_OFFSET UNITYSDK_OFFSET(0x1531F310)
#define CDJLOLILFPP_LDCJONOBGEB_OFFSET UNITYSDK_OFFSET(0x1531F150)
#define CDJLOLILFPP_LNMNLNEAGDE_OFFSET UNITYSDK_OFFSET(0x15318A90)
#define CDJLOLILFPP_MADAEHCIOPO_OFFSET UNITYSDK_OFFSET(0x15316B20)
#define CDJLOLILFPP_MBKJKCLGCGA_OFFSET UNITYSDK_OFFSET(0x1531A3A0)
#define CDJLOLILFPP_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x15319B60)
#define CDJLOLILFPP_NELDJJIPMLN_OFFSET UNITYSDK_OFFSET(0x1531ED40)
#define CDJLOLILFPP_OKAEMFHPLKP_OFFSET UNITYSDK_OFFSET(0x1531F1E0)
#define CDJLOLILFPP_WAITFORFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x15316F50)
#define CDJLOLILFPP__CCTOR_OFFSET UNITYSDK_OFFSET(0x15317360)
#define CDJLOLILFPP__CTOR_OFFSET UNITYSDK_OFFSET(0x15317310)

inline static constexpr unsigned int CDJLOLILFPP_TypeDefinitionIndex = 52401;

class CDJLOLILFPP : public ::OAOOLPCNHKA
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::Bounds>** StaticGet_NGEBKDDEJBM()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Bounds>**)Il2CppClass::FromTypeDefinitionIndex(CDJLOLILFPP_TypeDefinitionIndex)->GetStaticField(0x3A500);
	}
	static ::System::Boolean* StaticGet_FPKKLNKJFPN()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CDJLOLILFPP_TypeDefinitionIndex)->GetStaticField(0xD790);
	}
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20
	::Nap::NapECS::EcsFilter* CDHCOFBJKJJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDJLOLILFPP__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDJLOLILFPP__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CDJLOLILFPP_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDJLOLILFPP_FIXEDUPDATE_OFFSET))(this);
	}

	::System::Void WaitForFixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDJLOLILFPP_WAITFORFIXEDUPDATE_OFFSET))(this);
	}

	static ::System::Void DECKLOCPKJP(::OACAIEEIMEB* LLLNJMKGPCL, ::GJCILIHCKDG* PEDBGJGFAHP)
	{
		return ((::System::Void(*)(::OACAIEEIMEB*, ::GJCILIHCKDG*))((::PBYTE)hIl2Cpp + CDJLOLILFPP_DECKLOCPKJP_OFFSET))(LLLNJMKGPCL, PEDBGJGFAHP);
	}

	static ::System::Void GEKJEPKLJCJ(::OACAIEEIMEB* LLLNJMKGPCL, ::CFAADMFEGHP* FNIBFEJCEAK, ::UnityEngine::Collider* CHIFPJGLFPK, ::UnityEngine::Vector3 JHKAPGEIBHO, ::UnityEngine::Vector3 LBKMCOKBJEA, ::FFINLFNBLBG ODKFBADGMEL, ::UnityEngine::Vector3 CFJFMMGPGKE)
	{
		return ((::System::Void(*)(::OACAIEEIMEB*, ::CFAADMFEGHP*, ::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::FFINLFNBLBG, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CDJLOLILFPP_GEKJEPKLJCJ_OFFSET))(LLLNJMKGPCL, FNIBFEJCEAK, CHIFPJGLFPK, JHKAPGEIBHO, LBKMCOKBJEA, ODKFBADGMEL, CFJFMMGPGKE);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CDJLOLILFPP_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Int32 EFMBJFGHIMF(::MoleMole::MonoConfigurableCollider* FNIBFEJCEAK, ::UnityEngine::Vector3 PCPIFNDKHCA, ::UnityEngine::Vector3 BOBNKIFGFOD, ::UnityEngine::Quaternion GGEMPOPNBCJ, ::System::Int32 KMOHKCADPNA, ::Il2CppArray<::UnityEngine::RaycastHit>* PILELGPBCLL)
	{
		return ((::System::Int32(*)(::MoleMole::MonoConfigurableCollider*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Int32, ::Il2CppArray<::UnityEngine::RaycastHit>*))((::PBYTE)hIl2Cpp + CDJLOLILFPP_EFMBJFGHIMF_OFFSET))(FNIBFEJCEAK, PCPIFNDKHCA, BOBNKIFGFOD, GGEMPOPNBCJ, KMOHKCADPNA, PILELGPBCLL);
	}

	static ::UnityEngine::Vector3 MBKJKCLGCGA(::UnityEngine::Collider* CHIFPJGLFPK, ::UnityEngine::Vector3 CKPGOKHECCH)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Collider*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CDJLOLILFPP_MBKJKCLGCGA_OFFSET))(CHIFPJGLFPK, CKPGOKHECCH);
	}

	static ::System::Void MADAEHCIOPO()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDJLOLILFPP_MADAEHCIOPO_OFFSET))();
	}

	static ::System::Void DMLPEJMPJLB(::OACAIEEIMEB* LLLNJMKGPCL, ::CAIJEDEPIGG* IIMHDHCFADH)
	{
		return ((::System::Void(*)(::OACAIEEIMEB*, ::CAIJEDEPIGG*))((::PBYTE)hIl2Cpp + CDJLOLILFPP_DMLPEJMPJLB_OFFSET))(LLLNJMKGPCL, IIMHDHCFADH);
	}

	static ::System::Void GHIOMNIFBHD(::OACAIEEIMEB* LLLNJMKGPCL, ::System::Boolean BDPFOOMGBLB)
	{
		return ((::System::Void(*)(::OACAIEEIMEB*, ::System::Boolean))((::PBYTE)hIl2Cpp + CDJLOLILFPP_GHIOMNIFBHD_OFFSET))(LLLNJMKGPCL, BDPFOOMGBLB);
	}

	static ::System::Single NELDJJIPMLN(::OACAIEEIMEB* LLLNJMKGPCL)
	{
		return ((::System::Single(*)(::OACAIEEIMEB*))((::PBYTE)hIl2Cpp + CDJLOLILFPP_NELDJJIPMLN_OFFSET))(LLLNJMKGPCL);
	}

	static ::System::Void AJPJEMABBID(::OACAIEEIMEB* LLLNJMKGPCL, ::GJCILIHCKDG* PEDBGJGFAHP)
	{
		return ((::System::Void(*)(::OACAIEEIMEB*, ::GJCILIHCKDG*))((::PBYTE)hIl2Cpp + CDJLOLILFPP_AJPJEMABBID_OFFSET))(LLLNJMKGPCL, PEDBGJGFAHP);
	}

	::System::Void LDCJONOBGEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDJLOLILFPP_LDCJONOBGEB_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 LNMNLNEAGDE(::EBGABOFHFHL DIIIAAHCHAF, ::UnityEngine::Collider* CHIFPJGLFPK, ::UnityEngine::Vector3 CKPGOKHECCH)
	{
		return ((::UnityEngine::Vector3(*)(::EBGABOFHFHL, ::UnityEngine::Collider*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CDJLOLILFPP_LNMNLNEAGDE_OFFSET))(DIIIAAHCHAF, CHIFPJGLFPK, CKPGOKHECCH);
	}

	static ::System::Boolean IBODJHEIGBH(::UnityEngine::Bounds& EEMHDFNFBPL, ::ODNEHMBABEO DIPCKLCMNPO)
	{
		return ((::System::Boolean(*)(::UnityEngine::Bounds&, ::ODNEHMBABEO))((::PBYTE)hIl2Cpp + CDJLOLILFPP_IBODJHEIGBH_OFFSET))(EEMHDFNFBPL, DIPCKLCMNPO);
	}

	static ::System::Void OKAEMFHPLKP(::OACAIEEIMEB* LLLNJMKGPCL, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::OACAIEEIMEB*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CDJLOLILFPP_OKAEMFHPLKP_OFFSET))(LLLNJMKGPCL, KECKGDFIALJ);
	}

	::System::Void INEGOEGIOKM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDJLOLILFPP_INEGOEGIOKM_OFFSET))(this);
	}

	static ::System::Void EHENDDHLENB(::OACAIEEIMEB* LLLNJMKGPCL, ::GJCILIHCKDG* PEDBGJGFAHP, ::System::Boolean BDPFOOMGBLB)
	{
		return ((::System::Void(*)(::OACAIEEIMEB*, ::GJCILIHCKDG*, ::System::Boolean))((::PBYTE)hIl2Cpp + CDJLOLILFPP_EHENDDHLENB_OFFSET))(LLLNJMKGPCL, PEDBGJGFAHP, BDPFOOMGBLB);
	}
};
