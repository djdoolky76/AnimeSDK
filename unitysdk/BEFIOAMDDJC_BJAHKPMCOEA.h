#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BEFIOAMDDJC;

#define BEFIOAMDDJC_BJAHKPMCOEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD6E370)
#define BEFIOAMDDJC_BJAHKPMCOEA_ENTER_OFFSET UNITYSDK_OFFSET(0x1DD6E340)
#define BEFIOAMDDJC_BJAHKPMCOEA_EXIT_OFFSET UNITYSDK_OFFSET(0x1DD6E360)
#define BEFIOAMDDJC_BJAHKPMCOEA_TICK_OFFSET UNITYSDK_OFFSET(0x1DD6E350)

inline static constexpr unsigned int BEFIOAMDDJC_BJAHKPMCOEA_TypeDefinitionIndex = 43968;

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
