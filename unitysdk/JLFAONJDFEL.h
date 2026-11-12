#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICHIALIFCIJ.h"
#include "unitysdk/System/Object.h"
class OOCCBMLAELL;

#define JLFAONJDFEL_CTOR_OFFSET UNITYSDK_OFFSET(0xBA676F0)

inline static constexpr unsigned int JLFAONJDFEL_TypeDefinitionIndex = 83354;

	class JLFAONJDFEL : public ::System::Object
	{
	public:
		::OOCCBMLAELL* ELIMDKMMGBO; // 0x10
		::System::UInt32 CEGOPEIKDLA; // 0x18
		::System::Byte _padding0[0x4];
		::ICHIALIFCIJ BHLOPFHPGLE; // 0x20
		::System::Void _ctor(::OOCCBMLAELL* a1, ::System::UInt32 a2, ::ICHIALIFCIJ a3)
		{
			return ((::System::Void(*)(::PVOID, ::OOCCBMLAELL*, ::System::UInt32, ::ICHIALIFCIJ))((::PBYTE)hIl2Cpp + JLFAONJDFEL_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};
