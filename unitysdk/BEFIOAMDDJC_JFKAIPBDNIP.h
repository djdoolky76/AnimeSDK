#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BEFIOAMDDJC;

#define BEFIOAMDDJC_JFKAIPBDNIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD9A9A0)
#define BEFIOAMDDJC_JFKAIPBDNIP_ENTER_OFFSET UNITYSDK_OFFSET(0x1DD9C030)
#define BEFIOAMDDJC_JFKAIPBDNIP_EXIT_OFFSET UNITYSDK_OFFSET(0x1DD9C220)
#define BEFIOAMDDJC_JFKAIPBDNIP_TICK_OFFSET UNITYSDK_OFFSET(0x1DD9C070)

	class BEFIOAMDDJC_JFKAIPBDNIP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_JFKAIPBDNIP_CTOR_OFFSET))(this);
		}

		::System::Void Enter(::BEFIOAMDDJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEFIOAMDDJC*))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_JFKAIPBDNIP_ENTER_OFFSET))(this, a1);
		}

		::System::Void Tick(::BEFIOAMDDJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEFIOAMDDJC*))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_JFKAIPBDNIP_TICK_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_JFKAIPBDNIP_EXIT_OFFSET))(this);
		}

	};
