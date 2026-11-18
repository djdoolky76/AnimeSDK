#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_TVModelData.h"
#include "unitysdk/MoleMole/HollowChessPieceSizeType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Bounds.h"

#define MPAGPEPJKKE_CDEBJPKPNGH_OFFSET UNITYSDK_OFFSET(0x6F9140)
#define MPAGPEPJKKE_CNCONBJAKKD_OFFSET UNITYSDK_OFFSET(0x1303E480)
#define MPAGPEPJKKE_IJONLBIHNJP_OFFSET UNITYSDK_OFFSET(0x6F8EC0)
#define MPAGPEPJKKE_IKCKJGACLHJ_OFFSET UNITYSDK_OFFSET(0x6F8F80)
#define MPAGPEPJKKE_JOJDEGMHKKD_OFFSET UNITYSDK_OFFSET(0x6F8D90)
#define MPAGPEPJKKE_LAAEEDNAEAA_OFFSET UNITYSDK_OFFSET(0x1303E2B0)
#define MPAGPEPJKKE_MDIOMMPCINE_OFFSET UNITYSDK_OFFSET(0x6F90B0)
#define MPAGPEPJKKE_NMIKHGCLFKB_OFFSET UNITYSDK_OFFSET(0x6F9200)
#define MPAGPEPJKKE_OKEDOCPENDA_OFFSET UNITYSDK_OFFSET(0x6F92C0)
#define MPAGPEPJKKE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1303E080)

inline static constexpr unsigned int MPAGPEPJKKE_TypeDefinitionIndex = 84524;

struct alignas(4) MPAGPEPJKKE
{
	static ::UnityEngine::Quaternion* StaticGet_NKABLIOOBLD()
	{
		return (::UnityEngine::Quaternion*)Il2CppClass::FromTypeDefinitionIndex(MPAGPEPJKKE_TypeDefinitionIndex)->GetStaticField(0xA4B0);
	}
	::MoleMole::HollowChessPieceSizeType NGBLLMPCHOL; // 0x10
	::UnityEngine::Vector3 GMMNMBLEHEC; // 0x14
	::UnityEngine::Vector3 NKDANJIJMJI; // 0x20
	::UnityEngine::Quaternion GKDIPNMPMJE; // 0x2C
	::System::Byte _padding0[0x4];
	::MoleMole::Config::ConfigHollowChessboard_TVModelData IBMLDIKPKBM; // 0x40

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPAGPEPJKKE__CCTOR_OFFSET))();
	}

	::UnityEngine::Vector3 JOJDEGMHKKD()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MPAGPEPJKKE_JOJDEGMHKKD_OFFSET))(this);
	}

	::System::Void IJONLBIHNJP(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MPAGPEPJKKE_IJONLBIHNJP_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::System::Single LAAEEDNAEAA(::System::Single NLBJLICOCHO, ::System::Single KAJPBCPHDOA)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MPAGPEPJKKE_LAAEEDNAEAA_OFFSET))(NLBJLICOCHO, KAJPBCPHDOA);
	}

	::UnityEngine::Vector3 IKCKJGACLHJ()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MPAGPEPJKKE_IKCKJGACLHJ_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 CNCONBJAKKD(::UnityEngine::Vector3 CKPGOKHECCH, ::UnityEngine::Bounds EBFCACIEKBC)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + MPAGPEPJKKE_CNCONBJAKKD_OFFSET))(CKPGOKHECCH, EBFCACIEKBC);
	}

	::UnityEngine::Vector3 MDIOMMPCINE()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MPAGPEPJKKE_MDIOMMPCINE_OFFSET))(this);
	}

	::System::Void CDEBJPKPNGH(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MPAGPEPJKKE_CDEBJPKPNGH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void NMIKHGCLFKB(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MPAGPEPJKKE_NMIKHGCLFKB_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::Vector3 OKEDOCPENDA()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MPAGPEPJKKE_OKEDOCPENDA_OFFSET))(this);
	}
};
