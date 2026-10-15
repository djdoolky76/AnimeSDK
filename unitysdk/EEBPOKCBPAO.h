#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNCOAAIIANF.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"

#define EEBPOKCBPAO_CTOR_OFFSET UNITYSDK_OFFSET(0x1334E990)
#define EEBPOKCBPAO_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0x1334E980)

	class EEBPOKCBPAO : public ::MNCOAAIIANF
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEBPOKCBPAO_CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + EEBPOKCBPAO_EPPAFNJFCMH_OFFSET))(this);
		}

	};
