#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OOCCBMLAELL;

#define HLONMANFCJE_CTOR_OFFSET UNITYSDK_OFFSET(0x198B91E0)

inline static constexpr unsigned int HLONMANFCJE_TypeDefinitionIndex = 83372;

	class HLONMANFCJE : public ::System::Object
	{
	public:
		::OOCCBMLAELL* ELIMDKMMGBO; // 0x10
		::System::Void _ctor(::OOCCBMLAELL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOCCBMLAELL*))((::PBYTE)hIl2Cpp + HLONMANFCJE_CTOR_OFFSET))(this, a1);
		}

	};
