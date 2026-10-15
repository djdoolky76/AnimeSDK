#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIEMPKOFMLG.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"

#define IFMJNIDOJFD_CTOR_OFFSET UNITYSDK_OFFSET(0x15F18B80)
#define IFMJNIDOJFD_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0x15F18B70)

inline static constexpr unsigned int IFMJNIDOJFD_TypeDefinitionIndex = 77003;

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
