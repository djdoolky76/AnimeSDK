#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BJKJMCMBFHM_LHKGBOOKBPD.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/OHCFLICGFEF.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BPHGNMNLLHF;
class COJMBEOAKMD;
class ENGKPGFGGLM;
class HJDNNLKBHBA;
class JEMDLBKHBBO;
class MJHDNMKGLBJ;
namespace MoleMole { class TeamDataItem; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HENJKPMGENK_AAMKPKFPELG_OFFSET UNITYSDK_OFFSET(0x14099970)
#define HENJKPMGENK_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x1409F090)
#define HENJKPMGENK_BDPLOFPMNNC_OFFSET UNITYSDK_OFFSET(0x1409E8C0)
#define HENJKPMGENK_BIKALKPEOLN_OFFSET UNITYSDK_OFFSET(0x14098500)
#define HENJKPMGENK_CKKIPJEMBJB_OFFSET UNITYSDK_OFFSET(0x14093570)
#define HENJKPMGENK_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1408E980)
#define HENJKPMGENK_DKOCGNGKFNH_OFFSET UNITYSDK_OFFSET(0x1409CCF0)
#define HENJKPMGENK_DMOFKFLLIBH_OFFSET UNITYSDK_OFFSET(0x14092A10)
#define HENJKPMGENK_DOJPIONIMON_OFFSET UNITYSDK_OFFSET(0x1409EDF0)
#define HENJKPMGENK_EDPEBLMIFGE_OFFSET UNITYSDK_OFFSET(0x1409EF70)
#define HENJKPMGENK_EFGOADGCJMA_OFFSET UNITYSDK_OFFSET(0x14094F70)
#define HENJKPMGENK_EKLJNGFDPBL_OFFSET UNITYSDK_OFFSET(0x14099B80)
#define HENJKPMGENK_EKPPEMHPJPO_OFFSET UNITYSDK_OFFSET(0x140972B0)
#define HENJKPMGENK_ELGGLONKNDK_OFFSET UNITYSDK_OFFSET(0x1409B680)
#define HENJKPMGENK_ENMEFHDAKDI_1_OFFSET UNITYSDK_OFFSET(0x1409BF40)
#define HENJKPMGENK_ENMEFHDAKDI_OFFSET UNITYSDK_OFFSET(0x1409C760)
#define HENJKPMGENK_EOLANKNKGCM_OFFSET UNITYSDK_OFFSET(0x1409EBC0)
#define HENJKPMGENK_FFMJPPDEAOP_OFFSET UNITYSDK_OFFSET(0x14092BF0)
#define HENJKPMGENK_FFMKCNAKBKA_OFFSET UNITYSDK_OFFSET(0x1409C600)
#define HENJKPMGENK_FGOMGEIFNFN_OFFSET UNITYSDK_OFFSET(0x1409B3F0)
#define HENJKPMGENK_FMHNBBNAJJM_OFFSET UNITYSDK_OFFSET(0x14096140)
#define HENJKPMGENK_GBFHKDCOCEK_OFFSET UNITYSDK_OFFSET(0x14097EF0)
#define HENJKPMGENK_GIAJGDDFLGC_OFFSET UNITYSDK_OFFSET(0x1409B060)
#define HENJKPMGENK_GMNHBJNGPMD_OFFSET UNITYSDK_OFFSET(0x140985B0)
#define HENJKPMGENK_GNEFLCDBBPI_OFFSET UNITYSDK_OFFSET(0x14098970)
#define HENJKPMGENK_GOGDJJIAPNM_OFFSET UNITYSDK_OFFSET(0x1409EB40)
#define HENJKPMGENK_GOOKPKJPFGP_OFFSET UNITYSDK_OFFSET(0x140903D0)
#define HENJKPMGENK_HDGOKPNMMFF_OFFSET UNITYSDK_OFFSET(0x1409F030)
#define HENJKPMGENK_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x14094340)
#define HENJKPMGENK_ICJAPEMNLCF_OFFSET UNITYSDK_OFFSET(0x140945C0)
#define HENJKPMGENK_IHEFAMDAPJK_OFFSET UNITYSDK_OFFSET(0x1409EF30)
#define HENJKPMGENK_IHGHEIBHEJL_OFFSET UNITYSDK_OFFSET(0x14096480)
#define HENJKPMGENK_IICFNBHHIIN_OFFSET UNITYSDK_OFFSET(0x1409DA30)
#define HENJKPMGENK_IKBOBCKGJHG_OFFSET UNITYSDK_OFFSET(0x1409C5A0)
#define HENJKPMGENK_IMGPONNMOJA_OFFSET UNITYSDK_OFFSET(0x14099E80)
#define HENJKPMGENK_INIBFIPEICI_OFFSET UNITYSDK_OFFSET(0x14092260)
#define HENJKPMGENK_JALLFCDIOIN_OFFSET UNITYSDK_OFFSET(0x1409E7F0)
#define HENJKPMGENK_JKDLHCCNIFM_OFFSET UNITYSDK_OFFSET(0x14095930)
#define HENJKPMGENK_JMLFIHLAFMB_OFFSET UNITYSDK_OFFSET(0x140967F0)
#define HENJKPMGENK_JPKKDHFGLNO_OFFSET UNITYSDK_OFFSET(0x14098650)
#define HENJKPMGENK_KALHJNLCHEK_OFFSET UNITYSDK_OFFSET(0x14090270)
#define HENJKPMGENK_KAOLPCFBDDB_OFFSET UNITYSDK_OFFSET(0x140961F0)
#define HENJKPMGENK_KBGNHBPEHGI_OFFSET UNITYSDK_OFFSET(0x1408FA30)
#define HENJKPMGENK_KBKKACBLEEH_OFFSET UNITYSDK_OFFSET(0x1409CF90)
#define HENJKPMGENK_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0x140988D0)
#define HENJKPMGENK_LELMDGLBNCP_OFFSET UNITYSDK_OFFSET(0x14099AE0)
#define HENJKPMGENK_LIBFJBNBCGG_OFFSET UNITYSDK_OFFSET(0x140925B0)
#define HENJKPMGENK_MADLHKFFKBP_OFFSET UNITYSDK_OFFSET(0x1408F7E0)
#define HENJKPMGENK_MCHOPBDMFMK_OFFSET UNITYSDK_OFFSET(0x1409EFD0)
#define HENJKPMGENK_MEFJPACFPDK_OFFSET UNITYSDK_OFFSET(0x14094610)
#define HENJKPMGENK_MMLOAOFNFII_OFFSET UNITYSDK_OFFSET(0x1409E900)
#define HENJKPMGENK_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x1408ECF0)
#define HENJKPMGENK_NBFOLJHBJPH_OFFSET UNITYSDK_OFFSET(0x14099A40)
#define HENJKPMGENK_NNPMIKJPHMN_OFFSET UNITYSDK_OFFSET(0x1408F2E0)
#define HENJKPMGENK_NOIEKDGMKIC_OFFSET UNITYSDK_OFFSET(0x140928C0)
#define HENJKPMGENK_NPIJFJJOBCA_OFFSET UNITYSDK_OFFSET(0x14092210)
#define HENJKPMGENK_OADIEOHGPFC_OFFSET UNITYSDK_OFFSET(0x14090220)
#define HENJKPMGENK_OBIDDLBKHGA_OFFSET UNITYSDK_OFFSET(0x140906A0)
#define HENJKPMGENK_ONIGJPOJPJM_OFFSET UNITYSDK_OFFSET(0x1409B160)
#define HENJKPMGENK_PAJKGNBPHDK_OFFSET UNITYSDK_OFFSET(0x14093420)
#define HENJKPMGENK_PCBCIKNGMFC_OFFSET UNITYSDK_OFFSET(0x140915B0)
#define HENJKPMGENK_PECCCEFMJHG_OFFSET UNITYSDK_OFFSET(0x1408ED80)
#define HENJKPMGENK_PGEFEDEFMKA_OFFSET UNITYSDK_OFFSET(0x14090660)
#define HENJKPMGENK_PKNMHMOCODP_OFFSET UNITYSDK_OFFSET(0x140962B0)
#define HENJKPMGENK_POPGCAEJIDO_OFFSET UNITYSDK_OFFSET(0x1408F180)
#define HENJKPMGENK__CTOR_OFFSET UNITYSDK_OFFSET(0x1408ECA0)

inline static constexpr unsigned int HENJKPMGENK_TypeDefinitionIndex = 54975;

class HENJKPMGENK : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* APPHGEIGAJP; // 0x20
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HENJKPMGENK__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + HENJKPMGENK_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + HENJKPMGENK_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void PECCCEFMJHG(::System::Int32 PKMFBJMJCOO)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + HENJKPMGENK_PECCCEFMJHG_OFFSET))(PKMFBJMJCOO);
	}

	static ::System::Boolean POPGCAEJIDO(::System::Collections::Generic::List_1<::BPHGNMNLLHF*>* KHPPNGBALCD, ::System::Boolean OHACHFGEEMG)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::BPHGNMNLLHF*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HENJKPMGENK_POPGCAEJIDO_OFFSET))(KHPPNGBALCD, OHACHFGEEMG);
	}

	static ::System::Void KBGNHBPEHGI(::System::Collections::Generic::List_1<::System::Int32>* PJFADGPDHKD)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + HENJKPMGENK_KBGNHBPEHGI_OFFSET))(PJFADGPDHKD);
	}

	static ::System::Void GOOKPKJPFGP(::HJDNNLKBHBA* LDAMIFGOOND, ::System::Double LPFMJMABGNH)
	{
		return ((::System::Void(*)(::HJDNNLKBHBA*, ::System::Double))((::PBYTE)hIl2Cpp + HENJKPMGENK_GOOKPKJPFGP_OFFSET))(LDAMIFGOOND, LPFMJMABGNH);
	}

	static ::System::Boolean PGEFEDEFMKA()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HENJKPMGENK_PGEFEDEFMKA_OFFSET))();
	}

	static ::System::Void PCBCIKNGMFC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HENJKPMGENK_PCBCIKNGMFC_OFFSET))();
	}

	::System::Void NPIJFJJOBCA(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + HENJKPMGENK_NPIJFJJOBCA_OFFSET))(this, KECKGDFIALJ);
	}

	static ::System::Void INIBFIPEICI(::MoleMole::Battle::Entity* NNNECOCNIHB, ::MoleMole::Battle::Entity* OOBJDMLCLOO)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HENJKPMGENK_INIBFIPEICI_OFFSET))(NNNECOCNIHB, OOBJDMLCLOO);
	}

	static ::System::Boolean DMOFKFLLIBH(::System::Int32 JCEOJHOJKAC, ::BJKJMCMBFHM_LHKGBOOKBPD EBCGAJOJAKA)
	{
		return ((::System::Boolean(*)(::System::Int32, ::BJKJMCMBFHM_LHKGBOOKBPD))((::PBYTE)hIl2Cpp + HENJKPMGENK_DMOFKFLLIBH_OFFSET))(JCEOJHOJKAC, EBCGAJOJAKA);
	}

	static ::System::Void PAJKGNBPHDK(::UnityEngine::Vector3& ELKCAPBODAL, ::System::Single& GFKEDHLNDFB)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + HENJKPMGENK_PAJKGNBPHDK_OFFSET))(ELKCAPBODAL, GFKEDHLNDFB);
	}

	static ::MoleMole::Battle::Entity* CKKIPJEMBJB(::BPHGNMNLLHF* JGHNEGMOGHC, ::UnityEngine::Vector3 ELKCAPBODAL, ::System::Single DCEOBAPNGIK, ::MoleMole::Battle::Entity* ALDKDGOPDME, ::Foundation::AssetPath NACKAHKHILM, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>* DJKNNEEKHGK)
	{
		return ((::MoleMole::Battle::Entity*(*)(::BPHGNMNLLHF*, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Battle::Entity*, ::Foundation::AssetPath, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>*))((::PBYTE)hIl2Cpp + HENJKPMGENK_CKKIPJEMBJB_OFFSET))(JGHNEGMOGHC, ELKCAPBODAL, DCEOBAPNGIK, ALDKDGOPDME, NACKAHKHILM, DJKNNEEKHGK);
	}

	static ::System::Boolean OBIDDLBKHGA(::System::Boolean JFMKHEHGKEJ)
	{
		return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HENJKPMGENK_OBIDDLBKHGA_OFFSET))(JFMKHEHGKEJ);
	}

	static ::System::Boolean MADLHKFFKBP(::System::Collections::Generic::List_1<::BPHGNMNLLHF*>* KHPPNGBALCD, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* MOGGEOEAKJP)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::BPHGNMNLLHF*>*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + HENJKPMGENK_MADLHKFFKBP_OFFSET))(KHPPNGBALCD, MOGGEOEAKJP);
	}

	::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HENJKPMGENK_HMLGKBFFNHI_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void ICJAPEMNLCF(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + HENJKPMGENK_ICJAPEMNLCF_OFFSET))(this, KECKGDFIALJ);
	}

	static ::System::Void MEFJPACFPDK(::MoleMole::Battle::Entity* JHGPEHNCJID)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HENJKPMGENK_MEFJPACFPDK_OFFSET))(JHGPEHNCJID);
	}

	static ::System::Void JKDLHCCNIFM(::MoleMole::TeamDataItem* DLCBFFILCCD)
	{
		return ((::System::Void(*)(::MoleMole::TeamDataItem*))((::PBYTE)hIl2Cpp + HENJKPMGENK_JKDLHCCNIFM_OFFSET))(DLCBFFILCCD);
	}

	static ::System::Void FMHNBBNAJJM()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HENJKPMGENK_FMHNBBNAJJM_OFFSET))();
	}

	static ::System::Void KAOLPCFBDDB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HENJKPMGENK_KAOLPCFBDDB_OFFSET))();
	}

	::System::Void PKNMHMOCODP(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + HENJKPMGENK_PKNMHMOCODP_OFFSET))(this, MNGHGOLKKNO);
	}

	static ::System::Void IHGHEIBHEJL(::JEMDLBKHBBO* NEKJCHIEDPB)
	{
		return ((::System::Void(*)(::JEMDLBKHBBO*))((::PBYTE)hIl2Cpp + HENJKPMGENK_IHGHEIBHEJL_OFFSET))(NEKJCHIEDPB);
	}

	static ::System::Void JMLFIHLAFMB(::MoleMole::Battle::Entity* IGEFBPNHAOA, ::BPHGNMNLLHF* KOCKPCGKKEO, ::System::Boolean FJFCMNEGJLJ, ::System::Boolean LBNDIBEIDLF, ::System::Boolean AAANPAKDAHM, ::System::Boolean GFJLEACNOGN)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::BPHGNMNLLHF*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HENJKPMGENK_JMLFIHLAFMB_OFFSET))(IGEFBPNHAOA, KOCKPCGKKEO, FJFCMNEGJLJ, LBNDIBEIDLF, AAANPAKDAHM, GFJLEACNOGN);
	}

	static ::System::Double GMNHBJNGPMD(::HJDNNLKBHBA* ENAFDIEPOMO)
	{
		return ((::System::Double(*)(::HJDNNLKBHBA*))((::PBYTE)hIl2Cpp + HENJKPMGENK_GMNHBJNGPMD_OFFSET))(ENAFDIEPOMO);
	}

	static ::MoleMole::Battle::Entity* JPKKDHFGLNO(::System::UInt32 LEHABHCOMGH)
	{
		return ((::MoleMole::Battle::Entity*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HENJKPMGENK_JPKKDHFGLNO_OFFSET))(LEHABHCOMGH);
	}

	static ::System::Void OADIEOHGPFC(::MoleMole::Battle::Entity* CPDGMMPJGEA)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HENJKPMGENK_OADIEOHGPFC_OFFSET))(CPDGMMPJGEA);
	}

	::System::Void KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HENJKPMGENK_KOLPCLEMHGJ_OFFSET))(this, FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Double AAMKPKFPELG(::HJDNNLKBHBA* ENAFDIEPOMO)
	{
		return ((::System::Double(*)(::HJDNNLKBHBA*))((::PBYTE)hIl2Cpp + HENJKPMGENK_AAMKPKFPELG_OFFSET))(ENAFDIEPOMO);
	}

	static ::System::Void EKLJNGFDPBL(::BPHGNMNLLHF* JGHNEGMOGHC, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*>* HNFFDIILFDM)
	{
		return ((::System::Void(*)(::BPHGNMNLLHF*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*>*))((::PBYTE)hIl2Cpp + HENJKPMGENK_EKLJNGFDPBL_OFFSET))(JGHNEGMOGHC, HNFFDIILFDM);
	}

	static ::System::Double NBFOLJHBJPH(::HJDNNLKBHBA* ENAFDIEPOMO)
	{
		return ((::System::Double(*)(::HJDNNLKBHBA*))((::PBYTE)hIl2Cpp + HENJKPMGENK_NBFOLJHBJPH_OFFSET))(ENAFDIEPOMO);
	}

	static ::System::Void EFGOADGCJMA(::MoleMole::Battle::Entity* CPDGMMPJGEA, ::System::Boolean AFKHMEJPNIG)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + HENJKPMGENK_EFGOADGCJMA_OFFSET))(CPDGMMPJGEA, AFKHMEJPNIG);
	}

	static ::System::Void IMGPONNMOJA(::BPHGNMNLLHF* KOCKPCGKKEO, ::System::Int32 HKHHHJHCGKL, ::Foundation::AssetPath NACKAHKHILM, ::System::Boolean LBNDIBEIDLF, ::System::Boolean GFJLEACNOGN, ::System::Boolean OLLAGHFOKBC, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>* DJKNNEEKHGK)
	{
		return ((::System::Void(*)(::BPHGNMNLLHF*, ::System::Int32, ::Foundation::AssetPath, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>*))((::PBYTE)hIl2Cpp + HENJKPMGENK_IMGPONNMOJA_OFFSET))(KOCKPCGKKEO, HKHHHJHCGKL, NACKAHKHILM, LBNDIBEIDLF, GFJLEACNOGN, OLLAGHFOKBC, DJKNNEEKHGK);
	}

	static ::MoleMole::Battle::Entity* EKPPEMHPJPO(::BPHGNMNLLHF* JGHNEGMOGHC, ::UnityEngine::Vector3 ELKCAPBODAL, ::System::Single DCEOBAPNGIK, ::MoleMole::Battle::Entity* ALDKDGOPDME)
	{
		return ((::MoleMole::Battle::Entity*(*)(::BPHGNMNLLHF*, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HENJKPMGENK_EKPPEMHPJPO_OFFSET))(JGHNEGMOGHC, ELKCAPBODAL, DCEOBAPNGIK, ALDKDGOPDME);
	}

	static ::System::Void GIAJGDDFLGC(::HJDNNLKBHBA* LDAMIFGOOND, ::System::Double LPFMJMABGNH)
	{
		return ((::System::Void(*)(::HJDNNLKBHBA*, ::System::Double))((::PBYTE)hIl2Cpp + HENJKPMGENK_GIAJGDDFLGC_OFFSET))(LDAMIFGOOND, LPFMJMABGNH);
	}

	static ::System::Void ELGGLONKNDK(::BPHGNMNLLHF* JGHNEGMOGHC)
	{
		return ((::System::Void(*)(::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + HENJKPMGENK_ELGGLONKNDK_OFFSET))(JGHNEGMOGHC);
	}

	static ::System::Void LIBFJBNBCGG(::HJDNNLKBHBA* IGIPNIBOOLI, ::HJDNNLKBHBA* LDAMIFGOOND, ::MoleMole::Config::BaseProperty JHFKODOOENA)
	{
		return ((::System::Void(*)(::HJDNNLKBHBA*, ::HJDNNLKBHBA*, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + HENJKPMGENK_LIBFJBNBCGG_OFFSET))(IGIPNIBOOLI, LDAMIFGOOND, JHFKODOOENA);
	}

	static ::System::Void IKBOBCKGJHG(::HJDNNLKBHBA* IGIPNIBOOLI, ::HJDNNLKBHBA* LDAMIFGOOND)
	{
		return ((::System::Void(*)(::HJDNNLKBHBA*, ::HJDNNLKBHBA*))((::PBYTE)hIl2Cpp + HENJKPMGENK_IKBOBCKGJHG_OFFSET))(IGIPNIBOOLI, LDAMIFGOOND);
	}

	static ::System::Void FFMKCNAKBKA(::BPHGNMNLLHF* KOCKPCGKKEO, ::System::Int32 HKHHHJHCGKL, ::System::Boolean LBNDIBEIDLF, ::System::Boolean AAANPAKDAHM, ::System::Boolean GFJLEACNOGN)
	{
		return ((::System::Void(*)(::BPHGNMNLLHF*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HENJKPMGENK_FFMKCNAKBKA_OFFSET))(KOCKPCGKKEO, HKHHHJHCGKL, LBNDIBEIDLF, AAANPAKDAHM, GFJLEACNOGN);
	}

	static ::System::Void ENMEFHDAKDI(::UnityEngine::Vector3 ELKCAPBODAL, ::UnityEngine::Vector3 CLLOEMLEMOI)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HENJKPMGENK_ENMEFHDAKDI_OFFSET))(ELKCAPBODAL, CLLOEMLEMOI);
	}

	static ::System::Void DKOCGNGKFNH(::UnityEngine::Vector3 BEAFLDMGDDN, ::UnityEngine::Vector3 ABFOKLFIEDJ)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HENJKPMGENK_DKOCGNGKFNH_OFFSET))(BEAFLDMGDDN, ABFOKLFIEDJ);
	}

	static ::System::Void IICFNBHHIIN(::System::Collections::Generic::List_1<::BPHGNMNLLHF*>* KHPPNGBALCD, ::System::Collections::Generic::List_1<::COJMBEOAKMD*>* LENDCJIHGOH, ::OHCFLICGFEF IAHPJLAHLBG, ::System::Action* KMHAPMLAIDN, ::System::Action* BNPMCHMJHDP, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*>* HNFFDIILFDM)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::BPHGNMNLLHF*>*, ::System::Collections::Generic::List_1<::COJMBEOAKMD*>*, ::OHCFLICGFEF, ::System::Action*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*>*))((::PBYTE)hIl2Cpp + HENJKPMGENK_IICFNBHHIIN_OFFSET))(KHPPNGBALCD, LENDCJIHGOH, IAHPJLAHLBG, KMHAPMLAIDN, BNPMCHMJHDP, HNFFDIILFDM);
	}

	static ::System::Boolean GBFHKDCOCEK(::MoleMole::Battle::Entity* IGEFBPNHAOA)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HENJKPMGENK_GBFHKDCOCEK_OFFSET))(IGEFBPNHAOA);
	}

	static ::System::Void FFMJPPDEAOP(::MoleMole::Battle::Entity* ENKLCANAMCJ, ::MoleMole::Battle::Entity* HHKNFDGPDIB, ::System::Boolean AIPHDKLHLEB, ::BJKJMCMBFHM_LHKGBOOKBPD EBCGAJOJAKA)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::BJKJMCMBFHM_LHKGBOOKBPD))((::PBYTE)hIl2Cpp + HENJKPMGENK_FFMJPPDEAOP_OFFSET))(ENKLCANAMCJ, HHKNFDGPDIB, AIPHDKLHLEB, EBCGAJOJAKA);
	}

	static ::System::Void BDPLOFPMNNC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HENJKPMGENK_BDPLOFPMNNC_OFFSET))();
	}

	static ::System::Void ENMEFHDAKDI_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HENJKPMGENK_ENMEFHDAKDI_1_OFFSET))();
	}

	static ::System::Boolean NNPMIKJPHMN(::System::Collections::Generic::List_1<::BPHGNMNLLHF*>* KHPPNGBALCD, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* MOGGEOEAKJP)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::BPHGNMNLLHF*>*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + HENJKPMGENK_NNPMIKJPHMN_OFFSET))(KHPPNGBALCD, MOGGEOEAKJP);
	}

	static ::System::Void MMLOAOFNFII(::BPHGNMNLLHF* KOCKPCGKKEO, ::System::Int32 KFNKNMFOGDB, ::System::Boolean FJFCMNEGJLJ, ::System::Boolean LBNDIBEIDLF, ::System::Boolean AAANPAKDAHM, ::System::Boolean GFJLEACNOGN)
	{
		return ((::System::Void(*)(::BPHGNMNLLHF*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HENJKPMGENK_MMLOAOFNFII_OFFSET))(KOCKPCGKKEO, KFNKNMFOGDB, FJFCMNEGJLJ, LBNDIBEIDLF, AAANPAKDAHM, GFJLEACNOGN);
	}

	static ::System::Boolean GOGDJJIAPNM(::System::Collections::Generic::List_1<::BPHGNMNLLHF*>* KHPPNGBALCD, ::System::Collections::Generic::List_1<::System::Int32>* DDELCLKIFPM, ::System::Boolean DBLKLOILIHD)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::BPHGNMNLLHF*>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HENJKPMGENK_GOGDJJIAPNM_OFFSET))(KHPPNGBALCD, DDELCLKIFPM, DBLKLOILIHD);
	}

	static ::System::Void DOJPIONIMON()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HENJKPMGENK_DOJPIONIMON_OFFSET))();
	}

	static ::System::Boolean IHEFAMDAPJK()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HENJKPMGENK_IHEFAMDAPJK_OFFSET))();
	}

	static ::System::Void FGOMGEIFNFN(::HJDNNLKBHBA* LDAMIFGOOND, ::System::Double LPFMJMABGNH)
	{
		return ((::System::Void(*)(::HJDNNLKBHBA*, ::System::Double))((::PBYTE)hIl2Cpp + HENJKPMGENK_FGOMGEIFNFN_OFFSET))(LDAMIFGOOND, LPFMJMABGNH);
	}

	static ::System::Void GNEFLCDBBPI()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HENJKPMGENK_GNEFLCDBBPI_OFFSET))();
	}

	static ::System::Void ONIGJPOJPJM(::HJDNNLKBHBA* LDAMIFGOOND, ::System::Double LPFMJMABGNH)
	{
		return ((::System::Void(*)(::HJDNNLKBHBA*, ::System::Double))((::PBYTE)hIl2Cpp + HENJKPMGENK_ONIGJPOJPJM_OFFSET))(LDAMIFGOOND, LPFMJMABGNH);
	}

	static ::System::Void NOIEKDGMKIC(::HJDNNLKBHBA* IGIPNIBOOLI, ::HJDNNLKBHBA* LDAMIFGOOND)
	{
		return ((::System::Void(*)(::HJDNNLKBHBA*, ::HJDNNLKBHBA*))((::PBYTE)hIl2Cpp + HENJKPMGENK_NOIEKDGMKIC_OFFSET))(IGIPNIBOOLI, LDAMIFGOOND);
	}

	static ::System::Boolean EOLANKNKGCM(::System::Collections::Generic::List_1<::System::Int32>* DDELCLKIFPM)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + HENJKPMGENK_EOLANKNKGCM_OFFSET))(DDELCLKIFPM);
	}

	static ::System::Boolean HDGOKPNMMFF(::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + HENJKPMGENK_HDGOKPNMMFF_OFFSET))(FFNKDGGHBPP);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + HENJKPMGENK_APAGIJMHEAK_OFFSET))(this, MNGHGOLKKNO);
	}

	static ::System::Void KBKKACBLEEH()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HENJKPMGENK_KBKKACBLEEH_OFFSET))();
	}

	static ::System::Void KALHJNLCHEK(::System::Boolean GFJLEACNOGN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HENJKPMGENK_KALHJNLCHEK_OFFSET))(GFJLEACNOGN);
	}

	static ::System::Void MCHOPBDMFMK(::HJDNNLKBHBA* IGIPNIBOOLI, ::HJDNNLKBHBA* LDAMIFGOOND)
	{
		return ((::System::Void(*)(::HJDNNLKBHBA*, ::HJDNNLKBHBA*))((::PBYTE)hIl2Cpp + HENJKPMGENK_MCHOPBDMFMK_OFFSET))(IGIPNIBOOLI, LDAMIFGOOND);
	}

	static ::System::Double LELMDGLBNCP(::HJDNNLKBHBA* ENAFDIEPOMO)
	{
		return ((::System::Double(*)(::HJDNNLKBHBA*))((::PBYTE)hIl2Cpp + HENJKPMGENK_LELMDGLBNCP_OFFSET))(ENAFDIEPOMO);
	}

	static ::System::Void JALLFCDIOIN(::OHCFLICGFEF HNOPAJLDCFB)
	{
		return ((::System::Void(*)(::OHCFLICGFEF))((::PBYTE)hIl2Cpp + HENJKPMGENK_JALLFCDIOIN_OFFSET))(HNOPAJLDCFB);
	}

	static ::MoleMole::Battle::Entity* BIKALKPEOLN(::MoleMole::Battle::Entity* HHKNFDGPDIB, ::MoleMole::Battle::Entity* ENKLCANAMCJ)
	{
		return ((::MoleMole::Battle::Entity*(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HENJKPMGENK_BIKALKPEOLN_OFFSET))(HHKNFDGPDIB, ENKLCANAMCJ);
	}

	static ::System::Void EDPEBLMIFGE(::HJDNNLKBHBA* IGIPNIBOOLI, ::HJDNNLKBHBA* LDAMIFGOOND)
	{
		return ((::System::Void(*)(::HJDNNLKBHBA*, ::HJDNNLKBHBA*))((::PBYTE)hIl2Cpp + HENJKPMGENK_EDPEBLMIFGE_OFFSET))(IGIPNIBOOLI, LDAMIFGOOND);
	}
};
