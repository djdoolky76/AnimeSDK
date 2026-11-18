#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;

#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11A417E0)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM___C__DISPLAYCLASS26_0__FLUSHPENDINGSYNC_B__0_OFFSET UNITYSDK_OFFSET(0x11A417F0)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM___C__DISPLAYCLASS26_0__FLUSHPENDINGSYNC_B__1_OFFSET UNITYSDK_OFFSET(0x11A41910)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneDungeonPropertySubsystem___c__DisplayClass26_0_TypeDefinitionIndex = 47799;

	class BigSceneDungeonPropertySubsystem___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::System::UInt32 serialNumber; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _FlushPendingSync_b__0(::OAEFGCLEHHO* message)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM___C__DISPLAYCLASS26_0__FLUSHPENDINGSYNC_B__0_OFFSET))(this, message);
		}

		::System::Void _FlushPendingSync_b__1(::OAEFGCLEHHO* message)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM___C__DISPLAYCLASS26_0__FLUSHPENDINGSYNC_B__1_OFFSET))(this, message);
		}
	};
}
