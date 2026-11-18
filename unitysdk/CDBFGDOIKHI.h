#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/DDDAHJHLPJM.h"
#include "unitysdk/GALJGJIGMEK.h"
#include "unitysdk/NOHGGLFKBEH.h"
#include "unitysdk/UnityEngine/Rect.h"

class GPFPOKMDKKB;
class LOHPBEPDLOG;
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace MoleMole::Cameras { class CameraAvatarPrepareData; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace MoleMole::Cameras { class NapVirtualCutSceneCamera; }

#define CDBFGDOIKHI_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x199F58E0)
#define CDBFGDOIKHI_BJLDEAKGHHA_OFFSET UNITYSDK_OFFSET(0x199F7ED0)
#define CDBFGDOIKHI_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0x199F7D80)
#define CDBFGDOIKHI_BNDEOOELDNM_OFFSET UNITYSDK_OFFSET(0x199F76F0)
#define CDBFGDOIKHI_CKJLLANBAOB_OFFSET UNITYSDK_OFFSET(0x199F5CC0)
#define CDBFGDOIKHI_FEJEJAHNIMH_OFFSET UNITYSDK_OFFSET(0x199F8140)
#define CDBFGDOIKHI_GCEHDIOBOMM_OFFSET UNITYSDK_OFFSET(0x199F58D0)
#define CDBFGDOIKHI_GPIBNEAOCHO_OFFSET UNITYSDK_OFFSET(0x199F80F0)
#define CDBFGDOIKHI_HEMOHDFDKEG_OFFSET UNITYSDK_OFFSET(0x199F7D60)
#define CDBFGDOIKHI_HJOHFEKPHKL_OFFSET UNITYSDK_OFFSET(0x199F6C50)
#define CDBFGDOIKHI_HMGAKEKMBLI_OFFSET UNITYSDK_OFFSET(0x199F5B50)
#define CDBFGDOIKHI_HPEIINFGHBA_OFFSET UNITYSDK_OFFSET(0x199F78B0)
#define CDBFGDOIKHI_IMJLNMLMIFL_OFFSET UNITYSDK_OFFSET(0x199F75E0)
#define CDBFGDOIKHI_KOMGGGEEIJI_OFFSET UNITYSDK_OFFSET(0x199F7F20)
#define CDBFGDOIKHI_LIIPDCMEGGJ_OFFSET UNITYSDK_OFFSET(0x199F5B00)
#define CDBFGDOIKHI_MJGCNGFMJAI_OFFSET UNITYSDK_OFFSET(0x199F8040)
#define CDBFGDOIKHI_MLAONBKHFOP_OFFSET UNITYSDK_OFFSET(0x199F6F40)
#define CDBFGDOIKHI_NOJLAEBKGJH_OFFSET UNITYSDK_OFFSET(0x199F8010)
#define CDBFGDOIKHI_OKAJHMHAMJC_OFFSET UNITYSDK_OFFSET(0x199F6E10)
#define CDBFGDOIKHI_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x199F5D20)
#define CDBFGDOIKHI_PMGCCNCEAKI_OFFSET UNITYSDK_OFFSET(0x199F81F0)
#define CDBFGDOIKHI_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x199F7E30)
#define CDBFGDOIKHI__CTOR_OFFSET UNITYSDK_OFFSET(0x199F7A70)

inline static constexpr unsigned int CDBFGDOIKHI_TypeDefinitionIndex = 66504;

class CDBFGDOIKHI : public ::DDDAHJHLPJM
{
public:
	// static const ::System::Single DPJADHHHADF; // 0x0
	// static const ::System::Single MMIHGECEJDF; // 0x0
	::Cinemachine::CameraState JBDIJLLGBKA; // 0x38
	::GPFPOKMDKKB* BKPMNJPAOAM; // 0x120
	::MoleMole::Cameras::NapVirtualCutSceneCamera* EGKLNEJKMHB; // 0x128
	::System::Boolean EEPIPEOOIMK; // 0x130

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDBFGDOIKHI__CTOR_OFFSET))(this);
	}

	::GALJGJIGMEK GCEHDIOBOMM()
	{
		return ((::GALJGJIGMEK(*)(::PVOID))((::PBYTE)hIl2Cpp + CDBFGDOIKHI_GCEHDIOBOMM_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::Cinemachine::CinemachineVirtualCameraBase* JNLBPMKIFNK, ::MoleMole::Cameras::CameraDataAccessor* EFFAONJBCOG)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CDBFGDOIKHI_BBOMJDBNHIC_OFFSET))(this, JNLBPMKIFNK, EFFAONJBCOG);
	}

	::System::Void HMGAKEKMBLI(::Cinemachine::CameraState JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + CDBFGDOIKHI_HMGAKEKMBLI_OFFSET))(this, JKBLDFBGBPK);
	}

	::System::Void CKJLLANBAOB(::System::Single PMNLNNGEIFM, ::NOHGGLFKBEH& BLLBLFJKMFA, ::MoleMole::Cameras::CameraAvatarPrepareData* OECKPBFDDFK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::NOHGGLFKBEH&, ::MoleMole::Cameras::CameraAvatarPrepareData*))((::PBYTE)hIl2Cpp + CDBFGDOIKHI_CKJLLANBAOB_OFFSET))(this, PMNLNNGEIFM, BLLBLFJKMFA, OECKPBFDDFK);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM, ::Cinemachine::CameraState& ANOHIDIPEMN, ::NOHGGLFKBEH& BLLBLFJKMFA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Cinemachine::CameraState&, ::NOHGGLFKBEH&))((::PBYTE)hIl2Cpp + CDBFGDOIKHI_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM, ANOHIDIPEMN, BLLBLFJKMFA);
	}

	::Cinemachine::CameraState HEMOHDFDKEG()
	{
		return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + CDBFGDOIKHI_HEMOHDFDKEG_OFFSET))(this);
	}

	::System::Void BNDEOOELDNM(::Cinemachine::CameraState& JKBLDFBGBPK, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CDBFGDOIKHI_BNDEOOELDNM_OFFSET))(this, JKBLDFBGBPK, PMNLNNGEIFM);
	}

	::System::Void BKJPMPBEHDO(::System::Single MIALFKCCCPI, ::Cinemachine::CameraState& KMGKAIDEIBA, ::NOHGGLFKBEH& FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Cinemachine::CameraState&, ::NOHGGLFKBEH&))((::PBYTE)hIl2Cpp + CDBFGDOIKHI_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void HPEIINFGHBA(::Cinemachine::CameraState& JKBLDFBGBPK, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CDBFGDOIKHI_HPEIINFGHBA_OFFSET))(this, JKBLDFBGBPK, PMNLNNGEIFM);
	}

	::System::Void PNHPDOBPKKE(::Cinemachine::CinemachineVirtualCameraBase* MIALFKCCCPI, ::MoleMole::Cameras::CameraDataAccessor* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CDBFGDOIKHI_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::Cinemachine::CameraState BJLDEAKGHHA()
	{
		return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + CDBFGDOIKHI_BJLDEAKGHHA_OFFSET))(this);
	}

	::UnityEngine::Rect KOMGGGEEIJI()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CDBFGDOIKHI_KOMGGGEEIJI_OFFSET))(this);
	}

	::System::Void MLAONBKHFOP(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CDBFGDOIKHI_MLAONBKHFOP_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void LIIPDCMEGGJ(::Cinemachine::CinemachineVirtualCameraBase* JNLBPMKIFNK, ::MoleMole::Cameras::CameraDataAccessor* EFFAONJBCOG)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CDBFGDOIKHI_LIIPDCMEGGJ_OFFSET))(this, JNLBPMKIFNK, EFFAONJBCOG);
	}

	::System::Void OKAJHMHAMJC(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CDBFGDOIKHI_OKAJHMHAMJC_OFFSET))(this, PMNLNNGEIFM);
	}

	::UnityEngine::Rect MJGCNGFMJAI()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CDBFGDOIKHI_MJGCNGFMJAI_OFFSET))(this);
	}

	::LOHPBEPDLOG* NOJLAEBKGJH()
	{
		return ((::LOHPBEPDLOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDBFGDOIKHI_NOJLAEBKGJH_OFFSET))(this);
	}

	::System::Void HJOHFEKPHKL(::Cinemachine::CameraState& JKBLDFBGBPK, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CDBFGDOIKHI_HJOHFEKPHKL_OFFSET))(this, JKBLDFBGBPK, PMNLNNGEIFM);
	}

	::System::Void IMJLNMLMIFL(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CDBFGDOIKHI_IMJLNMLMIFL_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void GPIBNEAOCHO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDBFGDOIKHI_GPIBNEAOCHO_OFFSET))(this);
	}

	::System::Void FEJEJAHNIMH(::System::Single MIALFKCCCPI, ::NOHGGLFKBEH& KMGKAIDEIBA, ::MoleMole::Cameras::CameraAvatarPrepareData* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::NOHGGLFKBEH&, ::MoleMole::Cameras::CameraAvatarPrepareData*))((::PBYTE)hIl2Cpp + CDBFGDOIKHI_FEJEJAHNIMH_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void PMGCCNCEAKI(::Cinemachine::CameraState MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + CDBFGDOIKHI_PMGCCNCEAKI_OFFSET))(this, MIALFKCCCPI);
	}
};
