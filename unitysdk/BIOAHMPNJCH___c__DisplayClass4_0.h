#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BIOAHMPNJCH;
namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class Promise; }

#define BIOAHMPNJCH___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB794860)
#define BIOAHMPNJCH___C__DISPLAYCLASS4_0__OPENENTRANCEWINDOWPROMISED_B__0_OFFSET UNITYSDK_OFFSET(0xB7954F0)

	class BIOAHMPNJCH___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10
		::BIOAHMPNJCH* __4__this; // 0x18
		::System::UInt32 initSelectLevelGroupID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIOAHMPNJCH___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Void _OpenEntranceWindowPromised_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIOAHMPNJCH___C__DISPLAYCLASS4_0__OPENENTRANCEWINDOWPROMISED_B__0_OFFSET))(this);
		}

	};
