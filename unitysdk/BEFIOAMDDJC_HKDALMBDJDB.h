#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BEFIOAMDDJC;

#define BEFIOAMDDJC_HKDALMBDJDB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD6D280)
#define BEFIOAMDDJC_HKDALMBDJDB_ENTER_OFFSET UNITYSDK_OFFSET(0x1DD6E7F0)
#define BEFIOAMDDJC_HKDALMBDJDB_EXIT_OFFSET UNITYSDK_OFFSET(0x1DD6E820)
#define BEFIOAMDDJC_HKDALMBDJDB_TICK_OFFSET UNITYSDK_OFFSET(0x1DD6E800)

inline static constexpr unsigned int BEFIOAMDDJC_HKDALMBDJDB_TypeDefinitionIndex = 43969;

	class BEFIOAMDDJC_HKDALMBDJDB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_HKDALMBDJDB_CTOR_OFFSET))(this);
		}

		::System::Void Enter(::BEFIOAMDDJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEFIOAMDDJC*))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_HKDALMBDJDB_ENTER_OFFSET))(this, a1);
		}

		::System::Void Tick(::BEFIOAMDDJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEFIOAMDDJC*))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_HKDALMBDJDB_TICK_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_HKDALMBDJDB_EXIT_OFFSET))(this);
		}

	};
