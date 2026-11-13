#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PFALJMOJFCA.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/HGBCMFANCOE.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HFCPGANBGMI;

#define HOAAFFGNCPK_BNLAGNHABIN_OFFSET UNITYSDK_OFFSET(0x1A380530)
#define HOAAFFGNCPK_CANBGCJINAE_OFFSET UNITYSDK_OFFSET(0x1A37E9B0)
#define HOAAFFGNCPK_CKPCODNOEGG_OFFSET UNITYSDK_OFFSET(0x1A3804B0)
#define HOAAFFGNCPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1A380850)
#define HOAAFFGNCPK_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0x1A3807F0)
#define HOAAFFGNCPK_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x1A37E230)
#define HOAAFFGNCPK_FMMBPPMFDMG_OFFSET UNITYSDK_OFFSET(0x1A3800E0)
#define HOAAFFGNCPK_GGCCNDAIMDF_OFFSET UNITYSDK_OFFSET(0x1A37E180)
#define HOAAFFGNCPK_GMELLIPCKFH_OFFSET UNITYSDK_OFFSET(0x1A380740)
#define HOAAFFGNCPK_GOCMBBKBIBH_OFFSET UNITYSDK_OFFSET(0x1A380450)
#define HOAAFFGNCPK_HBJBCBJAHOJ_OFFSET UNITYSDK_OFFSET(0x1A37E8C0)
#define HOAAFFGNCPK_HCDFBIPODLD_OFFSET UNITYSDK_OFFSET(0x1A37DDB0)
#define HOAAFFGNCPK_HKGFIGCGMFB_OFFSET UNITYSDK_OFFSET(0x1A3804F0)
#define HOAAFFGNCPK_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0x1A37DFE0)
#define HOAAFFGNCPK_IJCLCMAJBHJ_OFFSET UNITYSDK_OFFSET(0x1A380300)
#define HOAAFFGNCPK_JCDFALFLNJL_OFFSET UNITYSDK_OFFSET(0x1A380270)
#define HOAAFFGNCPK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1A37DCE0)
#define HOAAFFGNCPK_LIFJJFCIKKA_OFFSET UNITYSDK_OFFSET(0x1A380160)
#define HOAAFFGNCPK_LLOPPKPLIHF_OFFSET UNITYSDK_OFFSET(0x1A37EE80)
#define HOAAFFGNCPK_NIOOHGFAKIL_OFFSET UNITYSDK_OFFSET(0x1A380800)
#define HOAAFFGNCPK_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0x1A37E6E0)
#define HOAAFFGNCPK_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1A37E790)

inline static constexpr unsigned int HOAAFFGNCPK_TypeDefinitionIndex = 79306;

	class HOAAFFGNCPK : public ::PFALJMOJFCA
	{
	public:
		::System::Single NPKAOPOLMCH; // 0x110
		::System::Single EFJNDBIHCPK; // 0x114
		::System::Single PLKCGAHOBOM; // 0x118
		::System::Single DBHIOFJHLGC; // 0x11C
		::System::Boolean FMIMNOJLFNN; // 0x120
		// static const ::System::Object MGLLFPDEKMJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOAAFFGNCPK_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::HFCPGANBGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCPGANBGMI*))((::PBYTE)hIl2Cpp + HOAAFFGNCPK_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void ICNEKGBHIHP(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + HOAAFFGNCPK_ICNEKGBHIHP_OFFSET))(this, a1, a2);
		}

		::System::Void FFKBFPKEPEN(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + HOAAFFGNCPK_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void NMPLHCJKEOI(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + HOAAFFGNCPK_NMPLHCJKEOI_OFFSET))(this, a1, a2);
		}

		::System::Void PAGKOAEOLKA(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + HOAAFFGNCPK_PAGKOAEOLKA_OFFSET))(this, a1, a2);
		}

		::System::Void HBJBCBJAHOJ(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + HOAAFFGNCPK_HBJBCBJAHOJ_OFFSET))(this, a1, a2);
		}

		::System::Void FMMBPPMFDMG(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + HOAAFFGNCPK_FMMBPPMFDMG_OFFSET))(this, a1);
		}

		::System::Void LIFJJFCIKKA(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + HOAAFFGNCPK_LIFJJFCIKKA_OFFSET))(this, a1);
		}

		::System::Void JCDFALFLNJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOAAFFGNCPK_JCDFALFLNJL_OFFSET))(this);
		}

		::System::Void IJCLCMAJBHJ(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + HOAAFFGNCPK_IJCLCMAJBHJ_OFFSET))(this, a1, a2);
		}

		::System::Void GOCMBBKBIBH(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + HOAAFFGNCPK_GOCMBBKBIBH_OFFSET))(this, a1);
		}

		::System::Void CKPCODNOEGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOAAFFGNCPK_CKPCODNOEGG_OFFSET))(this);
		}

		::System::Void HKGFIGCGMFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOAAFFGNCPK_HKGFIGCGMFB_OFFSET))(this);
		}

		::System::Void GGCCNDAIMDF(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + HOAAFFGNCPK_GGCCNDAIMDF_OFFSET))(this, a1);
		}

		::System::Void BNLAGNHABIN(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + HOAAFFGNCPK_BNLAGNHABIN_OFFSET))(this, a1);
		}

		::System::Boolean GMELLIPCKFH(::HGBCMFANCOE a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HOAAFFGNCPK_GMELLIPCKFH_OFFSET))(this, a1, a2);
		}

		::System::Void CANBGCJINAE(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + HOAAFFGNCPK_CANBGCJINAE_OFFSET))(this, a1);
		}

		::System::Void LLOPPKPLIHF(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + HOAAFFGNCPK_LLOPPKPLIHF_OFFSET))(this, a1);
		}

		::System::Void HCDFBIPODLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOAAFFGNCPK_HCDFBIPODLD_OFFSET))(this);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + HOAAFFGNCPK_EPPAFNJFCMH_OFFSET))(this);
		}

		::System::Boolean NIOOHGFAKIL(::HGBCMFANCOE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + HOAAFFGNCPK_NIOOHGFAKIL_OFFSET))(this, a1);
		}

	};
