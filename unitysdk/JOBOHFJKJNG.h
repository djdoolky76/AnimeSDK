#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNIFMEAJAEB;

#define JOBOHFJKJNG_CTOR_OFFSET UNITYSDK_OFFSET(0xB298500)

inline static constexpr unsigned int JOBOHFJKJNG_TypeDefinitionIndex = 80598;

	class JOBOHFJKJNG : public ::System::Object
	{
	public:
		::PNIFMEAJAEB* HNEOOKPBCNK; // 0x10
		::System::Void _ctor(::PNIFMEAJAEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNIFMEAJAEB*))((::PBYTE)hIl2Cpp + JOBOHFJKJNG_CTOR_OFFSET))(this, a1);
		}

	};
