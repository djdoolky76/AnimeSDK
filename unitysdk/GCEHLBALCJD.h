#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/MonsterStrengthType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EAvatarCameraShotType.h"
#include "unitysdk/OAOOLPCNHKA.h"

class DACHIABDACO;
class ENGKPGFGGLM;
class OIHDNHFKHAM;
class PEIPCHALOLP;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }

#define GCEHLBALCJD_AHDLBAAJCCC_OFFSET UNITYSDK_OFFSET(0x1412F800)
#define GCEHLBALCJD_AJMACOMOAML_OFFSET UNITYSDK_OFFSET(0x1412AB10)
#define GCEHLBALCJD_AMKDFPHPHKC_OFFSET UNITYSDK_OFFSET(0x1412E3C0)
#define GCEHLBALCJD_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x1412ED70)
#define GCEHLBALCJD_BJFGDFBDEOP_OFFSET UNITYSDK_OFFSET(0x141305B0)
#define GCEHLBALCJD_BKNHMBGJEOI_OFFSET UNITYSDK_OFFSET(0x1412AB90)
#define GCEHLBALCJD_BMFIFOGBABJ_OFFSET UNITYSDK_OFFSET(0x1412BF60)
#define GCEHLBALCJD_BMNLGBAABJF_OFFSET UNITYSDK_OFFSET(0x14128C20)
#define GCEHLBALCJD_BNBADHOJKNK_OFFSET UNITYSDK_OFFSET(0x14128B90)
#define GCEHLBALCJD_CDFNJLHPCCA_OFFSET UNITYSDK_OFFSET(0x1412F890)
#define GCEHLBALCJD_CIAODDKKHMH_OFFSET UNITYSDK_OFFSET(0x14130300)
#define GCEHLBALCJD_CKPPNDNCNIC_OFFSET UNITYSDK_OFFSET(0x14129EF0)
#define GCEHLBALCJD_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x14130E80)
#define GCEHLBALCJD_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x141279E0)
#define GCEHLBALCJD_DIEIGAICEOO_OFFSET UNITYSDK_OFFSET(0x14129380)
#define GCEHLBALCJD_DJLIFMFGIDM_OFFSET UNITYSDK_OFFSET(0x14129A50)
#define GCEHLBALCJD_EOOOJCIAJOJ_OFFSET UNITYSDK_OFFSET(0x141291C0)
#define GCEHLBALCJD_FANFDACGDKC_OFFSET UNITYSDK_OFFSET(0x14128EE0)
#define GCEHLBALCJD_FHMKIEEPEBP_OFFSET UNITYSDK_OFFSET(0x14129AE0)
#define GCEHLBALCJD_FNFBDLPGFLO_OFFSET UNITYSDK_OFFSET(0x14129530)
#define GCEHLBALCJD_GBEMJDJILKB_OFFSET UNITYSDK_OFFSET(0x1412E540)
#define GCEHLBALCJD_GIANBCNCMKC_OFFSET UNITYSDK_OFFSET(0x1412FCB0)
#define GCEHLBALCJD_HHLHGMLINPG_OFFSET UNITYSDK_OFFSET(0x1412A4D0)
#define GCEHLBALCJD_IBLFKDFCMLI_OFFSET UNITYSDK_OFFSET(0x1412FD10)
#define GCEHLBALCJD_IDHJBKDCGDO_OFFSET UNITYSDK_OFFSET(0x1412C6E0)
#define GCEHLBALCJD_IFIIGDKJLIH_OFFSET UNITYSDK_OFFSET(0x1412C560)
#define GCEHLBALCJD_IPBEDCFEMDK_OFFSET UNITYSDK_OFFSET(0x1412FB50)
#define GCEHLBALCJD_JBGMMMOEINK_OFFSET UNITYSDK_OFFSET(0x1412F040)
#define GCEHLBALCJD_JGBDCOMGDHN_OFFSET UNITYSDK_OFFSET(0x1412EBA0)
#define GCEHLBALCJD_KILIOLAGJNA_OFFSET UNITYSDK_OFFSET(0x141282E0)
#define GCEHLBALCJD_KIMAGBOBKDL_OFFSET UNITYSDK_OFFSET(0x1412E7F0)
#define GCEHLBALCJD_KIOPHHBGDFD_OFFSET UNITYSDK_OFFSET(0x1412CD70)
#define GCEHLBALCJD_KIPINDNCJGL_OFFSET UNITYSDK_OFFSET(0x1412A300)
#define GCEHLBALCJD_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0x1412B090)
#define GCEHLBALCJD_LKFOADEBJKA_OFFSET UNITYSDK_OFFSET(0x1412F9F0)
#define GCEHLBALCJD_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x1412F770)
#define GCEHLBALCJD_NMOENKIBKHM_OFFSET UNITYSDK_OFFSET(0x14130F10)
#define GCEHLBALCJD_OACMGCOLCCK_OFFSET UNITYSDK_OFFSET(0x14128700)
#define GCEHLBALCJD_OIFMPLCBAKL_OFFSET UNITYSDK_OFFSET(0x14130790)
#define GCEHLBALCJD_PJJJOJIDPDB_OFFSET UNITYSDK_OFFSET(0x14130500)
#define GCEHLBALCJD_PKODEGOGBHI_OFFSET UNITYSDK_OFFSET(0x14128790)
#define GCEHLBALCJD_PLFOCEIDIBP_OFFSET UNITYSDK_OFFSET(0x14129990)
#define GCEHLBALCJD_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x14127FB0)
#define GCEHLBALCJD_UPDATE_OFFSET UNITYSDK_OFFSET(0x14128120)
#define GCEHLBALCJD__CTOR_OFFSET UNITYSDK_OFFSET(0x14128290)

inline static constexpr unsigned int GCEHLBALCJD_TypeDefinitionIndex = 80316;

class GCEHLBALCJD : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* BKGCDAOIGBH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEHLBALCJD__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + GCEHLBALCJD_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void PostLateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEHLBALCJD_POSTLATEUPDATE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEHLBALCJD_UPDATE_OFFSET))(this);
	}

	static ::System::Void KILIOLAGJNA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCEHLBALCJD_KILIOLAGJNA_OFFSET))();
	}

	static ::System::Void OACMGCOLCCK(::System::UInt32 IMGBAKKLEMJ, ::MoleMole::Config::BaseProperty ECAJMFPANNE, ::System::String* ABIEPJBODMH, ::System::Double KGGJCGPMAIH, ::System::Double BPEGDPLGFPO)
	{
		return ((::System::Void(*)(::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + GCEHLBALCJD_OACMGCOLCCK_OFFSET))(IMGBAKKLEMJ, ECAJMFPANNE, ABIEPJBODMH, KGGJCGPMAIH, BPEGDPLGFPO);
	}

	static ::System::Void BNBADHOJKNK(::System::UInt32 IMGBAKKLEMJ, ::MoleMole::Config::BaseProperty ECAJMFPANNE, ::System::String* ABIEPJBODMH, ::System::Double KGGJCGPMAIH, ::System::Double BPEGDPLGFPO)
	{
		return ((::System::Void(*)(::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + GCEHLBALCJD_BNBADHOJKNK_OFFSET))(IMGBAKKLEMJ, ECAJMFPANNE, ABIEPJBODMH, KGGJCGPMAIH, BPEGDPLGFPO);
	}

	static ::System::Void BMNLGBAABJF(::System::Boolean KKKNEGAOJDG, ::MoleMole::Battle::Entity* DBIOAKNMBDM)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GCEHLBALCJD_BMNLGBAABJF_OFFSET))(KKKNEGAOJDG, DBIOAKNMBDM);
	}

	static ::System::Void FANFDACGDKC(::PEIPCHALOLP* BLCBDDBPGHM, ::MoleMole::Battle::Entity* DBIOAKNMBDM)
	{
		return ((::System::Void(*)(::PEIPCHALOLP*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GCEHLBALCJD_FANFDACGDKC_OFFSET))(BLCBDDBPGHM, DBIOAKNMBDM);
	}

	static ::System::Void EOOOJCIAJOJ()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCEHLBALCJD_EOOOJCIAJOJ_OFFSET))();
	}

	static ::System::Void FNFBDLPGFLO(::System::Boolean NPPMJEIPMFC)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GCEHLBALCJD_FNFBDLPGFLO_OFFSET))(NPPMJEIPMFC);
	}

	static ::System::Void DJLIFMFGIDM(::System::UInt32 IMGBAKKLEMJ, ::MoleMole::Config::BaseProperty ECAJMFPANNE, ::System::String* ABIEPJBODMH, ::System::Double KGGJCGPMAIH, ::System::Double BPEGDPLGFPO)
	{
		return ((::System::Void(*)(::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + GCEHLBALCJD_DJLIFMFGIDM_OFFSET))(IMGBAKKLEMJ, ECAJMFPANNE, ABIEPJBODMH, KGGJCGPMAIH, BPEGDPLGFPO);
	}

	static ::System::Void PKODEGOGBHI(::System::Boolean NPPMJEIPMFC)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GCEHLBALCJD_PKODEGOGBHI_OFFSET))(NPPMJEIPMFC);
	}

	static ::System::Void KIPINDNCJGL(::System::Boolean CGEMLHFPINP)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GCEHLBALCJD_KIPINDNCJGL_OFFSET))(CGEMLHFPINP);
	}

	static ::System::Void HHLHGMLINPG(::MoleMole::Battle::Entity* DBIOAKNMBDM, ::MoleMole::Battle::Entity* DJHFOGHIFEJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GCEHLBALCJD_HHLHGMLINPG_OFFSET))(DBIOAKNMBDM, DJHFOGHIFEJ);
	}

	static ::System::Void BKNHMBGJEOI(::System::UInt32 IMGBAKKLEMJ, ::MoleMole::Config::BaseProperty ECAJMFPANNE, ::System::String* ABIEPJBODMH, ::System::Double KGGJCGPMAIH, ::System::Double BPEGDPLGFPO)
	{
		return ((::System::Void(*)(::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + GCEHLBALCJD_BKNHMBGJEOI_OFFSET))(IMGBAKKLEMJ, ECAJMFPANNE, ABIEPJBODMH, KGGJCGPMAIH, BPEGDPLGFPO);
	}

	static ::System::Void FHMKIEEPEBP(::System::Boolean NPPMJEIPMFC)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GCEHLBALCJD_FHMKIEEPEBP_OFFSET))(NPPMJEIPMFC);
	}

	static ::System::Void KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* DBIOAKNMBDM)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GCEHLBALCJD_KOLPCLEMHGJ_OFFSET))(FFNKDGGHBPP, DBIOAKNMBDM);
	}

	static ::System::Void AJMACOMOAML(::DACHIABDACO* CFGEFGHBEBM, ::MoleMole::Config::MonsterStrengthType KPOMCFMHBBC)
	{
		return ((::System::Void(*)(::DACHIABDACO*, ::MoleMole::Config::MonsterStrengthType))((::PBYTE)hIl2Cpp + GCEHLBALCJD_AJMACOMOAML_OFFSET))(CFGEFGHBEBM, KPOMCFMHBBC);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + GCEHLBALCJD_APAGIJMHEAK_OFFSET))(this, MNGHGOLKKNO);
	}

	static ::System::Void IDHJBKDCGDO(::MoleMole::Battle::Entity* DJHFOGHIFEJ, ::DACHIABDACO* CFGEFGHBEBM)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::DACHIABDACO*))((::PBYTE)hIl2Cpp + GCEHLBALCJD_IDHJBKDCGDO_OFFSET))(DJHFOGHIFEJ, CFGEFGHBEBM);
	}

	static ::System::Void JBGMMMOEINK(::DACHIABDACO* CFGEFGHBEBM)
	{
		return ((::System::Void(*)(::DACHIABDACO*))((::PBYTE)hIl2Cpp + GCEHLBALCJD_JBGMMMOEINK_OFFSET))(CFGEFGHBEBM);
	}

	static ::System::Void CKPPNDNCNIC(::System::Boolean NPPMJEIPMFC)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GCEHLBALCJD_CKPPNDNCNIC_OFFSET))(NPPMJEIPMFC);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + GCEHLBALCJD_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void GBEMJDJILKB(::DACHIABDACO* CFGEFGHBEBM, ::MoleMole::Battle::Entity* ALDJFBBHMAJ)
	{
		return ((::System::Void(*)(::DACHIABDACO*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GCEHLBALCJD_GBEMJDJILKB_OFFSET))(CFGEFGHBEBM, ALDJFBBHMAJ);
	}

	static ::System::Void BMFIFOGBABJ(::OIHDNHFKHAM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* DBIOAKNMBDM)
	{
		return ((::System::Void(*)(::OIHDNHFKHAM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GCEHLBALCJD_BMFIFOGBABJ_OFFSET))(FFNKDGGHBPP, DBIOAKNMBDM);
	}

	::System::Void AHDLBAAJCCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEHLBALCJD_AHDLBAAJCCC_OFFSET))(this);
	}

	static ::System::Single PLFOCEIDIBP(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Single(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GCEHLBALCJD_PLFOCEIDIBP_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Single IPBEDCFEMDK(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Single(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GCEHLBALCJD_IPBEDCFEMDK_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Single LKFOADEBJKA(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Single(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GCEHLBALCJD_LKFOADEBJKA_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void GIANBCNCMKC(::System::Boolean EHMMPKDNMBD)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GCEHLBALCJD_GIANBCNCMKC_OFFSET))(EHMMPKDNMBD);
	}

	static ::System::Single IBLFKDFCMLI(::DACHIABDACO* CFGEFGHBEBM)
	{
		return ((::System::Single(*)(::DACHIABDACO*))((::PBYTE)hIl2Cpp + GCEHLBALCJD_IBLFKDFCMLI_OFFSET))(CFGEFGHBEBM);
	}

	static ::System::Void CIAODDKKHMH(::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType INPLCAIIEIK)
	{
		return ((::System::Void(*)(::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType))((::PBYTE)hIl2Cpp + GCEHLBALCJD_CIAODDKKHMH_OFFSET))(INPLCAIIEIK);
	}

	static ::System::Void PJJJOJIDPDB(::System::UInt32 IMGBAKKLEMJ, ::MoleMole::Config::BaseProperty ECAJMFPANNE, ::System::String* ABIEPJBODMH, ::System::Double KGGJCGPMAIH, ::System::Double BPEGDPLGFPO)
	{
		return ((::System::Void(*)(::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + GCEHLBALCJD_PJJJOJIDPDB_OFFSET))(IMGBAKKLEMJ, ECAJMFPANNE, ABIEPJBODMH, KGGJCGPMAIH, BPEGDPLGFPO);
	}

	static ::System::Single CDFNJLHPCCA(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Single(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GCEHLBALCJD_CDFNJLHPCCA_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void DIEIGAICEOO(::DACHIABDACO* CFGEFGHBEBM)
	{
		return ((::System::Void(*)(::DACHIABDACO*))((::PBYTE)hIl2Cpp + GCEHLBALCJD_DIEIGAICEOO_OFFSET))(CFGEFGHBEBM);
	}

	static ::System::Void AMKDFPHPHKC(::DACHIABDACO* CFGEFGHBEBM)
	{
		return ((::System::Void(*)(::DACHIABDACO*))((::PBYTE)hIl2Cpp + GCEHLBALCJD_AMKDFPHPHKC_OFFSET))(CFGEFGHBEBM);
	}

	static ::System::Void IFIIGDKJLIH(::DACHIABDACO* CFGEFGHBEBM)
	{
		return ((::System::Void(*)(::DACHIABDACO*))((::PBYTE)hIl2Cpp + GCEHLBALCJD_IFIIGDKJLIH_OFFSET))(CFGEFGHBEBM);
	}

	static ::System::Void KIOPHHBGDFD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCEHLBALCJD_KIOPHHBGDFD_OFFSET))();
	}

	static ::System::Void BJFGDFBDEOP(::System::Boolean GIAEPMKCBIB)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GCEHLBALCJD_BJFGDFBDEOP_OFFSET))(GIAEPMKCBIB);
	}

	static ::System::Void KIMAGBOBKDL()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCEHLBALCJD_KIMAGBOBKDL_OFFSET))();
	}

	static ::System::Void OIFMPLCBAKL(::DACHIABDACO* CFGEFGHBEBM, ::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::DACHIABDACO*, ::System::Single))((::PBYTE)hIl2Cpp + GCEHLBALCJD_OIFMPLCBAKL_OFFSET))(CFGEFGHBEBM, PBCAAADNEPK);
	}

	static ::System::Void JGBDCOMGDHN(::MoleMole::Battle::Entity* DBIOAKNMBDM, ::System::UInt32 NJNCGJLHLKC, ::System::Boolean HPINBCPMHJE)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + GCEHLBALCJD_JGBDCOMGDHN_OFFSET))(DBIOAKNMBDM, NJNCGJLHLKC, HPINBCPMHJE);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEHLBALCJD_CMFOMGGDPPA_OFFSET))(this);
	}

	static ::System::Void NMOENKIBKHM(::DACHIABDACO* CFGEFGHBEBM, ::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::DACHIABDACO*, ::System::Single))((::PBYTE)hIl2Cpp + GCEHLBALCJD_NMOENKIBKHM_OFFSET))(CFGEFGHBEBM, PBCAAADNEPK);
	}
};
