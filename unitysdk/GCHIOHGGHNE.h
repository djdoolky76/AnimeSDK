#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCODNLKAGHK.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"

#define GCHIOHGGHNE_CTOR_OFFSET UNITYSDK_OFFSET(0x15966120)
#define GCHIOHGGHNE_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0x15966110)

inline static constexpr unsigned int GCHIOHGGHNE_TypeDefinitionIndex = 76991;

	class GCHIOHGGHNE : public ::HCODNLKAGHK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHIOHGGHNE_CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHIOHGGHNE_EPPAFNJFCMH_OFFSET))(this);
		}

	};
