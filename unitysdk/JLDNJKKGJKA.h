#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LevelDirector.h"
namespace RPG::GameCore { class GameWorld; }

#define JLDNJKKGJKA_CTOR_OFFSET UNITYSDK_OFFSET(0xBA65300)
#define JLDNJKKGJKA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA65340)
#define JLDNJKKGJKA_TICK_OFFSET UNITYSDK_OFFSET(0xBA653B0)

inline static constexpr unsigned int JLDNJKKGJKA_TypeDefinitionIndex = 60575;

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
