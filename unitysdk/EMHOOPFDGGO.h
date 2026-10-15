#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PFALJMOJFCA.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/HGBCMFANCOE.h"
class HFCPGANBGMI;
namespace RPG::GameCore { class FloatCurve; }
namespace RPG::GameCore { class VCameraOverrideShakeV2; }

#define EMHOOPFDGGO_BFPJNABOKMB_OFFSET UNITYSDK_OFFSET(0x1552FFE0)
#define EMHOOPFDGGO_BJPPELIECDK_OFFSET UNITYSDK_OFFSET(0x1552F0A0)
#define EMHOOPFDGGO_BPPOHHDEPBG_OFFSET UNITYSDK_OFFSET(0x1552E7D0)
#define EMHOOPFDGGO_CTOR_OFFSET UNITYSDK_OFFSET(0x15530060)
#define EMHOOPFDGGO_EOBIICCOGLO_OFFSET UNITYSDK_OFFSET(0x1552EB10)
#define EMHOOPFDGGO_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0x15530050)
#define EMHOOPFDGGO_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x1552E290)
#define EMHOOPFDGGO_GBCHFFLMIIC_OFFSET UNITYSDK_OFFSET(0x1552ED70)
#define EMHOOPFDGGO_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0x1552FCB0)
#define EMHOOPFDGGO_JMFNAAHPDFE_OFFSET UNITYSDK_OFFSET(0x1552FD40)
#define EMHOOPFDGGO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1552E170)
#define EMHOOPFDGGO_LFIFIEGFMOM_OFFSET UNITYSDK_OFFSET(0x1552FEF0)
#define EMHOOPFDGGO_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0x1552EC40)
#define EMHOOPFDGGO_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1552EE40)
#define EMHOOPFDGGO_PGHPODHPGDB_OFFSET UNITYSDK_OFFSET(0x1552EBD0)

inline static constexpr unsigned int EMHOOPFDGGO_TypeDefinitionIndex = 76965;

	class EMHOOPFDGGO : public ::PFALJMOJFCA
	{
	public:
		::RPG::GameCore::FloatCurve* HKIEHNGOPHN; // 0x110
		::RPG::GameCore::VCameraOverrideShakeV2* IKJPKGFNJEG; // 0x118
		::System::Single IKILDBAAIGG; // 0x120
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMHOOPFDGGO_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::HFCPGANBGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCPGANBGMI*))((::PBYTE)hIl2Cpp + EMHOOPFDGGO_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void FFKBFPKEPEN(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + EMHOOPFDGGO_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void BPPOHHDEPBG(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + EMHOOPFDGGO_BPPOHHDEPBG_OFFSET))(this, a1);
		}

		::System::Void NMPLHCJKEOI(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + EMHOOPFDGGO_NMPLHCJKEOI_OFFSET))(this, a1, a2);
		}

		::System::Void GBCHFFLMIIC(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + EMHOOPFDGGO_GBCHFFLMIIC_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + EMHOOPFDGGO_PAGKOAEOLKA_OFFSET))(this, a1, a2);
		}

		::System::Void BJPPELIECDK(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + EMHOOPFDGGO_BJPPELIECDK_OFFSET))(this, a1, a2);
		}

		::System::Void ICNEKGBHIHP(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + EMHOOPFDGGO_ICNEKGBHIHP_OFFSET))(this, a1, a2);
		}

		::System::Void LFIFIEGFMOM(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + EMHOOPFDGGO_LFIFIEGFMOM_OFFSET))(this, a1, a2);
		}

		::System::Void JMFNAAHPDFE(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + EMHOOPFDGGO_JMFNAAHPDFE_OFFSET))(this, a1);
		}

		::System::Void BFPJNABOKMB(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + EMHOOPFDGGO_BFPJNABOKMB_OFFSET))(this, a1);
		}

		::System::Void EOBIICCOGLO(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + EMHOOPFDGGO_EOBIICCOGLO_OFFSET))(this, a1);
		}

		::System::Void PGHPODHPGDB(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + EMHOOPFDGGO_PGHPODHPGDB_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + EMHOOPFDGGO_EPPAFNJFCMH_OFFSET))(this);
		}

	};
