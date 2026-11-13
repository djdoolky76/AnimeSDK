#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIGPBKHHDEJ.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/HGBCMFANCOE.h"
class HFCPGANBGMI;

#define KCLENBKAAIJ_BJNDPMKGIMC_OFFSET UNITYSDK_OFFSET(0x1A489070)
#define KCLENBKAAIJ_BPOLDDMJGCO_OFFSET UNITYSDK_OFFSET(0x1A489710)
#define KCLENBKAAIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1A4899D0)
#define KCLENBKAAIJ_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0x1A4899C0)
#define KCLENBKAAIJ_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x1A488EB0)
#define KCLENBKAAIJ_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0x1A489590)
#define KCLENBKAAIJ_JOEDOLEBHAG_OFFSET UNITYSDK_OFFSET(0x1A489240)
#define KCLENBKAAIJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1A488DF0)
#define KCLENBKAAIJ_NMGFBNINOFJ_OFFSET UNITYSDK_OFFSET(0x1A489100)
#define KCLENBKAAIJ_NMJINAJGLOC_OFFSET UNITYSDK_OFFSET(0x1A489010)
#define KCLENBKAAIJ_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0x1A489520)
#define KCLENBKAAIJ_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1A489690)

inline static constexpr unsigned int KCLENBKAAIJ_TypeDefinitionIndex = 79311;

	class KCLENBKAAIJ : public ::DIGPBKHHDEJ
	{
	public:
		::System::Single MKGJONGAIFD; // 0xF8
		::System::Single PFAPMAAMAED; // 0xFC
		::System::Single MIEJEOMAEFN; // 0x100
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLENBKAAIJ_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::HFCPGANBGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCPGANBGMI*))((::PBYTE)hIl2Cpp + KCLENBKAAIJ_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void FFKBFPKEPEN(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + KCLENBKAAIJ_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void NMPLHCJKEOI(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + KCLENBKAAIJ_NMPLHCJKEOI_OFFSET))(this, a1, a2);
		}

		::System::Void ICNEKGBHIHP(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + KCLENBKAAIJ_ICNEKGBHIHP_OFFSET))(this, a1, a2);
		}

		::System::Void PAGKOAEOLKA(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + KCLENBKAAIJ_PAGKOAEOLKA_OFFSET))(this, a1, a2);
		}

		::System::Void BPOLDDMJGCO(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + KCLENBKAAIJ_BPOLDDMJGCO_OFFSET))(this, a1, a2);
		}

		::System::Void NMJINAJGLOC(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + KCLENBKAAIJ_NMJINAJGLOC_OFFSET))(this, a1);
		}

		::System::Void BJNDPMKGIMC(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + KCLENBKAAIJ_BJNDPMKGIMC_OFFSET))(this, a1);
		}

		::System::Void JOEDOLEBHAG(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + KCLENBKAAIJ_JOEDOLEBHAG_OFFSET))(this, a1);
		}

		::System::Void NMGFBNINOFJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLENBKAAIJ_NMGFBNINOFJ_OFFSET))(this);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLENBKAAIJ_EPPAFNJFCMH_OFFSET))(this);
		}

	};
