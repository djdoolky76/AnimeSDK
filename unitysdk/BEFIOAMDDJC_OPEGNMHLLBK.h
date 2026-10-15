#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BEFIOAMDDJC;

#define BEFIOAMDDJC_OPEGNMHLLBK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD6D210)
#define BEFIOAMDDJC_OPEGNMHLLBK_ENTER_OFFSET UNITYSDK_OFFSET(0x1DD6EA30)
#define BEFIOAMDDJC_OPEGNMHLLBK_EXIT_OFFSET UNITYSDK_OFFSET(0x1DD6EA80)
#define BEFIOAMDDJC_OPEGNMHLLBK_TICK_OFFSET UNITYSDK_OFFSET(0x1DD6EA70)

inline static constexpr unsigned int BEFIOAMDDJC_OPEGNMHLLBK_TypeDefinitionIndex = 43971;

	class BEFIOAMDDJC_OPEGNMHLLBK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_OPEGNMHLLBK_CTOR_OFFSET))(this);
		}

		::System::Void Enter(::BEFIOAMDDJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEFIOAMDDJC*))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_OPEGNMHLLBK_ENTER_OFFSET))(this, a1);
		}

		::System::Void Tick(::BEFIOAMDDJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEFIOAMDDJC*))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_OPEGNMHLLBK_TICK_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_OPEGNMHLLBK_EXIT_OFFSET))(this);
		}

	};
