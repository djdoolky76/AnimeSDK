#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICHIALIFCIJ.h"
#include "unitysdk/System/Object.h"
class OOCCBMLAELL;

#define JLFAONJDFEL_CTOR_OFFSET UNITYSDK_OFFSET(0xB238B70)

inline static constexpr unsigned int JLFAONJDFEL_TypeDefinitionIndex = 80573;

	class JLFAONJDFEL : public ::System::Object
	{
	public:
		::OOCCBMLAELL* ELIMDKMMGBO; // 0x10
		::ICHIALIFCIJ BHLOPFHPGLE; // 0x18
		::System::UInt32 CEGOPEIKDLA; // 0x48
		::System::Void _ctor(::OOCCBMLAELL* a1, ::System::UInt32 a2, ::ICHIALIFCIJ a3)
		{
			return ((::System::Void(*)(::PVOID, ::OOCCBMLAELL*, ::System::UInt32, ::ICHIALIFCIJ))((::PBYTE)hIl2Cpp + JLFAONJDFEL_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};
