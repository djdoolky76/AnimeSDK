#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define LALADBKDJJK_CTOR_OFFSET UNITYSDK_OFFSET(0xBE78740)
#define LALADBKDJJK_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xBE787A0)
#define LALADBKDJJK_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xBE78750)

inline static constexpr unsigned int LALADBKDJJK_TypeDefinitionIndex = 57868;

	class LALADBKDJJK : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LALADBKDJJK_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LALADBKDJJK_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + LALADBKDJJK_GETEVENTTYPE_OFFSET))(this);
		}

	};
