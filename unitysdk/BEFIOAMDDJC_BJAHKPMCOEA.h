#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BEFIOAMDDJC;

#define BEFIOAMDDJC_BJAHKPMCOEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EF9E4E0)
#define BEFIOAMDDJC_BJAHKPMCOEA_ENTER_OFFSET UNITYSDK_OFFSET(0x1EF9E4B0)
#define BEFIOAMDDJC_BJAHKPMCOEA_EXIT_OFFSET UNITYSDK_OFFSET(0x1EF9E4D0)
#define BEFIOAMDDJC_BJAHKPMCOEA_TICK_OFFSET UNITYSDK_OFFSET(0x1EF9E4C0)

inline static constexpr unsigned int BEFIOAMDDJC_BJAHKPMCOEA_TypeDefinitionIndex = 45043;

	class BEFIOAMDDJC_BJAHKPMCOEA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_BJAHKPMCOEA_CTOR_OFFSET))(this);
		}

		::System::Void Enter(::BEFIOAMDDJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEFIOAMDDJC*))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_BJAHKPMCOEA_ENTER_OFFSET))(this, a1);
		}

		::System::Void Tick(::BEFIOAMDDJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEFIOAMDDJC*))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_BJAHKPMCOEA_TICK_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_BJAHKPMCOEA_EXIT_OFFSET))(this);
		}

	};
