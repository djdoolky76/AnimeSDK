#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BEFIOAMDDJC;

#define BEFIOAMDDJC_JFKAIPBDNIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD6D1A0)
#define BEFIOAMDDJC_JFKAIPBDNIP_ENTER_OFFSET UNITYSDK_OFFSET(0x1DD6E830)
#define BEFIOAMDDJC_JFKAIPBDNIP_EXIT_OFFSET UNITYSDK_OFFSET(0x1DD6EA20)
#define BEFIOAMDDJC_JFKAIPBDNIP_TICK_OFFSET UNITYSDK_OFFSET(0x1DD6E870)

inline static constexpr unsigned int BEFIOAMDDJC_JFKAIPBDNIP_TypeDefinitionIndex = 43972;

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
