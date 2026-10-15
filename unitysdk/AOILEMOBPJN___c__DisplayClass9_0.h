#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOILEMOBPJN;
class INMMPMDELKE;

#define AOILEMOBPJN___C__DISPLAYCLASS9_0_CTOR_OFFSET UNITYSDK_OFFSET(0x158AF360)
#define AOILEMOBPJN___C__DISPLAYCLASS9_0___DEPLOYSWITCHPLATFORMTRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0x158B0750)
#define AOILEMOBPJN___C__DISPLAYCLASS9_0___DEPLOYSWITCHPLATFORMTRIGGER_B__1_OFFSET UNITYSDK_OFFSET(0x158B07E0)

	class AOILEMOBPJN___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::AOILEMOBPJN* __4__this; // 0x10
		::INMMPMDELKE* entity; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOILEMOBPJN___C__DISPLAYCLASS9_0_CTOR_OFFSET))(this);
		}

		::System::Void __DeploySwitchPlatformTrigger_b__0(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + AOILEMOBPJN___C__DISPLAYCLASS9_0___DEPLOYSWITCHPLATFORMTRIGGER_B__0_OFFSET))(this, a1);
		}

		::System::Void __DeploySwitchPlatformTrigger_b__1(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + AOILEMOBPJN___C__DISPLAYCLASS9_0___DEPLOYSWITCHPLATFORMTRIGGER_B__1_OFFSET))(this, a1);
		}

	};
