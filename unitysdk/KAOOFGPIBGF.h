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

#define KAOOFGPIBGF_ACAGCCEGDKF_OFFSET UNITYSDK_OFFSET(0xB2E5EF0)
#define KAOOFGPIBGF_AOAFBAAFBEE_OFFSET UNITYSDK_OFFSET(0xB2E6BD0)
#define KAOOFGPIBGF_BNGAMNBNDKF_OFFSET UNITYSDK_OFFSET(0xB2E6080)
#define KAOOFGPIBGF_CFMPPHAMNLB_OFFSET UNITYSDK_OFFSET(0xB2E8D30)
#define KAOOFGPIBGF_CGGPMFFMAIN_OFFSET UNITYSDK_OFFSET(0xB2E6DB0)
#define KAOOFGPIBGF_CLHKAEIJFOI_OFFSET UNITYSDK_OFFSET(0xB2E6EE0)
#define KAOOFGPIBGF_CTOR_OFFSET UNITYSDK_OFFSET(0xB2EA5B0)
#define KAOOFGPIBGF_DAFHOJJKMED_OFFSET UNITYSDK_OFFSET(0xB2E7470)
#define KAOOFGPIBGF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2E7070)
#define KAOOFGPIBGF_DKMLCPLNCBG_OFFSET UNITYSDK_OFFSET(0xB2EA370)
#define KAOOFGPIBGF_DMJBIDGGIAK_OFFSET UNITYSDK_OFFSET(0xB2E5C40)
#define KAOOFGPIBGF_ECIINANDEEN_OFFSET UNITYSDK_OFFSET(0xB2E9FC0)
#define KAOOFGPIBGF_EPKDOHAMGPP_OFFSET UNITYSDK_OFFSET(0xB2E6E70)
#define KAOOFGPIBGF_FDOODMMCOEL_OFFSET UNITYSDK_OFFSET(0xB2E8160)
#define KAOOFGPIBGF_FNEFGJJHAOO_OFFSET UNITYSDK_OFFSET(0xB2EA160)
#define KAOOFGPIBGF_GBLPPKKJNMM_OFFSET UNITYSDK_OFFSET(0xB2E5BE0)
#define KAOOFGPIBGF_GCGFGGKDIIA_OFFSET UNITYSDK_OFFSET(0xB2E7C10)
#define KAOOFGPIBGF_GET_PAUSETRANSFORMSYNC_OFFSET UNITYSDK_OFFSET(0xB2E6F00)
#define KAOOFGPIBGF_GHEOGJMDBNA_OFFSET UNITYSDK_OFFSET(0xB2E7C70)
#define KAOOFGPIBGF_GLGBOCCFEGC_OFFSET UNITYSDK_OFFSET(0xB2E7810)
#define KAOOFGPIBGF_GMAHMHIDDJI_OFFSET UNITYSDK_OFFSET(0xB2EA340)
#define KAOOFGPIBGF_IHFMEMLEPLN_OFFSET UNITYSDK_OFFSET(0xB2E67D0)
#define KAOOFGPIBGF_ILHMIIBGBCB_OFFSET UNITYSDK_OFFSET(0xB2E86C0)
#define KAOOFGPIBGF_JHAMKCDOLAM_OFFSET UNITYSDK_OFFSET(0xB2E69B0)
#define KAOOFGPIBGF_KAAMMAJDBMA_OFFSET UNITYSDK_OFFSET(0xB2E9BA0)
#define KAOOFGPIBGF_KACAINDGKPI_OFFSET UNITYSDK_OFFSET(0xB2E7520)
#define KAOOFGPIBGF_KCKGCEBBCIE_OFFSET UNITYSDK_OFFSET(0xB2E9120)
#define KAOOFGPIBGF_LAGKMHIDDPN_OFFSET UNITYSDK_OFFSET(0xB2E87E0)
#define KAOOFGPIBGF_LHEKLCOAFHH_OFFSET UNITYSDK_OFFSET(0xB2E5B30)
#define KAOOFGPIBGF_LKPHDEGLFPN_OFFSET UNITYSDK_OFFSET(0xB2E9A00)
#define KAOOFGPIBGF_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xB2E6F70)
#define KAOOFGPIBGF_MHACAAPDICN_OFFSET UNITYSDK_OFFSET(0xB2EA470)
#define KAOOFGPIBGF_MHHDBKELGIO_OFFSET UNITYSDK_OFFSET(0xB2EA320)
#define KAOOFGPIBGF_MKLDAABJCNF_OFFSET UNITYSDK_OFFSET(0xB2EA3C0)
#define KAOOFGPIBGF_MNKHFNFNGIE_OFFSET UNITYSDK_OFFSET(0xB2EA420)
#define KAOOFGPIBGF_MOPJLKIHIHP_OFFSET UNITYSDK_OFFSET(0xB2E6ED0)
#define KAOOFGPIBGF_NCDKIAKAIFM_OFFSET UNITYSDK_OFFSET(0xB2E7360)
#define KAOOFGPIBGF_NIADLLAGPOA_OFFSET UNITYSDK_OFFSET(0xB2EA5A0)
#define KAOOFGPIBGF_NNCBMAJEMOD_OFFSET UNITYSDK_OFFSET(0xB2E7180)
#define KAOOFGPIBGF_NOIABEOCOAH_OFFSET UNITYSDK_OFFSET(0xB2EA410)
#define KAOOFGPIBGF_OICFEDNNLKM_OFFSET UNITYSDK_OFFSET(0xB2E6EF0)
#define KAOOFGPIBGF_OIMJBNHKKIC_OFFSET UNITYSDK_OFFSET(0xB2E9AD0)
#define KAOOFGPIBGF_OIOONMMALLI_OFFSET UNITYSDK_OFFSET(0xB2EA360)
#define KAOOFGPIBGF_OKKEOBGHMDI_OFFSET UNITYSDK_OFFSET(0xB2E5EB0)
#define KAOOFGPIBGF_ONKMNHIMLMH_OFFSET UNITYSDK_OFFSET(0xB2E63F0)
#define KAOOFGPIBGF_OOHLKADAOEC_OFFSET UNITYSDK_OFFSET(0xB2E6250)
#define KAOOFGPIBGF_PAFCMAMJENB_OFFSET UNITYSDK_OFFSET(0xB2E7EC0)
#define KAOOFGPIBGF_SET_PAUSETRANSFORMSYNC_OFFSET UNITYSDK_OFFSET(0xB2E6F10)
#define KAOOFGPIBGF__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xB2E6F20)

inline static constexpr unsigned int KAOOFGPIBGF_TypeDefinitionIndex = 54048;

	class KAOOFGPIBGF : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Action_2<::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3>* COIGHDDPKPB; // 0x18
		::System::Action_2<::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3>* HPNACLGCGPB; // 0x20
		::RPG::GameCore::TransformComponent* PLJPNMPJMJH; // 0x28
		::KAOOFGPIBGF* AFAEENOBHAI; // 0x30
		::MFIIIBCBPPK* AKMELOFGCKM; // 0x38
		::OAEMFJJJMBM* MKMCCKPIDDK; // 0x40
		::System::Collections::Generic::List_1<::KLHKFADHHGL>* DIMBLNLGCGE; // 0x48
		::RPG::GameCore::GameEntity* GGJMIJHJMCM; // 0x50
		::RPG::GameCore::FixPoint DMLPBLGKNIE; // 0x58
		::System::Boolean _PauseTransformSync_k__BackingField; // 0x60
		::System::Boolean OIEFPMBGLHG; // 0x61
		::System::Byte _padding0[0x6];
		::RPG::GameCore::FixVec3 KKBHMEPCINE; // 0x68
		::RPG::GameCore::FixPoint DLHANADADAB; // 0x80
		::RPG::GameCore::FixVec3 CPKEFMBLLNC; // 0x88
		::RPG::GameCore::FixPoint CNEJLPPODDN; // 0xA0
		::RPG::GameCore::FixPoint EPAFBPEGEIJ; // 0xA8
		::RPG::GameCore::FixVec3 KNPLGCHFPOI; // 0xB0
		::RPG::GameCore::FixPoint AFJPELEAPCB; // 0xC8
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
