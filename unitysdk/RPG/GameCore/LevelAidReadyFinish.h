#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"
class AICDMFFGNIH;

#define RPG_GAMECORE_LEVELAIDREADYFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0xE6DB860)
#define RPG_GAMECORE_LEVELAIDREADYFINISH_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6DB810)
#define RPG_GAMECORE_LEVELAIDREADYFINISH_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6DB7C0)

namespace RPG::GameCore
{
	class LevelAidReadyFinish : public ::System::Object
	{
	public:
		::AICDMFFGNIH* Detail; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAIDREADYFINISH_CTOR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAIDREADYFINISH_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAIDREADYFINISH_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
