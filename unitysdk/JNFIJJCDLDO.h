#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJHPHMDACGG;
class CPGHDGPPBJH;

#define JNFIJJCDLDO_CTOR_OFFSET UNITYSDK_OFFSET(0xB27F0D0)

	class JNFIJJCDLDO : public ::System::Object
	{
	public:
		::AJHPHMDACGG* AEINHCCCGBF; // 0x10
		::CPGHDGPPBJH* HNEOOKPBCNK; // 0x18
		::System::Void _ctor(::AJHPHMDACGG* a1, ::CPGHDGPPBJH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AJHPHMDACGG*, ::CPGHDGPPBJH*))((::PBYTE)hIl2Cpp + JNFIJJCDLDO_CTOR_OFFSET))(this, a1, a2);
		}

	};
