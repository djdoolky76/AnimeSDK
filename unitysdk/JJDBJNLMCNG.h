#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define JJDBJNLMCNG_CTOR_OFFSET UNITYSDK_OFFSET(0xB201C00)
#define JJDBJNLMCNG_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB201C60)
#define JJDBJNLMCNG_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB201C10)

inline static constexpr unsigned int JJDBJNLMCNG_TypeDefinitionIndex = 56677;

	class JJDBJNLMCNG : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x10
		::RPG::GameCore::GameEntity* BDHFPPIGIAH; // 0x18
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JJDBJNLMCNG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJDBJNLMCNG_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + JJDBJNLMCNG_GETEVENTTYPE_OFFSET))(this);
		}

	};
