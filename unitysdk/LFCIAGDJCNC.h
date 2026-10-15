#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DLPNMGKEIHD.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"

#define LFCIAGDJCNC_CTOR_OFFSET UNITYSDK_OFFSET(0xB65C800)
#define LFCIAGDJCNC_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0xB65C7F0)

inline static constexpr unsigned int LFCIAGDJCNC_TypeDefinitionIndex = 47132;

	class LFCIAGDJCNC : public ::DLPNMGKEIHD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFCIAGDJCNC_CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + LFCIAGDJCNC_EPPAFNJFCMH_OFFSET))(this);
		}

	};
