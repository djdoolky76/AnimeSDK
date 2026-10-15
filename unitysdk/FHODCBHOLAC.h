#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PFALJMOJFCA.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/HGBCMFANCOE.h"

#define FHODCBHOLAC_CTOR_OFFSET UNITYSDK_OFFSET(0x15786710)
#define FHODCBHOLAC_EDDPAFFDNPA_OFFSET UNITYSDK_OFFSET(0x15786520)
#define FHODCBHOLAC_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0x15786700)
#define FHODCBHOLAC_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x157861C0)
#define FHODCBHOLAC_GBCHFFLMIIC_OFFSET UNITYSDK_OFFSET(0x157866B0)
#define FHODCBHOLAC_GGCCNDAIMDF_OFFSET UNITYSDK_OFFSET(0x157864C0)
#define FHODCBHOLAC_HBJBCBJAHOJ_OFFSET UNITYSDK_OFFSET(0x15786610)
#define FHODCBHOLAC_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0x157863A0)
#define FHODCBHOLAC_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0x15786330)
#define FHODCBHOLAC_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15786580)

inline static constexpr unsigned int FHODCBHOLAC_TypeDefinitionIndex = 76997;

	class FHODCBHOLAC : public ::PFALJMOJFCA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHODCBHOLAC_CTOR_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + FHODCBHOLAC_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void NMPLHCJKEOI(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + FHODCBHOLAC_NMPLHCJKEOI_OFFSET))(this, a1, a2);
		}

		::System::Void ICNEKGBHIHP(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + FHODCBHOLAC_ICNEKGBHIHP_OFFSET))(this, a1, a2);
		}

		::System::Void PAGKOAEOLKA(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + FHODCBHOLAC_PAGKOAEOLKA_OFFSET))(this, a1, a2);
		}

		::System::Void HBJBCBJAHOJ(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + FHODCBHOLAC_HBJBCBJAHOJ_OFFSET))(this, a1, a2);
		}

		::System::Void GGCCNDAIMDF(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + FHODCBHOLAC_GGCCNDAIMDF_OFFSET))(this, a1);
		}

		::System::Void EDDPAFFDNPA(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + FHODCBHOLAC_EDDPAFFDNPA_OFFSET))(this, a1);
		}

		::System::Void GBCHFFLMIIC(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + FHODCBHOLAC_GBCHFFLMIIC_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + FHODCBHOLAC_EPPAFNJFCMH_OFFSET))(this);
		}

	};
