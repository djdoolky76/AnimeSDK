#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KLHKFADHHGL.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/MVector3.h"
class KAOOFGPIBGF;
class MFIIIBCBPPK;
class MJNGFEGNCOA;
class OAEMFJJJMBM;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KAOOFGPIBGF_ACAGCCEGDKF_OFFSET UNITYSDK_OFFSET(0xB2DF4F0)
#define KAOOFGPIBGF_AOAFBAAFBEE_OFFSET UNITYSDK_OFFSET(0xB2E01D0)
#define KAOOFGPIBGF_BNGAMNBNDKF_OFFSET UNITYSDK_OFFSET(0xB2DF680)
#define KAOOFGPIBGF_CFMPPHAMNLB_OFFSET UNITYSDK_OFFSET(0xB2E2300)
#define KAOOFGPIBGF_CGGPMFFMAIN_OFFSET UNITYSDK_OFFSET(0xB2E03B0)
#define KAOOFGPIBGF_CLHKAEIJFOI_OFFSET UNITYSDK_OFFSET(0xB2E04E0)
#define KAOOFGPIBGF_CTOR_OFFSET UNITYSDK_OFFSET(0xB2E3B80)
#define KAOOFGPIBGF_DAFHOJJKMED_OFFSET UNITYSDK_OFFSET(0xB2E0A60)
#define KAOOFGPIBGF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2E0670)
#define KAOOFGPIBGF_DKMLCPLNCBG_OFFSET UNITYSDK_OFFSET(0xB2E3940)
#define KAOOFGPIBGF_DMJBIDGGIAK_OFFSET UNITYSDK_OFFSET(0xB2DF240)
#define KAOOFGPIBGF_ECIINANDEEN_OFFSET UNITYSDK_OFFSET(0xB2E3580)
#define KAOOFGPIBGF_EPKDOHAMGPP_OFFSET UNITYSDK_OFFSET(0xB2E0470)
#define KAOOFGPIBGF_FDOODMMCOEL_OFFSET UNITYSDK_OFFSET(0xB2E1740)
#define KAOOFGPIBGF_FNEFGJJHAOO_OFFSET UNITYSDK_OFFSET(0xB2E3730)
#define KAOOFGPIBGF_GBLPPKKJNMM_OFFSET UNITYSDK_OFFSET(0xB2DF1F0)
#define KAOOFGPIBGF_GCGFGGKDIIA_OFFSET UNITYSDK_OFFSET(0xB2E1200)
#define KAOOFGPIBGF_GET_PAUSETRANSFORMSYNC_OFFSET UNITYSDK_OFFSET(0xB2E0500)
#define KAOOFGPIBGF_GHEOGJMDBNA_OFFSET UNITYSDK_OFFSET(0xB2E1260)
#define KAOOFGPIBGF_GLGBOCCFEGC_OFFSET UNITYSDK_OFFSET(0xB2E0E00)
#define KAOOFGPIBGF_GMAHMHIDDJI_OFFSET UNITYSDK_OFFSET(0xB2E3910)
#define KAOOFGPIBGF_IHFMEMLEPLN_OFFSET UNITYSDK_OFFSET(0xB2DFDD0)
#define KAOOFGPIBGF_ILHMIIBGBCB_OFFSET UNITYSDK_OFFSET(0xB2E1C90)
#define KAOOFGPIBGF_JHAMKCDOLAM_OFFSET UNITYSDK_OFFSET(0xB2DFFB0)
#define KAOOFGPIBGF_KAAMMAJDBMA_OFFSET UNITYSDK_OFFSET(0xB2E3160)
#define KAOOFGPIBGF_KACAINDGKPI_OFFSET UNITYSDK_OFFSET(0xB2E0B10)
#define KAOOFGPIBGF_KCKGCEBBCIE_OFFSET UNITYSDK_OFFSET(0xB2E26E0)
#define KAOOFGPIBGF_LAGKMHIDDPN_OFFSET UNITYSDK_OFFSET(0xB2E1DB0)
#define KAOOFGPIBGF_LHEKLCOAFHH_OFFSET UNITYSDK_OFFSET(0xB2DF140)
#define KAOOFGPIBGF_LKPHDEGLFPN_OFFSET UNITYSDK_OFFSET(0xB2E2FC0)
#define KAOOFGPIBGF_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xB2E0570)
#define KAOOFGPIBGF_MHACAAPDICN_OFFSET UNITYSDK_OFFSET(0xB2E3A40)
#define KAOOFGPIBGF_MHHDBKELGIO_OFFSET UNITYSDK_OFFSET(0xB2E38F0)
#define KAOOFGPIBGF_MKLDAABJCNF_OFFSET UNITYSDK_OFFSET(0xB2E3990)
#define KAOOFGPIBGF_MNKHFNFNGIE_OFFSET UNITYSDK_OFFSET(0xB2E39F0)
#define KAOOFGPIBGF_MOPJLKIHIHP_OFFSET UNITYSDK_OFFSET(0xB2E04D0)
#define KAOOFGPIBGF_NCDKIAKAIFM_OFFSET UNITYSDK_OFFSET(0xB2E0950)
#define KAOOFGPIBGF_NIADLLAGPOA_OFFSET UNITYSDK_OFFSET(0xB2E3B70)
#define KAOOFGPIBGF_NNCBMAJEMOD_OFFSET UNITYSDK_OFFSET(0xB2E0770)
#define KAOOFGPIBGF_NOIABEOCOAH_OFFSET UNITYSDK_OFFSET(0xB2E39E0)
#define KAOOFGPIBGF_OICFEDNNLKM_OFFSET UNITYSDK_OFFSET(0xB2E04F0)
#define KAOOFGPIBGF_OIMJBNHKKIC_OFFSET UNITYSDK_OFFSET(0xB2E3090)
#define KAOOFGPIBGF_OIOONMMALLI_OFFSET UNITYSDK_OFFSET(0xB2E3930)
#define KAOOFGPIBGF_OKKEOBGHMDI_OFFSET UNITYSDK_OFFSET(0xB2DF4B0)
#define KAOOFGPIBGF_ONKMNHIMLMH_OFFSET UNITYSDK_OFFSET(0xB2DF9F0)
#define KAOOFGPIBGF_OOHLKADAOEC_OFFSET UNITYSDK_OFFSET(0xB2DF850)
#define KAOOFGPIBGF_PAFCMAMJENB_OFFSET UNITYSDK_OFFSET(0xB2E14B0)
#define KAOOFGPIBGF_SET_PAUSETRANSFORMSYNC_OFFSET UNITYSDK_OFFSET(0xB2E0510)
#define KAOOFGPIBGF__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xB2E0520)

inline static constexpr unsigned int KAOOFGPIBGF_TypeDefinitionIndex = 54048;

	class KAOOFGPIBGF : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Action_2<::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3>* HPNACLGCGPB; // 0x18
		::OAEMFJJJMBM* MKMCCKPIDDK; // 0x20
		::RPG::GameCore::TransformComponent* PLJPNMPJMJH; // 0x28
		::KAOOFGPIBGF* AFAEENOBHAI; // 0x30
		::System::Collections::Generic::List_1<::KLHKFADHHGL>* DIMBLNLGCGE; // 0x38
		::RPG::GameCore::GameEntity* GGJMIJHJMCM; // 0x40
		::MFIIIBCBPPK* AKMELOFGCKM; // 0x48
		::System::Action_2<::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3>* COIGHDDPKPB; // 0x50
		::RPG::GameCore::FixPoint DLHANADADAB; // 0x58
		::RPG::GameCore::FixVec3 KNPLGCHFPOI; // 0x60
		::System::Boolean OIEFPMBGLHG; // 0x78
		::System::Boolean _PauseTransformSync_k__BackingField; // 0x79
		::System::Byte _padding0[0x6];
		::RPG::GameCore::FixPoint AFJPELEAPCB; // 0x80
		::RPG::GameCore::FixPoint EPAFBPEGEIJ; // 0x88
		::RPG::GameCore::FixPoint DMLPBLGKNIE; // 0x90
		::RPG::GameCore::FixVec3 CPKEFMBLLNC; // 0x98
		::RPG::GameCore::FixPoint CNEJLPPODDN; // 0xB0
		::RPG::GameCore::FixVec3 KKBHMEPCINE; // 0xB8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_CTOR_OFFSET))(this);
		}

		::System::Void LHEKLCOAFHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_LHEKLCOAFHH_OFFSET))(this);
		}

		::System::Void GBLPPKKJNMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_GBLPPKKJNMM_OFFSET))(this);
		}

		::System::Void OKKEOBGHMDI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_OKKEOBGHMDI_OFFSET))(this);
		}

		::System::Void ACAGCCEGDKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_ACAGCCEGDKF_OFFSET))(this);
		}

		::System::Void OOHLKADAOEC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_OOHLKADAOEC_OFFSET))(this, a1);
		}

		::System::Void ONKMNHIMLMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_ONKMNHIMLMH_OFFSET))(this);
		}

		::RPG::MVector3 AOAFBAAFBEE()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_AOAFBAAFBEE_OFFSET))(this);
		}

		::RPG::MVector3 BNGAMNBNDKF()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_BNGAMNBNDKF_OFFSET))(this);
		}

		::System::Single JHAMKCDOLAM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_JHAMKCDOLAM_OFFSET))(this);
		}

		::System::Single IHFMEMLEPLN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_IHFMEMLEPLN_OFFSET))(this);
		}

		::RPG::GameCore::TransformComponent* MOPJLKIHIHP()
		{
			return ((::RPG::GameCore::TransformComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_MOPJLKIHIHP_OFFSET))(this);
		}

		::OAEMFJJJMBM* CLHKAEIJFOI()
		{
			return ((::OAEMFJJJMBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_CLHKAEIJFOI_OFFSET))(this);
		}

		::MFIIIBCBPPK* OICFEDNNLKM()
		{
			return ((::MFIIIBCBPPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_OICFEDNNLKM_OFFSET))(this);
		}

		::System::Void DMJBIDGGIAK(::MFIIIBCBPPK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFIIIBCBPPK*))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_DMJBIDGGIAK_OFFSET))(this, a1);
		}

		::System::Boolean get_PauseTransformSync()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_GET_PAUSETRANSFORMSYNC_OFFSET))(this);
		}

		::System::Void set_PauseTransformSync(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_SET_PAUSETRANSFORMSYNC_OFFSET))(this, a1);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOOFGPIBGF__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixVec3, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_LMCEDCHJKFF_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_DISPOSE_OFFSET))(this);
		}

		::System::Void DAFHOJJKMED(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_DAFHOJJKMED_OFFSET))(this, a1);
		}

		::System::Void KACAINDGKPI(::RPG::GameCore::FixVec3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_KACAINDGKPI_OFFSET))(this, a1);
		}

		::System::Void GCGFGGKDIIA(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_GCGFGGKDIIA_OFFSET))(this, a1);
		}

		::System::Void GHEOGJMDBNA(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_GHEOGJMDBNA_OFFSET))(this, a1);
		}

		::System::Void GLGBOCCFEGC(::RPG::GameCore::FixVec3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_GLGBOCCFEGC_OFFSET))(this, a1);
		}

		::System::Void PAFCMAMJENB(::RPG::GameCore::FixVec3 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixVec3, ::System::Boolean))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_PAFCMAMJENB_OFFSET))(this, a1, a2);
		}

		::System::Void FDOODMMCOEL(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3, ::System::Boolean))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_FDOODMMCOEL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ILHMIIBGBCB(::RPG::GameCore::FixVec3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_ILHMIIBGBCB_OFFSET))(this, a1);
		}

		::System::Void LAGKMHIDDPN(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixVec3, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_LAGKMHIDDPN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CFMPPHAMNLB(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_CFMPPHAMNLB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LKPHDEGLFPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_LKPHDEGLFPN_OFFSET))(this);
		}

		::System::Void NNCBMAJEMOD(::KAOOFGPIBGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAOOFGPIBGF*))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_NNCBMAJEMOD_OFFSET))(this, a1);
		}

		::System::Void KCKGCEBBCIE(::MJNGFEGNCOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJNGFEGNCOA*))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_KCKGCEBBCIE_OFFSET))(this, a1);
		}

		::System::Void NCDKIAKAIFM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_NCDKIAKAIFM_OFFSET))(this, a1);
		}

		::System::Void OIMJBNHKKIC(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_OIMJBNHKKIC_OFFSET))(this, a1, a2);
		}

		::System::Void KAAMMAJDBMA(::System::String* a1, ::RPG::GameCore::FixVec3 a2, ::RPG::GameCore::FixPoint a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::FixVec3, ::RPG::GameCore::FixPoint, ::System::Boolean))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_KAAMMAJDBMA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void FNEFGJJHAOO(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_FNEFGJJHAOO_OFFSET))(this, a1);
		}

		::System::Void ECIINANDEEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_ECIINANDEEN_OFFSET))(this);
		}

		::RPG::GameCore::FixVec3 MHHDBKELGIO()
		{
			return ((::RPG::GameCore::FixVec3(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_MHHDBKELGIO_OFFSET))(this);
		}

		::RPG::GameCore::FixVec3 GMAHMHIDDJI()
		{
			return ((::RPG::GameCore::FixVec3(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_GMAHMHIDDJI_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint OIOONMMALLI()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_OIOONMMALLI_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint DKMLCPLNCBG()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_DKMLCPLNCBG_OFFSET))(this);
		}

		::RPG::GameCore::FixVec3 CGGPMFFMAIN()
		{
			return ((::RPG::GameCore::FixVec3(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_CGGPMFFMAIN_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint MKLDAABJCNF()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_MKLDAABJCNF_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint EPKDOHAMGPP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_EPKDOHAMGPP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint NOIABEOCOAH()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_NOIABEOCOAH_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint MNKHFNFNGIE()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_MNKHFNFNGIE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint MHACAAPDICN()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_MHACAAPDICN_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint NIADLLAGPOA()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOOFGPIBGF_NIADLLAGPOA_OFFSET))(this);
		}

	};
