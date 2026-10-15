#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMDIBFIGIEG;

#define PHCMIJEDENP___C__DISPLAYCLASS13_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C57DBE0)
#define PHCMIJEDENP___C__DISPLAYCLASS13_0__GETTALENTPOINT_B__0_OFFSET UNITYSDK_OFFSET(0x1C57DBF0)

	class PHCMIJEDENP___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::UInt32 identifier; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCMIJEDENP___C__DISPLAYCLASS13_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetTalentPoint_b__0(::GMDIBFIGIEG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GMDIBFIGIEG*))((::PBYTE)hIl2Cpp + PHCMIJEDENP___C__DISPLAYCLASS13_0__GETTALENTPOINT_B__0_OFFSET))(this, a1);
		}

	};
