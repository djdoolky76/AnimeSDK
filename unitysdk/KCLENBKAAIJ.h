#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIGPBKHHDEJ.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/HGBCMFANCOE.h"
class HFCPGANBGMI;

#define KCLENBKAAIJ_BJNDPMKGIMC_OFFSET UNITYSDK_OFFSET(0xB33C8B0)
#define KCLENBKAAIJ_BPOLDDMJGCO_OFFSET UNITYSDK_OFFSET(0xB33CF50)
#define KCLENBKAAIJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB33D210)
#define KCLENBKAAIJ_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0xB33D200)
#define KCLENBKAAIJ_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xB33C6F0)
#define KCLENBKAAIJ_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xB33CDD0)
#define KCLENBKAAIJ_JOEDOLEBHAG_OFFSET UNITYSDK_OFFSET(0xB33CA80)
#define KCLENBKAAIJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB33C640)
#define KCLENBKAAIJ_NMGFBNINOFJ_OFFSET UNITYSDK_OFFSET(0xB33C940)
#define KCLENBKAAIJ_NMJINAJGLOC_OFFSET UNITYSDK_OFFSET(0xB33C850)
#define KCLENBKAAIJ_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0xB33CD60)
#define KCLENBKAAIJ_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB33CED0)

inline static constexpr unsigned int KCLENBKAAIJ_TypeDefinitionIndex = 76978;

	class KCLENBKAAIJ : public ::DIGPBKHHDEJ
	{
	public:
		::System::Single PFAPMAAMAED; // 0xF8
		::System::Single MIEJEOMAEFN; // 0xFC
		::System::Single MKGJONGAIFD; // 0x100
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
