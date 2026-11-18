#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGEJBOLDEGE.h"
#include "unitysdk/ANNFBNKCAIC.h"
#include "unitysdk/DEPPJMEOFBG.h"
#include "unitysdk/DLLLACFEBJF.h"
#include "unitysdk/FluffyUnderware/Curvy/OrientationAxisEnum.h"
#include "unitysdk/IBOAEBPNLAE.h"
#include "unitysdk/IIIPGOPGPLC.h"
#include "unitysdk/JLGEFIGMLIA_ADDGOICEINK.h"
#include "unitysdk/KDGLGDGCBBN.h"
#include "unitysdk/KPACKGEBECC_FCPOKBMFHGH.h"
#include "unitysdk/LAJKLEIGOOA_1.h"
#include "unitysdk/MNEOAILLCBN.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_MoveDirection.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_MoveType.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_SpeedMode.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/PAAPMOOPLBC.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/JLGEFIGMLIA_GFMGOIKLDLL.h"
#include "unitysdk/JLGEFIGMLIA_MDGMEECICBK.h"
#include "unitysdk/MoleMole/Battle/CurveMove_CurvySplineIndex.h"
#include "unitysdk/MoleMole/Battle/CurveMove_GamePlayIndex.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BNKIPOEJNNB;
class GEIHCPAOKKK;
class JFBNBOHNJBF;
class KPACKGEBECC;
class LNJJLDMLLHC;
class MKKOOCEJGGP;
namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace FluffyUnderware::Curvy { class CurvySplineSegment; }
namespace MoleMole { class MonoFollowJointMoveElement; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace Unity::Collections { template <typename T> class ManagedBlockQueue_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define JLGEFIGMLIA_ABDLEONNPAJ_OFFSET UNITYSDK_OFFSET(0x155A12D0)
#define JLGEFIGMLIA_ACCOGOICNGA_1_OFFSET UNITYSDK_OFFSET(0x1559DAD0)
#define JLGEFIGMLIA_ACCOGOICNGA_OFFSET UNITYSDK_OFFSET(0x1559E070)
#define JLGEFIGMLIA_ACOKKIFAGMA_1_OFFSET UNITYSDK_OFFSET(0x1559B070)
#define JLGEFIGMLIA_ACOKKIFAGMA_OFFSET UNITYSDK_OFFSET(0x1558C200)
#define JLGEFIGMLIA_AFOHKPLIMMG_OFFSET UNITYSDK_OFFSET(0x1558A930)
#define JLGEFIGMLIA_AKEBNAAJCEL_OFFSET UNITYSDK_OFFSET(0x15596840)
#define JLGEFIGMLIA_AOFGOCBPNPG_OFFSET UNITYSDK_OFFSET(0x1558D910)
#define JLGEFIGMLIA_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x1559C320)
#define JLGEFIGMLIA_BAGLMPOIKEP_OFFSET UNITYSDK_OFFSET(0x155A17F0)
#define JLGEFIGMLIA_BAHPPIGMMKN_1_OFFSET UNITYSDK_OFFSET(0x1558EA70)
#define JLGEFIGMLIA_BAHPPIGMMKN_OFFSET UNITYSDK_OFFSET(0x1558E390)
#define JLGEFIGMLIA_BGAJHAABDGC_OFFSET UNITYSDK_OFFSET(0x1559F070)
#define JLGEFIGMLIA_BGBDLEGDPEK_OFFSET UNITYSDK_OFFSET(0x15590470)
#define JLGEFIGMLIA_BGMLMFPMGDG_1_OFFSET UNITYSDK_OFFSET(0x155A2110)
#define JLGEFIGMLIA_BGMLMFPMGDG_OFFSET UNITYSDK_OFFSET(0x1559E2C0)
#define JLGEFIGMLIA_BLACGINMFGJ_OFFSET UNITYSDK_OFFSET(0x155A3200)
#define JLGEFIGMLIA_BMIBAMMNKNP_OFFSET UNITYSDK_OFFSET(0x1559AB70)
#define JLGEFIGMLIA_CBIIAFHMHFF_OFFSET UNITYSDK_OFFSET(0x155A2500)
#define JLGEFIGMLIA_CCEGCKFCGKN_OFFSET UNITYSDK_OFFSET(0x1558D430)
#define JLGEFIGMLIA_CDJPHDBJBAD_OFFSET UNITYSDK_OFFSET(0x1559C3D0)
#define JLGEFIGMLIA_CFGINMPJGJA_OFFSET UNITYSDK_OFFSET(0x1558C580)
#define JLGEFIGMLIA_CFNJGCOHIJH_OFFSET UNITYSDK_OFFSET(0x1559BF00)
#define JLGEFIGMLIA_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x155A0720)
#define JLGEFIGMLIA_CPGJNMPAFKN_OFFSET UNITYSDK_OFFSET(0x1558AC90)
#define JLGEFIGMLIA_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1558AF10)
#define JLGEFIGMLIA_DCKBLBGJJBM_OFFSET UNITYSDK_OFFSET(0x15595720)
#define JLGEFIGMLIA_DKDCLLJPMOH_OFFSET UNITYSDK_OFFSET(0x1558BA50)
#define JLGEFIGMLIA_EACKNGOJFNJ_OFFSET UNITYSDK_OFFSET(0x1558B9F0)
#define JLGEFIGMLIA_EADDIGIEIGK_OFFSET UNITYSDK_OFFSET(0x1559A6A0)
#define JLGEFIGMLIA_EDLEDNNCDMP_OFFSET UNITYSDK_OFFSET(0x1558D580)
#define JLGEFIGMLIA_EEBPHHBPJCN_OFFSET UNITYSDK_OFFSET(0x155A0020)
#define JLGEFIGMLIA_EEKENLNENOK_OFFSET UNITYSDK_OFFSET(0x1559C0D0)
#define JLGEFIGMLIA_EFCPGLFIDLG_OFFSET UNITYSDK_OFFSET(0x155A01D0)
#define JLGEFIGMLIA_EGNPNGKKKPJ_OFFSET UNITYSDK_OFFSET(0x1559E510)
#define JLGEFIGMLIA_EJKLFBNHJJH_OFFSET UNITYSDK_OFFSET(0x1559D0D0)
#define JLGEFIGMLIA_EKIFIBKFAPI_OFFSET UNITYSDK_OFFSET(0x15595080)
#define JLGEFIGMLIA_EPJFBAALLEE_OFFSET UNITYSDK_OFFSET(0x15595CE0)
#define JLGEFIGMLIA_FDHAADEJOFO_OFFSET UNITYSDK_OFFSET(0x1558F130)
#define JLGEFIGMLIA_FHOJDGBFKAL_OFFSET UNITYSDK_OFFSET(0x1558C2C0)
#define JLGEFIGMLIA_FIDLFIAGJCA_OFFSET UNITYSDK_OFFSET(0x15596740)
#define JLGEFIGMLIA_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1558B4E0)
#define JLGEFIGMLIA_FMKEIPOKAOC_OFFSET UNITYSDK_OFFSET(0x1559BB80)
#define JLGEFIGMLIA_FNHDPGJGLMO_OFFSET UNITYSDK_OFFSET(0x155929C0)
#define JLGEFIGMLIA_FPCLPIFBHLM_OFFSET UNITYSDK_OFFSET(0x1559C010)
#define JLGEFIGMLIA_GAHDAEGALMC_OFFSET UNITYSDK_OFFSET(0x1559F540)
#define JLGEFIGMLIA_GANCPABBFNJ_OFFSET UNITYSDK_OFFSET(0x1559DFF0)
#define JLGEFIGMLIA_GCAEMDKEMNN_OFFSET UNITYSDK_OFFSET(0x1559D890)
#define JLGEFIGMLIA_GFFCPOEPHHD_OFFSET UNITYSDK_OFFSET(0x155A1960)
#define JLGEFIGMLIA_GGNHGEMBPCJ_OFFSET UNITYSDK_OFFSET(0x1558B8F0)
#define JLGEFIGMLIA_GKDGJLGAMCE_OFFSET UNITYSDK_OFFSET(0x155A09C0)
#define JLGEFIGMLIA_GLCIHGOCHMP_OFFSET UNITYSDK_OFFSET(0x155A0D70)
#define JLGEFIGMLIA_GPJFMPJIOHO_OFFSET UNITYSDK_OFFSET(0x155A3290)
#define JLGEFIGMLIA_HBBGDKLDFPF_OFFSET UNITYSDK_OFFSET(0x1559C770)
#define JLGEFIGMLIA_HECJDHKKAGH_OFFSET UNITYSDK_OFFSET(0x155935A0)
#define JLGEFIGMLIA_HIIIOBCFPNK_OFFSET UNITYSDK_OFFSET(0x1559FF80)
#define JLGEFIGMLIA_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x155A2550)
#define JLGEFIGMLIA_HNGICHCDBLB_OFFSET UNITYSDK_OFFSET(0x155A07B0)
#define JLGEFIGMLIA_IBPOAGJLPDN_OFFSET UNITYSDK_OFFSET(0x155A0170)
#define JLGEFIGMLIA_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x155A2310)
#define JLGEFIGMLIA_INEGOEGIOKM_OFFSET UNITYSDK_OFFSET(0x155A00E0)
#define JLGEFIGMLIA_INIGLFEEIOH_OFFSET UNITYSDK_OFFSET(0x1559D4E0)
#define JLGEFIGMLIA_JANNCODIOBC_OFFSET UNITYSDK_OFFSET(0x15596380)
#define JLGEFIGMLIA_JCAOALJFHIK_OFFSET UNITYSDK_OFFSET(0x155945A0)
#define JLGEFIGMLIA_JIHKCLCOFIF_OFFSET UNITYSDK_OFFSET(0x15595F60)
#define JLGEFIGMLIA_JNKBFGIBGOF_OFFSET UNITYSDK_OFFSET(0x1559CC20)
#define JLGEFIGMLIA_KBFGOOLNGMI_OFFSET UNITYSDK_OFFSET(0x155962A0)
#define JLGEFIGMLIA_KEKCFIMLKLP_OFFSET UNITYSDK_OFFSET(0x1558CC90)
#define JLGEFIGMLIA_KGODHIOKNMD_OFFSET UNITYSDK_OFFSET(0x1558FDD0)
#define JLGEFIGMLIA_KHBONHCBHOK_OFFSET UNITYSDK_OFFSET(0x155978E0)
#define JLGEFIGMLIA_KJKJGPHBGAE_OFFSET UNITYSDK_OFFSET(0x1558C720)
#define JLGEFIGMLIA_KOFMFDLCOEA_OFFSET UNITYSDK_OFFSET(0x155A1590)
#define JLGEFIGMLIA_KPAABICFGPH_OFFSET UNITYSDK_OFFSET(0x15594940)
#define JLGEFIGMLIA_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1558B370)
#define JLGEFIGMLIA_LCOMPIBAKEI_OFFSET UNITYSDK_OFFSET(0x1559C440)
#define JLGEFIGMLIA_LFJDENOBENJ_OFFSET UNITYSDK_OFFSET(0x155906F0)
#define JLGEFIGMLIA_LMEKHDLKMEA_OFFSET UNITYSDK_OFFSET(0x1558C790)
#define JLGEFIGMLIA_LNHJFJPGBDI_1_OFFSET UNITYSDK_OFFSET(0x15598600)
#define JLGEFIGMLIA_LNHJFJPGBDI_OFFSET UNITYSDK_OFFSET(0x15597F00)
#define JLGEFIGMLIA_LNJBNAMOIGJ_OFFSET UNITYSDK_OFFSET(0x1558B870)
#define JLGEFIGMLIA_LPKCKOFGJON_OFFSET UNITYSDK_OFFSET(0x1558CA70)
#define JLGEFIGMLIA_MAOFDCDLPBO_OFFSET UNITYSDK_OFFSET(0x1558FCC0)
#define JLGEFIGMLIA_MBOEPLBBIOG_OFFSET UNITYSDK_OFFSET(0x155A21A0)
#define JLGEFIGMLIA_MDFHEHEGAKN_OFFSET UNITYSDK_OFFSET(0x1558C6B0)
#define JLGEFIGMLIA_MECADGOCFLA_OFFSET UNITYSDK_OFFSET(0x155A11C0)
#define JLGEFIGMLIA_MIEJCOCEKMM_OFFSET UNITYSDK_OFFSET(0x15590010)
#define JLGEFIGMLIA_MJMKBFLLMMI_OFFSET UNITYSDK_OFFSET(0x15598B40)
#define JLGEFIGMLIA_MMIGCDPBOLI_OFFSET UNITYSDK_OFFSET(0x155A2E70)
#define JLGEFIGMLIA_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x155A3170)
#define JLGEFIGMLIA_MNEJHDIKCGJ_OFFSET UNITYSDK_OFFSET(0x155A2080)
#define JLGEFIGMLIA_MONJNOKBFHO_OFFSET UNITYSDK_OFFSET(0x155966E0)
#define JLGEFIGMLIA_NAAFHBAPODH_OFFSET UNITYSDK_OFFSET(0x15595BA0)
#define JLGEFIGMLIA_NDAJFBJIJGJ_OFFSET UNITYSDK_OFFSET(0x1559B1B0)
#define JLGEFIGMLIA_NDMGOHDCMAM_OFFSET UNITYSDK_OFFSET(0x155A2940)
#define JLGEFIGMLIA_NEHOHCDJAIK_OFFSET UNITYSDK_OFFSET(0x1558E2E0)
#define JLGEFIGMLIA_NFBHOFGCLIC_OFFSET UNITYSDK_OFFSET(0x15599220)
#define JLGEFIGMLIA_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0x1558E250)
#define JLGEFIGMLIA_NIODNNFBADA_OFFSET UNITYSDK_OFFSET(0x1558DB00)
#define JLGEFIGMLIA_NMIOIBGGPIL_OFFSET UNITYSDK_OFFSET(0x155A0E70)
#define JLGEFIGMLIA_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x155A2CD0)
#define JLGEFIGMLIA_OBMLNOAEBKJ_OFFSET UNITYSDK_OFFSET(0x1559F4F0)
#define JLGEFIGMLIA_OCGDALPKCHF_OFFSET UNITYSDK_OFFSET(0x1558B980)
#define JLGEFIGMLIA_OMLIOFGBIBJ_OFFSET UNITYSDK_OFFSET(0x1558E4E0)
#define JLGEFIGMLIA_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1558AB90)
#define JLGEFIGMLIA_ONJLDCLHKEH_OFFSET UNITYSDK_OFFSET(0x1559D160)
#define JLGEFIGMLIA_OOBEEHGHNLE_OFFSET UNITYSDK_OFFSET(0x155A23A0)
#define JLGEFIGMLIA_PDBPKKAHKDF_OFFSET UNITYSDK_OFFSET(0x15596680)
#define JLGEFIGMLIA_PEMCPIGHHLN_OFFSET UNITYSDK_OFFSET(0x1558D4F0)
#define JLGEFIGMLIA_PJFBHFBKLPA_OFFSET UNITYSDK_OFFSET(0x1558BCA0)
#define JLGEFIGMLIA_PJNBLHGFKON_OFFSET UNITYSDK_OFFSET(0x1558FC60)
#define JLGEFIGMLIA_PMHJBNNPCLB_OFFSET UNITYSDK_OFFSET(0x1559E450)
#define JLGEFIGMLIA_START_OFFSET UNITYSDK_OFFSET(0x1558A850)
#define JLGEFIGMLIA_UPDATE_OFFSET UNITYSDK_OFFSET(0x1558B680)
#define JLGEFIGMLIA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1558B850)
#define JLGEFIGMLIA__CTOR_OFFSET UNITYSDK_OFFSET(0x1558B7F0)

inline static constexpr unsigned int JLGEFIGMLIA_TypeDefinitionIndex = 52634;

class JLGEFIGMLIA : public ::OAOOLPCNHKA
{
public:
	static ::JLGEFIGMLIA** StaticGet__KDHHJMKHLED_k__BackingField()
	{
		return (::JLGEFIGMLIA**)Il2CppClass::FromTypeDefinitionIndex(JLGEFIGMLIA_TypeDefinitionIndex)->GetStaticField(0x45B80);
	}
	static ::System::UInt32* StaticGet_GJBLHHEIGKP()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(JLGEFIGMLIA_TypeDefinitionIndex)->GetStaticField(0x101B0);
	}
	static ::System::Boolean* StaticGet_LDDPHJKCLAK()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(JLGEFIGMLIA_TypeDefinitionIndex)->GetStaticField(0x101B4);
	}
	static ::System::Single* StaticGet_NLMHJOOIGEK()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(JLGEFIGMLIA_TypeDefinitionIndex)->GetStaticField(0x101B8);
	}
	static ::System::Single* StaticGet_EKKEDIGGDHC()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(JLGEFIGMLIA_TypeDefinitionIndex)->GetStaticField(0x101BC);
	}
	static ::System::Single* StaticGet_DFNNGLCDKPF()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(JLGEFIGMLIA_TypeDefinitionIndex)->GetStaticField(0x101C0);
	}
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20
	::Nap::NapECS::EcsFilter* PKOIBCINPFB; // 0x28
	::Unity::Collections::ManagedBlockQueue_1<::PAAPMOOPLBC>* IJHHOBKHPPB; // 0x30
	::Unity::Collections::ManagedBlockQueue_1<::IBOAEBPNLAE>* GHMKHHJOAKM; // 0x38
	::Unity::Collections::ManagedBlockQueue_1<::ANNFBNKCAIC>* COPPMBGNAOB; // 0x40
	::Unity::Collections::ManagedBlockQueue_1<::MNEOAILLCBN>* LGLJCOOKNIM; // 0x48
	::Unity::Collections::ManagedBlockQueue_1<::IIIPGOPGPLC>* CBGHKOCPAEA; // 0x50
	::System::Collections::Generic::List_1<::LNJJLDMLLHC*>* PFEHGGHOGNG; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* FMCNFHOOPPF; // 0x60
	::Unity::Collections::ManagedBlockQueue_1<::KDGLGDGCBBN>* NCNFHFMKDIE; // 0x68
	::System::Collections::Generic::List_1<::LAJKLEIGOOA_1<::System::UInt32>>* PKHOMCNPOBI; // 0x70
	::Unity::Collections::ManagedBlockQueue_1<::DEPPJMEOFBG>* IIHNIBLPFHJ; // 0x78
	::Unity::Collections::ManagedBlockQueue_1<::AGEJBOLDEGE>* NAFKBPPPLLG; // 0x80
	::JLGEFIGMLIA_ADDGOICEINK LPHMALLMAPG; // 0x88
	::System::Boolean PJNCEFAPCML; // 0x89
	::System::Boolean JEENEGFICAD; // 0x8A
	::System::Boolean FPJCPEHMDBD; // 0x8B
	::System::Byte _padding0[0x4];
	::Unity::Jobs::JobHandle EOCHHIBJHCG; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLGEFIGMLIA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLGEFIGMLIA__CCTOR_OFFSET))();
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_START_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_ONDESTROY_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_LATEUPDATE_OFFSET))(this);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_FIXEDUPDATE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_UPDATE_OFFSET))(this);
	}

	::System::Void LNJBNAMOIGJ(::KPACKGEBECC* EPFOEIJDMBM, ::MoleMole::MonoFollowJointMoveElement* CLAFFCGDEGP)
	{
		return ((::System::Void(*)(::PVOID, ::KPACKGEBECC*, ::MoleMole::MonoFollowJointMoveElement*))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_LNJBNAMOIGJ_OFFSET))(this, EPFOEIJDMBM, CLAFFCGDEGP);
	}

	::System::Void GGNHGEMBPCJ(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_GGNHGEMBPCJ_OFFSET))(this, BKLGNCBNEGM);
	}

	static ::System::Void EACKNGOJFNJ(::KPACKGEBECC* EPFOEIJDMBM, ::System::Object* ONHLHFCHNEA)
	{
		return ((::System::Void(*)(::KPACKGEBECC*, ::System::Object*))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_EACKNGOJFNJ_OFFSET))(EPFOEIJDMBM, ONHLHFCHNEA);
	}

	::System::Void CPGJNMPAFKN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_CPGJNMPAFKN_OFFSET))(this);
	}

	static ::MoleMole::Battle::CurveMove_GamePlayIndex DKDCLLJPMOH(::FluffyUnderware::Curvy::CurvySpline* PJLEHOLOIGI, ::MoleMole::Battle::CurveMove_CurvySplineIndex ABHBKFJKINO)
	{
		return ((::MoleMole::Battle::CurveMove_GamePlayIndex(*)(::FluffyUnderware::Curvy::CurvySpline*, ::MoleMole::Battle::CurveMove_CurvySplineIndex))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_DKDCLLJPMOH_OFFSET))(PJLEHOLOIGI, ABHBKFJKINO);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* ACOKKIFAGMA(::FluffyUnderware::Curvy::CurvySpline* PJLEHOLOIGI, ::MoleMole::Battle::CurveMove_CurvySplineIndex ABHBKFJKINO)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::FluffyUnderware::Curvy::CurvySpline*, ::MoleMole::Battle::CurveMove_CurvySplineIndex))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_ACOKKIFAGMA_OFFSET))(PJLEHOLOIGI, ABHBKFJKINO);
	}

	static ::System::Single FHOJDGBFKAL(::KPACKGEBECC* EPFOEIJDMBM, ::System::Single BBOBPDPFLAI, ::FluffyUnderware::Curvy::CurvySplineSegment* LBJFIEGMEDG)
	{
		return ((::System::Single(*)(::KPACKGEBECC*, ::System::Single, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_FHOJDGBFKAL_OFFSET))(EPFOEIJDMBM, BBOBPDPFLAI, LBJFIEGMEDG);
	}

	::System::Void MDFHEHEGAKN(::MKKOOCEJGGP* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::MKKOOCEJGGP*))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_MDFHEHEGAKN_OFFSET))(this, FFNKDGGHBPP);
	}

	static ::System::Void KJKJGPHBGAE(::KPACKGEBECC* EPFOEIJDMBM)
	{
		return ((::System::Void(*)(::KPACKGEBECC*))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_KJKJGPHBGAE_OFFSET))(EPFOEIJDMBM);
	}

	static ::MoleMole::Battle::CurveMoveComponent_Config_MoveType LMEKHDLKMEA(::KPACKGEBECC* EPFOEIJDMBM, ::MoleMole::Battle::CurveMoveComponent_Config_MoveType OINOPLGMNDE)
	{
		return ((::MoleMole::Battle::CurveMoveComponent_Config_MoveType(*)(::KPACKGEBECC*, ::MoleMole::Battle::CurveMoveComponent_Config_MoveType))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_LMEKHDLKMEA_OFFSET))(EPFOEIJDMBM, OINOPLGMNDE);
	}

	static ::System::Boolean LPKCKOFGJON(::JLGEFIGMLIA_MDGMEECICBK& param_0)
	{
		return ((::System::Boolean(*)(::JLGEFIGMLIA_MDGMEECICBK&))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_LPKCKOFGJON_OFFSET))(param_0);
	}

	static ::System::Boolean KEKCFIMLKLP(::FluffyUnderware::Curvy::CurvySplineSegment* KOAHOHGGPFD)
	{
		return ((::System::Boolean(*)(::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_KEKCFIMLKLP_OFFSET))(KOAHOHGGPFD);
	}

	::System::Void CCEGCKFCGKN(::KPACKGEBECC* EPFOEIJDMBM, ::System::Int32 FKGNDKNHAEH, ::System::Int32 AKGGKGEPJLP, ::System::Boolean LHNPEAFLEBC, ::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode GDENHJIHCHN)
	{
		return ((::System::Void(*)(::PVOID, ::KPACKGEBECC*, ::System::Int32, ::System::Int32, ::System::Boolean, ::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_CCEGCKFCGKN_OFFSET))(this, EPFOEIJDMBM, FKGNDKNHAEH, AKGGKGEPJLP, LHNPEAFLEBC, GDENHJIHCHN);
	}

	static ::FluffyUnderware::Curvy::OrientationAxisEnum PEMCPIGHHLN(::KPACKGEBECC* EPFOEIJDMBM)
	{
		return ((::FluffyUnderware::Curvy::OrientationAxisEnum(*)(::KPACKGEBECC*))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_PEMCPIGHHLN_OFFSET))(EPFOEIJDMBM);
	}

	static ::System::Void EDLEDNNCDMP(::KPACKGEBECC* EPFOEIJDMBM)
	{
		return ((::System::Void(*)(::KPACKGEBECC*))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_EDLEDNNCDMP_OFFSET))(EPFOEIJDMBM);
	}

	static ::System::Boolean AOFGOCBPNPG(::KPACKGEBECC* EPFOEIJDMBM, ::FluffyUnderware::Curvy::CurvySplineSegment* LBJFIEGMEDG)
	{
		return ((::System::Boolean(*)(::KPACKGEBECC*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_AOFGOCBPNPG_OFFSET))(EPFOEIJDMBM, LBJFIEGMEDG);
	}

	static ::System::Void NIODNNFBADA(::JLGEFIGMLIA_MDGMEECICBK& param_0)
	{
		return ((::System::Void(*)(::JLGEFIGMLIA_MDGMEECICBK&))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_NIODNNFBADA_OFFSET))(param_0);
	}

	::System::Void NIGDIMFIAEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_NIGDIMFIAEJ_OFFSET))(this);
	}

	static ::MoleMole::Battle::CurveMove_CurvySplineIndex NEHOHCDJAIK(::FluffyUnderware::Curvy::CurvySpline* PJLEHOLOIGI, ::FluffyUnderware::Curvy::CurvySplineSegment* KOAHOHGGPFD)
	{
		return ((::MoleMole::Battle::CurveMove_CurvySplineIndex(*)(::FluffyUnderware::Curvy::CurvySpline*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_NEHOHCDJAIK_OFFSET))(PJLEHOLOIGI, KOAHOHGGPFD);
	}

	static ::System::Void BAHPPIGMMKN(::KPACKGEBECC* EPFOEIJDMBM, ::DLLLACFEBJF JPJBIBPBODE, ::MoleMole::Battle::CurveMove_GamePlayIndex ABHBKFJKINO)
	{
		return ((::System::Void(*)(::KPACKGEBECC*, ::DLLLACFEBJF, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_BAHPPIGMMKN_OFFSET))(EPFOEIJDMBM, JPJBIBPBODE, ABHBKFJKINO);
	}

	static ::System::Boolean FDHAADEJOFO(::FluffyUnderware::Curvy::CurvySplineSegment* EJCBEJMGFAJ, ::FluffyUnderware::Curvy::CurvySplineSegment* EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::FluffyUnderware::Curvy::CurvySplineSegment*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_FDHAADEJOFO_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}

	static ::System::Void PJNBLHGFKON(::KPACKGEBECC* EPFOEIJDMBM)
	{
		return ((::System::Void(*)(::KPACKGEBECC*))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_PJNBLHGFKON_OFFSET))(EPFOEIJDMBM);
	}

	::System::Void MAOFDCDLPBO(::Unity::Jobs::JobHandle BJOOLNIDBJH)
	{
		return ((::System::Void(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_MAOFDCDLPBO_OFFSET))(this, BJOOLNIDBJH);
	}

	static ::System::Void MIEJCOCEKMM(::KPACKGEBECC* EPFOEIJDMBM, ::System::Single OHOGDOMNHNK, ::FluffyUnderware::Curvy::CurvySplineSegment*& KCMGHEINGFG, ::System::Boolean& NGILJHLHLLH)
	{
		return ((::System::Void(*)(::KPACKGEBECC*, ::System::Single, ::FluffyUnderware::Curvy::CurvySplineSegment*&, ::System::Boolean&))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_MIEJCOCEKMM_OFFSET))(EPFOEIJDMBM, OHOGDOMNHNK, KCMGHEINGFG, NGILJHLHLLH);
	}

	static ::System::Void BGBDLEGDPEK(::UnityEngine::Quaternion DALIHPFNFFO, ::UnityEngine::Vector3& CLMBODECGIK, ::UnityEngine::Vector3& GLGOOKBDEOK)
	{
		return ((::System::Void(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_BGBDLEGDPEK_OFFSET))(DALIHPFNFFO, CLMBODECGIK, GLGOOKBDEOK);
	}

	::System::Void LFJDENOBENJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_LFJDENOBENJ_OFFSET))(this);
	}

	static ::System::Void HECJDHKKAGH(::KPACKGEBECC* EPFOEIJDMBM, ::System::Boolean FMDCBAKMDKM, ::LNJJLDMLLHC* OBKICKGGFEO)
	{
		return ((::System::Void(*)(::KPACKGEBECC*, ::System::Boolean, ::LNJJLDMLLHC*))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_HECJDHKKAGH_OFFSET))(EPFOEIJDMBM, FMDCBAKMDKM, OBKICKGGFEO);
	}

	::System::Void OCGDALPKCHF(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_OCGDALPKCHF_OFFSET))(this, BKLGNCBNEGM);
	}

	static ::System::Void MONJNOKBFHO(::JLGEFIGMLIA* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::JLGEFIGMLIA*))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_MONJNOKBFHO_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void FIDLFIAGJCA(::KPACKGEBECC* EPFOEIJDMBM, ::System::Boolean FMDCBAKMDKM)
	{
		return ((::System::Void(*)(::KPACKGEBECC*, ::System::Boolean))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_FIDLFIAGJCA_OFFSET))(EPFOEIJDMBM, FMDCBAKMDKM);
	}

	static ::System::Void KHBONHCBHOK(::GEIHCPAOKKK* OHPJHPEOFLD, ::KPACKGEBECC* EPFOEIJDMBM, ::System::Boolean FMDCBAKMDKM, ::LNJJLDMLLHC* OBKICKGGFEO)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::KPACKGEBECC*, ::System::Boolean, ::LNJJLDMLLHC*))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_KHBONHCBHOK_OFFSET))(OHPJHPEOFLD, EPFOEIJDMBM, FMDCBAKMDKM, OBKICKGGFEO);
	}

	static ::System::Void BMIBAMMNKNP(::KPACKGEBECC* EPFOEIJDMBM, ::MoleMole::Battle::CurveMove_GamePlayIndex ABHBKFJKINO)
	{
		return ((::System::Void(*)(::KPACKGEBECC*, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_BMIBAMMNKNP_OFFSET))(EPFOEIJDMBM, ABHBKFJKINO);
	}

	::System::Void KGODHIOKNMD(::Unity::Jobs::JobHandle BJOOLNIDBJH)
	{
		return ((::System::Void(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_KGODHIOKNMD_OFFSET))(this, BJOOLNIDBJH);
	}

	::System::Void CFNJGCOHIJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_CFNJGCOHIJH_OFFSET))(this);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* FPCLPIFBHLM(::KPACKGEBECC* EPFOEIJDMBM, ::FluffyUnderware::Curvy::CurvySplineSegment* KOAHOHGGPFD)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::KPACKGEBECC*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_FPCLPIFBHLM_OFFSET))(EPFOEIJDMBM, KOAHOHGGPFD);
	}

	static ::UnityEngine::Quaternion EKIFIBKFAPI(::KPACKGEBECC* EPFOEIJDMBM, ::UnityEngine::Vector3 KBHFBLJPFJH, ::UnityEngine::Vector3 CFJFMMGPGKE, ::UnityEngine::Quaternion BFBELMDIAHI, ::UnityEngine::Quaternion DALIHPFNFFO)
	{
		return ((::UnityEngine::Quaternion(*)(::KPACKGEBECC*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_EKIFIBKFAPI_OFFSET))(EPFOEIJDMBM, KBHFBLJPFJH, CFJFMMGPGKE, BFBELMDIAHI, DALIHPFNFFO);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_APAGIJMHEAK_OFFSET))(this, KECKGDFIALJ);
	}

	static ::System::Void LCOMPIBAKEI(::KPACKGEBECC* EPFOEIJDMBM, ::KPACKGEBECC_FCPOKBMFHGH DLJCABIADKO, ::System::Boolean BGKONAGFLBK, ::System::Boolean FMDCBAKMDKM)
	{
		return ((::System::Void(*)(::KPACKGEBECC*, ::KPACKGEBECC_FCPOKBMFHGH, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_LCOMPIBAKEI_OFFSET))(EPFOEIJDMBM, DLJCABIADKO, BGKONAGFLBK, FMDCBAKMDKM);
	}

	static ::System::Void ONJLDCLHKEH(::GEIHCPAOKKK* OHPJHPEOFLD, ::KPACKGEBECC* OPIDDIHGFEN, ::BNKIPOEJNNB* DFACBBJHKHC)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::KPACKGEBECC*, ::BNKIPOEJNNB*))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_ONJLDCLHKEH_OFFSET))(OHPJHPEOFLD, OPIDDIHGFEN, DFACBBJHKHC);
	}

	static ::System::Boolean INIGLFEEIOH(::JLGEFIGMLIA_MDGMEECICBK& param_0)
	{
		return ((::System::Boolean(*)(::JLGEFIGMLIA_MDGMEECICBK&))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_INIGLFEEIOH_OFFSET))(param_0);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* ACOKKIFAGMA_1(::FluffyUnderware::Curvy::CurvySpline* PJLEHOLOIGI, ::MoleMole::Battle::CurveMove_GamePlayIndex ABHBKFJKINO)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::FluffyUnderware::Curvy::CurvySpline*, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_ACOKKIFAGMA_1_OFFSET))(PJLEHOLOIGI, ABHBKFJKINO);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* GCAEMDKEMNN(::KPACKGEBECC* EPFOEIJDMBM, ::System::Single BBOBPDPFLAI)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::KPACKGEBECC*, ::System::Single))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_GCAEMDKEMNN_OFFSET))(EPFOEIJDMBM, BBOBPDPFLAI);
	}

	static ::System::Void HBBGDKLDFPF(::KPACKGEBECC* EPFOEIJDMBM, ::System::Boolean FMDCBAKMDKM)
	{
		return ((::System::Void(*)(::KPACKGEBECC*, ::System::Boolean))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_HBBGDKLDFPF_OFFSET))(EPFOEIJDMBM, FMDCBAKMDKM);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* ACCOGOICNGA(::KPACKGEBECC* EPFOEIJDMBM, ::FluffyUnderware::Curvy::CurvySplineSegment* KOAHOHGGPFD)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::KPACKGEBECC*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_ACCOGOICNGA_OFFSET))(EPFOEIJDMBM, KOAHOHGGPFD);
	}

	static ::System::Void EADDIGIEIGK(::KPACKGEBECC* EPFOEIJDMBM, ::System::Boolean FMDCBAKMDKM)
	{
		return ((::System::Void(*)(::KPACKGEBECC*, ::System::Boolean))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_EADDIGIEIGK_OFFSET))(EPFOEIJDMBM, FMDCBAKMDKM);
	}

	static ::System::Void PMHJBNNPCLB(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_PMHJBNNPCLB_OFFSET))(KECKGDFIALJ);
	}

	static ::System::String* BGAJHAABDGC(::FluffyUnderware::Curvy::CurvySplineSegment* KOAHOHGGPFD)
	{
		return ((::System::String*(*)(::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_BGAJHAABDGC_OFFSET))(KOAHOHGGPFD);
	}

	::System::Void OBMLNOAEBKJ(::Unity::Jobs::JobHandle BJOOLNIDBJH)
	{
		return ((::System::Void(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_OBMLNOAEBKJ_OFFSET))(this, BJOOLNIDBJH);
	}

	::System::Void GAHDAEGALMC(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_GAHDAEGALMC_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void AFOHKPLIMMG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_AFOHKPLIMMG_OFFSET))(this);
	}

	static ::System::Void JCAOALJFHIK(::KPACKGEBECC* EPFOEIJDMBM, ::System::Single NCDIFNAGHOL, ::System::Single CIHBCACIDLG)
	{
		return ((::System::Void(*)(::KPACKGEBECC*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_JCAOALJFHIK_OFFSET))(EPFOEIJDMBM, NCDIFNAGHOL, CIHBCACIDLG);
	}

	::System::Void INEGOEGIOKM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_INEGOEGIOKM_OFFSET))(this);
	}

	static ::JLGEFIGMLIA* IBPOAGJLPDN()
	{
		return ((::JLGEFIGMLIA*(*)())((::PBYTE)hIl2Cpp + JLGEFIGMLIA_IBPOAGJLPDN_OFFSET))();
	}

	::System::Void EJKLFBNHJJH(::KPACKGEBECC* EPFOEIJDMBM, ::KPACKGEBECC_FCPOKBMFHGH DLJCABIADKO)
	{
		return ((::System::Void(*)(::PVOID, ::KPACKGEBECC*, ::KPACKGEBECC_FCPOKBMFHGH))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_EJKLFBNHJJH_OFFSET))(this, EPFOEIJDMBM, DLJCABIADKO);
	}

	static ::System::Void EFCPGLFIDLG(::KPACKGEBECC* EPFOEIJDMBM, ::System::Single KDKFJJPAJAE, ::UnityEngine::Vector3& BHMBDEKCAMA, ::UnityEngine::Vector3& PCOEGKNOBHA, ::UnityEngine::Vector3& KBHFBLJPFJH, ::System::Boolean FMDCBAKMDKM)
	{
		return ((::System::Void(*)(::KPACKGEBECC*, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Boolean))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_EFCPGLFIDLG_OFFSET))(EPFOEIJDMBM, KDKFJJPAJAE, BHMBDEKCAMA, PCOEGKNOBHA, KBHFBLJPFJH, FMDCBAKMDKM);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_CMFOMGGDPPA_OFFSET))(this);
	}

	static ::System::Void HNGICHCDBLB(::KPACKGEBECC* EPFOEIJDMBM, ::System::Boolean BGKONAGFLBK, ::System::Boolean FMDCBAKMDKM)
	{
		return ((::System::Void(*)(::KPACKGEBECC*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_HNGICHCDBLB_OFFSET))(EPFOEIJDMBM, BGKONAGFLBK, FMDCBAKMDKM);
	}

	static ::System::Void NDAJFBJIJGJ(::KPACKGEBECC* EPFOEIJDMBM, ::FluffyUnderware::Curvy::CurvySplineSegment* HODAIDNDKHD, ::System::Boolean BGKONAGFLBK, ::System::Boolean FMDCBAKMDKM)
	{
		return ((::System::Void(*)(::KPACKGEBECC*, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_NDAJFBJIJGJ_OFFSET))(EPFOEIJDMBM, HODAIDNDKHD, BGKONAGFLBK, FMDCBAKMDKM);
	}

	::System::Void CDJPHDBJBAD(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_CDJPHDBJBAD_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void MECADGOCFLA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_MECADGOCFLA_OFFSET))(this);
	}

	::System::Void KOFMFDLCOEA(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_KOFMFDLCOEA_OFFSET))(this, ABHBKFJKINO);
	}

	static ::System::Void BAGLMPOIKEP(::KPACKGEBECC* EPFOEIJDMBM)
	{
		return ((::System::Void(*)(::KPACKGEBECC*))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_BAGLMPOIKEP_OFFSET))(EPFOEIJDMBM);
	}

	static ::System::Boolean GFFCPOEPHHD(::FluffyUnderware::Curvy::CurvySplineSegment* KOAHOHGGPFD)
	{
		return ((::System::Boolean(*)(::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_GFFCPOEPHHD_OFFSET))(KOAHOHGGPFD);
	}

	::System::Void MNEJHDIKCGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_MNEJHDIKCGJ_OFFSET))(this);
	}

	static ::System::Void NFBHOFGCLIC(::KPACKGEBECC* EPFOEIJDMBM, ::System::Boolean FMDCBAKMDKM)
	{
		return ((::System::Void(*)(::KPACKGEBECC*, ::System::Boolean))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_NFBHOFGCLIC_OFFSET))(EPFOEIJDMBM, FMDCBAKMDKM);
	}

	::System::Void GANCPABBFNJ(::System::String* KPIAFDELPJL, ::UnityEngine::GameObject* JEIDPPCEHLD)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_GANCPABBFNJ_OFFSET))(this, KPIAFDELPJL, JEIDPPCEHLD);
	}

	static ::System::Single MBOEPLBBIOG(::KPACKGEBECC* EPFOEIJDMBM)
	{
		return ((::System::Single(*)(::KPACKGEBECC*))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_MBOEPLBBIOG_OFFSET))(EPFOEIJDMBM);
	}

	static ::System::Void KPAABICFGPH(::KPACKGEBECC* EPFOEIJDMBM, ::System::Single KDKFJJPAJAE, ::UnityEngine::Vector3& FCNPOKNKMOD, ::UnityEngine::Vector3& CLMBODECGIK, ::UnityEngine::Vector3& GLGOOKBDEOK, ::System::Boolean FMDCBAKMDKM, ::LNJJLDMLLHC* OBKICKGGFEO)
	{
		return ((::System::Void(*)(::KPACKGEBECC*, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Boolean, ::LNJJLDMLLHC*))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_KPAABICFGPH_OFFSET))(EPFOEIJDMBM, KDKFJJPAJAE, FCNPOKNKMOD, CLMBODECGIK, GLGOOKBDEOK, FMDCBAKMDKM, OBKICKGGFEO);
	}

	static ::System::Void EPJFBAALLEE(::KPACKGEBECC* EPFOEIJDMBM, ::UnityEngine::Vector3 IACKHFCLPJI, ::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode GPDMJNPJKOG, ::System::Boolean FMDCBAKMDKM)
	{
		return ((::System::Void(*)(::KPACKGEBECC*, ::UnityEngine::Vector3, ::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode, ::System::Boolean))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_EPJFBAALLEE_OFFSET))(EPFOEIJDMBM, IACKHFCLPJI, GPDMJNPJKOG, FMDCBAKMDKM);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* ACCOGOICNGA_1(::KPACKGEBECC* EPFOEIJDMBM, ::System::Single BBOBPDPFLAI)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::KPACKGEBECC*, ::System::Single))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_ACCOGOICNGA_1_OFFSET))(EPFOEIJDMBM, BBOBPDPFLAI);
	}

	static ::MoleMole::Battle::CurveMove_GamePlayIndex PJFBHFBKLPA(::FluffyUnderware::Curvy::CurvySpline* PJLEHOLOIGI, ::FluffyUnderware::Curvy::CurvySplineSegment* KOAHOHGGPFD)
	{
		return ((::MoleMole::Battle::CurveMove_GamePlayIndex(*)(::FluffyUnderware::Curvy::CurvySpline*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_PJFBHFBKLPA_OFFSET))(PJLEHOLOIGI, KOAHOHGGPFD);
	}

	::System::Void ABDLEONNPAJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_ABDLEONNPAJ_OFFSET))(this);
	}

	static ::System::Void NAAFHBAPODH(::KPACKGEBECC* EPFOEIJDMBM, ::System::UInt32 LADKGBECBPI)
	{
		return ((::System::Void(*)(::KPACKGEBECC*, ::System::UInt32))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_NAAFHBAPODH_OFFSET))(EPFOEIJDMBM, LADKGBECBPI);
	}

	::System::Void KBFGOOLNGMI(::KPACKGEBECC* EPFOEIJDMBM, ::JFBNBOHNJBF* IHAMOGFIMAD, ::UnityEngine::Vector3 FCNPOKNKMOD, ::UnityEngine::Quaternion FPNKBIPMBCA)
	{
		return ((::System::Void(*)(::PVOID, ::KPACKGEBECC*, ::JFBNBOHNJBF*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_KBFGOOLNGMI_OFFSET))(this, EPFOEIJDMBM, IHAMOGFIMAD, FCNPOKNKMOD, FPNKBIPMBCA);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_IFHNMAGGFAE_OFFSET))(this);
	}

	static ::System::Single CFGINMPJGJA(::KPACKGEBECC* EPFOEIJDMBM, ::FluffyUnderware::Curvy::CurvySplineSegment* KADDPFPFMKL)
	{
		return ((::System::Single(*)(::KPACKGEBECC*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_CFGINMPJGJA_OFFSET))(EPFOEIJDMBM, KADDPFPFMKL);
	}

	static ::System::Void EGNPNGKKKPJ(::KPACKGEBECC* EPFOEIJDMBM, ::GEIHCPAOKKK* MNIEFFFEKEH)
	{
		return ((::System::Void(*)(::KPACKGEBECC*, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_EGNPNGKKKPJ_OFFSET))(EPFOEIJDMBM, MNIEFFFEKEH);
	}

	static ::System::Single GLCIHGOCHMP(::KPACKGEBECC* EPFOEIJDMBM, ::System::Single BBOBPDPFLAI, ::FluffyUnderware::Curvy::CurvySplineSegment* BPKKDCHHEHI, ::FluffyUnderware::Curvy::CurvySplineSegment* GEBPLPHJOFG)
	{
		return ((::System::Single(*)(::KPACKGEBECC*, ::System::Single, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_GLCIHGOCHMP_OFFSET))(EPFOEIJDMBM, BBOBPDPFLAI, BPKKDCHHEHI, GEBPLPHJOFG);
	}

	::System::Void FMKEIPOKAOC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_FMKEIPOKAOC_OFFSET))(this);
	}

	static ::System::Void OOBEEHGHNLE(::JLGEFIGMLIA_MDGMEECICBK& param_0)
	{
		return ((::System::Void(*)(::JLGEFIGMLIA_MDGMEECICBK&))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_OOBEEHGHNLE_OFFSET))(param_0);
	}

	static ::System::Void LNHJFJPGBDI(::KPACKGEBECC* EPFOEIJDMBM, ::MoleMole::Battle::CurveMove_GamePlayIndex ABHBKFJKINO, ::System::Boolean LHNPEAFLEBC, ::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode GDENHJIHCHN, ::System::Boolean LCAGFCCMPLJ, ::UnityEngine::AnimationCurve* CMKKILOHFCL, ::System::Boolean FMDCBAKMDKM)
	{
		return ((::System::Void(*)(::KPACKGEBECC*, ::MoleMole::Battle::CurveMove_GamePlayIndex, ::System::Boolean, ::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode, ::System::Boolean, ::UnityEngine::AnimationCurve*, ::System::Boolean))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_LNHJFJPGBDI_OFFSET))(EPFOEIJDMBM, ABHBKFJKINO, LHNPEAFLEBC, GDENHJIHCHN, LCAGFCCMPLJ, CMKKILOHFCL, FMDCBAKMDKM);
	}

	static ::System::Void FNHDPGJGLMO(::KPACKGEBECC* EPFOEIJDMBM, ::JFBNBOHNJBF* IHAMOGFIMAD, ::UnityEngine::Vector3 IACKHFCLPJI, ::UnityEngine::Quaternion DAFDMLMACJK)
	{
		return ((::System::Void(*)(::KPACKGEBECC*, ::JFBNBOHNJBF*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_FNHDPGJGLMO_OFFSET))(EPFOEIJDMBM, IHAMOGFIMAD, IACKHFCLPJI, DAFDMLMACJK);
	}

	static ::System::Void JNKBFGIBGOF(::KPACKGEBECC* EPFOEIJDMBM, ::System::Boolean FMDCBAKMDKM)
	{
		return ((::System::Void(*)(::KPACKGEBECC*, ::System::Boolean))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_JNKBFGIBGOF_OFFSET))(EPFOEIJDMBM, FMDCBAKMDKM);
	}

	::System::Void CBIIAFHMHFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_CBIIAFHMHFF_OFFSET))(this);
	}

	::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_HMLGKBFFNHI_OFFSET))(this, BKLGNCBNEGM);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* EEBPHHBPJCN(::KPACKGEBECC* EPFOEIJDMBM, ::FluffyUnderware::Curvy::CurvySplineSegment* KOAHOHGGPFD)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::KPACKGEBECC*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_EEBPHHBPJCN_OFFSET))(EPFOEIJDMBM, KOAHOHGGPFD);
	}

	static ::MoleMole::Battle::CurveMove_CurvySplineIndex OMLIOFGBIBJ(::FluffyUnderware::Curvy::CurvySpline* PJLEHOLOIGI, ::MoleMole::Battle::CurveMove_GamePlayIndex ABHBKFJKINO)
	{
		return ((::MoleMole::Battle::CurveMove_CurvySplineIndex(*)(::FluffyUnderware::Curvy::CurvySpline*, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_OMLIOFGBIBJ_OFFSET))(PJLEHOLOIGI, ABHBKFJKINO);
	}

	static ::System::Void BAHPPIGMMKN_1(::KPACKGEBECC* EPFOEIJDMBM, ::DLLLACFEBJF JPJBIBPBODE, ::MoleMole::Battle::CurveMove_CurvySplineIndex ABHBKFJKINO)
	{
		return ((::System::Void(*)(::KPACKGEBECC*, ::DLLLACFEBJF, ::MoleMole::Battle::CurveMove_CurvySplineIndex))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_BAHPPIGMMKN_1_OFFSET))(EPFOEIJDMBM, JPJBIBPBODE, ABHBKFJKINO);
	}

	static ::System::Void DCKBLBGJJBM(::UnityEngine::Vector3 MOJKMIAKGDF, ::UnityEngine::Quaternion BOLCNCMINBM, ::UnityEngine::Transform* PBPBGNBGNDA, ::UnityEngine::Vector3 JABCBJCGNJD, ::UnityEngine::Quaternion HNNOMEAPCLI, ::UnityEngine::Vector3& OOGIBHLKMLI, ::UnityEngine::Quaternion& EMPANIPPKFG)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_DCKBLBGJJBM_OFFSET))(MOJKMIAKGDF, BOLCNCMINBM, PBPBGNBGNDA, JABCBJCGNJD, HNNOMEAPCLI, OOGIBHLKMLI, EMPANIPPKFG);
	}

	static ::System::Void AKEBNAAJCEL(::JLGEFIGMLIA_MDGMEECICBK& param_0)
	{
		return ((::System::Void(*)(::JLGEFIGMLIA_MDGMEECICBK&))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_AKEBNAAJCEL_OFFSET))(param_0);
	}

	::System::Void NDMGOHDCMAM(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_NDMGOHDCMAM_OFFSET))(this, BKLGNCBNEGM);
	}

	static ::System::Void NPOLNFDBOOD(::KPACKGEBECC* EPFOEIJDMBM, ::System::Boolean FMDCBAKMDKM)
	{
		return ((::System::Void(*)(::KPACKGEBECC*, ::System::Boolean))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_NPOLNFDBOOD_OFFSET))(EPFOEIJDMBM, FMDCBAKMDKM);
	}

	static ::System::Void MJMKBFLLMMI(::KPACKGEBECC* EPFOEIJDMBM, ::System::Boolean FMDCBAKMDKM, ::LNJJLDMLLHC* OBKICKGGFEO)
	{
		return ((::System::Void(*)(::KPACKGEBECC*, ::System::Boolean, ::LNJJLDMLLHC*))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_MJMKBFLLMMI_OFFSET))(EPFOEIJDMBM, FMDCBAKMDKM, OBKICKGGFEO);
	}

	static ::System::Void MMIGCDPBOLI(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_MMIGCDPBOLI_OFFSET))(ABHBKFJKINO);
	}

	static ::MoleMole::Battle::CurveMoveComponent_Config_MoveDirection NMIOIBGGPIL(::JLGEFIGMLIA_GFMGOIKLDLL& param_0)
	{
		return ((::MoleMole::Battle::CurveMoveComponent_Config_MoveDirection(*)(::JLGEFIGMLIA_GFMGOIKLDLL&))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_NMIOIBGGPIL_OFFSET))(param_0);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void BLACGINMFGJ(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_BLACGINMFGJ_OFFSET))(this, BKLGNCBNEGM);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* EEKENLNENOK(::KPACKGEBECC* EPFOEIJDMBM, ::FluffyUnderware::Curvy::CurvySplineSegment* KOAHOHGGPFD)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::KPACKGEBECC*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_EEKENLNENOK_OFFSET))(EPFOEIJDMBM, KOAHOHGGPFD);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* GKDGJLGAMCE(::KPACKGEBECC* EPFOEIJDMBM, ::FluffyUnderware::Curvy::CurvySplineSegment* KOAHOHGGPFD, ::System::Boolean FMDCBAKMDKM)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::KPACKGEBECC*, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::System::Boolean))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_GKDGJLGAMCE_OFFSET))(EPFOEIJDMBM, KOAHOHGGPFD, FMDCBAKMDKM);
	}

	static ::System::Void JANNCODIOBC(::GEIHCPAOKKK* OHPJHPEOFLD, ::KPACKGEBECC* EPFOEIJDMBM, ::System::Boolean FMDCBAKMDKM, ::LNJJLDMLLHC* OBKICKGGFEO)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::KPACKGEBECC*, ::System::Boolean, ::LNJJLDMLLHC*))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_JANNCODIOBC_OFFSET))(OHPJHPEOFLD, EPFOEIJDMBM, FMDCBAKMDKM, OBKICKGGFEO);
	}

	::System::Void HIIIOBCFPNK(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_HIIIOBCFPNK_OFFSET))(this, BKLGNCBNEGM);
	}

	static ::System::Void LNHJFJPGBDI_1(::KPACKGEBECC* EPFOEIJDMBM, ::System::Boolean FMDCBAKMDKM)
	{
		return ((::System::Void(*)(::KPACKGEBECC*, ::System::Boolean))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_LNHJFJPGBDI_1_OFFSET))(EPFOEIJDMBM, FMDCBAKMDKM);
	}

	::System::Void GPJFMPJIOHO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_GPJFMPJIOHO_OFFSET))(this);
	}

	static ::System::Void JIHKCLCOFIF(::KPACKGEBECC* EPFOEIJDMBM, ::UnityEngine::Quaternion MMMAFHCLPBK, ::MoleMole::Battle::CurveMoveComponent_Config_MoveType OINOPLGMNDE, ::System::Boolean FMDCBAKMDKM, ::LNJJLDMLLHC* OBKICKGGFEO)
	{
		return ((::System::Void(*)(::KPACKGEBECC*, ::UnityEngine::Quaternion, ::MoleMole::Battle::CurveMoveComponent_Config_MoveType, ::System::Boolean, ::LNJJLDMLLHC*))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_JIHKCLCOFIF_OFFSET))(EPFOEIJDMBM, MMMAFHCLPBK, OINOPLGMNDE, FMDCBAKMDKM, OBKICKGGFEO);
	}

	::System::Void BGMLMFPMGDG(::KPACKGEBECC* EPFOEIJDMBM, ::DLLLACFEBJF JPJBIBPBODE, ::MoleMole::Battle::CurveMove_GamePlayIndex ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::KPACKGEBECC*, ::DLLLACFEBJF, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_BGMLMFPMGDG_OFFSET))(this, EPFOEIJDMBM, JPJBIBPBODE, ABHBKFJKINO);
	}

	::System::Void PDBPKKAHKDF(::JFBNBOHNJBF* IHAMOGFIMAD)
	{
		return ((::System::Void(*)(::PVOID, ::JFBNBOHNJBF*))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_PDBPKKAHKDF_OFFSET))(this, IHAMOGFIMAD);
	}

	::System::Void BGMLMFPMGDG_1(::KPACKGEBECC* EPFOEIJDMBM, ::DLLLACFEBJF JPJBIBPBODE, ::MoleMole::Battle::CurveMove_CurvySplineIndex ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::KPACKGEBECC*, ::DLLLACFEBJF, ::MoleMole::Battle::CurveMove_CurvySplineIndex))((::PBYTE)hIl2Cpp + JLGEFIGMLIA_BGMLMFPMGDG_1_OFFSET))(this, EPFOEIJDMBM, JPJBIBPBODE, ABHBKFJKINO);
	}
};
