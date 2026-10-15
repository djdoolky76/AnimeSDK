#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BPOHEJCKEKJ.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"

#define JDILNGODMPP_CTOR_OFFSET UNITYSDK_OFFSET(0x165CE170)
#define JDILNGODMPP_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0x165CE160)

	class JDILNGODMPP : public ::BPOHEJCKEKJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDILNGODMPP_CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + JDILNGODMPP_EPPAFNJFCMH_OFFSET))(this);
		}

	};
