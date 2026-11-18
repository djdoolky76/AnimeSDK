#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NJCGGJODIDB;

#define NJCGGJODIDB_KBCICCMICIE_JOOJAOGAEKI_OFFSET UNITYSDK_OFFSET(0x105BC780)
#define NJCGGJODIDB_KBCICCMICIE__CTOR_OFFSET UNITYSDK_OFFSET(0x105BC770)

inline static constexpr unsigned int NJCGGJODIDB_KBCICCMICIE_TypeDefinitionIndex = 54981;

class NJCGGJODIDB_KBCICCMICIE : public ::System::Object
{
public:
	::NJCGGJODIDB* KLHPEBKNIFB; // 0x10
	::System::UInt32 LJFEPOCHDNH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJCGGJODIDB_KBCICCMICIE__CTOR_OFFSET))(this);
	}

	::System::Void JOOJAOGAEKI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJCGGJODIDB_KBCICCMICIE_JOOJAOGAEKI_OFFSET))(this);
	}
};
