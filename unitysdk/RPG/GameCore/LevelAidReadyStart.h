#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"
class AICDMFFGNIH;

#define RPG_GAMECORE_LEVELAIDREADYSTART_CTOR_OFFSET UNITYSDK_OFFSET(0xE6D0520)
#define RPG_GAMECORE_LEVELAIDREADYSTART_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6D0580)
#define RPG_GAMECORE_LEVELAIDREADYSTART_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6D0530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAidReadyStart_TypeDefinitionIndex = 56805;

	class LevelAidReadyStart : public ::System::Object
	{
	public:
		::AICDMFFGNIH* Detail; // 0x10
		::System::Void _ctor(::AICDMFFGNIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AICDMFFGNIH*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAIDREADYSTART_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAIDREADYSTART_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAIDREADYSTART_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
