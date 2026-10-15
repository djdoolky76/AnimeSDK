#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BIOAHMPNJCH;
namespace RPG::Client { class UIController; }

#define BIOAHMPNJCH___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB794680)
#define BIOAHMPNJCH___C__DISPLAYCLASS1_0__TRYAUTOSHOW_B__0_OFFSET UNITYSDK_OFFSET(0xB7954C0)

	class BIOAHMPNJCH___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::BIOAHMPNJCH* __4__this; // 0x10
		::System::UInt32 autoShowEntranceInitLevelGroupID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIOAHMPNJCH___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::UIController* _TryAutoShow_b__0(::RPG::Client::UIController* a1)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + BIOAHMPNJCH___C__DISPLAYCLASS1_0__TRYAUTOSHOW_B__0_OFFSET))(this, a1);
		}

	};
