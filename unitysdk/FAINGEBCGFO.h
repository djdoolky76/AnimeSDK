#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGBHGHNHBHO.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"

#define FAINGEBCGFO_CTOR_OFFSET UNITYSDK_OFFSET(0x165938D0)
#define FAINGEBCGFO_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0x165938C0)

inline static constexpr unsigned int FAINGEBCGFO_TypeDefinitionIndex = 79128;

	class FAINGEBCGFO : public ::DGBHGHNHBHO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAINGEBCGFO_CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + FAINGEBCGFO_EPPAFNJFCMH_OFFSET))(this);
		}

	};
