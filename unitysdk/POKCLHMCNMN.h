#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCODNLKAGHK.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/HGBCMFANCOE.h"

#define POKCLHMCNMN_CTOR_OFFSET UNITYSDK_OFFSET(0xC36E2F0)
#define POKCLHMCNMN_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0xC36E2E0)
#define POKCLHMCNMN_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xC36DF40)
#define POKCLHMCNMN_MCCGDCCKHIM_OFFSET UNITYSDK_OFFSET(0xC36DFD0)

	class POKCLHMCNMN : public ::HCODNLKAGHK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POKCLHMCNMN_CTOR_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + POKCLHMCNMN_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void MCCGDCCKHIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POKCLHMCNMN_MCCGDCCKHIM_OFFSET))(this);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + POKCLHMCNMN_EPPAFNJFCMH_OFFSET))(this);
		}

	};
