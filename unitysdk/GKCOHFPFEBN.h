#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/GKCOHFPFEBN_AKLMKDAOPLE.h"

class AINLDBCGKOO;
class BJBCELGBBPO;
class ENGKPGFGGLM;
class LICIFKNCFAJ;
namespace MoleMole { class InteractEntryModeBuddy; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define GKCOHFPFEBN_ABDHPKDBCBN_OFFSET UNITYSDK_OFFSET(0x16CCC8E0)
#define GKCOHFPFEBN_ADDPKICJHDL_OFFSET UNITYSDK_OFFSET(0x16CCC470)
#define GKCOHFPFEBN_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x16CCD630)
#define GKCOHFPFEBN_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x16CCB910)
#define GKCOHFPFEBN_CIBNABNIIPP_OFFSET UNITYSDK_OFFSET(0x16CCE450)
#define GKCOHFPFEBN_CJPLANHJMEJ_OFFSET UNITYSDK_OFFSET(0x16CCB4E0)
#define GKCOHFPFEBN_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x16CCE3C0)
#define GKCOHFPFEBN_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x16CCA3B0)
#define GKCOHFPFEBN_DIEPHAJCGOE_OFFSET UNITYSDK_OFFSET(0x16CCCAA0)
#define GKCOHFPFEBN_FECCAHOMLJK_OFFSET UNITYSDK_OFFSET(0x16CCAFF0)
#define GKCOHFPFEBN_FHFLNGPMECF_OFFSET UNITYSDK_OFFSET(0x16CCC120)
#define GKCOHFPFEBN_FJPLCDBMJDL_OFFSET UNITYSDK_OFFSET(0x16CCBB20)
#define GKCOHFPFEBN_HGBOCFLAEEH_OFFSET UNITYSDK_OFFSET(0x16CCBD90)
#define GKCOHFPFEBN_HKAGIJNLPKL_OFFSET UNITYSDK_OFFSET(0x16CCC080)
#define GKCOHFPFEBN_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x16CCB950)
#define GKCOHFPFEBN_ILENGJJBGCG_OFFSET UNITYSDK_OFFSET(0x16CCD410)
#define GKCOHFPFEBN_IOEFKKCKCOL_OFFSET UNITYSDK_OFFSET(0x16CCB2D0)
#define GKCOHFPFEBN_JDFJMLBCJBB_OFFSET UNITYSDK_OFFSET(0x16CCBED0)
#define GKCOHFPFEBN_JLHHHBKJMPG_OFFSET UNITYSDK_OFFSET(0x16CCD9F0)
#define GKCOHFPFEBN_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0x16CCE230)
#define GKCOHFPFEBN_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x16CCAAB0)
#define GKCOHFPFEBN_MCPIOFDEIFB_OFFSET UNITYSDK_OFFSET(0x16CCCB70)
#define GKCOHFPFEBN_MDAKDBPLPPA_OFFSET UNITYSDK_OFFSET(0x16CCB660)
#define GKCOHFPFEBN_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x16CCD960)
#define GKCOHFPFEBN_MNEJHDIKCGJ_OFFSET UNITYSDK_OFFSET(0x16CCCA10)
#define GKCOHFPFEBN_NIOMGDJDOBI_OFFSET UNITYSDK_OFFSET(0x16CCC230)
#define GKCOHFPFEBN_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x16CCAC70)
#define GKCOHFPFEBN_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x16CCAE90)
#define GKCOHFPFEBN_UPDATE_OFFSET UNITYSDK_OFFSET(0x16CCA8F0)
#define GKCOHFPFEBN__CTOR_OFFSET UNITYSDK_OFFSET(0x16CCB280)

inline static constexpr unsigned int GKCOHFPFEBN_TypeDefinitionIndex = 54786;

class GKCOHFPFEBN : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20
	::Nap::NapECS::EcsFilter* IFKEPJLOFCD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCOHFPFEBN__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + GKCOHFPFEBN_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCOHFPFEBN_UPDATE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCOHFPFEBN_LATEUPDATE_OFFSET))(this);
	}

	static ::System::Void OnTriggerEnter(::System::Int32 BCCENALHBHL, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GKCOHFPFEBN_ONTRIGGERENTER_OFFSET))(BCCENALHBHL, KECKGDFIALJ);
	}

	static ::System::Void OnTriggerExit(::System::Int32 BCCENALHBHL, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GKCOHFPFEBN_ONTRIGGEREXIT_OFFSET))(BCCENALHBHL, KECKGDFIALJ);
	}

	::System::Void IOEFKKCKCOL(::BJBCELGBBPO* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::BJBCELGBBPO*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GKCOHFPFEBN_IOEFKKCKCOL_OFFSET))(this, FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Boolean CJPLANHJMEJ(::System::Int32 BCCENALHBHL, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GKCOHFPFEBN_CJPLANHJMEJ_OFFSET))(BCCENALHBHL, KECKGDFIALJ);
	}

	static ::System::Void MDAKDBPLPPA(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GKCOHFPFEBN_MDAKDBPLPPA_OFFSET))(BKLGNCBNEGM);
	}

	static ::System::Void BBOMJDBNHIC(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GKCOHFPFEBN_BBOMJDBNHIC_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void FECCAHOMLJK(::System::Int32 BCCENALHBHL, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GKCOHFPFEBN_FECCAHOMLJK_OFFSET))(BCCENALHBHL, KECKGDFIALJ);
	}

	::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKCOHFPFEBN_HMLGKBFFNHI_OFFSET))(this, BKLGNCBNEGM);
	}

	static ::System::Void FJPLCDBMJDL(::System::Int32 BCCENALHBHL, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GKCOHFPFEBN_FJPLCDBMJDL_OFFSET))(BCCENALHBHL, KECKGDFIALJ);
	}

	static ::System::String* JDFJMLBCJBB(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::String*(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GKCOHFPFEBN_JDFJMLBCJBB_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void HKAGIJNLPKL(::MoleMole::Battle::Entity*& AMNIHACKELI, ::AINLDBCGKOO*& CCKIJJAHCIB)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*&, ::AINLDBCGKOO*&))((::PBYTE)hIl2Cpp + GKCOHFPFEBN_HKAGIJNLPKL_OFFSET))(AMNIHACKELI, CCKIJJAHCIB);
	}

	static ::System::Void NIOMGDJDOBI(::AINLDBCGKOO* GBELIHABEDH, ::System::Int32 BCCENALHBHL, ::System::Func_1<::System::Boolean>* JJAGFPMHCHP)
	{
		return ((::System::Void(*)(::AINLDBCGKOO*, ::System::Int32, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + GKCOHFPFEBN_NIOMGDJDOBI_OFFSET))(GBELIHABEDH, BCCENALHBHL, JJAGFPMHCHP);
	}

	static ::System::Void ABDHPKDBCBN(::MoleMole::Battle::Entity* KECKGDFIALJ, ::MoleMole::InteractEntryModeBuddy* DBAFFFMJGKD, ::System::Boolean FMPGLOFALGO)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::InteractEntryModeBuddy*, ::System::Boolean))((::PBYTE)hIl2Cpp + GKCOHFPFEBN_ABDHPKDBCBN_OFFSET))(KECKGDFIALJ, DBAFFFMJGKD, FMPGLOFALGO);
	}

	::System::Void MNEJHDIKCGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCOHFPFEBN_MNEJHDIKCGJ_OFFSET))(this);
	}

	::System::Void DIEPHAJCGOE(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GKCOHFPFEBN_DIEPHAJCGOE_OFFSET))(this, FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void ADDPKICJHDL(::AINLDBCGKOO* GBELIHABEDH, ::System::Int32 BCCENALHBHL)
	{
		return ((::System::Void(*)(::AINLDBCGKOO*, ::System::Int32))((::PBYTE)hIl2Cpp + GKCOHFPFEBN_ADDPKICJHDL_OFFSET))(GBELIHABEDH, BCCENALHBHL);
	}

	static ::System::Void FHFLNGPMECF(::MoleMole::Battle::Entity*& AMNIHACKELI, ::AINLDBCGKOO*& CCKIJJAHCIB)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*&, ::AINLDBCGKOO*&))((::PBYTE)hIl2Cpp + GKCOHFPFEBN_FHFLNGPMECF_OFFSET))(AMNIHACKELI, CCKIJJAHCIB);
	}

	static ::System::Void MCPIOFDEIFB(::System::Int32 BCCENALHBHL, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GKCOHFPFEBN_MCPIOFDEIFB_OFFSET))(BCCENALHBHL, KECKGDFIALJ);
	}

	static ::System::Void ILENGJJBGCG(::MoleMole::Battle::Entity* KECKGDFIALJ, ::AINLDBCGKOO* ANIHNDJMDFG, ::System::Boolean CPHDDAGKHLB)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::AINLDBCGKOO*, ::System::Boolean))((::PBYTE)hIl2Cpp + GKCOHFPFEBN_ILENGJJBGCG_OFFSET))(KECKGDFIALJ, ANIHNDJMDFG, CPHDDAGKHLB);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + GKCOHFPFEBN_APAGIJMHEAK_OFFSET))(this, MNGHGOLKKNO);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + GKCOHFPFEBN_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void JLHHHBKJMPG(::AINLDBCGKOO* GBELIHABEDH, ::LICIFKNCFAJ* HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::AINLDBCGKOO*, ::LICIFKNCFAJ*))((::PBYTE)hIl2Cpp + GKCOHFPFEBN_JLHHHBKJMPG_OFFSET))(GBELIHABEDH, HMMMOCJAEOA);
	}

	static ::System::Void KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GKCOHFPFEBN_KOLPCLEMHGJ_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCOHFPFEBN_CMFOMGGDPPA_OFFSET))(this);
	}

	static ::System::Void HGBOCFLAEEH(::GKCOHFPFEBN_AKLMKDAOPLE& param_0)
	{
		return ((::System::Void(*)(::GKCOHFPFEBN_AKLMKDAOPLE&))((::PBYTE)hIl2Cpp + GKCOHFPFEBN_HGBOCFLAEEH_OFFSET))(param_0);
	}

	static ::System::Boolean CIBNABNIIPP(::MoleMole::Battle::Entity* KECKGDFIALJ, ::LICIFKNCFAJ* HMMMOCJAEOA)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::LICIFKNCFAJ*))((::PBYTE)hIl2Cpp + GKCOHFPFEBN_CIBNABNIIPP_OFFSET))(KECKGDFIALJ, HMMMOCJAEOA);
	}
};
