#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GAOKHAHEDPM.h"
#include "unitysdk/JAHFCNNMABJ.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/JLJFLLKCPKE.h"
#include "unitysdk/NPCCrowd/Animation/FRefPose.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define OEHAPDLGKKD_AIABODOKNDE_1_OFFSET UNITYSDK_OFFSET(0x49B220)
#define OEHAPDLGKKD_AIABODOKNDE_OFFSET UNITYSDK_OFFSET(0x49B140)
#define OEHAPDLGKKD_BJPINMMAEOA_1_OFFSET UNITYSDK_OFFSET(0x49B1B0)
#define OEHAPDLGKKD_BJPINMMAEOA_OFFSET UNITYSDK_OFFSET(0x49B110)
#define OEHAPDLGKKD_DOACLAECOMM_1_OFFSET UNITYSDK_OFFSET(0x49B280)
#define OEHAPDLGKKD_DOACLAECOMM_OFFSET UNITYSDK_OFFSET(0x49B250)
#define OEHAPDLGKKD_JKIDMFCPKMD_OFFSET UNITYSDK_OFFSET(0xB31C080)
#define OEHAPDLGKKD_LNLDOAAPICC_OFFSET UNITYSDK_OFFSET(0xB31BDA0)
#define OEHAPDLGKKD_NFMIIKFINHC_1_OFFSET UNITYSDK_OFFSET(0x49B070)
#define OEHAPDLGKKD_NFMIIKFINHC_OFFSET UNITYSDK_OFFSET(0x49AE70)
#define OEHAPDLGKKD__CTOR_OFFSET UNITYSDK_OFFSET(0x49ADA0)

inline static constexpr unsigned int OEHAPDLGKKD_TypeDefinitionIndex = 70101;

struct alignas(8) OEHAPDLGKKD
{
	::System::ReadOnlySpan_1_F48FB86071006F3E<::JAHFCNNMABJ> IBJJLBDFLOH; // 0x10
	::System::Byte _padding0[0x10];
	::System::Single LAPDACBEAKC; // 0x28
	::System::Single KDDJCBCFHJA; // 0x2C
	::UnityEngine::Vector3 KNFLHBPGAHL; // 0x30
	::GAOKHAHEDPM FOLEHLMBOJB; // 0x3C
	::System::Single KJBIHJBODAJ; // 0x44
	::System::Single IDIFFJKBKGJ; // 0x48
	::System::Byte _padding1[0x4];
	::System::ReadOnlySpan_1_F48FB86071006F3E<::GAOKHAHEDPM> BPLHFIPOMBC; // 0x50
	::System::Byte _padding2[0x10];
	::System::Single KOGPLFNFLID; // 0x68
	::System::Single MKOBGICMEEC; // 0x6C
	::System::Int32 EICGJPDFFHO; // 0x70

	::System::Void _ctor(::System::ReadOnlySpan_1_F48FB86071006F3E<::JAHFCNNMABJ> FODMHMPGNOD, ::System::Single DGDKGGFLKLG, ::System::Single LJIDOJMNJFC, ::UnityEngine::Vector3 FAGPGACDNHB, ::GAOKHAHEDPM HBCDAPAOMFC, ::System::Single FBMHCBEFPMD, ::System::Single LPMDPNOJCKC, ::System::ReadOnlySpan_1_F48FB86071006F3E<::GAOKHAHEDPM> MJIDELANFDI, ::System::Single EFICOLJCLDL, ::System::Single LEHIJCCKKJE, ::System::Int32 MPMFDEMENPE)
	{
		return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1_F48FB86071006F3E<::JAHFCNNMABJ>, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::GAOKHAHEDPM, ::System::Single, ::System::Single, ::System::ReadOnlySpan_1_F48FB86071006F3E<::GAOKHAHEDPM>, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + OEHAPDLGKKD__CTOR_OFFSET))(this, FODMHMPGNOD, DGDKGGFLKLG, LJIDOJMNJFC, FAGPGACDNHB, HBCDAPAOMFC, FBMHCBEFPMD, LPMDPNOJCKC, MJIDELANFDI, EFICOLJCLDL, LEHIJCCKKJE, MPMFDEMENPE);
	}

	::System::Void NFMIIKFINHC(::NPCCrowd::Animation::FRefPose MOEKEKKJGBB, ::UnityEngine::Vector3 BKIEMIHIFNP, ::System::Single IECOJPMPJMP)
	{
		return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::FRefPose, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + OEHAPDLGKKD_NFMIIKFINHC_OFFSET))(this, MOEKEKKJGBB, BKIEMIHIFNP, IECOJPMPJMP);
	}

	static ::System::Single LNLDOAAPICC(::UnityEngine::Vector3 CFJFMMGPGKE, ::UnityEngine::Vector3 OOPCHAFMDNJ, ::System::Single MONACLNJKKI, ::System::Int32 HEDDOCOAAEP)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + OEHAPDLGKKD_LNLDOAAPICC_OFFSET))(CFJFMMGPGKE, OOPCHAFMDNJ, MONACLNJKKI, HEDDOCOAAEP);
	}

	static ::UnityEngine::Quaternion JKIDMFCPKMD(::UnityEngine::Quaternion JEAMLFHKILI, ::UnityEngine::Vector3 CFJFMMGPGKE, ::UnityEngine::Vector3 IFOODHNDLBJ, ::System::Single IECOJPMPJMP)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + OEHAPDLGKKD_JKIDMFCPKMD_OFFSET))(JEAMLFHKILI, CFJFMMGPGKE, IFOODHNDLBJ, IECOJPMPJMP);
	}

	::System::Void NFMIIKFINHC_1(::JLJFLLKCPKE& MOEKEKKJGBB, ::UnityEngine::Vector3 BKIEMIHIFNP, ::System::Single IECOJPMPJMP)
	{
		return ((::System::Void(*)(::PVOID, ::JLJFLLKCPKE&, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + OEHAPDLGKKD_NFMIIKFINHC_1_OFFSET))(this, MOEKEKKJGBB, BKIEMIHIFNP, IECOJPMPJMP);
	}

	::System::Void BJPINMMAEOA(::JLJFLLKCPKE& MOEKEKKJGBB, ::UnityEngine::Vector3 BKIEMIHIFNP, ::System::Single OBELMIJGFGH)
	{
		return ((::System::Void(*)(::PVOID, ::JLJFLLKCPKE&, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + OEHAPDLGKKD_BJPINMMAEOA_OFFSET))(this, MOEKEKKJGBB, BKIEMIHIFNP, OBELMIJGFGH);
	}

	::System::Void AIABODOKNDE(::NPCCrowd::Animation::FRefPose MOEKEKKJGBB, ::UnityEngine::Vector3 BKIEMIHIFNP, ::System::Single OBELMIJGFGH)
	{
		return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::FRefPose, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + OEHAPDLGKKD_AIABODOKNDE_OFFSET))(this, MOEKEKKJGBB, BKIEMIHIFNP, OBELMIJGFGH);
	}

	::System::Void BJPINMMAEOA_1(::NPCCrowd::Animation::FRefPose MOEKEKKJGBB, ::UnityEngine::Vector3 BKIEMIHIFNP, ::System::Single OBELMIJGFGH)
	{
		return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::FRefPose, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + OEHAPDLGKKD_BJPINMMAEOA_1_OFFSET))(this, MOEKEKKJGBB, BKIEMIHIFNP, OBELMIJGFGH);
	}

	::System::Void AIABODOKNDE_1(::JLJFLLKCPKE& MOEKEKKJGBB, ::UnityEngine::Vector3 BKIEMIHIFNP, ::System::Single OBELMIJGFGH)
	{
		return ((::System::Void(*)(::PVOID, ::JLJFLLKCPKE&, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + OEHAPDLGKKD_AIABODOKNDE_1_OFFSET))(this, MOEKEKKJGBB, BKIEMIHIFNP, OBELMIJGFGH);
	}

	::System::Void DOACLAECOMM(::JLJFLLKCPKE& MOEKEKKJGBB, ::UnityEngine::Vector3 BKIEMIHIFNP, ::System::Single OBELMIJGFGH)
	{
		return ((::System::Void(*)(::PVOID, ::JLJFLLKCPKE&, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + OEHAPDLGKKD_DOACLAECOMM_OFFSET))(this, MOEKEKKJGBB, BKIEMIHIFNP, OBELMIJGFGH);
	}

	::System::Void DOACLAECOMM_1(::NPCCrowd::Animation::FRefPose MOEKEKKJGBB, ::UnityEngine::Vector3 BKIEMIHIFNP, ::System::Single OBELMIJGFGH)
	{
		return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::FRefPose, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + OEHAPDLGKKD_DOACLAECOMM_1_OFFSET))(this, MOEKEKKJGBB, BKIEMIHIFNP, OBELMIJGFGH);
	}
};
