#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HJDKDKNEFMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CABE660)

inline static constexpr unsigned int HJDKDKNEFMJ_TypeDefinitionIndex = 42103;

	class HJDKDKNEFMJ : public ::System::Object
	{
	public:
		::System::Single BGCCFFPEALM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDKDKNEFMJ_CTOR_OFFSET))(this);
		}

	};
