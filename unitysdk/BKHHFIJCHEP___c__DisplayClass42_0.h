#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BKHHFIJCHEP___C__DISPLAYCLASS42_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB7BB390)
#define BKHHFIJCHEP___C__DISPLAYCLASS42_0__ONROBOTCOMMUNICATEPERFORMANCE_B__0_OFFSET UNITYSDK_OFFSET(0xB7C80F0)

inline static constexpr unsigned int BKHHFIJCHEP___c__DisplayClass42_0_TypeDefinitionIndex = 60381;

	class BKHHFIJCHEP___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::System::UInt32 communicateID; // 0x10
		::System::UInt32 playerUID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKHHFIJCHEP___C__DISPLAYCLASS42_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnRobotCommunicatePerformance_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKHHFIJCHEP___C__DISPLAYCLASS42_0__ONROBOTCOMMUNICATEPERFORMANCE_B__0_OFFSET))(this);
		}

	};
