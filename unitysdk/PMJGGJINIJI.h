#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EMHOOPFDGGO.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"

#define PMJGGJINIJI_CTOR_OFFSET UNITYSDK_OFFSET(0x188A8970)
#define PMJGGJINIJI_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0x188A8960)

inline static constexpr unsigned int PMJGGJINIJI_TypeDefinitionIndex = 79300;

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
