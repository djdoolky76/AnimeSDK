#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EMHOOPFDGGO.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"

#define PMJGGJINIJI_CTOR_OFFSET UNITYSDK_OFFSET(0xCC52530)
#define PMJGGJINIJI_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0xCC52520)

inline static constexpr unsigned int PMJGGJINIJI_TypeDefinitionIndex = 79301;

	class PMJGGJINIJI : public ::EMHOOPFDGGO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMJGGJINIJI_CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + PMJGGJINIJI_EPPAFNJFCMH_OFFSET))(this);
		}

	};
