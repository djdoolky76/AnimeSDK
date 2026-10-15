#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OOCCBMLAELL;

#define PEOEPDGDFEH_CTOR_OFFSET UNITYSDK_OFFSET(0xC1EE060)

inline static constexpr unsigned int PEOEPDGDFEH_TypeDefinitionIndex = 80585;

	class PEOEPDGDFEH : public ::System::Object
	{
	public:
		::OOCCBMLAELL* ELIMDKMMGBO; // 0x10
		::System::Void _ctor(::OOCCBMLAELL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOCCBMLAELL*))((::PBYTE)hIl2Cpp + PEOEPDGDFEH_CTOR_OFFSET))(this, a1);
		}

	};
