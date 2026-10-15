#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PFALJMOJFCA.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/HGBCMFANCOE.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HFCPGANBGMI;

#define HOAAFFGNCPK_BNLAGNHABIN_OFFSET UNITYSDK_OFFSET(0x15DA9410)
#define HOAAFFGNCPK_CANBGCJINAE_OFFSET UNITYSDK_OFFSET(0x15DA7890)
#define HOAAFFGNCPK_CKPCODNOEGG_OFFSET UNITYSDK_OFFSET(0x15DA9390)
#define HOAAFFGNCPK_CTOR_OFFSET UNITYSDK_OFFSET(0x15DA9730)
#define HOAAFFGNCPK_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0x15DA96D0)
#define HOAAFFGNCPK_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x15DA7110)
#define HOAAFFGNCPK_FMMBPPMFDMG_OFFSET UNITYSDK_OFFSET(0x15DA8FC0)
#define HOAAFFGNCPK_GGCCNDAIMDF_OFFSET UNITYSDK_OFFSET(0x15DA7060)
#define HOAAFFGNCPK_GMELLIPCKFH_OFFSET UNITYSDK_OFFSET(0x15DA9620)
#define HOAAFFGNCPK_GOCMBBKBIBH_OFFSET UNITYSDK_OFFSET(0x15DA9330)
#define HOAAFFGNCPK_HBJBCBJAHOJ_OFFSET UNITYSDK_OFFSET(0x15DA77A0)
#define HOAAFFGNCPK_HCDFBIPODLD_OFFSET UNITYSDK_OFFSET(0x15DA6C80)
#define HOAAFFGNCPK_HKGFIGCGMFB_OFFSET UNITYSDK_OFFSET(0x15DA93D0)
#define HOAAFFGNCPK_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0x15DA6EC0)
#define HOAAFFGNCPK_IJCLCMAJBHJ_OFFSET UNITYSDK_OFFSET(0x15DA91E0)
#define HOAAFFGNCPK_JCDFALFLNJL_OFFSET UNITYSDK_OFFSET(0x15DA9150)
#define HOAAFFGNCPK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15DA6BB0)
#define HOAAFFGNCPK_LIFJJFCIKKA_OFFSET UNITYSDK_OFFSET(0x15DA9040)
#define HOAAFFGNCPK_LLOPPKPLIHF_OFFSET UNITYSDK_OFFSET(0x15DA7D60)
#define HOAAFFGNCPK_NIOOHGFAKIL_OFFSET UNITYSDK_OFFSET(0x15DA96E0)
#define HOAAFFGNCPK_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0x15DA75C0)
#define HOAAFFGNCPK_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15DA7670)

inline static constexpr unsigned int HOAAFFGNCPK_TypeDefinitionIndex = 76973;

	class HOAAFFGNCPK : public ::PFALJMOJFCA
	{
	public:
		::System::Boolean FMIMNOJLFNN; // 0x110
		::System::Byte _padding0[0x3];
		::System::Single PLKCGAHOBOM; // 0x114
		::System::Single DBHIOFJHLGC; // 0x118
		::System::Single NPKAOPOLMCH; // 0x11C
		::System::Single EFJNDBIHCPK; // 0x120
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
