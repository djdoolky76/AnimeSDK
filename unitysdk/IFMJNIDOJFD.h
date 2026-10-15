#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIEMPKOFMLG.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"

#define IFMJNIDOJFD_CTOR_OFFSET UNITYSDK_OFFSET(0x15F24A70)
#define IFMJNIDOJFD_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0x15F24A60)

	class IFMJNIDOJFD : public ::KIEMPKOFMLG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMJNIDOJFD_CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMJNIDOJFD_EPPAFNJFCMH_OFFSET))(this);
		}

	};
