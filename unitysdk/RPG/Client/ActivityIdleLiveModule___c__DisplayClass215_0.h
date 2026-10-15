#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOBCDAJAKGC;
class KJMHIDMOBMB;

#define RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS215_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC52C640)
#define RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS215_0___UPDATECHAPTERRECORDDATA_B__0_OFFSET UNITYSDK_OFFSET(0xC52C650)

namespace RPG::Client
{
	class ActivityIdleLiveModule___c__DisplayClass215_0 : public ::System::Object
	{
	public:
		::KJMHIDMOBMB* serverChapterRecord; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS215_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __UpdateChapterRecordData_b__0(::BOBCDAJAKGC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BOBCDAJAKGC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS215_0___UPDATECHAPTERRECORDDATA_B__0_OFFSET))(this, a1);
		}

	};
}
