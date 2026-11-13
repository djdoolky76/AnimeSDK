#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HHKCBCKEGGI_CTOR_OFFSET UNITYSDK_OFFSET(0x1901C0D0)

inline static constexpr unsigned int HHKCBCKEGGI_TypeDefinitionIndex = 77999;

	class HHKCBCKEGGI : public ::System::Object
	{
	public:
		::System::UInt32 ILEOIONBNKH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHKCBCKEGGI_CTOR_OFFSET))(this);
		}

	};
