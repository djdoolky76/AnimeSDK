#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKHMCDMMOJK.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/DDDAHJHLPJM.h"
#include "unitysdk/GALJGJIGMEK.h"
#include "unitysdk/MoleMole/Cameras/CameraDelayMoveDataBlendDefinition.h"
#include "unitysdk/MoleMole/Config/CameraDelayMoveMode.h"
#include "unitysdk/MoleMole/CameraOrbit.h"
#include "unitysdk/NOHGGLFKBEH.h"
#include "unitysdk/PipelineCamera/InterpCurve_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CCOMBCANKKK;
class LPAGMODELKC;
class PAPJAEPEIKJ;
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace MoleMole { class CameraDelayDatas; }
namespace MoleMole { class CameraModuleAvatarDataConfigExt; }
namespace MoleMole::Cameras { class CameraAvatarPrepareData; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace MoleMole::Cameras { template <typename T> class NapVirtual3DActionCamera_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define DFGPHIKFPPI_AEJGMMPIJLH_OFFSET UNITYSDK_OFFSET(0x7F74370)
#define DFGPHIKFPPI_AKHMFAGCDEC_OFFSET UNITYSDK_OFFSET(0x7F734E0)
#define DFGPHIKFPPI_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x7F713C0)
#define DFGPHIKFPPI_BJGBBMGLECN_OFFSET UNITYSDK_OFFSET(0x7F751B0)
#define DFGPHIKFPPI_BJLDEAKGHHA_OFFSET UNITYSDK_OFFSET(0x7F735F0)
#define DFGPHIKFPPI_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0x7F74F40)
#define DFGPHIKFPPI_BNDEOOELDNM_OFFSET UNITYSDK_OFFSET(0x7F751C0)
#define DFGPHIKFPPI_CKEOCJLJBFA_1_OFFSET UNITYSDK_OFFSET(0x7F73E90)
#define DFGPHIKFPPI_CKEOCJLJBFA_OFFSET UNITYSDK_OFFSET(0x7F74B20)
#define DFGPHIKFPPI_CKJLLANBAOB_OFFSET UNITYSDK_OFFSET(0x7F72180)
#define DFGPHIKFPPI_CLMMCNJNHKA_OFFSET UNITYSDK_OFFSET(0x7F74470)
#define DFGPHIKFPPI_DEJBLPBCMNA_OFFSET UNITYSDK_OFFSET(0x7F73640)
#define DFGPHIKFPPI_DPLPKHICLBC_OFFSET UNITYSDK_OFFSET(0x7F74A50)
#define DFGPHIKFPPI_ECOFAPEKCCD_OFFSET UNITYSDK_OFFSET(0x7F74040)
#define DFGPHIKFPPI_EGOKJBDHFII_OFFSET UNITYSDK_OFFSET(0x7F71A30)
#define DFGPHIKFPPI_FEJEJAHNIMH_OFFSET UNITYSDK_OFFSET(0x7F75380)
#define DFGPHIKFPPI_FENPLGEJDLF_OFFSET UNITYSDK_OFFSET(0x7F72450)
#define DFGPHIKFPPI_FFNECPOIOMP_OFFSET UNITYSDK_OFFSET(0x7F74700)
#define DFGPHIKFPPI_FMGLALDMMJK_OFFSET UNITYSDK_OFFSET(0x7F739C0)
#define DFGPHIKFPPI_GCEHDIOBOMM_OFFSET UNITYSDK_OFFSET(0x7F713B0)
#define DFGPHIKFPPI_HJOHFEKPHKL_OFFSET UNITYSDK_OFFSET(0x7F741B0)
#define DFGPHIKFPPI_HMGAKEKMBLI_OFFSET UNITYSDK_OFFSET(0x7F71FB0)
#define DFGPHIKFPPI_HPEIINFGHBA_OFFSET UNITYSDK_OFFSET(0x7F74FF0)
#define DFGPHIKFPPI_IJAFGGBLAAH_OFFSET UNITYSDK_OFFSET(0x7F72270)
#define DFGPHIKFPPI_IPGLFGNIJIE_OFFSET UNITYSDK_OFFSET(0x7F71800)
#define DFGPHIKFPPI_JDPPAPHNFDH_OFFSET UNITYSDK_OFFSET(0x7F71C10)
#define DFGPHIKFPPI_KCDMPKGDICJ_OFFSET UNITYSDK_OFFSET(0x7F719A0)
#define DFGPHIKFPPI_KIFHHCBNIGK_OFFSET UNITYSDK_OFFSET(0x7F73350)
#define DFGPHIKFPPI_LIIPDCMEGGJ_OFFSET UNITYSDK_OFFSET(0x7F715A0)
#define DFGPHIKFPPI_MODCHANABNO_OFFSET UNITYSDK_OFFSET(0x7F745B0)
#define DFGPHIKFPPI_NHMAGAAAMFI_OFFSET UNITYSDK_OFFSET(0x7F733C0)
#define DFGPHIKFPPI_NKJBOOJBEAE_OFFSET UNITYSDK_OFFSET(0x7F74C80)
#define DFGPHIKFPPI_OAGMFEFBDKN_OFFSET UNITYSDK_OFFSET(0x7F732C0)
#define DFGPHIKFPPI_OMBBDCKAFMI_OFFSET UNITYSDK_OFFSET(0x7F74DD0)
#define DFGPHIKFPPI_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x7F721E0)
#define DFGPHIKFPPI_PMGCCNCEAKI_OFFSET UNITYSDK_OFFSET(0x7F74640)
#define DFGPHIKFPPI_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x7F73550)
#define DFGPHIKFPPI_POIDKDHMCOP_OFFSET UNITYSDK_OFFSET(0x7F73480)
#define DFGPHIKFPPI__CTOR_OFFSET UNITYSDK_OFFSET(0x7F72EF0)

inline static constexpr unsigned int DFGPHIKFPPI_TypeDefinitionIndex = 53844;

class DFGPHIKFPPI : public ::DDDAHJHLPJM
{
public:
	::System::Collections::Generic::List_1<::PAPJAEPEIKJ*>* JFMJEAENBNB; // 0x38
	::MoleMole::Cameras::CameraDelayMoveDataBlendDefinition JMFOLPIBMND; // 0x40
	::Cinemachine::CameraState JBDIJLLGBKA; // 0x58
	::MoleMole::Cameras::NapVirtual3DActionCamera_1* GLKHPGFLFBF; // 0x140
	::MoleMole::CameraDelayDatas* GEMOMEOGJBP; // 0x148
	::MoleMole::CameraDelayDatas* OOHHDLKMNEF; // 0x150
	::MoleMole::CameraDelayDatas* HMGHNFJINKJ; // 0x158
	::CCOMBCANKKK* LOMNOIKFDPN; // 0x160
	::LPAGMODELKC* KOMEJEGKIFG; // 0x168
	::CCOMBCANKKK* CEOIGJKOOOC; // 0x170
	::MoleMole::CameraDelayDatas* KJAHNOGJLLE; // 0x178
	::MoleMole::CameraDelayDatas* IAEFOIKMDOF; // 0x180
	::MoleMole::Config::CameraDelayMoveMode HDLFANJCBKD; // 0x188

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGPHIKFPPI__CTOR_OFFSET))(this);
	}

	::GALJGJIGMEK GCEHDIOBOMM()
	{
		return ((::GALJGJIGMEK(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGPHIKFPPI_GCEHDIOBOMM_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::Cinemachine::CinemachineVirtualCameraBase* JNLBPMKIFNK, ::MoleMole::Cameras::CameraDataAccessor* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + DFGPHIKFPPI_BBOMJDBNHIC_OFFSET))(this, JNLBPMKIFNK, LJBPECKCCEA);
	}

	::System::Void IPGLFGNIJIE(::MoleMole::CameraModuleAvatarDataConfigExt* OLMACFDNMEC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*))((::PBYTE)hIl2Cpp + DFGPHIKFPPI_IPGLFGNIJIE_OFFSET))(this, OLMACFDNMEC);
	}

	::System::Void KCDMPKGDICJ(::CKHMCDMMOJK BLLEBKEADAO)
	{
		return ((::System::Void(*)(::PVOID, ::CKHMCDMMOJK))((::PBYTE)hIl2Cpp + DFGPHIKFPPI_KCDMPKGDICJ_OFFSET))(this, BLLEBKEADAO);
	}

	::System::Void EGOKJBDHFII(::UnityEngine::Vector3 CKPGOKHECCH, ::UnityEngine::Quaternion GJNLCLDFFIN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + DFGPHIKFPPI_EGOKJBDHFII_OFFSET))(this, CKPGOKHECCH, GJNLCLDFFIN);
	}

	::System::Void HMGAKEKMBLI(::Cinemachine::CameraState JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + DFGPHIKFPPI_HMGAKEKMBLI_OFFSET))(this, JKBLDFBGBPK);
	}

	::System::Void CKJLLANBAOB(::System::Single PMNLNNGEIFM, ::NOHGGLFKBEH& BLLBLFJKMFA, ::MoleMole::Cameras::CameraAvatarPrepareData* OECKPBFDDFK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::NOHGGLFKBEH&, ::MoleMole::Cameras::CameraAvatarPrepareData*))((::PBYTE)hIl2Cpp + DFGPHIKFPPI_CKJLLANBAOB_OFFSET))(this, PMNLNNGEIFM, BLLBLFJKMFA, OECKPBFDDFK);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM, ::Cinemachine::CameraState& ANOHIDIPEMN, ::NOHGGLFKBEH& BLLBLFJKMFA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Cinemachine::CameraState&, ::NOHGGLFKBEH&))((::PBYTE)hIl2Cpp + DFGPHIKFPPI_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM, ANOHIDIPEMN, BLLBLFJKMFA);
	}

	::System::Void OAGMFEFBDKN(::CKHMCDMMOJK MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::CKHMCDMMOJK))((::PBYTE)hIl2Cpp + DFGPHIKFPPI_OAGMFEFBDKN_OFFSET))(this, MIALFKCCCPI);
	}

	::UnityEngine::Vector3 KIFHHCBNIGK(::UnityEngine::Vector3 BFAKEJPJABF)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DFGPHIKFPPI_KIFHHCBNIGK_OFFSET))(this, BFAKEJPJABF);
	}

	::System::Boolean NHMAGAAAMFI(::MoleMole::Config::CameraDelayMoveMode GEJCKFFFKCL)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::CameraDelayMoveMode))((::PBYTE)hIl2Cpp + DFGPHIKFPPI_NHMAGAAAMFI_OFFSET))(this, GEJCKFFFKCL);
	}

	::System::Single POIDKDHMCOP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGPHIKFPPI_POIDKDHMCOP_OFFSET))(this);
	}

	::System::Void AKHMFAGCDEC(::MoleMole::CameraDelayDatas* GEMOMEOGJBP, ::MoleMole::CameraDelayDatas*& HMGHNFJINKJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraDelayDatas*, ::MoleMole::CameraDelayDatas*&))((::PBYTE)hIl2Cpp + DFGPHIKFPPI_AKHMFAGCDEC_OFFSET))(this, GEMOMEOGJBP, HMGHNFJINKJ);
	}

	::System::Void PNHPDOBPKKE(::Cinemachine::CinemachineVirtualCameraBase* MIALFKCCCPI, ::MoleMole::Cameras::CameraDataAccessor* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + DFGPHIKFPPI_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void FENPLGEJDLF(::System::Single PMNLNNGEIFM, ::NOHGGLFKBEH& BLLBLFJKMFA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::NOHGGLFKBEH&))((::PBYTE)hIl2Cpp + DFGPHIKFPPI_FENPLGEJDLF_OFFSET))(this, PMNLNNGEIFM, BLLBLFJKMFA);
	}

	::System::Void MODCHANABNO(::MoleMole::CameraModuleAvatarDataConfigExt* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*))((::PBYTE)hIl2Cpp + DFGPHIKFPPI_MODCHANABNO_OFFSET))(this, MIALFKCCCPI);
	}

	::Cinemachine::CameraState BJLDEAKGHHA()
	{
		return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGPHIKFPPI_BJLDEAKGHHA_OFFSET))(this);
	}

	::System::Void PMGCCNCEAKI(::Cinemachine::CameraState MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + DFGPHIKFPPI_PMGCCNCEAKI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Single JDPPAPHNFDH(::UnityEngine::Vector3 PMMHPDOBJAC, ::UnityEngine::Vector3 HKOFHOFPKBM, ::UnityEngine::Vector3 KBHFBLJPFJH)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DFGPHIKFPPI_JDPPAPHNFDH_OFFSET))(this, PMMHPDOBJAC, HKOFHOFPKBM, KBHFBLJPFJH);
	}

	static ::System::Void FFNECPOIOMP(::Il2CppArray<::MoleMole::CameraOrbit>* ALMNOGIJGAP, ::MoleMole::CameraOrbit IMPIJIGBPKN, ::System::Single MCFEOCGEHAE, ::PipelineCamera::InterpCurve_1<::UnityEngine::Vector2>& MBBEJCBNLEL, ::UnityEngine::Vector2& MIIEANKCKBL, ::System::Single& OMHFBOPGGBP)
	{
		return ((::System::Void(*)(::Il2CppArray<::MoleMole::CameraOrbit>*, ::MoleMole::CameraOrbit, ::System::Single, ::PipelineCamera::InterpCurve_1<::UnityEngine::Vector2>&, ::UnityEngine::Vector2&, ::System::Single&))((::PBYTE)hIl2Cpp + DFGPHIKFPPI_FFNECPOIOMP_OFFSET))(ALMNOGIJGAP, IMPIJIGBPKN, MCFEOCGEHAE, MBBEJCBNLEL, MIIEANKCKBL, OMHFBOPGGBP);
	}

	::MoleMole::CameraDelayDatas* ECOFAPEKCCD()
	{
		return ((::MoleMole::CameraDelayDatas*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGPHIKFPPI_ECOFAPEKCCD_OFFSET))(this);
	}

	::System::Void DPLPKHICLBC(::UnityEngine::Vector3 MIALFKCCCPI, ::UnityEngine::Quaternion KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + DFGPHIKFPPI_DPLPKHICLBC_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void IJAFGGBLAAH(::System::Single PMNLNNGEIFM, ::NOHGGLFKBEH& BLLBLFJKMFA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::NOHGGLFKBEH&))((::PBYTE)hIl2Cpp + DFGPHIKFPPI_IJAFGGBLAAH_OFFSET))(this, PMNLNNGEIFM, BLLBLFJKMFA);
	}

	::CCOMBCANKKK* CKEOCJLJBFA(::System::Single PMNLNNGEIFM)
	{
		return ((::CCOMBCANKKK*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DFGPHIKFPPI_CKEOCJLJBFA_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void HJOHFEKPHKL(::Cinemachine::CameraState& JKBLDFBGBPK, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + DFGPHIKFPPI_HJOHFEKPHKL_OFFSET))(this, JKBLDFBGBPK, PMNLNNGEIFM);
	}

	::System::Void AEJGMMPIJLH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGPHIKFPPI_AEJGMMPIJLH_OFFSET))(this);
	}

	::System::Void LIIPDCMEGGJ(::Cinemachine::CinemachineVirtualCameraBase* JNLBPMKIFNK, ::MoleMole::Cameras::CameraDataAccessor* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + DFGPHIKFPPI_LIIPDCMEGGJ_OFFSET))(this, JNLBPMKIFNK, LJBPECKCCEA);
	}

	::CCOMBCANKKK* OMBBDCKAFMI(::MoleMole::CameraDelayDatas* ONMMJBIJBJJ, ::MoleMole::CameraDelayDatas* CBIEBJOONOL, ::UnityEngine::AnimationCurve* BJGNDLDCLHF, ::System::Single MDPPNMIPDMP, ::System::Single ICFDDIOCEHA, ::CCOMBCANKKK* FADLMPMKMKO)
	{
		return ((::CCOMBCANKKK*(*)(::PVOID, ::MoleMole::CameraDelayDatas*, ::MoleMole::CameraDelayDatas*, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::CCOMBCANKKK*))((::PBYTE)hIl2Cpp + DFGPHIKFPPI_OMBBDCKAFMI_OFFSET))(this, ONMMJBIJBJJ, CBIEBJOONOL, BJGNDLDCLHF, MDPPNMIPDMP, ICFDDIOCEHA, FADLMPMKMKO);
	}

	::System::Void BKJPMPBEHDO(::System::Single MIALFKCCCPI, ::Cinemachine::CameraState& KMGKAIDEIBA, ::NOHGGLFKBEH& FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Cinemachine::CameraState&, ::NOHGGLFKBEH&))((::PBYTE)hIl2Cpp + DFGPHIKFPPI_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void HPEIINFGHBA(::Cinemachine::CameraState& JKBLDFBGBPK, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + DFGPHIKFPPI_HPEIINFGHBA_OFFSET))(this, JKBLDFBGBPK, PMNLNNGEIFM);
	}

	::Cinemachine::CameraState DEJBLPBCMNA(::UnityEngine::Vector3 NFLNBCPPJGL)
	{
		return ((::Cinemachine::CameraState(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DFGPHIKFPPI_DEJBLPBCMNA_OFFSET))(this, NFLNBCPPJGL);
	}

	::CCOMBCANKKK* BJGBBMGLECN()
	{
		return ((::CCOMBCANKKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGPHIKFPPI_BJGBBMGLECN_OFFSET))(this);
	}

	::System::Void BNDEOOELDNM(::Cinemachine::CameraState& JKBLDFBGBPK, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + DFGPHIKFPPI_BNDEOOELDNM_OFFSET))(this, JKBLDFBGBPK, PMNLNNGEIFM);
	}

	::CCOMBCANKKK* CKEOCJLJBFA_1(::MoleMole::Config::CameraDelayMoveMode GEJCKFFFKCL, ::System::Boolean LDNCGMNHANO, ::System::Single PMNLNNGEIFM)
	{
		return ((::CCOMBCANKKK*(*)(::PVOID, ::MoleMole::Config::CameraDelayMoveMode, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + DFGPHIKFPPI_CKEOCJLJBFA_1_OFFSET))(this, GEJCKFFFKCL, LDNCGMNHANO, PMNLNNGEIFM);
	}

	::System::Boolean FMGLALDMMJK(::System::Single PMNLNNGEIFM, ::MoleMole::Config::CameraDelayMoveMode& GEJCKFFFKCL)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::MoleMole::Config::CameraDelayMoveMode&))((::PBYTE)hIl2Cpp + DFGPHIKFPPI_FMGLALDMMJK_OFFSET))(this, PMNLNNGEIFM, GEJCKFFFKCL);
	}

	::System::Void CLMMCNJNHKA(::System::Single IMLLDOHDCNC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DFGPHIKFPPI_CLMMCNJNHKA_OFFSET))(this, IMLLDOHDCNC);
	}

	::UnityEngine::AnimationCurve* NKJBOOJBEAE(::MoleMole::Config::CameraDelayMoveMode GFGADBNDGOM, ::MoleMole::Config::CameraDelayMoveMode FMGMAFKNICP, ::System::Single& MDPPNMIPDMP, ::System::Single& KGMDONBCDBJ)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::MoleMole::Config::CameraDelayMoveMode, ::MoleMole::Config::CameraDelayMoveMode, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + DFGPHIKFPPI_NKJBOOJBEAE_OFFSET))(this, GFGADBNDGOM, FMGMAFKNICP, MDPPNMIPDMP, KGMDONBCDBJ);
	}

	::System::Void FEJEJAHNIMH(::System::Single MIALFKCCCPI, ::NOHGGLFKBEH& KMGKAIDEIBA, ::MoleMole::Cameras::CameraAvatarPrepareData* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::NOHGGLFKBEH&, ::MoleMole::Cameras::CameraAvatarPrepareData*))((::PBYTE)hIl2Cpp + DFGPHIKFPPI_FEJEJAHNIMH_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}
};
