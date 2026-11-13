#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAPJJACPHOH;
class LPHINGPIEAJ;
namespace System { class Action; }

#define KAPJJACPHOH___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0x19DC4530)
#define KAPJJACPHOH___C__DISPLAYCLASS7_0___SCHEDULEDELAY_B__0_OFFSET UNITYSDK_OFFSET(0x19DC55A0)

inline static constexpr unsigned int KAPJJACPHOH___c__DisplayClass7_0_TypeDefinitionIndex = 79890;

	class KAPJJACPHOH___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::LPHINGPIEAJ* entity; // 0x10
		::System::Action* onEnd; // 0x18
		::KAPJJACPHOH* __4__this; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAPJJACPHOH___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Void __ScheduleDelay_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAPJJACPHOH___C__DISPLAYCLASS7_0___SCHEDULEDELAY_B__0_OFFSET))(this);
		}

	};
