#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJHPHMDACGG;
class CPGHDGPPBJH;

#define JNFIJJCDLDO_CTOR_OFFSET UNITYSDK_OFFSET(0x1A0C6720)

inline static constexpr unsigned int JNFIJJCDLDO_TypeDefinitionIndex = 83338;

	class JNFIJJCDLDO : public ::System::Object
	{
	public:
		::CPGHDGPPBJH* HNEOOKPBCNK; // 0x10
		::AJHPHMDACGG* AEINHCCCGBF; // 0x18
		::System::Void _ctor(::AJHPHMDACGG* a1, ::CPGHDGPPBJH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AJHPHMDACGG*, ::CPGHDGPPBJH*))((::PBYTE)hIl2Cpp + JNFIJJCDLDO_CTOR_OFFSET))(this, a1, a2);
		}

	};
