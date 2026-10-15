#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ScheduleData; }
namespace System { class Action; }

#define BFBKEIJIFEL___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB15E6F0)
#define BFBKEIJIFEL___C__DISPLAYCLASS5_0__REGISTERSCHEDULEOPENWATCH_B__0_OFFSET UNITYSDK_OFFSET(0xB15F7B0)

	class BFBKEIJIFEL___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFBKEIJIFEL___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Void _RegisterScheduleOpenWatch_b__0(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + BFBKEIJIFEL___C__DISPLAYCLASS5_0__REGISTERSCHEDULEOPENWATCH_B__0_OFFSET))(this, a1);
		}

	};
