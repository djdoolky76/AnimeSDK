#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOLAHHGIFHA;

#define DHGNBCEBBKC___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xEBD2280)
#define DHGNBCEBBKC___C__DISPLAYCLASS3_0__SYNCMOTIONINFO_B__0_OFFSET UNITYSDK_OFFSET(0xEBD4160)

	class DHGNBCEBBKC___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::UInt64 expireTime; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGNBCEBBKC___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _SyncMotionInfo_b__0(::JOLAHHGIFHA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JOLAHHGIFHA*))((::PBYTE)hIl2Cpp + DHGNBCEBBKC___C__DISPLAYCLASS3_0__SYNCMOTIONINFO_B__0_OFFSET))(this, a1);
		}

	};
