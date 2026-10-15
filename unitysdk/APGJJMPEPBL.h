#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OOCCBMLAELL;

#define APGJJMPEPBL_CTOR_OFFSET UNITYSDK_OFFSET(0x15B9E8C0)

inline static constexpr unsigned int APGJJMPEPBL_TypeDefinitionIndex = 80588;

	class APGJJMPEPBL : public ::System::Object
	{
	public:
		::OOCCBMLAELL* ELIMDKMMGBO; // 0x10
		::System::Void _ctor(::OOCCBMLAELL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOCCBMLAELL*))((::PBYTE)hIl2Cpp + APGJJMPEPBL_CTOR_OFFSET))(this, a1);
		}

	};
