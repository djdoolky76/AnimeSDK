#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BEFIOAMDDJC;

#define BEFIOAMDDJC_JFKAIPBDNIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EF9D2E0)
#define BEFIOAMDDJC_JFKAIPBDNIP_ENTER_OFFSET UNITYSDK_OFFSET(0x1EF9E9A0)
#define BEFIOAMDDJC_JFKAIPBDNIP_EXIT_OFFSET UNITYSDK_OFFSET(0x1EF9EB90)
#define BEFIOAMDDJC_JFKAIPBDNIP_TICK_OFFSET UNITYSDK_OFFSET(0x1EF9E9E0)

inline static constexpr unsigned int BEFIOAMDDJC_JFKAIPBDNIP_TypeDefinitionIndex = 45047;

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
