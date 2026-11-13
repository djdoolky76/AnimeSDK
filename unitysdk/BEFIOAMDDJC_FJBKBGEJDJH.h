#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BEFIOAMDDJC;

#define BEFIOAMDDJC_FJBKBGEJDJH_CTOR_OFFSET UNITYSDK_OFFSET(0x203225E0)
#define BEFIOAMDDJC_FJBKBGEJDJH_ENTER_OFFSET UNITYSDK_OFFSET(0x20323860)
#define BEFIOAMDDJC_FJBKBGEJDJH_EXIT_OFFSET UNITYSDK_OFFSET(0x20323CC0)
#define BEFIOAMDDJC_FJBKBGEJDJH_TICK_OFFSET UNITYSDK_OFFSET(0x20323870)

inline static constexpr unsigned int BEFIOAMDDJC_FJBKBGEJDJH_TypeDefinitionIndex = 45045;

	class BEFIOAMDDJC_FJBKBGEJDJH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_FJBKBGEJDJH_CTOR_OFFSET))(this);
		}

		::System::Void Enter(::BEFIOAMDDJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEFIOAMDDJC*))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_FJBKBGEJDJH_ENTER_OFFSET))(this, a1);
		}

		::System::Void Tick(::BEFIOAMDDJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEFIOAMDDJC*))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_FJBKBGEJDJH_TICK_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_FJBKBGEJDJH_EXIT_OFFSET))(this);
		}

	};
