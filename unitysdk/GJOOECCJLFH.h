#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOGEMKKBMLP.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/HGBCMFANCOE.h"

#define GJOOECCJLFH_CTOR_OFFSET UNITYSDK_OFFSET(0x15A7F060)
#define GJOOECCJLFH_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0x15A7F050)
#define GJOOECCJLFH_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x15A7ECD0)
#define GJOOECCJLFH_HFCEOPLGJGL_OFFSET UNITYSDK_OFFSET(0x15A7F000)
#define GJOOECCJLFH_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0x15A7EEE0)
#define GJOOECCJLFH_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15A7EF50)

	class GJOOECCJLFH : public ::EOGEMKKBMLP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJOOECCJLFH_CTOR_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + GJOOECCJLFH_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void NMPLHCJKEOI(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + GJOOECCJLFH_NMPLHCJKEOI_OFFSET))(this, a1, a2);
		}

		::System::Void PAGKOAEOLKA(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + GJOOECCJLFH_PAGKOAEOLKA_OFFSET))(this, a1, a2);
		}

		::System::Single HFCEOPLGJGL(::HGBCMFANCOE a1)
		{
			return ((::System::Single(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + GJOOECCJLFH_HFCEOPLGJGL_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + GJOOECCJLFH_EPPAFNJFCMH_OFFSET))(this);
		}

	};
