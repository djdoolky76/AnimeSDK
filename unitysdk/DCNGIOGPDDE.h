#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LGKJFOFLBFG.h"
#include "unitysdk/MoleMole/Config/AidAttackType.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BNKIPOEJNNB;
class CJMCICODFBN;
class DIAEPBNFKBO;
class ENGKPGFGGLM;
class NLNIIPDCABP;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define DCNGIOGPDDE_AHKONPIPOEP_OFFSET UNITYSDK_OFFSET(0x168AA970)
#define DCNGIOGPDDE_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x168AB150)
#define DCNGIOGPDDE_BCMKFOGOEOF_OFFSET UNITYSDK_OFFSET(0x168A91A0)
#define DCNGIOGPDDE_BHHCNDDKAPG_OFFSET UNITYSDK_OFFSET(0x168A82D0)
#define DCNGIOGPDDE_BMALAHGENAC_OFFSET UNITYSDK_OFFSET(0x168AAC00)
#define DCNGIOGPDDE_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x168A8EC0)
#define DCNGIOGPDDE_CPFDJADEFAL_OFFSET UNITYSDK_OFFSET(0x168A7BA0)
#define DCNGIOGPDDE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x168A7520)
#define DCNGIOGPDDE_DIEPHAJCGOE_OFFSET UNITYSDK_OFFSET(0x168ABAB0)
#define DCNGIOGPDDE_ENDOFFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x168A7A30)
#define DCNGIOGPDDE_GEBKKABEHMA_OFFSET UNITYSDK_OFFSET(0x168ABFA0)
#define DCNGIOGPDDE_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x168A9680)
#define DCNGIOGPDDE_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x168A9110)
#define DCNGIOGPDDE_LCIANNNIHKD_OFFSET UNITYSDK_OFFSET(0x168AC020)
#define DCNGIOGPDDE_LOOEKLJDJGB_OFFSET UNITYSDK_OFFSET(0x168AA750)
#define DCNGIOGPDDE_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x168A95F0)
#define DCNGIOGPDDE_NJCCGKBKICE_OFFSET UNITYSDK_OFFSET(0x168AAB70)
#define DCNGIOGPDDE_NPHLOPJHGNP_OFFSET UNITYSDK_OFFSET(0x168A8F50)
#define DCNGIOGPDDE_OFBOPBLPGMC_OFFSET UNITYSDK_OFFSET(0x168A8390)
#define DCNGIOGPDDE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x168A7AC0)
#define DCNGIOGPDDE_PHOEGFEJDIG_OFFSET UNITYSDK_OFFSET(0x168AAD50)
#define DCNGIOGPDDE_PJOKAAGMEMD_OFFSET UNITYSDK_OFFSET(0x168ABE80)
#define DCNGIOGPDDE_UPDATE_OFFSET UNITYSDK_OFFSET(0x168A78F0)
#define DCNGIOGPDDE__CTOR_OFFSET UNITYSDK_OFFSET(0x168A7B50)

inline static constexpr unsigned int DCNGIOGPDDE_TypeDefinitionIndex = 84317;

class DCNGIOGPDDE : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNGIOGPDDE__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DCNGIOGPDDE_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNGIOGPDDE_UPDATE_OFFSET))(this);
	}

	::System::Void EndOfFixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNGIOGPDDE_ENDOFFIXEDUPDATE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNGIOGPDDE_ONDESTROY_OFFSET))(this);
	}

	static ::System::Void CPFDJADEFAL(::BNKIPOEJNNB* HABMJMDJJGO, ::DIAEPBNFKBO* POBADKEDFOE, ::NLNIIPDCABP* FNFNDIBMPDE)
	{
		return ((::System::Void(*)(::BNKIPOEJNNB*, ::DIAEPBNFKBO*, ::NLNIIPDCABP*))((::PBYTE)hIl2Cpp + DCNGIOGPDDE_CPFDJADEFAL_OFFSET))(HABMJMDJJGO, POBADKEDFOE, FNFNDIBMPDE);
	}

	static ::System::String* BHHCNDDKAPG(::MoleMole::Battle::Entity* KECKGDFIALJ, ::DIAEPBNFKBO* POBADKEDFOE)
	{
		return ((::System::String*(*)(::MoleMole::Battle::Entity*, ::DIAEPBNFKBO*))((::PBYTE)hIl2Cpp + DCNGIOGPDDE_BHHCNDDKAPG_OFFSET))(KECKGDFIALJ, POBADKEDFOE);
	}

	static ::System::Void OFBOPBLPGMC(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DCNGIOGPDDE_OFBOPBLPGMC_OFFSET))(KECKGDFIALJ);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNGIOGPDDE_CMFOMGGDPPA_OFFSET))(this);
	}

	static ::System::Void NPHLOPJHGNP(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DCNGIOGPDDE_NPHLOPJHGNP_OFFSET))(KECKGDFIALJ);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNGIOGPDDE_IFHNMAGGFAE_OFFSET))(this);
	}

	static ::UnityEngine::GameObject* BCMKFOGOEOF(::BNKIPOEJNNB* DFACBBJHKHC, ::UnityEngine::Vector3 CKPGOKHECCH, ::System::String* HIAIKHDFCLN)
	{
		return ((::UnityEngine::GameObject*(*)(::BNKIPOEJNNB*, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + DCNGIOGPDDE_BCMKFOGOEOF_OFFSET))(DFACBBJHKHC, CKPGOKHECCH, HIAIKHDFCLN);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DCNGIOGPDDE_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DCNGIOGPDDE_HMLGKBFFNHI_OFFSET))(BKLGNCBNEGM);
	}

	static ::System::Void AHKONPIPOEP(::BNKIPOEJNNB* DFACBBJHKHC, ::System::UInt32 LDHJOACEFGD)
	{
		return ((::System::Void(*)(::BNKIPOEJNNB*, ::System::UInt32))((::PBYTE)hIl2Cpp + DCNGIOGPDDE_AHKONPIPOEP_OFFSET))(DFACBBJHKHC, LDHJOACEFGD);
	}

	::System::Void NJCCGKBKICE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNGIOGPDDE_NJCCGKBKICE_OFFSET))(this);
	}

	static ::System::Void BMALAHGENAC(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DCNGIOGPDDE_BMALAHGENAC_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void PHOEGFEJDIG(::MoleMole::Battle::Entity* ALDKDGOPDME, ::MoleMole::Battle::Entity* AGIFFLNILFI, ::LGKJFOFLBFG IEHPBAPHCOM, ::MoleMole::Config::AidAttackType ONLHMFMOEDH)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::LGKJFOFLBFG, ::MoleMole::Config::AidAttackType))((::PBYTE)hIl2Cpp + DCNGIOGPDDE_PHOEGFEJDIG_OFFSET))(ALDKDGOPDME, AGIFFLNILFI, IEHPBAPHCOM, ONLHMFMOEDH);
	}

	static ::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + DCNGIOGPDDE_APAGIJMHEAK_OFFSET))(MNGHGOLKKNO);
	}

	static ::System::Void DIEPHAJCGOE(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DCNGIOGPDDE_DIEPHAJCGOE_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void LOOEKLJDJGB(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DCNGIOGPDDE_LOOEKLJDJGB_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean PJOKAAGMEMD(::BNKIPOEJNNB* DFACBBJHKHC, ::System::UInt32 LDHJOACEFGD, ::UnityEngine::GameObject*& JEIDPPCEHLD)
	{
		return ((::System::Boolean(*)(::BNKIPOEJNNB*, ::System::UInt32, ::UnityEngine::GameObject*&))((::PBYTE)hIl2Cpp + DCNGIOGPDDE_PJOKAAGMEMD_OFFSET))(DFACBBJHKHC, LDHJOACEFGD, JEIDPPCEHLD);
	}

	static ::System::Boolean GEBKKABEHMA(::CJMCICODFBN* DEKJDEPKKLH)
	{
		return ((::System::Boolean(*)(::CJMCICODFBN*))((::PBYTE)hIl2Cpp + DCNGIOGPDDE_GEBKKABEHMA_OFFSET))(DEKJDEPKKLH);
	}

	static ::System::Void LCIANNNIHKD(::BNKIPOEJNNB* DFACBBJHKHC, ::System::UInt32 LDHJOACEFGD, ::UnityEngine::GameObject* JEIDPPCEHLD, ::System::Boolean HPMGBPBJLJO)
	{
		return ((::System::Void(*)(::BNKIPOEJNNB*, ::System::UInt32, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + DCNGIOGPDDE_LCIANNNIHKD_OFFSET))(DFACBBJHKHC, LDHJOACEFGD, JEIDPPCEHLD, HPMGBPBJLJO);
	}
};
