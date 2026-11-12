#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JLDBEPNADNN.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"

#define FCDHJLFEJIM_CTOR_OFFSET UNITYSDK_OFFSET(0x165CC4C0)
#define FCDHJLFEJIM_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0x165CC4B0)

inline static constexpr unsigned int FCDHJLFEJIM_TypeDefinitionIndex = 79341;

	class FCDHJLFEJIM : public ::JLDBEPNADNN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCDHJLFEJIM_CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + FCDHJLFEJIM_EPPAFNJFCMH_OFFSET))(this);
		}

	};
