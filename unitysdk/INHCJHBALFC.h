#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NFFHMOLDPEH.h"
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class RtBattleMode; }

#define INHCJHBALFC_CTOR_OFFSET UNITYSDK_OFFSET(0x164EEF90)

	class INHCJHBALFC : public ::NFFHMOLDPEH
	{
	public:
		::RPG::GameCore::GameWorld* JNOFGLFPMLB; // 0x18
		::RPG::GameCore::RtBattleMode* FCGFFAJIBKA; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INHCJHBALFC_CTOR_OFFSET))(this);
		}

	};
