#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LevelDirector.h"
namespace RPG::GameCore { class GameWorld; }

#define JLDNJKKGJKA_CTOR_OFFSET UNITYSDK_OFFSET(0xB23CBD0)
#define JLDNJKKGJKA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB23CC10)
#define JLDNJKKGJKA_TICK_OFFSET UNITYSDK_OFFSET(0xB23CC80)

	class JLDNJKKGJKA : public ::RPG::Client::LevelDirector
	{
	public:
		::System::Void _ctor(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + JLDNJKKGJKA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLDNJKKGJKA_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JLDNJKKGJKA_TICK_OFFSET))(this, a1);
		}

	};
