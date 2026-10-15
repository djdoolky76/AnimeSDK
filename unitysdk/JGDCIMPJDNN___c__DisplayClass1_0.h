#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGDCIMPJDNN;
namespace RPG::Client::Promises { class Promise; }

#define JGDCIMPJDNN___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB198380)
#define JGDCIMPJDNN___C__DISPLAYCLASS1_0__FULLSYNC_B__0_OFFSET UNITYSDK_OFFSET(0xB198710)
#define JGDCIMPJDNN___C__DISPLAYCLASS1_0__FULLSYNC_B__1_OFFSET UNITYSDK_OFFSET(0xB198730)

	class JGDCIMPJDNN___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::JGDCIMPJDNN* __4__this; // 0x10
		::RPG::Client::Promises::Promise* promise; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGDCIMPJDNN___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Void _FullSync_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGDCIMPJDNN___C__DISPLAYCLASS1_0__FULLSYNC_B__0_OFFSET))(this);
		}

		::System::Void _FullSync_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGDCIMPJDNN___C__DISPLAYCLASS1_0__FULLSYNC_B__1_OFFSET))(this);
		}

	};
