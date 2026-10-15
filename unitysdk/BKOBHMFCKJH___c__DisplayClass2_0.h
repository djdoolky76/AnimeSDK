#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BEFFANHAGFG;
class BKOBHMFCKJH;
class MGEHMMODJHE;

#define BKOBHMFCKJH___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBA610E0)
#define BKOBHMFCKJH___C__DISPLAYCLASS2_0__POSTEVENT_B__0_OFFSET UNITYSDK_OFFSET(0xBA61D40)

	class BKOBHMFCKJH___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::BKOBHMFCKJH* __4__this; // 0x10
		::BEFFANHAGFG* context; // 0x18
		::MGEHMMODJHE* evt; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOBHMFCKJH___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Void _PostEvent_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOBHMFCKJH___C__DISPLAYCLASS2_0__POSTEVENT_B__0_OFFSET))(this);
		}

	};
