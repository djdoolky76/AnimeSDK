#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Config { class ChessboardJoystickConfig; }

#define LFENJIOJKNO_AOJLLAHNDKD_OFFSET UNITYSDK_OFFSET(0x16363C70)
#define LFENJIOJKNO_BEBDBFPILOI_OFFSET UNITYSDK_OFFSET(0x16363A50)
#define LFENJIOJKNO_CKLGDNFACFF_OFFSET UNITYSDK_OFFSET(0x163636F0)
#define LFENJIOJKNO_CMHLOAIOAJA_OFFSET UNITYSDK_OFFSET(0x16363C20)
#define LFENJIOJKNO_CNAPOCMFHOA_OFFSET UNITYSDK_OFFSET(0x16363FC0)
#define LFENJIOJKNO_COOGEGGOLAM_OFFSET UNITYSDK_OFFSET(0x16363530)
#define LFENJIOJKNO_DGFDIABFIFD_OFFSET UNITYSDK_OFFSET(0x16363DF0)
#define LFENJIOJKNO_EADAIBFKIMI_OFFSET UNITYSDK_OFFSET(0x163638D0)
#define LFENJIOJKNO_EIKFFLEAKMK_OFFSET UNITYSDK_OFFSET(0x16363680)
#define LFENJIOJKNO_ENFOIGHLLCG_OFFSET UNITYSDK_OFFSET(0x16363590)
#define LFENJIOJKNO_ENGCNHELIBP_OFFSET UNITYSDK_OFFSET(0x163638F0)
#define LFENJIOJKNO_FDEHIBOCHOK_OFFSET UNITYSDK_OFFSET(0x16363E60)
#define LFENJIOJKNO_FDPJODKPAAG_OFFSET UNITYSDK_OFFSET(0x16363A60)
#define LFENJIOJKNO_FFDOGFDBOKH_OFFSET UNITYSDK_OFFSET(0x16363870)
#define LFENJIOJKNO_FMICADIEKMH_OFFSET UNITYSDK_OFFSET(0x16364140)
#define LFENJIOJKNO_GBNFKALCLJE_OFFSET UNITYSDK_OFFSET(0x16363C50)
#define LFENJIOJKNO_GLDPGKKIBJF_OFFSET UNITYSDK_OFFSET(0x163632C0)
#define LFENJIOJKNO_HJAMGCMLBLC_OFFSET UNITYSDK_OFFSET(0x16363600)
#define LFENJIOJKNO_HNHNBBGNAMN_OFFSET UNITYSDK_OFFSET(0x16363500)
#define LFENJIOJKNO_HNNAAKAJHMB_OFFSET UNITYSDK_OFFSET(0x16364210)
#define LFENJIOJKNO_ICGIODAGCOM_OFFSET UNITYSDK_OFFSET(0x16363620)
#define LFENJIOJKNO_IDNAPDFGNCG_OFFSET UNITYSDK_OFFSET(0x16363810)
#define LFENJIOJKNO_IEILOFPJICN_OFFSET UNITYSDK_OFFSET(0x16363F30)
#define LFENJIOJKNO_IKLKKJOMOJD_OFFSET UNITYSDK_OFFSET(0x16363F90)
#define LFENJIOJKNO_IOPILIKLLCG_OFFSET UNITYSDK_OFFSET(0x16363E80)
#define LFENJIOJKNO_KJHMJIDOECE_OFFSET UNITYSDK_OFFSET(0x16363790)
#define LFENJIOJKNO_KOKFIHEFAGC_OFFSET UNITYSDK_OFFSET(0x163641B0)
#define LFENJIOJKNO_LPIIODCPLAN_OFFSET UNITYSDK_OFFSET(0x16363720)
#define LFENJIOJKNO_MFLOCPDMHFA_OFFSET UNITYSDK_OFFSET(0x16363EB0)
#define LFENJIOJKNO_NFCKEKACECN_OFFSET UNITYSDK_OFFSET(0x16363ED0)
#define LFENJIOJKNO_PFNGOMPFCLF_OFFSET UNITYSDK_OFFSET(0x163637F0)
#define LFENJIOJKNO__CTOR_OFFSET UNITYSDK_OFFSET(0x16363220)

inline static constexpr unsigned int LFENJIOJKNO_TypeDefinitionIndex = 68110;

class LFENJIOJKNO : public ::System::Object
{
public:
	::MoleMole::Config::ChessboardJoystickConfig* CEJENBBHBBG; // 0x10
	::System::Boolean KBDLFKNFPLE; // 0x18
	::System::Boolean EBEFGHKDBPN; // 0x19
	::System::Boolean KCMNJPKEJNH; // 0x1A
	::System::Boolean ADDHNFOBANI; // 0x1B
	::System::Boolean GOIHBHEBBFD; // 0x1C

	::System::Void _ctor(::MoleMole::Config::ChessboardJoystickConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ChessboardJoystickConfig*))((::PBYTE)hIl2Cpp + LFENJIOJKNO__CTOR_OFFSET))(this, DFMKILICPFB);
	}

	::UnityEngine::Vector4 HNHNBBGNAMN()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + LFENJIOJKNO_HNHNBBGNAMN_OFFSET))(this);
	}

	::System::Void COOGEGGOLAM(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LFENJIOJKNO_COOGEGGOLAM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void ENFOIGHLLCG(::UnityEngine::Vector3Int EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + LFENJIOJKNO_ENFOIGHLLCG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single HJAMGCMLBLC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LFENJIOJKNO_HJAMGCMLBLC_OFFSET))(this);
	}

	::System::Void ICGIODAGCOM(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LFENJIOJKNO_ICGIODAGCOM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EIKFFLEAKMK(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LFENJIOJKNO_EIKFFLEAKMK_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::Vector4 CKLGDNFACFF()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + LFENJIOJKNO_CKLGDNFACFF_OFFSET))(this);
	}

	::System::Void LPIIODCPLAN(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LFENJIOJKNO_LPIIODCPLAN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KJHMJIDOECE(::UnityEngine::Vector4 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + LFENJIOJKNO_KJHMJIDOECE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single PFNGOMPFCLF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LFENJIOJKNO_PFNGOMPFCLF_OFFSET))(this);
	}

	::System::Void IDNAPDFGNCG(::UnityEngine::Vector4 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + LFENJIOJKNO_IDNAPDFGNCG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FFDOGFDBOKH(::UnityEngine::Vector4 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + LFENJIOJKNO_FFDOGFDBOKH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single EADAIBFKIMI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LFENJIOJKNO_EADAIBFKIMI_OFFSET))(this);
	}

	::System::Boolean ENGCNHELIBP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LFENJIOJKNO_ENGCNHELIBP_OFFSET))(this);
	}

	::System::Void BEBDBFPILOI(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LFENJIOJKNO_BEBDBFPILOI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean FDPJODKPAAG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LFENJIOJKNO_FDPJODKPAAG_OFFSET))(this);
	}

	::UnityEngine::Vector4 CMHLOAIOAJA()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + LFENJIOJKNO_CMHLOAIOAJA_OFFSET))(this);
	}

	::System::Single GBNFKALCLJE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LFENJIOJKNO_GBNFKALCLJE_OFFSET))(this);
	}

	::System::Void AOJLLAHNDKD(::System::Boolean HEAJMIGHEHG, ::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LFENJIOJKNO_AOJLLAHNDKD_OFFSET))(this, HEAJMIGHEHG, EGEGIMGMJHN);
	}

	::System::Void DGFDIABFIFD(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LFENJIOJKNO_DGFDIABFIFD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean FDEHIBOCHOK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LFENJIOJKNO_FDEHIBOCHOK_OFFSET))(this);
	}

	::UnityEngine::Vector3Int IOPILIKLLCG()
	{
		return ((::UnityEngine::Vector3Int(*)(::PVOID))((::PBYTE)hIl2Cpp + LFENJIOJKNO_IOPILIKLLCG_OFFSET))(this);
	}

	::UnityEngine::Vector2 MFLOCPDMHFA()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + LFENJIOJKNO_MFLOCPDMHFA_OFFSET))(this);
	}

	::System::Boolean NFCKEKACECN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LFENJIOJKNO_NFCKEKACECN_OFFSET))(this);
	}

	::System::Void GLDPGKKIBJF(::MoleMole::Config::ChessboardJoystickConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ChessboardJoystickConfig*))((::PBYTE)hIl2Cpp + LFENJIOJKNO_GLDPGKKIBJF_OFFSET))(this, DFMKILICPFB);
	}

	::System::Void IEILOFPJICN(::UnityEngine::Vector2 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + LFENJIOJKNO_IEILOFPJICN_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::Vector4 IKLKKJOMOJD()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + LFENJIOJKNO_IKLKKJOMOJD_OFFSET))(this);
	}

	::System::Void CNAPOCMFHOA(::System::Boolean HEAJMIGHEHG, ::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LFENJIOJKNO_CNAPOCMFHOA_OFFSET))(this, HEAJMIGHEHG, EGEGIMGMJHN);
	}

	::System::Void FMICADIEKMH(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LFENJIOJKNO_FMICADIEKMH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KOKFIHEFAGC(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LFENJIOJKNO_KOKFIHEFAGC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void HNNAAKAJHMB(::UnityEngine::Vector4 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + LFENJIOJKNO_HNNAAKAJHMB_OFFSET))(this, EGEGIMGMJHN);
	}
};
