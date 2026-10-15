#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGFNFLBFBPC;

#define RPG_CLIENT_SETTLEDPUNKLORDDATA___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE0B56C0)
#define RPG_CLIENT_SETTLEDPUNKLORDDATA___C__DISPLAYCLASS1_0__SYNCSETTLEDRECORDINFO_B__0_OFFSET UNITYSDK_OFFSET(0xE0B5B70)

namespace RPG::Client
{
	class SettledPunkLordData___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::UInt32 selfUID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTLEDPUNKLORDDATA___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _SyncSettledRecordInfo_b__0(::BGFNFLBFBPC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BGFNFLBFBPC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTLEDPUNKLORDDATA___C__DISPLAYCLASS1_0__SYNCSETTLEDRECORDINFO_B__0_OFFSET))(this, a1);
		}

	};
}
