#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define MKAELOJJKCC_CTOR_OFFSET UNITYSDK_OFFSET(0xB9819B0)
#define MKAELOJJKCC_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB981A10)
#define MKAELOJJKCC_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB9819C0)

inline static constexpr unsigned int MKAELOJJKCC_TypeDefinitionIndex = 56662;

	class MKAELOJJKCC : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* EOBLJJBOBIN; // 0x10
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MKAELOJJKCC_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKAELOJJKCC_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + MKAELOJJKCC_GETEVENTTYPE_OFFSET))(this);
		}

	};
