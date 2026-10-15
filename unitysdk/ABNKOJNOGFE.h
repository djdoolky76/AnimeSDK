#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJHPHMDACGG;
class CPGHDGPPBJH;

#define ABNKOJNOGFE_CTOR_OFFSET UNITYSDK_OFFSET(0xB10DE50)

inline static constexpr unsigned int ABNKOJNOGFE_TypeDefinitionIndex = 80561;

	class ABNKOJNOGFE : public ::System::Object
	{
	public:
		::CPGHDGPPBJH* HNEOOKPBCNK; // 0x10
		::AJHPHMDACGG* AEINHCCCGBF; // 0x18
		::System::Void _ctor(::AJHPHMDACGG* a1, ::CPGHDGPPBJH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AJHPHMDACGG*, ::CPGHDGPPBJH*))((::PBYTE)hIl2Cpp + ABNKOJNOGFE_CTOR_OFFSET))(this, a1, a2);
		}

	};
