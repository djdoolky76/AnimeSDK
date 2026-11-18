#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABLJDBEJNNI.h"
#include "unitysdk/BDEHDKLOFDG.h"
#include "unitysdk/DJPMGMOLKLO.h"
#include "unitysdk/KPACKGEBECC_FCPOKBMFHGH.h"
#include "unitysdk/KPACKGEBECC_MMGBNHAMBOI.h"
#include "unitysdk/KPACKGEBECC_PFHNKOJKFMM.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_MoveType.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_SpeedMode.h"
#include "unitysdk/MoleMole/Battle/CurveMove_CurvySplineIndex.h"
#include "unitysdk/MoleMole/Battle/CurveMove_GamePlayIndex.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BKEMHDPBHDE;
class FKHDPGLLPNN;
class KPACKGEBECC_PCOPMKKBHBB;
namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace MoleMole::Battle { class CurveMoveComponent_Config; }
namespace MoleMole::Battle { class CurveMoveComponent_TriggerConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define KPACKGEBECC_ACMBGOLNPNI_OFFSET UNITYSDK_OFFSET(0x17674BA0)
#define KPACKGEBECC_AEEFHMMIOOC_OFFSET UNITYSDK_OFFSET(0x17676770)
#define KPACKGEBECC_AHCMIELGHPJ_OFFSET UNITYSDK_OFFSET(0x17674380)
#define KPACKGEBECC_BAEDNGEFHEC_OFFSET UNITYSDK_OFFSET(0x176754D0)
#define KPACKGEBECC_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x17677910)
#define KPACKGEBECC_DDENPBLKLGC_OFFSET UNITYSDK_OFFSET(0x17674300)
#define KPACKGEBECC_DFCOJPAFDNE_OFFSET UNITYSDK_OFFSET(0x17676EB0)
#define KPACKGEBECC_DHBOFJBMOMI_OFFSET UNITYSDK_OFFSET(0x17674610)
#define KPACKGEBECC_ELANDBDOAGO_OFFSET UNITYSDK_OFFSET(0x176748B0)
#define KPACKGEBECC_ENNIIACOGBE_OFFSET UNITYSDK_OFFSET(0x176770C0)
#define KPACKGEBECC_EOIIFMPGGAP_OFFSET UNITYSDK_OFFSET(0x176755E0)
#define KPACKGEBECC_FEFEKCPLPAI_OFFSET UNITYSDK_OFFSET(0x17675770)
#define KPACKGEBECC_FFDDNLGLABI_OFFSET UNITYSDK_OFFSET(0x17677970)
#define KPACKGEBECC_FGAGFILGOJK_OFFSET UNITYSDK_OFFSET(0x17677CE0)
#define KPACKGEBECC_FGDOIADJGHC_OFFSET UNITYSDK_OFFSET(0x17677870)
#define KPACKGEBECC_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x17673FA0)
#define KPACKGEBECC_GGEKJCGGOMD_OFFSET UNITYSDK_OFFSET(0x17677350)
#define KPACKGEBECC_GMCACBFOFID_OFFSET UNITYSDK_OFFSET(0x17675DD0)
#define KPACKGEBECC_GOBKLFMPMLA_OFFSET UNITYSDK_OFFSET(0x17677AF0)
#define KPACKGEBECC_HELIANBPBJI_OFFSET UNITYSDK_OFFSET(0x17674860)
#define KPACKGEBECC_HEPCDJJHBDP_OFFSET UNITYSDK_OFFSET(0x17676570)
#define KPACKGEBECC_HKJKHMCIGMJ_OFFSET UNITYSDK_OFFSET(0x176760D0)
#define KPACKGEBECC_HMOKEFJEOBK_OFFSET UNITYSDK_OFFSET(0x17677A20)
#define KPACKGEBECC_HPHODCOMFJI_OFFSET UNITYSDK_OFFSET(0x17676BC0)
#define KPACKGEBECC_IANDAAIJHGF_OFFSET UNITYSDK_OFFSET(0x17675850)
#define KPACKGEBECC_ICGMDBKOJCF_OFFSET UNITYSDK_OFFSET(0x17675B60)
#define KPACKGEBECC_IFFFJKNIHML_OFFSET UNITYSDK_OFFSET(0x17677610)
#define KPACKGEBECC_IFOLFKEDOJF_OFFSET UNITYSDK_OFFSET(0x17675260)
#define KPACKGEBECC_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x176747E0)
#define KPACKGEBECC_JMBFLNIJIIG_OFFSET UNITYSDK_OFFSET(0x17674580)
#define KPACKGEBECC_JPGGFNAEBEI_OFFSET UNITYSDK_OFFSET(0x17676C30)
#define KPACKGEBECC_JPIPJOMGIEK_OFFSET UNITYSDK_OFFSET(0x17677B70)
#define KPACKGEBECC_LAFCAMEBAHP_OFFSET UNITYSDK_OFFSET(0x17677430)
#define KPACKGEBECC_LNHFAKDBMHN_OFFSET UNITYSDK_OFFSET(0x17674F60)
#define KPACKGEBECC_MAOFJHDLCIM_OFFSET UNITYSDK_OFFSET(0x17676350)
#define KPACKGEBECC_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x17677880)
#define KPACKGEBECC_MLFHJGCFLPJ_OFFSET UNITYSDK_OFFSET(0x17674C60)
#define KPACKGEBECC_NLNFBKMFPHK_OFFSET UNITYSDK_OFFSET(0x17676940)
#define KPACKGEBECC_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x17673DD0)
#define KPACKGEBECC_PONPNFGMBCN_OFFSET UNITYSDK_OFFSET(0x17677D10)
#define KPACKGEBECC__CCTOR_OFFSET UNITYSDK_OFFSET(0x17673FF0)
#define KPACKGEBECC__CTOR_OFFSET UNITYSDK_OFFSET(0x17674080)

inline static constexpr unsigned int KPACKGEBECC_TypeDefinitionIndex = 51117;

class KPACKGEBECC : public ::MJHDNMKGLBJ
{
public:
	static ::System::Boolean* StaticGet_NKENEODKOPG()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(KPACKGEBECC_TypeDefinitionIndex)->GetStaticField(0xFCC0);
	}
	static ::ABLJDBEJNNI* StaticGet_DELPOFDODFK()
	{
		return (::ABLJDBEJNNI*)Il2CppClass::FromTypeDefinitionIndex(KPACKGEBECC_TypeDefinitionIndex)->GetStaticField(0xFCC4);
	}
	// static const ::System::Int32 IPAPPCOIEIF = 0x35; // 0x0
	::KPACKGEBECC_PCOPMKKBHBB* JFEJECBPJMO; // 0x48
	::UnityEngine::Transform* DBGPNAEPPMD; // 0x50
	::MoleMole::Battle::CurveMoveComponent_Config* DFMKILICPFB; // 0x58
	::System::Collections::Generic::Dictionary_2<::MoleMole::EntityHandle, ::System::Object*>* CNNMMCANMAH; // 0x60
	::System::Collections::Generic::List_1<::FKHDPGLLPNN*>* FJMKJBCIBLH; // 0x68
	::BDEHDKLOFDG FDCBIODEGJF; // 0x70
	::MoleMole::Battle::CurveMoveComponent_TriggerConfig* HOGCDJNHHPC; // 0x90
	::KPACKGEBECC_PCOPMKKBHBB* BFOEDLKJODO; // 0x98
	::UnityEngine::Transform* ACDOKEGBJAO; // 0xA0
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* FIIKCCOMFGA; // 0xA8
	::System::Collections::Generic::List_1<::BKEMHDPBHDE*>* LMOEMFMLOKD; // 0xB0
	::KPACKGEBECC_PCOPMKKBHBB* JPIDNBFAGGE; // 0xB8
	::Il2CppArray<::System::String*>* KPLIFNOHNMH; // 0xC0
	::System::Collections::Generic::List_1<::FKHDPGLLPNN*>* MPJBNMAOMNO; // 0xC8
	::System::Object* ONHLHFCHNEA; // 0xD0
	::KPACKGEBECC_PCOPMKKBHBB* DGIGHJIDDCA; // 0xD8
	::DJPMGMOLKLO DLDLJHNKLNC; // 0xE0
	::UnityEngine::Rigidbody* CFCDGNIJMNL; // 0x100
	::UnityEngine::AnimationCurve* ALNANHPKDFO; // 0x108
	::System::Single GNLBABPGHGC; // 0x110
	::UnityEngine::Vector3 GEMDMLJBLFK; // 0x114
	::MoleMole::Battle::CurveMove_CurvySplineIndex AGCDDIMIHHO; // 0x120
	::UnityEngine::Vector3 EDDLABNDBCF; // 0x124
	::UnityEngine::Quaternion CKCHKHGGOFD; // 0x130
	::System::Single NBJNBPLDJNA; // 0x140
	::UnityEngine::Vector3 GKBIBLGCJGA; // 0x144
	::UnityEngine::Vector3 LPAFKPDDODN; // 0x150
	::System::Nullable_1<::System::Single> HALFEALCFJC; // 0x15C
	::MoleMole::Battle::CurveMoveComponent_Config_MoveType MPLCHIACCKD; // 0x164
	::ABLJDBEJNNI PGFJHIPNJEB; // 0x168
	::System::Single ALLNOLHHJMD; // 0x16C
	::System::Int32 JCHLFGMJCIE; // 0x170
	::UnityEngine::Quaternion IEGIPPAGEFE; // 0x174
	::System::Single NMEIDCNCLKN; // 0x184
	::System::Single IEIPDHCNPHF; // 0x188
	::UnityEngine::Quaternion AFLFLHGHCGA; // 0x18C
	::System::Boolean AHEHMPFDJFA; // 0x19C
	::System::Boolean DNMHDFHICOI; // 0x19D
	::System::Boolean EGLKKDLIBAC; // 0x19E
	::System::Boolean NNMOBPGFIJJ; // 0x19F
	::System::Boolean DMEMKMGHGJF; // 0x1A0
	::System::Boolean HGNGEJKNCMA; // 0x1A1
	::System::Byte _padding0[0x2];
	::MoleMole::Battle::CurveMove_GamePlayIndex CMNDIHDOIKB; // 0x1A4
	::KPACKGEBECC_MMGBNHAMBOI NJCONHAGAPC; // 0x1A8
	::UnityEngine::Vector3 JMDJAABFPJM; // 0x1B0
	::UnityEngine::Vector3 OPDOLGBAHDJ; // 0x1BC
	::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode FGHALJHIDPI; // 0x1C8
	::UnityEngine::Vector3 KBLLCLBFGOJ; // 0x1CC
	::UnityEngine::Vector3 DMKPODBJMAL; // 0x1D8
	::MoleMole::Battle::CurveMove_GamePlayIndex KOMAHJFIBML; // 0x1E4
	::KPACKGEBECC_FCPOKBMFHGH DLJCABIADKO; // 0x1E8
	::UnityEngine::Vector3 FMJGOHNLJNA; // 0x1EC
	::System::Single KMFHLCOIOMB; // 0x1F8
	::System::Single PNEAEGBMHKH; // 0x1FC
	::UnityEngine::Vector3 KOMFBAOPNFC; // 0x200
	::KPACKGEBECC_PFHNKOJKFMM GIMHHMOMJBI; // 0x20C
	::UnityEngine::Vector3 HLDDJLHGFFH; // 0x210
	::System::Nullable_1<::System::Object*> ANCNIHDKFHF; // 0x21C
	::System::Byte _padding1[0x10];
	::UnityEngine::Quaternion IGGCMHFENKM; // 0x234
	::MoleMole::Battle::CurveMove_CurvySplineIndex FBGCFMBDEPH; // 0x244

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPACKGEBECC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPACKGEBECC__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPACKGEBECC_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPACKGEBECC_GETCLASSID_OFFSET))(this);
	}

	::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode DDENPBLKLGC()
	{
		return ((::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode(*)(::PVOID))((::PBYTE)hIl2Cpp + KPACKGEBECC_DDENPBLKLGC_OFFSET))(this);
	}

	::UnityEngine::Vector3 AHCMIELGHPJ()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KPACKGEBECC_AHCMIELGHPJ_OFFSET))(this);
	}

	static ::KPACKGEBECC* JFDOOELFAOA()
	{
		return ((::KPACKGEBECC*(*)())((::PBYTE)hIl2Cpp + KPACKGEBECC_JFDOOELFAOA_OFFSET))();
	}

	::System::Void HELIANBPBJI(::MoleMole::Battle::CurveMoveComponent_TriggerConfig* HOGCDJNHHPC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::CurveMoveComponent_TriggerConfig*))((::PBYTE)hIl2Cpp + KPACKGEBECC_HELIANBPBJI_OFFSET))(this, HOGCDJNHHPC);
	}

	::System::Void ELANDBDOAGO(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KPACKGEBECC_ELANDBDOAGO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single ACMBGOLNPNI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KPACKGEBECC_ACMBGOLNPNI_OFFSET))(this);
	}

	::System::Void IFOLFKEDOJF(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KPACKGEBECC_IFOLFKEDOJF_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::Vector3 BAEDNGEFHEC()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KPACKGEBECC_BAEDNGEFHEC_OFFSET))(this);
	}

	::System::Single EOIIFMPGGAP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KPACKGEBECC_EOIIFMPGGAP_OFFSET))(this);
	}

	::System::Void FEFEKCPLPAI(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KPACKGEBECC_FEFEKCPLPAI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void ICGMDBKOJCF(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KPACKGEBECC_ICGMDBKOJCF_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::Rigidbody* GMCACBFOFID()
	{
		return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPACKGEBECC_GMCACBFOFID_OFFSET))(this);
	}

	::System::Single HKJKHMCIGMJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KPACKGEBECC_HKJKHMCIGMJ_OFFSET))(this);
	}

	::UnityEngine::Vector3 MAOFJHDLCIM()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KPACKGEBECC_MAOFJHDLCIM_OFFSET))(this);
	}

	::System::Single AEEFHMMIOOC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KPACKGEBECC_AEEFHMMIOOC_OFFSET))(this);
	}

	::UnityEngine::AnimationCurve* HPHODCOMFJI()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPACKGEBECC_HPHODCOMFJI_OFFSET))(this);
	}

	::System::Void JPGGFNAEBEI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPACKGEBECC_JPGGFNAEBEI_OFFSET))(this);
	}

	::System::Boolean DFCOJPAFDNE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPACKGEBECC_DFCOJPAFDNE_OFFSET))(this);
	}

	::UnityEngine::Transform* ENNIIACOGBE()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPACKGEBECC_ENNIIACOGBE_OFFSET))(this);
	}

	::System::Single MLFHJGCFLPJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KPACKGEBECC_MLFHJGCFLPJ_OFFSET))(this);
	}

	::System::Void GGEKJCGGOMD(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KPACKGEBECC_GGEKJCGGOMD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single LAFCAMEBAHP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KPACKGEBECC_LAFCAMEBAHP_OFFSET))(this);
	}

	::System::Single IFFFJKNIHML()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KPACKGEBECC_IFFFJKNIHML_OFFSET))(this);
	}

	::System::Boolean FGDOIADJGHC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPACKGEBECC_FGDOIADJGHC_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPACKGEBECC_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Battle::CurveMoveComponent_Config* DFMKILICPFB, ::Il2CppArray<::System::String*>* MDCMBMPMAGM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::CurveMoveComponent_Config*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + KPACKGEBECC_BBOMJDBNHIC_OFFSET))(this, DFMKILICPFB, MDCMBMPMAGM);
	}

	::FluffyUnderware::Curvy::CurvySpline* JMBFLNIJIIG()
	{
		return ((::FluffyUnderware::Curvy::CurvySpline*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPACKGEBECC_JMBFLNIJIIG_OFFSET))(this);
	}

	::System::Void FFDDNLGLABI(::MoleMole::Battle::CurveMoveComponent_Config* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::CurveMoveComponent_Config*))((::PBYTE)hIl2Cpp + KPACKGEBECC_FFDDNLGLABI_OFFSET))(this, DFMKILICPFB);
	}

	::System::Void GOBKLFMPMLA(::BDEHDKLOFDG IFHEOPLLDGC)
	{
		return ((::System::Void(*)(::PVOID, ::BDEHDKLOFDG))((::PBYTE)hIl2Cpp + KPACKGEBECC_GOBKLFMPMLA_OFFSET))(this, IFHEOPLLDGC);
	}

	::System::Void JPIPJOMGIEK(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KPACKGEBECC_JPIPJOMGIEK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single DHBOFJBMOMI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KPACKGEBECC_DHBOFJBMOMI_OFFSET))(this);
	}

	::System::Single FGAGFILGOJK()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KPACKGEBECC_FGAGFILGOJK_OFFSET))(this);
	}

	::System::Single PONPNFGMBCN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KPACKGEBECC_PONPNFGMBCN_OFFSET))(this);
	}

	::System::Single NLNFBKMFPHK()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KPACKGEBECC_NLNFBKMFPHK_OFFSET))(this);
	}

	::System::Void HMOKEFJEOBK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPACKGEBECC_HMOKEFJEOBK_OFFSET))(this);
	}

	::UnityEngine::Vector3 HEPCDJJHBDP()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KPACKGEBECC_HEPCDJJHBDP_OFFSET))(this);
	}

	::System::Single LNHFAKDBMHN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KPACKGEBECC_LNHFAKDBMHN_OFFSET))(this);
	}

	::System::Void IANDAAIJHGF(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KPACKGEBECC_IANDAAIJHGF_OFFSET))(this, EGEGIMGMJHN);
	}
};
