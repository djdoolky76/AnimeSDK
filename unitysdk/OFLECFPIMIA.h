#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Bounds.h"

class ENGKPGFGGLM;
class GHLDLOHAOGM;
class OEEMDJPPNBM;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define OFLECFPIMIA_AFAFIJJBHJP_OFFSET UNITYSDK_OFFSET(0x13A5A7B0)
#define OFLECFPIMIA_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x13A5AEE0)
#define OFLECFPIMIA_BDPPHEAGCID_OFFSET UNITYSDK_OFFSET(0x13A57F80)
#define OFLECFPIMIA_BFIBCCIKNBH_OFFSET UNITYSDK_OFFSET(0x13A5D4F0)
#define OFLECFPIMIA_CCJPJKJCCKM_OFFSET UNITYSDK_OFFSET(0x13A587C0)
#define OFLECFPIMIA_CHFLCNOGKCK_OFFSET UNITYSDK_OFFSET(0x13A59B70)
#define OFLECFPIMIA_CHJEOGOIKBP_OFFSET UNITYSDK_OFFSET(0x13A57530)
#define OFLECFPIMIA_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x13A5E910)
#define OFLECFPIMIA_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x13A54090)
#define OFLECFPIMIA_DFACDPJIEPG_OFFSET UNITYSDK_OFFSET(0x13A5B500)
#define OFLECFPIMIA_DGGHFOLMJCG_OFFSET UNITYSDK_OFFSET(0x13A5DD70)
#define OFLECFPIMIA_DLBMEEBNOHH_OFFSET UNITYSDK_OFFSET(0x13A5E870)
#define OFLECFPIMIA_DNADKDGPEEN_OFFSET UNITYSDK_OFFSET(0x13A58360)
#define OFLECFPIMIA_DOIGJIGJIEI_OFFSET UNITYSDK_OFFSET(0x13A5A530)
#define OFLECFPIMIA_EELCBAAJKGM_OFFSET UNITYSDK_OFFSET(0x13A56D20)
#define OFLECFPIMIA_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x13A55320)
#define OFLECFPIMIA_FLNKHKMHJNM_OFFSET UNITYSDK_OFFSET(0x13A58480)
#define OFLECFPIMIA_GGBPKBEHOPJ_OFFSET UNITYSDK_OFFSET(0x13A5B770)
#define OFLECFPIMIA_GIBKOOCKEIK_OFFSET UNITYSDK_OFFSET(0x13A5AC80)
#define OFLECFPIMIA_GKGEEMNBMCH_OFFSET UNITYSDK_OFFSET(0x13A56AC0)
#define OFLECFPIMIA_GKIIFHGLEBL_OFFSET UNITYSDK_OFFSET(0x13A5AC10)
#define OFLECFPIMIA_GODLIDOAKMO_OFFSET UNITYSDK_OFFSET(0x13A591F0)
#define OFLECFPIMIA_HIDDLHDLMBC_OFFSET UNITYSDK_OFFSET(0x13A55AE0)
#define OFLECFPIMIA_HKLMLJOBAFB_OFFSET UNITYSDK_OFFSET(0x13A58570)
#define OFLECFPIMIA_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x13A5BC00)
#define OFLECFPIMIA_ICJAPEMNLCF_OFFSET UNITYSDK_OFFSET(0x13A5B7D0)
#define OFLECFPIMIA_IKBCPHKMNHM_OFFSET UNITYSDK_OFFSET(0x13A56650)
#define OFLECFPIMIA_ILKFFCOICNP_OFFSET UNITYSDK_OFFSET(0x13A5C390)
#define OFLECFPIMIA_INEGOEGIOKM_OFFSET UNITYSDK_OFFSET(0x13A5DCE0)
#define OFLECFPIMIA_JIELDFCKIGG_OFFSET UNITYSDK_OFFSET(0x13A572B0)
#define OFLECFPIMIA_JJBLNEBCLKE_OFFSET UNITYSDK_OFFSET(0x13A57A20)
#define OFLECFPIMIA_JPPMBFMCDLD_OFFSET UNITYSDK_OFFSET(0x13A55E90)
#define OFLECFPIMIA_KIFLHPLGNCF_OFFSET UNITYSDK_OFFSET(0x13A5D060)
#define OFLECFPIMIA_KJEKFKPBFPO_OFFSET UNITYSDK_OFFSET(0x13A59B20)
#define OFLECFPIMIA_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0x13A5D2F0)
#define OFLECFPIMIA_LAKHEHEGIPN_OFFSET UNITYSDK_OFFSET(0x13A5A740)
#define OFLECFPIMIA_LDCJONOBGEB_OFFSET UNITYSDK_OFFSET(0x13A5A580)
#define OFLECFPIMIA_LMKDHDHNBEF_OFFSET UNITYSDK_OFFSET(0x13A599A0)
#define OFLECFPIMIA_LOCDNEAHFDO_OFFSET UNITYSDK_OFFSET(0x13A5A2E0)
#define OFLECFPIMIA_MFFEICNIILI_OFFSET UNITYSDK_OFFSET(0x13A58520)
#define OFLECFPIMIA_MIFNALJHFCI_OFFSET UNITYSDK_OFFSET(0x13A5B4B0)
#define OFLECFPIMIA_MMIFPLBGACB_OFFSET UNITYSDK_OFFSET(0x13A5A400)
#define OFLECFPIMIA_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x13A5A250)
#define OFLECFPIMIA_NCAPGPGNLKM_OFFSET UNITYSDK_OFFSET(0x13A57730)
#define OFLECFPIMIA_NCJCEMGJNPN_OFFSET UNITYSDK_OFFSET(0x13A5A610)
#define OFLECFPIMIA_NGGALJAIHNK_OFFSET UNITYSDK_OFFSET(0x13A54580)
#define OFLECFPIMIA_NKDMBNCFCGO_OFFSET UNITYSDK_OFFSET(0x13A58A40)
#define OFLECFPIMIA_NLLOHFEDOFN_OFFSET UNITYSDK_OFFSET(0x13A5B150)
#define OFLECFPIMIA_NPIJFJJOBCA_OFFSET UNITYSDK_OFFSET(0x13A5A9D0)
#define OFLECFPIMIA_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x13A55600)
#define OFLECFPIMIA_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x13A570E0)
#define OFLECFPIMIA_OPELJMJOLCB_OFFSET UNITYSDK_OFFSET(0x13A588F0)
#define OFLECFPIMIA_PALAHAFMNLI_OFFSET UNITYSDK_OFFSET(0x13A57C70)
#define OFLECFPIMIA_PMHJBNNPCLB_OFFSET UNITYSDK_OFFSET(0x13A58780)
#define OFLECFPIMIA_UPDATE_OFFSET UNITYSDK_OFFSET(0x13A54400)
#define OFLECFPIMIA_WAITFORFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x13A55490)
#define OFLECFPIMIA__CTOR_OFFSET UNITYSDK_OFFSET(0x13A576E0)

inline static constexpr unsigned int OFLECFPIMIA_TypeDefinitionIndex = 88015;

class OFLECFPIMIA : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLECFPIMIA__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLECFPIMIA_UPDATE_OFFSET))(this);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLECFPIMIA_FIXEDUPDATE_OFFSET))(this);
	}

	::System::Void WaitForFixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLECFPIMIA_WAITFORFIXEDUPDATE_OFFSET))(this);
	}

	static ::System::Void OnTriggerEnter(::OEEMDJPPNBM* GBELIHABEDH, ::UnityEngine::Collider* LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::OEEMDJPPNBM*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_ONTRIGGERENTER_OFFSET))(GBELIHABEDH, LIBPKNHDIGP);
	}

	static ::System::Void OnTriggerExit(::OEEMDJPPNBM* GBELIHABEDH, ::UnityEngine::Collider* LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::OEEMDJPPNBM*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_ONTRIGGEREXIT_OFFSET))(GBELIHABEDH, LIBPKNHDIGP);
	}

	static ::System::Void JPPMBFMCDLD(::OEEMDJPPNBM* OHDOAFMCLHM, ::MoleMole::Battle::Entity* JKELDNKGNDI, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* ABLBFLBOEOG)
	{
		return ((::System::Void(*)(::OEEMDJPPNBM*, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_JPPMBFMCDLD_OFFSET))(OHDOAFMCLHM, JKELDNKGNDI, ABLBFLBOEOG);
	}

	static ::UnityEngine::AnimatorStateInfo JJBLNEBCLKE(::System::Int32 EEGBEFGJJBM, ::OEEMDJPPNBM* GEPPIAEJLFH)
	{
		return ((::UnityEngine::AnimatorStateInfo(*)(::System::Int32, ::OEEMDJPPNBM*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_JJBLNEBCLKE_OFFSET))(EEGBEFGJJBM, GEPPIAEJLFH);
	}

	static ::System::Void PALAHAFMNLI(::OEEMDJPPNBM* GEPPIAEJLFH)
	{
		return ((::System::Void(*)(::OEEMDJPPNBM*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_PALAHAFMNLI_OFFSET))(GEPPIAEJLFH);
	}

	static ::System::Boolean BDPPHEAGCID(::UnityEngine::AnimatorStateInfo DDMBAJJNOOD, ::System::Int32 EEGBEFGJJBM, ::OEEMDJPPNBM* GEPPIAEJLFH)
	{
		return ((::System::Boolean(*)(::UnityEngine::AnimatorStateInfo, ::System::Int32, ::OEEMDJPPNBM*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_BDPPHEAGCID_OFFSET))(DDMBAJJNOOD, EEGBEFGJJBM, GEPPIAEJLFH);
	}

	static ::System::Void DNADKDGPEEN(::OEEMDJPPNBM* GBELIHABEDH)
	{
		return ((::System::Void(*)(::OEEMDJPPNBM*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_DNADKDGPEEN_OFFSET))(GBELIHABEDH);
	}

	static ::System::Void FLNKHKMHJNM(::OEEMDJPPNBM* GBELIHABEDH)
	{
		return ((::System::Void(*)(::OEEMDJPPNBM*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_FLNKHKMHJNM_OFFSET))(GBELIHABEDH);
	}

	static ::System::Boolean HKLMLJOBAFB(::OEEMDJPPNBM* OHDOAFMCLHM)
	{
		return ((::System::Boolean(*)(::OEEMDJPPNBM*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_HKLMLJOBAFB_OFFSET))(OHDOAFMCLHM);
	}

	static ::System::Void PMHJBNNPCLB(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_PMHJBNNPCLB_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void CCJPJKJCCKM(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_CCJPJKJCCKM_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void JIELDFCKIGG(::OEEMDJPPNBM* GBELIHABEDH, ::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Void(*)(::OEEMDJPPNBM*, ::System::UInt32))((::PBYTE)hIl2Cpp + OFLECFPIMIA_JIELDFCKIGG_OFFSET))(GBELIHABEDH, NJNCGJLHLKC);
	}

	static ::System::Void GKGEEMNBMCH(::OEEMDJPPNBM* GBELIHABEDH, ::MoleMole::Battle::Entity* JKELDNKGNDI, ::System::Boolean GNIIGDIGFEL)
	{
		return ((::System::Void(*)(::OEEMDJPPNBM*, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + OFLECFPIMIA_GKGEEMNBMCH_OFFSET))(GBELIHABEDH, JKELDNKGNDI, GNIIGDIGFEL);
	}

	static ::System::Boolean OPELJMJOLCB(::System::Int32 EEGBEFGJJBM, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_OPELJMJOLCB_OFFSET))(EEGBEFGJJBM, KECKGDFIALJ);
	}

	static ::System::Void NKDMBNCFCGO(::OEEMDJPPNBM* OHDOAFMCLHM, ::UnityEngine::Bounds HBGFHGEPCOM, ::UnityEngine::Bounds ECHKCHPOOHO)
	{
		return ((::System::Void(*)(::OEEMDJPPNBM*, ::UnityEngine::Bounds, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + OFLECFPIMIA_NKDMBNCFCGO_OFFSET))(OHDOAFMCLHM, HBGFHGEPCOM, ECHKCHPOOHO);
	}

	static ::System::Void GODLIDOAKMO(::OEEMDJPPNBM* GEPPIAEJLFH, ::System::Single NCCDJLDKFGA, ::System::Single ELHMOANKHFM, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* DGDEFOCBJAC)
	{
		return ((::System::Void(*)(::OEEMDJPPNBM*, ::System::Single, ::System::Single, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_GODLIDOAKMO_OFFSET))(GEPPIAEJLFH, NCCDJLDKFGA, ELHMOANKHFM, DGDEFOCBJAC);
	}

	static ::System::Boolean IKBCPHKMNHM(::OEEMDJPPNBM* GEPPIAEJLFH, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* DGDEFOCBJAC)
	{
		return ((::System::Boolean(*)(::OEEMDJPPNBM*, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_IKBCPHKMNHM_OFFSET))(GEPPIAEJLFH, DGDEFOCBJAC);
	}

	static ::System::Void KJEKFKPBFPO(::OEEMDJPPNBM* GEPPIAEJLFH)
	{
		return ((::System::Void(*)(::OEEMDJPPNBM*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_KJEKFKPBFPO_OFFSET))(GEPPIAEJLFH);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void LOCDNEAHFDO(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_LOCDNEAHFDO_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void MMIFPLBGACB(::System::Int32 NBIOEBICFDL, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_MMIFPLBGACB_OFFSET))(NBIOEBICFDL, KECKGDFIALJ);
	}

	static ::System::Void DOIGJIGJIEI(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_DOIGJIGJIEI_OFFSET))(KECKGDFIALJ);
	}

	::System::Void LDCJONOBGEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLECFPIMIA_LDCJONOBGEB_OFFSET))(this);
	}

	static ::System::Void NCAPGPGNLKM(::OEEMDJPPNBM* GEPPIAEJLFH, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* DGDEFOCBJAC)
	{
		return ((::System::Void(*)(::OEEMDJPPNBM*, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_NCAPGPGNLKM_OFFSET))(GEPPIAEJLFH, DGDEFOCBJAC);
	}

	static ::System::Single NCJCEMGJNPN(::OEEMDJPPNBM* GBELIHABEDH)
	{
		return ((::System::Single(*)(::OEEMDJPPNBM*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_NCJCEMGJNPN_OFFSET))(GBELIHABEDH);
	}

	static ::MoleMole::Battle::Entity* HIDDLHDLMBC(::OEEMDJPPNBM* GBELIHABEDH, ::UnityEngine::Collider* LIBPKNHDIGP)
	{
		return ((::MoleMole::Battle::Entity*(*)(::OEEMDJPPNBM*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_HIDDLHDLMBC_OFFSET))(GBELIHABEDH, LIBPKNHDIGP);
	}

	static ::System::Void MFFEICNIILI(::OEEMDJPPNBM* GBELIHABEDH)
	{
		return ((::System::Void(*)(::OEEMDJPPNBM*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_MFFEICNIILI_OFFSET))(GBELIHABEDH);
	}

	static ::System::Void LAKHEHEGIPN(::OEEMDJPPNBM* GEPPIAEJLFH)
	{
		return ((::System::Void(*)(::OEEMDJPPNBM*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_LAKHEHEGIPN_OFFSET))(GEPPIAEJLFH);
	}

	static ::System::Void AFAFIJJBHJP(::OEEMDJPPNBM* GEPPIAEJLFH)
	{
		return ((::System::Void(*)(::OEEMDJPPNBM*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_AFAFIJJBHJP_OFFSET))(GEPPIAEJLFH);
	}

	static ::System::Void NPIJFJJOBCA(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_NPIJFJJOBCA_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean GKIIFHGLEBL(::OEEMDJPPNBM* GBELIHABEDH, ::System::UInt32 HBCMGOLIOPB)
	{
		return ((::System::Boolean(*)(::OEEMDJPPNBM*, ::System::UInt32))((::PBYTE)hIl2Cpp + OFLECFPIMIA_GKIIFHGLEBL_OFFSET))(GBELIHABEDH, HBCMGOLIOPB);
	}

	static ::System::Void GIBKOOCKEIK(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_GIBKOOCKEIK_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_APAGIJMHEAK_OFFSET))(MNGHGOLKKNO);
	}

	static ::UnityEngine::Bounds NLLOHFEDOFN(::OEEMDJPPNBM* GEPPIAEJLFH)
	{
		return ((::UnityEngine::Bounds(*)(::OEEMDJPPNBM*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_NLLOHFEDOFN_OFFSET))(GEPPIAEJLFH);
	}

	static ::System::Boolean MIFNALJHFCI(::OEEMDJPPNBM* GEPPIAEJLFH)
	{
		return ((::System::Boolean(*)(::OEEMDJPPNBM*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_MIFNALJHFCI_OFFSET))(GEPPIAEJLFH);
	}

	static ::System::Void DFACDPJIEPG(::OEEMDJPPNBM* GBELIHABEDH)
	{
		return ((::System::Void(*)(::OEEMDJPPNBM*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_DFACDPJIEPG_OFFSET))(GBELIHABEDH);
	}

	static ::System::Void GGBPKBEHOPJ(::MoleMole::EntityHandle KJJGBGKLFPL, ::System::Boolean DECIDLELLCP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_GGBPKBEHOPJ_OFFSET))(KJJGBGKLFPL, DECIDLELLCP, KECKGDFIALJ);
	}

	static ::System::Boolean LMKDHDHNBEF(::OEEMDJPPNBM* GBELIHABEDH, ::UnityEngine::GameObject* JEIDPPCEHLD)
	{
		return ((::System::Boolean(*)(::OEEMDJPPNBM*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_LMKDHDHNBEF_OFFSET))(GBELIHABEDH, JEIDPPCEHLD);
	}

	static ::System::Void ICJAPEMNLCF(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_ICJAPEMNLCF_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OFLECFPIMIA_HMLGKBFFNHI_OFFSET))(BKLGNCBNEGM);
	}

	static ::System::Void EELCBAAJKGM(::OEEMDJPPNBM* GBELIHABEDH, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* PILELGPBCLL, ::MoleMole::Battle::Entity* HODAIDNDKHD)
	{
		return ((::System::Void(*)(::OEEMDJPPNBM*, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_EELCBAAJKGM_OFFSET))(GBELIHABEDH, PILELGPBCLL, HODAIDNDKHD);
	}

	static ::System::Void NGGALJAIHNK(::Nap::NapECS::EcsFilter* PNPMMLNCDNK)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_NGGALJAIHNK_OFFSET))(PNPMMLNCDNK);
	}

	static ::System::Void ILKFFCOICNP(::OEEMDJPPNBM* GBELIHABEDH, ::MoleMole::Battle::Entity* DJHFOGHIFEJ, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* ABLBFLBOEOG)
	{
		return ((::System::Void(*)(::OEEMDJPPNBM*, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_ILKFFCOICNP_OFFSET))(GBELIHABEDH, DJHFOGHIFEJ, ABLBFLBOEOG);
	}

	static ::System::Void CHFLCNOGKCK(::OEEMDJPPNBM* GEPPIAEJLFH)
	{
		return ((::System::Void(*)(::OEEMDJPPNBM*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_CHFLCNOGKCK_OFFSET))(GEPPIAEJLFH);
	}

	static ::System::Void KIFLHPLGNCF(::MoleMole::EntityHandle CLCLAGABAIG, ::MoleMole::Battle::Entity* FKFANOGOLLI, ::UnityEngine::Collider* GACDOMHGKFG, ::System::Boolean DECIDLELLCP)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::MoleMole::Battle::Entity*, ::UnityEngine::Collider*, ::System::Boolean))((::PBYTE)hIl2Cpp + OFLECFPIMIA_KIFLHPLGNCF_OFFSET))(CLCLAGABAIG, FKFANOGOLLI, GACDOMHGKFG, DECIDLELLCP);
	}

	static ::System::Void KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_KOLPCLEMHGJ_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void BFIBCCIKNBH(::MoleMole::Battle::Entity* MFMPICKHAMJ, ::System::String* EJODHANADLL, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_BFIBCCIKNBH_OFFSET))(MFMPICKHAMJ, EJODHANADLL, KECKGDFIALJ);
	}

	::System::Void INEGOEGIOKM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLECFPIMIA_INEGOEGIOKM_OFFSET))(this);
	}

	static ::System::Void DGGHFOLMJCG(::OEEMDJPPNBM* OHDOAFMCLHM, ::MoleMole::Battle::Entity* JKELDNKGNDI, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* ABLBFLBOEOG)
	{
		return ((::System::Void(*)(::OEEMDJPPNBM*, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_DGGHFOLMJCG_OFFSET))(OHDOAFMCLHM, JKELDNKGNDI, ABLBFLBOEOG);
	}

	static ::System::Void CHJEOGOIKBP(::OEEMDJPPNBM* GBELIHABEDH, ::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Void(*)(::OEEMDJPPNBM*, ::System::UInt32))((::PBYTE)hIl2Cpp + OFLECFPIMIA_CHJEOGOIKBP_OFFSET))(GBELIHABEDH, NJNCGJLHLKC);
	}

	static ::System::Void DLBMEEBNOHH(::UnityEngine::AnimatorStateInfo KDEHMPGOCEP, ::UnityEngine::AnimatorStateInfo PADJNMGMGHO, ::System::Int32 EEGBEFGJJBM, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_DLBMEEBNOHH_OFFSET))(KDEHMPGOCEP, PADJNMGMGHO, EEGBEFGJJBM, KECKGDFIALJ);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLECFPIMIA_CMFOMGGDPPA_OFFSET))(this);
	}
};
