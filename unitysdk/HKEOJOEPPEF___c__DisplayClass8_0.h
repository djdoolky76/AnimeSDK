#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DGMNKINFKFH.h"

#define HKEOJOEPPEF___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0x16C97820)
#define HKEOJOEPPEF___C__DISPLAYCLASS8_0___ISAVATARRANKACTIVE_B__0_OFFSET UNITYSDK_OFFSET(0x16C978F0)

inline static constexpr unsigned int HKEOJOEPPEF___c__DisplayClass8_0_TypeDefinitionIndex = 67060;

	class HKEOJOEPPEF___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::UInt32 rankID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKEOJOEPPEF___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __IsAvatarRankActive_b__0(::DGMNKINFKFH a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DGMNKINFKFH))((::PBYTE)hIl2Cpp + HKEOJOEPPEF___C__DISPLAYCLASS8_0___ISAVATARRANKACTIVE_B__0_OFFSET))(this, a1);
		}

	};
