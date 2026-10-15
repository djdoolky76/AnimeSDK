#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PFALJMOJFCA.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/HGBCMFANCOE.h"
class HFCPGANBGMI;
namespace RPG::GameCore { class FloatCurve; }
namespace RPG::GameCore { class VCameraOverrideShakeV2; }

#define EMHOOPFDGGO_BFPJNABOKMB_OFFSET UNITYSDK_OFFSET(0x1553BC90)
#define EMHOOPFDGGO_BJPPELIECDK_OFFSET UNITYSDK_OFFSET(0x1553AD50)
#define EMHOOPFDGGO_BPPOHHDEPBG_OFFSET UNITYSDK_OFFSET(0x1553A480)
#define EMHOOPFDGGO_CTOR_OFFSET UNITYSDK_OFFSET(0x1553BD10)
#define EMHOOPFDGGO_EOBIICCOGLO_OFFSET UNITYSDK_OFFSET(0x1553A7C0)
#define EMHOOPFDGGO_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0x1553BD00)
#define EMHOOPFDGGO_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x15539F40)
#define EMHOOPFDGGO_GBCHFFLMIIC_OFFSET UNITYSDK_OFFSET(0x1553AA20)
#define EMHOOPFDGGO_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0x1553B960)
#define EMHOOPFDGGO_JMFNAAHPDFE_OFFSET UNITYSDK_OFFSET(0x1553B9F0)
#define EMHOOPFDGGO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15539E20)
#define EMHOOPFDGGO_LFIFIEGFMOM_OFFSET UNITYSDK_OFFSET(0x1553BBA0)
#define EMHOOPFDGGO_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0x1553A8F0)
#define EMHOOPFDGGO_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1553AAF0)
#define EMHOOPFDGGO_PGHPODHPGDB_OFFSET UNITYSDK_OFFSET(0x1553A880)

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
