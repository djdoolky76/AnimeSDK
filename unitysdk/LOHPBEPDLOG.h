#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ALDJBPDKFCH.h"
#include "unitysdk/CBNMOJNCALF.h"
#include "unitysdk/FLDKIHGEFKE.h"
#include "unitysdk/JIILKHLOHBL.h"
#include "unitysdk/LGKJFOFLBFG.h"
#include "unitysdk/LOHPBEPDLOG_JNIINCBAHLB.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/AnchorPointForwardAxis.h"
#include "unitysdk/MoleMole/CameraShotData_EKNIALFMDNP.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/PhysicsAnimatorInterpolation.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AFNFJOBKDJO;
class CFBOAGFHJOC;
class CJEOILCFGOL;
class CPBKHFBGJFG;
class FHEAOOPKGCD;
class GEIHCPAOKKK;
class JBNBCPJDGNE;
class KMLNKEMIOIK;
class KMMOLFIBFPK;
class NNEBEOAFJLE;
namespace Cinemachine { class CinemachineComposer; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace MoleMole { class CameraShotData; }
namespace MoleMole { class UIPerformPageController; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define LOHPBEPDLOG_AGEJGMKJEKM_OFFSET UNITYSDK_OFFSET(0x151B23C0)
#define LOHPBEPDLOG_ALNLFKOFLKH_OFFSET UNITYSDK_OFFSET(0x151B4660)
#define LOHPBEPDLOG_BAFPDGOKGIM_OFFSET UNITYSDK_OFFSET(0x151B45C0)
#define LOHPBEPDLOG_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x151B08E0)
#define LOHPBEPDLOG_BEHGCAGBLMJ_OFFSET UNITYSDK_OFFSET(0x151B3040)
#define LOHPBEPDLOG_BICFLMNAHMN_OFFSET UNITYSDK_OFFSET(0x151B3EE0)
#define LOHPBEPDLOG_BIHIOMBBMGB_OFFSET UNITYSDK_OFFSET(0x151B3EA0)
#define LOHPBEPDLOG_BJCNJBCGFCH_OFFSET UNITYSDK_OFFSET(0x151B1AE0)
#define LOHPBEPDLOG_BJJFIODFCHM_OFFSET UNITYSDK_OFFSET(0x151B4000)
#define LOHPBEPDLOG_BNEMPIBKMBF_OFFSET UNITYSDK_OFFSET(0x151B3D40)
#define LOHPBEPDLOG_BNKNAPBCPPN_OFFSET UNITYSDK_OFFSET(0x151B2740)
#define LOHPBEPDLOG_CDELMMPFLCN_OFFSET UNITYSDK_OFFSET(0x151B1130)
#define LOHPBEPDLOG_CFFFOJECILP_OFFSET UNITYSDK_OFFSET(0x151B11E0)
#define LOHPBEPDLOG_CGAJPHBKLDE_OFFSET UNITYSDK_OFFSET(0x151B48D0)
#define LOHPBEPDLOG_CIJDACGGJKD_OFFSET UNITYSDK_OFFSET(0x151B3400)
#define LOHPBEPDLOG_CIJEFHDBLOP_OFFSET UNITYSDK_OFFSET(0x151B0490)
#define LOHPBEPDLOG_CKPKEIFHDDA_OFFSET UNITYSDK_OFFSET(0x151B3150)
#define LOHPBEPDLOG_CMGOBEGABEH_OFFSET UNITYSDK_OFFSET(0x151B2810)
#define LOHPBEPDLOG_DNHCOBOKIMP_OFFSET UNITYSDK_OFFSET(0x151B2580)
#define LOHPBEPDLOG_DNNJOOJBJNB_OFFSET UNITYSDK_OFFSET(0x151B22F0)
#define LOHPBEPDLOG_DODFKJPJEEN_OFFSET UNITYSDK_OFFSET(0x151B45B0)
#define LOHPBEPDLOG_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x151B4550)
#define LOHPBEPDLOG_EAOJJLKFPPD_OFFSET UNITYSDK_OFFSET(0x151B1220)
#define LOHPBEPDLOG_ECEBDPJEKNN_OFFSET UNITYSDK_OFFSET(0x151B10C0)
#define LOHPBEPDLOG_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x151B0F90)
#define LOHPBEPDLOG_EEHOLBAPGCI_OFFSET UNITYSDK_OFFSET(0x151B1D80)
#define LOHPBEPDLOG_EFHKGNFBJKE_OFFSET UNITYSDK_OFFSET(0x151B33D0)
#define LOHPBEPDLOG_EHBGPAMDOHA_OFFSET UNITYSDK_OFFSET(0x151B4260)
#define LOHPBEPDLOG_EIABIFHDIEP_OFFSET UNITYSDK_OFFSET(0x151B3030)
#define LOHPBEPDLOG_EINHAMADFID_OFFSET UNITYSDK_OFFSET(0x151B1340)
#define LOHPBEPDLOG_FCAFAJPCIJJ_OFFSET UNITYSDK_OFFSET(0x151B2450)
#define LOHPBEPDLOG_FIJLBFEKKIH_OFFSET UNITYSDK_OFFSET(0x151B3A60)
#define LOHPBEPDLOG_FIJPMNGMPMG_OFFSET UNITYSDK_OFFSET(0x151B12E0)
#define LOHPBEPDLOG_FJBNEIDPPEA_OFFSET UNITYSDK_OFFSET(0x151B1020)
#define LOHPBEPDLOG_FLAIBOONAKK_OFFSET UNITYSDK_OFFSET(0x151B10B0)
#define LOHPBEPDLOG_FLCFKEPBGLC_OFFSET UNITYSDK_OFFSET(0x151B4490)
#define LOHPBEPDLOG_FNNDOKEIJEF_OFFSET UNITYSDK_OFFSET(0x151B2360)
#define LOHPBEPDLOG_GBDLHGBGEFA_1_OFFSET UNITYSDK_OFFSET(0x151B2EE0)
#define LOHPBEPDLOG_GBDLHGBGEFA_OFFSET UNITYSDK_OFFSET(0x151B1160)
#define LOHPBEPDLOG_GCLDMJBHKEN_OFFSET UNITYSDK_OFFSET(0x151B4270)
#define LOHPBEPDLOG_GHOJELCLMKA_OFFSET UNITYSDK_OFFSET(0x151B1230)
#define LOHPBEPDLOG_HCKBFALCOIB_OFFSET UNITYSDK_OFFSET(0x151B2340)
#define LOHPBEPDLOG_HEJIJEAKJEE_1_OFFSET UNITYSDK_OFFSET(0x151B43A0)
#define LOHPBEPDLOG_HEJIJEAKJEE_OFFSET UNITYSDK_OFFSET(0x151B1350)
#define LOHPBEPDLOG_HEMOHDFDKEG_OFFSET UNITYSDK_OFFSET(0x151B4590)
#define LOHPBEPDLOG_HMNPLEMMHOA_OFFSET UNITYSDK_OFFSET(0x151B2DA0)
#define LOHPBEPDLOG_HOOKJLGJGKG_OFFSET UNITYSDK_OFFSET(0x151B2350)
#define LOHPBEPDLOG_IEEGGPMIBMP_OFFSET UNITYSDK_OFFSET(0x151B3D50)
#define LOHPBEPDLOG_IFHEOKMBAFI_OFFSET UNITYSDK_OFFSET(0x151B3F20)
#define LOHPBEPDLOG_IGMHIHCDECJ_OFFSET UNITYSDK_OFFSET(0x151B0F80)
#define LOHPBEPDLOG_JLCOCBAEFEL_1_OFFSET UNITYSDK_OFFSET(0x151B36C0)
#define LOHPBEPDLOG_JLCOCBAEFEL_OFFSET UNITYSDK_OFFSET(0x151B2270)
#define LOHPBEPDLOG_JLNMBKEGDOA_OFFSET UNITYSDK_OFFSET(0x151B45A0)
#define LOHPBEPDLOG_JMCJKJCMMMC_OFFSET UNITYSDK_OFFSET(0x151B3D70)
#define LOHPBEPDLOG_KFGFKNHAAOB_OFFSET UNITYSDK_OFFSET(0x151B2700)
#define LOHPBEPDLOG_KIJCAPPPCIM_OFFSET UNITYSDK_OFFSET(0x151B2620)
#define LOHPBEPDLOG_KKOBEHIOCDP_OFFSET UNITYSDK_OFFSET(0x151B1200)
#define LOHPBEPDLOG_KMCBFFJMNFA_OFFSET UNITYSDK_OFFSET(0x151B39D0)
#define LOHPBEPDLOG_LBBDCHINKNB_OFFSET UNITYSDK_OFFSET(0x151B2630)
#define LOHPBEPDLOG_LJGBOPMELGO_OFFSET UNITYSDK_OFFSET(0x151B0F30)
#define LOHPBEPDLOG_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x151B0430)
#define LOHPBEPDLOG_LLPHMANJGDK_OFFSET UNITYSDK_OFFSET(0x151B39A0)
#define LOHPBEPDLOG_LPNLJMHEOAA_OFFSET UNITYSDK_OFFSET(0x151B3D60)
#define LOHPBEPDLOG_MFKMEPAAGAN_OFFSET UNITYSDK_OFFSET(0x151B3F10)
#define LOHPBEPDLOG_MMCMNKIIOPP_OFFSET UNITYSDK_OFFSET(0x151B1110)
#define LOHPBEPDLOG_MMFGHMFBJLN_OFFSET UNITYSDK_OFFSET(0x151B04A0)
#define LOHPBEPDLOG_MNKAMNDBCME_1_OFFSET UNITYSDK_OFFSET(0x151B27B0)
#define LOHPBEPDLOG_MNKAMNDBCME_OFFSET UNITYSDK_OFFSET(0x151B0300)
#define LOHPBEPDLOG_MOECPBIMGEI_OFFSET UNITYSDK_OFFSET(0x151B3A50)
#define LOHPBEPDLOG_NCCBOHIMHDF_OFFSET UNITYSDK_OFFSET(0x151B03D0)
#define LOHPBEPDLOG_NEAILLOHKOL_OFFSET UNITYSDK_OFFSET(0x151B2860)
#define LOHPBEPDLOG_NPMLCEBKFJM_OFFSET UNITYSDK_OFFSET(0x151B3A70)
#define LOHPBEPDLOG_NPNPBOFHNJO_OFFSET UNITYSDK_OFFSET(0x151B2100)
#define LOHPBEPDLOG_OKGBGFBOICF_OFFSET UNITYSDK_OFFSET(0x151B4300)
#define LOHPBEPDLOG_OKLLFEIJKHN_OFFSET UNITYSDK_OFFSET(0x151B21F0)
#define LOHPBEPDLOG_ONGAKHHLINM_OFFSET UNITYSDK_OFFSET(0x151B44A0)
#define LOHPBEPDLOG_OPCODOEBBAK_OFFSET UNITYSDK_OFFSET(0x151B35B0)
#define LOHPBEPDLOG_PBFBICMFFFN_OFFSET UNITYSDK_OFFSET(0x151B2900)
#define LOHPBEPDLOG_PDAADHDFGKP_OFFSET UNITYSDK_OFFSET(0x151B12C0)
#define LOHPBEPDLOG_PEICOIKPCHD_OFFSET UNITYSDK_OFFSET(0x151B3840)
#define LOHPBEPDLOG_PIPBPLEIPFK_OFFSET UNITYSDK_OFFSET(0x151B3010)
#define LOHPBEPDLOG_PIPOHFOEKPA_OFFSET UNITYSDK_OFFSET(0x151B3D30)
#define LOHPBEPDLOG_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x151B3AD0)
#define LOHPBEPDLOG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x151B0210)
#define LOHPBEPDLOG__CCTOR_OFFSET UNITYSDK_OFFSET(0x151B02F0)
#define LOHPBEPDLOG__CTOR_OFFSET UNITYSDK_OFFSET(0x151B0200)

inline static constexpr unsigned int LOHPBEPDLOG_TypeDefinitionIndex = 58896;

class LOHPBEPDLOG : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_GOEKKFDEKKC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LOHPBEPDLOG_TypeDefinitionIndex)->GetStaticField(0xA600);
	}
	static ::UnityEngine::PhysicsAnimatorInterpolation* StaticGet_PFJMLIOLFJF()
	{
		return (::UnityEngine::PhysicsAnimatorInterpolation*)Il2CppClass::FromTypeDefinitionIndex(LOHPBEPDLOG_TypeDefinitionIndex)->GetStaticField(0xA604);
	}
	// static const ::System::String* EKADCMDNPNG; // 0x0
	::KMLNKEMIOIK* PMKINFHDLFD; // 0x10
	::MoleMole::CameraShotData* OMIMHHKENIO; // 0x18
	::System::Action* DJEDDDPBCBI; // 0x20
	::System::String* OCHMPEBJDMF; // 0x28
	::KMMOLFIBFPK* HHPADNFCLPB; // 0x30
	::System::Action* JLNOOABKOEM; // 0x38
	::CPBKHFBGJFG* APFCDLEKFJH; // 0x40
	::CFBOAGFHJOC* JDLDFLICPEE; // 0x48
	::JBNBCPJDGNE* PNBAFHNNCFJ; // 0x50
	::System::Action* CJNMJIADDFG; // 0x58
	::JIILKHLOHBL ILBJAOFIJHP; // 0x60
	::NNEBEOAFJLE* NGGFFANKIKE; // 0x68
	::ALDJBPDKFCH PMKPGJEDCEH; // 0x70
	::FHEAOOPKGCD* CFABLNKFAHJ; // 0xB8
	::FLDKIHGEFKE LAJJIJPLKKP; // 0xC0
	::AFNFJOBKDJO* HDIJCDNJANM; // 0xD8
	::CJEOILCFGOL* BEFBDJBHKBO; // 0xE0
	::System::UInt32 BIPANMECHNC; // 0xE8
	::System::Boolean FEKAGKDKFIE; // 0xEC
	::LOHPBEPDLOG_JNIINCBAHLB BOHBDHAPLDN; // 0xED
	::System::Single HMMGKADBNFO; // 0xF0
	::CBNMOJNCALF OCCDJNEDLMH; // 0xF4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOHPBEPDLOG__CCTOR_OFFSET))();
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_TOSTRING_OFFSET))(this);
	}

	::System::Boolean MNKAMNDBCME(::System::Boolean EJAHIFIGJEF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_MNKAMNDBCME_OFFSET))(this, EJAHIFIGJEF);
	}

	::System::Action* CIJEFHDBLOP()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_CIJEFHDBLOP_OFFSET))(this);
	}

	::System::Void NCCBOHIMHDF(::System::Boolean JCJDLICAODK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_NCCBOHIMHDF_OFFSET))(this, JCJDLICAODK);
	}

	static ::LOHPBEPDLOG* MMFGHMFBJLN(::System::UInt32 NMPJMCCBNLO, ::System::String* MHBBKJHKDKK, ::MoleMole::CameraShotData* CNABFFJNFIE, ::System::Action_1<::LOHPBEPDLOG*>* LGOMIFCMBPH, ::System::Boolean JMGJLCGPCHE)
	{
		return ((::LOHPBEPDLOG*(*)(::System::UInt32, ::System::String*, ::MoleMole::CameraShotData*, ::System::Action_1<::LOHPBEPDLOG*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_MMFGHMFBJLN_OFFSET))(NMPJMCCBNLO, MHBBKJHKDKK, CNABFFJNFIE, LGOMIFCMBPH, JMGJLCGPCHE);
	}

	::System::Void IGMHIHCDECJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_IGMHIHCDECJ_OFFSET))(this);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_EDEFLFIKNFK_OFFSET))(this);
	}

	::System::Action* FJBNEIDPPEA(::NNEBEOAFJLE* GBELIHABEDH)
	{
		return ((::System::Action*(*)(::PVOID, ::NNEBEOAFJLE*))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_FJBNEIDPPEA_OFFSET))(this, GBELIHABEDH);
	}

	::System::Action* FLAIBOONAKK()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_FLAIBOONAKK_OFFSET))(this);
	}

	::System::Boolean ECEBDPJEKNN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_ECEBDPJEKNN_OFFSET))(this);
	}

	::Cinemachine::CinemachineVirtualCamera* MMCMNKIIOPP()
	{
		return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_MMCMNKIIOPP_OFFSET))(this);
	}

	::UnityEngine::Vector3 CDELMMPFLCN()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_CDELMMPFLCN_OFFSET))(this);
	}

	static ::System::Boolean GBDLHGBGEFA(::LOHPBEPDLOG* EILNLHIFNKK)
	{
		return ((::System::Boolean(*)(::LOHPBEPDLOG*))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_GBDLHGBGEFA_OFFSET))(EILNLHIFNKK);
	}

	::Cinemachine::CinemachineComposer* CFFFOJECILP()
	{
		return ((::Cinemachine::CinemachineComposer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_CFFFOJECILP_OFFSET))(this);
	}

	::System::Void KKOBEHIOCDP(::MoleMole::CameraShotData_EKNIALFMDNP OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraShotData_EKNIALFMDNP))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_KKOBEHIOCDP_OFFSET))(this, OBNIAHNMHPF);
	}

	::System::Void EAOJJLKFPPD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_EAOJJLKFPPD_OFFSET))(this);
	}

	::System::Action* GHOJELCLMKA(::CPBKHFBGJFG* GBELIHABEDH)
	{
		return ((::System::Action*(*)(::PVOID, ::CPBKHFBGJFG*))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_GHOJELCLMKA_OFFSET))(this, GBELIHABEDH);
	}

	::System::Single PDAADHDFGKP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_PDAADHDFGKP_OFFSET))(this);
	}

	::System::Boolean FIJPMNGMPMG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_FIJPMNGMPMG_OFFSET))(this);
	}

	::System::Action* EINHAMADFID()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_EINHAMADFID_OFFSET))(this);
	}

	static ::System::String* HEJIJEAKJEE(::System::Collections::Generic::List_1<::System::String*>* BCHPEFLAEKM)
	{
		return ((::System::String*(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_HEJIJEAKJEE_OFFSET))(BCHPEFLAEKM);
	}

	::System::Void BJCNJBCGFCH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_BJCNJBCGFCH_OFFSET))(this);
	}

	::System::Boolean EEHOLBAPGCI(::CBNMOJNCALF GIPKEDKCOFN, ::LGKJFOFLBFG IEHPBAPHCOM)
	{
		return ((::System::Boolean(*)(::PVOID, ::CBNMOJNCALF, ::LGKJFOFLBFG))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_EEHOLBAPGCI_OFFSET))(this, GIPKEDKCOFN, IEHPBAPHCOM);
	}

	static ::System::Boolean JLCOCBAEFEL(::LOHPBEPDLOG* EILNLHIFNKK)
	{
		return ((::System::Boolean(*)(::LOHPBEPDLOG*))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_JLCOCBAEFEL_OFFSET))(EILNLHIFNKK);
	}

	::System::Void HCKBFALCOIB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_HCKBFALCOIB_OFFSET))(this);
	}

	::System::Action* HOOKJLGJGKG()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_HOOKJLGJGKG_OFFSET))(this);
	}

	::System::Action* FNNDOKEIJEF(::JBNBCPJDGNE* GBELIHABEDH)
	{
		return ((::System::Action*(*)(::PVOID, ::JBNBCPJDGNE*))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_FNNDOKEIJEF_OFFSET))(this, GBELIHABEDH);
	}

	::System::Void AGEJGMKJEKM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_AGEJGMKJEKM_OFFSET))(this);
	}

	::System::Boolean FCAFAJPCIJJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_FCAFAJPCIJJ_OFFSET))(this);
	}

	::System::Action* DNHCOBOKIMP(::CJEOILCFGOL* GBELIHABEDH)
	{
		return ((::System::Action*(*)(::PVOID, ::CJEOILCFGOL*))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_DNHCOBOKIMP_OFFSET))(this, GBELIHABEDH);
	}

	::System::Void KIJCAPPPCIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_KIJCAPPPCIM_OFFSET))(this);
	}

	::System::Void LBBDCHINKNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_LBBDCHINKNB_OFFSET))(this);
	}

	::System::Void KFGFKNHAAOB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_KFGFKNHAAOB_OFFSET))(this);
	}

	::MoleMole::CameraShotData_EKNIALFMDNP BNKNAPBCPPN()
	{
		return ((::MoleMole::CameraShotData_EKNIALFMDNP(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_BNKNAPBCPPN_OFFSET))(this);
	}

	static ::System::Boolean MNKAMNDBCME_1(::LOHPBEPDLOG* EILNLHIFNKK, ::System::Boolean EJAHIFIGJEF)
	{
		return ((::System::Boolean(*)(::LOHPBEPDLOG*, ::System::Boolean))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_MNKAMNDBCME_1_OFFSET))(EILNLHIFNKK, EJAHIFIGJEF);
	}

	::System::Void CMGOBEGABEH(::System::Action* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_CMGOBEGABEH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean NEAILLOHKOL(::System::String* MCOHLHMKLIP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_NEAILLOHKOL_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Void PBFBICMFFFN(::MoleMole::CameraShotData* CNABFFJNFIE)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraShotData*))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_PBFBICMFFFN_OFFSET))(this, CNABFFJNFIE);
	}

	static ::System::Boolean GBDLHGBGEFA_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LOHPBEPDLOG_GBDLHGBGEFA_1_OFFSET))();
	}

	::System::Single PIPBPLEIPFK()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_PIPBPLEIPFK_OFFSET))(this);
	}

	::System::Boolean EIABIFHDIEP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_EIABIFHDIEP_OFFSET))(this);
	}

	::UnityEngine::Vector3 BEHGCAGBLMJ()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_BEHGCAGBLMJ_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::String* MHBBKJHKDKK, ::MoleMole::CameraShotData* CNABFFJNFIE)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::CameraShotData*))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_BBOMJDBNHIC_OFFSET))(this, MHBBKJHKDKK, CNABFFJNFIE);
	}

	::System::Void LJGBOPMELGO(::System::UInt32 NMPJMCCBNLO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_LJGBOPMELGO_OFFSET))(this, NMPJMCCBNLO);
	}

	static ::System::Boolean CKPKEIFHDDA(::System::Boolean EJAHIFIGJEF)
	{
		return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_CKPKEIFHDDA_OFFSET))(EJAHIFIGJEF);
	}

	::System::Void EFHKGNFBJKE(::UnityEngine::Quaternion KDEDODEEDPN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_EFHKGNFBJKE_OFFSET))(this, KDEDODEEDPN);
	}

	::System::Void CIJDACGGJKD(::System::Boolean LKDHNLHADOA, ::System::Boolean JIIILBPHDGH, ::MoleMole::UIPerformPageController* MINILAOPPPN, ::System::Boolean EIFLKNMPFIE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::MoleMole::UIPerformPageController*, ::System::Boolean))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_CIJDACGGJKD_OFFSET))(this, LKDHNLHADOA, JIIILBPHDGH, MINILAOPPPN, EIFLKNMPFIE);
	}

	::UnityEngine::Vector3 OPCODOEBBAK()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_OPCODOEBBAK_OFFSET))(this);
	}

	static ::System::Boolean JLCOCBAEFEL_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LOHPBEPDLOG_JLCOCBAEFEL_1_OFFSET))();
	}

	static ::LOHPBEPDLOG* PEICOIKPCHD(::System::String* MHBBKJHKDKK, ::MoleMole::CameraShotData* CNABFFJNFIE, ::System::Action_1<::LOHPBEPDLOG*>* LGOMIFCMBPH)
	{
		return ((::LOHPBEPDLOG*(*)(::System::String*, ::MoleMole::CameraShotData*, ::System::Action_1<::LOHPBEPDLOG*>*))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_PEICOIKPCHD_OFFSET))(MHBBKJHKDKK, CNABFFJNFIE, LGOMIFCMBPH);
	}

	::System::Void LLPHMANJGDK(::UnityEngine::Vector3 CPKDJMKIBDE)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_LLPHMANJGDK_OFFSET))(this, CPKDJMKIBDE);
	}

	::System::Void KMCBFFJMNFA(::System::Single FCKGMNEGIPO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_KMCBFFJMNFA_OFFSET))(this, FCKGMNEGIPO);
	}

	::System::Single MOECPBIMGEI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_MOECPBIMGEI_OFFSET))(this);
	}

	::System::Void FIJLBFEKKIH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_FIJLBFEKKIH_OFFSET))(this);
	}

	::System::Boolean NPMLCEBKFJM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_NPMLCEBKFJM_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void PIPOHFOEKPA(::System::Single HBPGANADNCN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_PIPOHFOEKPA_OFFSET))(this, HBPGANADNCN);
	}

	::System::Boolean DNNJOOJBJNB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_DNNJOOJBJNB_OFFSET))(this);
	}

	::MoleMole::CameraShotData* BNEMPIBKMBF()
	{
		return ((::MoleMole::CameraShotData*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_BNEMPIBKMBF_OFFSET))(this);
	}

	::System::Void IEEGGPMIBMP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_IEEGGPMIBMP_OFFSET))(this);
	}

	static ::System::Boolean HMNPLEMMHOA(::System::String* MHBBKJHKDKK, ::MoleMole::Battle::Entity* KEEENBHLHPL, ::CBNMOJNCALF GIPKEDKCOFN, ::LGKJFOFLBFG IEHPBAPHCOM)
	{
		return ((::System::Boolean(*)(::System::String*, ::MoleMole::Battle::Entity*, ::CBNMOJNCALF, ::LGKJFOFLBFG))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_HMNPLEMMHOA_OFFSET))(MHBBKJHKDKK, KEEENBHLHPL, GIPKEDKCOFN, IEHPBAPHCOM);
	}

	::System::Void OKLLFEIJKHN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_OKLLFEIJKHN_OFFSET))(this);
	}

	::System::Void LPNLJMHEOAA(::System::Single EPBDIGABNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_LPNLJMHEOAA_OFFSET))(this, EPBDIGABNHN);
	}

	::System::Void JMCJKJCMMMC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_JMCJKJCMMMC_OFFSET))(this);
	}

	::ALDJBPDKFCH BIHIOMBBMGB()
	{
		return ((::ALDJBPDKFCH(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_BIHIOMBBMGB_OFFSET))(this);
	}

	::FLDKIHGEFKE BICFLMNAHMN()
	{
		return ((::FLDKIHGEFKE(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_BICFLMNAHMN_OFFSET))(this);
	}

	::System::Void MFKMEPAAGAN(::System::String* LEHBKLJCFIL, ::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis CFJFMMGPGKE, ::System::Int32 BPFEIHPKGIM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis, ::System::Int32))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_MFKMEPAAGAN_OFFSET))(this, LEHBKLJCFIL, CFJFMMGPGKE, BPFEIHPKGIM);
	}

	::Nap::NapECS::EcsWorld* IFHEOKMBAFI()
	{
		return ((::Nap::NapECS::EcsWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_IFHEOKMBAFI_OFFSET))(this);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void BJJFIODFCHM(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_BJJFIODFCHM_OFFSET))(this, PMNLNNGEIFM);
	}

	::CBNMOJNCALF EHBGPAMDOHA()
	{
		return ((::CBNMOJNCALF(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_EHBGPAMDOHA_OFFSET))(this);
	}

	::System::Action* GCLDMJBHKEN(::CFBOAGFHJOC* GBELIHABEDH)
	{
		return ((::System::Action*(*)(::PVOID, ::CFBOAGFHJOC*))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_GCLDMJBHKEN_OFFSET))(this, GBELIHABEDH);
	}

	::System::Action* OKGBGFBOICF(::FHEAOOPKGCD* GBELIHABEDH)
	{
		return ((::System::Action*(*)(::PVOID, ::FHEAOOPKGCD*))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_OKGBGFBOICF_OFFSET))(this, GBELIHABEDH);
	}

	static ::MoleMole::CameraShotData* HEJIJEAKJEE_1(::System::String*& MCOHLHMKLIP, ::System::Boolean BPBIIMENOMM)
	{
		return ((::MoleMole::CameraShotData*(*)(::System::String*&, ::System::Boolean))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_HEJIJEAKJEE_1_OFFSET))(MCOHLHMKLIP, BPBIIMENOMM);
	}

	::System::Void NPNPBOFHNJO(::Cinemachine::CinemachineBlendDefinition LLMNGMHKAFE)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBlendDefinition))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_NPNPBOFHNJO_OFFSET))(this, LLMNGMHKAFE);
	}

	::System::Void FLCFKEPBGLC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_FLCFKEPBGLC_OFFSET))(this);
	}

	::UnityEngine::Transform* ONGAKHHLINM(::System::String* MCOHLHMKLIP)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_ONGAKHHLINM_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_DPIHOJBBGLA_OFFSET))(this);
	}

	::LOHPBEPDLOG_JNIINCBAHLB HEMOHDFDKEG()
	{
		return ((::LOHPBEPDLOG_JNIINCBAHLB(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_HEMOHDFDKEG_OFFSET))(this);
	}

	::System::UInt32 JLNMBKEGDOA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_JLNMBKEGDOA_OFFSET))(this);
	}

	::System::Void DODFKJPJEEN(::System::Single IMFGDJMECHJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_DODFKJPJEEN_OFFSET))(this, IMFGDJMECHJ);
	}

	::System::Action* BAFPDGOKGIM(::AFNFJOBKDJO* GBELIHABEDH)
	{
		return ((::System::Action*(*)(::PVOID, ::AFNFJOBKDJO*))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_BAFPDGOKGIM_OFFSET))(this, GBELIHABEDH);
	}

	::System::Void ALNLFKOFLKH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_ALNLFKOFLKH_OFFSET))(this, PMNLNNGEIFM);
	}

	::GEIHCPAOKKK* CGAJPHBKLDE()
	{
		return ((::GEIHCPAOKKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_CGAJPHBKLDE_OFFSET))(this);
	}
};
