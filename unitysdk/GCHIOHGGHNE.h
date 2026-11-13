#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCODNLKAGHK.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"

#define GCHIOHGGHNE_CTOR_OFFSET UNITYSDK_OFFSET(0x19EABB30)
#define GCHIOHGGHNE_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0x19EABB20)

inline static constexpr unsigned int GCHIOHGGHNE_TypeDefinitionIndex = 79325;

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
