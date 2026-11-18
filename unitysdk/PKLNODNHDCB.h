#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimMoveState.h"
#include "unitysdk/MoleMole/Config/RunStateType.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/PKLNODNHDCB_JDECNPMNFDG.h"
#include "unitysdk/UnityEngine/Vector2.h"

class ACNLKLCDALA;
class AOACMIJPKFC;
class GEIHCPAOKKK;
class JFBNBOHNJBF;
class JOOHBDMHGCA;
class NLNIIPDCABP;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PKLNODNHDCB_AINENAFMJEH_OFFSET UNITYSDK_OFFSET(0x1B9EB2E0)
#define PKLNODNHDCB_AKCJBLOOHIM_OFFSET UNITYSDK_OFFSET(0x1B9EC870)
#define PKLNODNHDCB_ANIOCNIEOHD_OFFSET UNITYSDK_OFFSET(0x1B9EE500)
#define PKLNODNHDCB_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x1B9EF4E0)
#define PKLNODNHDCB_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1B9EBFF0)
#define PKLNODNHDCB_BHLHMMBDKBG_OFFSET UNITYSDK_OFFSET(0x1B9EC450)
#define PKLNODNHDCB_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x1B9EEE10)
#define PKLNODNHDCB_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1B9EAD20)
#define PKLNODNHDCB_FCLCEEGDBFM_OFFSET UNITYSDK_OFFSET(0x1B9ECC00)
#define PKLNODNHDCB_FNDCONDCIFL_OFFSET UNITYSDK_OFFSET(0x1B9EE270)
#define PKLNODNHDCB_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x1B9EBE20)
#define PKLNODNHDCB_IAHGBDICGKL_OFFSET UNITYSDK_OFFSET(0x1B9ED590)
#define PKLNODNHDCB_ICJAPEMNLCF_OFFSET UNITYSDK_OFFSET(0x1B9EED20)
#define PKLNODNHDCB_JFIJPEBCKKI_OFFSET UNITYSDK_OFFSET(0x1B9EEFC0)
#define PKLNODNHDCB_JGPEJJHBMMB_OFFSET UNITYSDK_OFFSET(0x1B9EB810)
#define PKLNODNHDCB_KAOLPDKFEBL_OFFSET UNITYSDK_OFFSET(0x1B9EE130)
#define PKLNODNHDCB_KHPFLHKGEMH_OFFSET UNITYSDK_OFFSET(0x1B9ED150)
#define PKLNODNHDCB_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1B9EB0F0)
#define PKLNODNHDCB_LCHJLALOIPK_OFFSET UNITYSDK_OFFSET(0x1B9ECB40)
#define PKLNODNHDCB_MCLLGOHAFOJ_OFFSET UNITYSDK_OFFSET(0x1B9EF0B0)
#define PKLNODNHDCB_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x1B9EEF30)
#define PKLNODNHDCB_MNEJHDIKCGJ_OFFSET UNITYSDK_OFFSET(0x1B9EEEA0)
#define PKLNODNHDCB_NEJAGJNHEAA_OFFSET UNITYSDK_OFFSET(0x1B9ECEB0)
#define PKLNODNHDCB_NFLLMLKEFAP_OFFSET UNITYSDK_OFFSET(0x1B9ED700)
#define PKLNODNHDCB_NPCIPHADCKF_OFFSET UNITYSDK_OFFSET(0x1B9EDF40)
#define PKLNODNHDCB_ODAOGEDHLJC_OFFSET UNITYSDK_OFFSET(0x1B9EE9B0)
#define PKLNODNHDCB_OGJHBKGDDND_OFFSET UNITYSDK_OFFSET(0x1B9EB9A0)
#define PKLNODNHDCB_PJDPDBNEMMH_OFFSET UNITYSDK_OFFSET(0x1B9EE710)
#define PKLNODNHDCB_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B9EAF50)
#define PKLNODNHDCB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9EB2C0)
#define PKLNODNHDCB__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9EB270)

inline static constexpr unsigned int PKLNODNHDCB_TypeDefinitionIndex = 68388;

class PKLNODNHDCB : public ::OAOOLPCNHKA
{
public:
	static ::System::Boolean* StaticGet_MCHONIGFDGC()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PKLNODNHDCB_TypeDefinitionIndex)->GetStaticField(0x12B70);
	}
	static ::PKLNODNHDCB_JDECNPMNFDG* StaticGet_BPPNFMGABNM()
	{
		return (::PKLNODNHDCB_JDECNPMNFDG*)Il2CppClass::FromTypeDefinitionIndex(PKLNODNHDCB_TypeDefinitionIndex)->GetStaticField(0x12B71);
	}
	static ::System::Boolean* StaticGet_MGCDEPOGHAD()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PKLNODNHDCB_TypeDefinitionIndex)->GetStaticField(0x12B72);
	}
	static ::System::Single* StaticGet_LEDCIHGFDPF()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PKLNODNHDCB_TypeDefinitionIndex)->GetStaticField(0x12B74);
	}
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLNODNHDCB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKLNODNHDCB__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + PKLNODNHDCB_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLNODNHDCB_UPDATE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLNODNHDCB_LATEUPDATE_OFFSET))(this);
	}

	static ::System::Void AINENAFMJEH(::GEIHCPAOKKK* OHPJHPEOFLD, ::AOACMIJPKFC* ODAFPMADJNH, ::JFBNBOHNJBF* IHAMOGFIMAD)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::AOACMIJPKFC*, ::JFBNBOHNJBF*))((::PBYTE)hIl2Cpp + PKLNODNHDCB_AINENAFMJEH_OFFSET))(OHPJHPEOFLD, ODAFPMADJNH, IHAMOGFIMAD);
	}

	static ::System::Void OGJHBKGDDND(::AOACMIJPKFC* ODAFPMADJNH, ::System::Collections::Generic::List_1<::System::Int32>* NKMNLFEEPPD, ::System::Collections::Generic::List_1<::System::Int32>*& LHAGMAKDGNK)
	{
		return ((::System::Void(*)(::AOACMIJPKFC*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + PKLNODNHDCB_OGJHBKGDDND_OFFSET))(ODAFPMADJNH, NKMNLFEEPPD, LHAGMAKDGNK);
	}

	::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PKLNODNHDCB_HMLGKBFFNHI_OFFSET))(this, BKLGNCBNEGM);
	}

	static ::System::Void LCHJLALOIPK(::AOACMIJPKFC* ODAFPMADJNH)
	{
		return ((::System::Void(*)(::AOACMIJPKFC*))((::PBYTE)hIl2Cpp + PKLNODNHDCB_LCHJLALOIPK_OFFSET))(ODAFPMADJNH);
	}

	static ::System::Single FCLCEEGDBFM(::System::Collections::Generic::List_1<::System::Int32>* GKLJGLHAKBD, ::System::Single CFOILEBJONG, ::AOACMIJPKFC* ODAFPMADJNH)
	{
		return ((::System::Single(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::System::Single, ::AOACMIJPKFC*))((::PBYTE)hIl2Cpp + PKLNODNHDCB_FCLCEEGDBFM_OFFSET))(GKLJGLHAKBD, CFOILEBJONG, ODAFPMADJNH);
	}

	static ::System::Void NEJAGJNHEAA(::AOACMIJPKFC* ODAFPMADJNH)
	{
		return ((::System::Void(*)(::AOACMIJPKFC*))((::PBYTE)hIl2Cpp + PKLNODNHDCB_NEJAGJNHEAA_OFFSET))(ODAFPMADJNH);
	}

	static ::System::Boolean KHPFLHKGEMH(::AOACMIJPKFC* ODAFPMADJNH, ::System::Collections::Generic::List_1<::System::Int32>* NKMNLFEEPPD, ::MoleMole::Config::RunStateType NIPEHAILNJM, ::System::Collections::Generic::List_1<::System::Int32>*& LHAGMAKDGNK)
	{
		return ((::System::Boolean(*)(::AOACMIJPKFC*, ::System::Collections::Generic::List_1<::System::Int32>*, ::MoleMole::Config::RunStateType, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + PKLNODNHDCB_KHPFLHKGEMH_OFFSET))(ODAFPMADJNH, NKMNLFEEPPD, NIPEHAILNJM, LHAGMAKDGNK);
	}

	static ::System::Void BHLHMMBDKBG(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PKLNODNHDCB_BHLHMMBDKBG_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void NFLLMLKEFAP(::System::Boolean CLHNFKEHKCO, ::UnityEngine::Vector2 GKLEJBFEDEA, ::System::Single HBEKKMCBGBK, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::System::Boolean, ::UnityEngine::Vector2, ::System::Single, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PKLNODNHDCB_NFLLMLKEFAP_OFFSET))(CLHNFKEHKCO, GKLEJBFEDEA, HBEKKMCBGBK, KECKGDFIALJ);
	}

	static ::System::Int32 NPCIPHADCKF(::AOACMIJPKFC* ODAFPMADJNH, ::System::String* BMNMIHEIIPK)
	{
		return ((::System::Int32(*)(::AOACMIJPKFC*, ::System::String*))((::PBYTE)hIl2Cpp + PKLNODNHDCB_NPCIPHADCKF_OFFSET))(ODAFPMADJNH, BMNMIHEIIPK);
	}

	static ::System::Void FNDCONDCIFL(::AOACMIJPKFC* ODAFPMADJNH, ::NLNIIPDCABP* FNFNDIBMPDE)
	{
		return ((::System::Void(*)(::AOACMIJPKFC*, ::NLNIIPDCABP*))((::PBYTE)hIl2Cpp + PKLNODNHDCB_FNDCONDCIFL_OFFSET))(ODAFPMADJNH, FNFNDIBMPDE);
	}

	static ::System::Void ANIOCNIEOHD(::AOACMIJPKFC* ODAFPMADJNH, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::AOACMIJPKFC*, ::System::Int32))((::PBYTE)hIl2Cpp + PKLNODNHDCB_ANIOCNIEOHD_OFFSET))(ODAFPMADJNH, ABHBKFJKINO);
	}

	static ::System::Void PJDPDBNEMMH(::AOACMIJPKFC* ODAFPMADJNH, ::MoleMole::Config::AnimMoveState EEMOPKCLEGM, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::AOACMIJPKFC*, ::MoleMole::Config::AnimMoveState, ::System::Int32))((::PBYTE)hIl2Cpp + PKLNODNHDCB_PJDPDBNEMMH_OFFSET))(ODAFPMADJNH, EEMOPKCLEGM, ABHBKFJKINO);
	}

	static ::System::String* KAOLPDKFEBL(::AOACMIJPKFC* DNJIGCKBANN)
	{
		return ((::System::String*(*)(::AOACMIJPKFC*))((::PBYTE)hIl2Cpp + PKLNODNHDCB_KAOLPDKFEBL_OFFSET))(DNJIGCKBANN);
	}

	static ::System::Int32 ODAOGEDHLJC(::AOACMIJPKFC* ODAFPMADJNH, ::MoleMole::Config::AnimMoveState EEMOPKCLEGM, ::System::String* FLEIJJGMHBB)
	{
		return ((::System::Int32(*)(::AOACMIJPKFC*, ::MoleMole::Config::AnimMoveState, ::System::String*))((::PBYTE)hIl2Cpp + PKLNODNHDCB_ODAOGEDHLJC_OFFSET))(ODAFPMADJNH, EEMOPKCLEGM, FLEIJJGMHBB);
	}

	static ::System::Boolean JGPEJJHBMMB(::AOACMIJPKFC* ODAFPMADJNH)
	{
		return ((::System::Boolean(*)(::AOACMIJPKFC*))((::PBYTE)hIl2Cpp + PKLNODNHDCB_JGPEJJHBMMB_OFFSET))(ODAFPMADJNH);
	}

	static ::System::String* IAHGBDICGKL(::AOACMIJPKFC* DNJIGCKBANN, ::MoleMole::Config::AnimMoveState EEMOPKCLEGM)
	{
		return ((::System::String*(*)(::AOACMIJPKFC*, ::MoleMole::Config::AnimMoveState))((::PBYTE)hIl2Cpp + PKLNODNHDCB_IAHGBDICGKL_OFFSET))(DNJIGCKBANN, EEMOPKCLEGM);
	}

	static ::System::Void BBOMJDBNHIC(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PKLNODNHDCB_BBOMJDBNHIC_OFFSET))(KECKGDFIALJ);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLNODNHDCB_CMFOMGGDPPA_OFFSET))(this);
	}

	::System::Void MNEJHDIKCGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLNODNHDCB_MNEJHDIKCGJ_OFFSET))(this);
	}

	static ::System::Void ICJAPEMNLCF(::ACNLKLCDALA* PPDNIHPGCOJ)
	{
		return ((::System::Void(*)(::ACNLKLCDALA*))((::PBYTE)hIl2Cpp + PKLNODNHDCB_ICJAPEMNLCF_OFFSET))(PPDNIHPGCOJ);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + PKLNODNHDCB_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void JFIJPEBCKKI(::ACNLKLCDALA* PPDNIHPGCOJ)
	{
		return ((::System::Void(*)(::ACNLKLCDALA*))((::PBYTE)hIl2Cpp + PKLNODNHDCB_JFIJPEBCKKI_OFFSET))(PPDNIHPGCOJ);
	}

	static ::System::Void AKCJBLOOHIM(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PKLNODNHDCB_AKCJBLOOHIM_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void MCLLGOHAFOJ(::AOACMIJPKFC* ODAFPMADJNH, ::ACNLKLCDALA* BCIMHMOFOMC, ::JOOHBDMHGCA* DCGAHNLABEF)
	{
		return ((::System::Void(*)(::AOACMIJPKFC*, ::ACNLKLCDALA*, ::JOOHBDMHGCA*))((::PBYTE)hIl2Cpp + PKLNODNHDCB_MCLLGOHAFOJ_OFFSET))(ODAFPMADJNH, BCIMHMOFOMC, DCGAHNLABEF);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + PKLNODNHDCB_APAGIJMHEAK_OFFSET))(this, MNGHGOLKKNO);
	}
};
