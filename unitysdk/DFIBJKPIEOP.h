#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IIAJFCNCMEB;

#define DFIBJKPIEOP_CTOR_OFFSET UNITYSDK_OFFSET(0xE823280)

inline static constexpr unsigned int DFIBJKPIEOP_TypeDefinitionIndex = 80548;

	class DFIBJKPIEOP : public ::System::Object
	{
	public:
		::IIAJFCNCMEB* HNEOOKPBCNK; // 0x10
		::System::Void _ctor(::IIAJFCNCMEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IIAJFCNCMEB*))((::PBYTE)hIl2Cpp + DFIBJKPIEOP_CTOR_OFFSET))(this, a1);
		}

	};
