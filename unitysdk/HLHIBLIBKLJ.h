#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HMFOPIJNNDI.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class GameEntity; }

#define HLHIBLIBKLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16CB9310)
#define HLHIBLIBKLJ_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x16CB9320)

inline static constexpr unsigned int HLHIBLIBKLJ_TypeDefinitionIndex = 57858;

	class HLHIBLIBKLJ : public ::HMFOPIJNNDI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HLHIBLIBKLJ_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + HLHIBLIBKLJ_GETEVENTTYPE_OFFSET))(this);
		}

	};
