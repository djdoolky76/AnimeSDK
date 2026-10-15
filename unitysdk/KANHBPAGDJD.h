#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NFFHMOLDPEH.h"
class POEGKFEADIE;
namespace RPG::GameCore { class GameWorld; }

#define KANHBPAGDJD_CTOR_OFFSET UNITYSDK_OFFSET(0xB2DF430)

	class KANHBPAGDJD : public ::NFFHMOLDPEH
	{
	public:
		::RPG::GameCore::GameWorld* JNOFGLFPMLB; // 0x18
		::POEGKFEADIE* FCGFFAJIBKA; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANHBPAGDJD_CTOR_OFFSET))(this);
		}

	};
