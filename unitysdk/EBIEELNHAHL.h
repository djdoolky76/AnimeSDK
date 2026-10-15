#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleGamePhase.h"
namespace RPG::Client { class BattleGamePhaseInitParams; }

#define EBIEELNHAHL_CTOR_OFFSET UNITYSDK_OFFSET(0x12CF9120)

	class EBIEELNHAHL : public ::RPG::Client::BattleGamePhase
	{
	public:
		::System::Void _ctor(::RPG::Client::BattleGamePhaseInitParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleGamePhaseInitParams*))((::PBYTE)hIl2Cpp + EBIEELNHAHL_CTOR_OFFSET))(this, a1);
		}

	};
