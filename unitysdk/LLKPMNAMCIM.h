#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_TVModelData.h"
#include "unitysdk/MoleMole/HollowChessPieceSizeType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/BAGPLLGCECI.h"
#include "unitysdk/ILENIEJKGLK.h"
#include "unitysdk/MPAGPEPJKKE.h"

class FBAMLABJMKF;

#define LLKPMNAMCIM_AIBKIPNFNFP_OFFSET UNITYSDK_OFFSET(0x185008D0)
#define LLKPMNAMCIM_CDEBJPKPNGH_OFFSET UNITYSDK_OFFSET(0x7CD1F0)
#define LLKPMNAMCIM_CMCFHHLEALF_OFFSET UNITYSDK_OFFSET(0x7CD0A0)
#define LLKPMNAMCIM_CNCONBJAKKD_OFFSET UNITYSDK_OFFSET(0x18500820)
#define LLKPMNAMCIM_GAJNLNGNGOC_OFFSET UNITYSDK_OFFSET(0x7CD2B0)
#define LLKPMNAMCIM_IJONLBIHNJP_OFFSET UNITYSDK_OFFSET(0x7CCF10)
#define LLKPMNAMCIM_IKCKJGACLHJ_OFFSET UNITYSDK_OFFSET(0x6F8F80)
#define LLKPMNAMCIM_IPHJBEJOLHF_OFFSET UNITYSDK_OFFSET(0x7CCFD0)
#define LLKPMNAMCIM_JOJDEGMHKKD_OFFSET UNITYSDK_OFFSET(0x6F8D90)
#define LLKPMNAMCIM_LAAEEDNAEAA_OFFSET UNITYSDK_OFFSET(0x18500700)
#define LLKPMNAMCIM_NMIKHGCLFKB_OFFSET UNITYSDK_OFFSET(0x7CD130)
#define LLKPMNAMCIM_OKEDOCPENDA_OFFSET UNITYSDK_OFFSET(0x6F92C0)
#define LLKPMNAMCIM_PPIBALFBFEM_OFFSET UNITYSDK_OFFSET(0x7CD460)
#define LLKPMNAMCIM__CCTOR_OFFSET UNITYSDK_OFFSET(0x185004D0)

inline static constexpr unsigned int LLKPMNAMCIM_TypeDefinitionIndex = 79272;

struct alignas(4) LLKPMNAMCIM
{
	static ::UnityEngine::Quaternion* StaticGet_NKABLIOOBLD()
	{
		return (::UnityEngine::Quaternion*)Il2CppClass::FromTypeDefinitionIndex(LLKPMNAMCIM_TypeDefinitionIndex)->GetStaticField(0x11940);
	}
	::MoleMole::HollowChessPieceSizeType NGBLLMPCHOL; // 0x10
	::UnityEngine::Vector3 EFINBBILEAD; // 0x14
	::UnityEngine::Vector3 IFEJBOIFFFC; // 0x20
	::UnityEngine::Quaternion GKDIPNMPMJE; // 0x2C
	::UnityEngine::Bounds EOGOABDFELB; // 0x3C
	::System::Byte _padding0[0x4];
	::MoleMole::Config::ConfigHollowChessboard_TVModelData IBMLDIKPKBM; // 0x58
	::System::Single MPGLBNPHJNN; // 0x78

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLKPMNAMCIM__CCTOR_OFFSET))();
	}

	::UnityEngine::Vector3 JOJDEGMHKKD()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LLKPMNAMCIM_JOJDEGMHKKD_OFFSET))(this);
	}

	::System::Void IJONLBIHNJP(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LLKPMNAMCIM_IJONLBIHNJP_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::System::Single LAAEEDNAEAA(::System::Single NLBJLICOCHO, ::System::Single KAJPBCPHDOA)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LLKPMNAMCIM_LAAEEDNAEAA_OFFSET))(NLBJLICOCHO, KAJPBCPHDOA);
	}

	::ILENIEJKGLK IPHJBEJOLHF()
	{
		return ((::ILENIEJKGLK(*)(::PVOID))((::PBYTE)hIl2Cpp + LLKPMNAMCIM_IPHJBEJOLHF_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 CNCONBJAKKD(::UnityEngine::Vector3 CKPGOKHECCH, ::UnityEngine::Bounds EBFCACIEKBC)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + LLKPMNAMCIM_CNCONBJAKKD_OFFSET))(CKPGOKHECCH, EBFCACIEKBC);
	}

	/*
	static ::LLKPMNAMCIM AIBKIPNFNFP(::MPAGPEPJKKE EIMCJEMLILJ, ::FBAMLABJMKF* IHHHIDMPIFD)
	{
		return ((::LLKPMNAMCIM(*)(::MPAGPEPJKKE, ::FBAMLABJMKF*))((::PBYTE)hIl2Cpp + LLKPMNAMCIM_AIBKIPNFNFP_OFFSET))(EIMCJEMLILJ, IHHHIDMPIFD);
	}
	*/

	::UnityEngine::Vector3 CMCFHHLEALF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LLKPMNAMCIM_CMCFHHLEALF_OFFSET))(this);
	}

	::System::Void NMIKHGCLFKB(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LLKPMNAMCIM_NMIKHGCLFKB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CDEBJPKPNGH(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LLKPMNAMCIM_CDEBJPKPNGH_OFFSET))(this, EGEGIMGMJHN);
	}

	::BAGPLLGCECI GAJNLNGNGOC()
	{
		return ((::BAGPLLGCECI(*)(::PVOID))((::PBYTE)hIl2Cpp + LLKPMNAMCIM_GAJNLNGNGOC_OFFSET))(this);
	}

	::UnityEngine::Vector3 PPIBALFBFEM()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LLKPMNAMCIM_PPIBALFBFEM_OFFSET))(this);
	}

	::UnityEngine::Vector3 IKCKJGACLHJ()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LLKPMNAMCIM_IKCKJGACLHJ_OFFSET))(this);
	}

	::UnityEngine::Vector3 OKEDOCPENDA()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LLKPMNAMCIM_OKEDOCPENDA_OFFSET))(this);
	}
};
